#!/usr/bin/env python3
"""Buu's Fury Ultimate Edition build. Run from the repo root.

    python3 ultimate/build.py [--debug]

Needs baserom.gba (clean USA Buu's Fury, checked by SHA-1) and assets from `make extract`.
Steps: apply edits to assets (debug only for now), `make modern`, move the form table past the ROM's old end,
append ultimate/forms.json rows, then write ultimate/out/BFU[_debug].bps and a personal-use .gba.
Asset edits are always undone afterwards, so assets/ stays a clean extract.
"""
import hashlib, json, os, re, shutil, struct, subprocess, sys, tempfile
sys.path.insert(0, os.path.join('tools'))
sys.path.insert(0, 'ultimate/lib')
import bps
import numpy as np
import sprites, artclean, wfz
sys.path.insert(0, 'ultimate')
import gogeta

CLEAN_SHA1 = 'f1c4b07554d2a3b1ad2f325307051e775ce68087'
ROM_BASE = 0x08000000
FORMS, FORM_COUNT, FORM_SIZE = 0x6B82EC, 54, 24
NATIVES = 0x55098
CODE_END = 0x54FBC
SPACE = 0x800000                 # new data starts at the old 8 MB end: forms, then code
ACTORS_AT = 0x840000             # moved actor table and imported sprites
COMBO_SHA1 = 'f02d179accbeb9b68bcaef8720eb0ae426dde6ee'
PROTO = os.environ.get('BFU_PROTO', 'protoD.gba')   # Prototype D cart: Super 13 and Zone 26
LOG2 = os.environ.get('BFU_LOG2', 'log2.gba')      # Legacy of Goku II (USA): Zone 26's snow tiles
COMBO = os.environ.get('BFU_COMBO', 'combo.gba')   # Legacy of Goku I & II cart; LoG2 = its second 8 MB
JOIN_NATIVE = 0xE8               # party_join in outfit.c; no game script calls this native
JOIN_OLD = 0x08003891
ERASER_SKILL = 24                # a new row past the retail table: Big Bang's code with green frames
ERASER_UI = 1534                 # strings past the retail table: name, description of each new move
BOMBER_SKILL = 25
PORTRAITS = (20, 90, 94)         # LoG2 portrait table: Android 17, Future Trunks, Super Saiyan Future Trunks = speaker ids 163, 164, 165
SS2_FLAG = 630                   # + the owner's party slot: set where the story reaches Super Saiyan 2
BLITZ_SKILL = 27                 # Android 17 and 18
DISC_SKILL = 28                  # Krillin and Android 18: LoG2's spinning gold disc on Big Bang's code
BEAM_SKILL = 26                  # Special Beam Cannon: the Kamehameha's code with gold and purple frames
# Strength against Big Bang per skill level: 2.5x and 2x in total damage. Each hit rounds down, which costs low levels more, so they get a bigger multiplier (measured on Android 13 at Power 80).
NEW_MOVES = (('eraser', ERASER_SKILL, (2.95, 2.85, 2.45), 'Eraser Cannon', 'Press the B Button and release to emit a large ball of green energy that explodes on contact.  Hold the B Button longer to make the attack stronger.', (0.2, 0.6, 1, 0, 0.15, 0.6)),
             ('bomber', BOMBER_SKILL, (2.4, 2.2, 2), 'SS Deadly Bomber', 'Press the B Button and release to emit a large ball of pink energy that explodes on contact.  Hold the B Button longer to make the attack stronger.', (1, 0, 0.15, 0.65, 0.35, 0.5)),
             ('blitz', BLITZ_SKILL, (1, 1, 1), 'Power Blitz', 'Press the B Button and release to emit a large ball of golden energy that explodes on contact.  Hold the B Button longer to make the attack stronger.', (1, 0, 0.75, 0.1, 0.05, 0.3)),
             ('disc', DISC_SKILL, (2.4, 2.2, 2), 'Destructo Disc', 'Press the B Button and release to throw a spinning disc of energy that explodes on contact.  Hold the B Button longer to make the attack stronger.', (1, 0, 0.85, 0.15, 0.1, 0.8)))
SUPER_BLUE_SKILL = 21            # a skill row with stubs only: becomes Super Saiyan Blue
BROLY_DEFEAT = 'assets/scripts/gUnknown_0879321C.evt'
DEBUG_NATIVE = 0xF7              # debug builds only: "save to slot 1" (not used by any game script)
OUT = 'ultimate/out'
SAIYAMAN = [(10, 14), (15, 'saiyaman_from_green'), (13, 'saiyaman_from_orange')]
ACTORS_FILE = 'assets/areas/a033_w01_01_Snakeway.actors'
INTRO = 'assets/scripts/gUnknown_0877CBF0.evt'
ENDING = 'assets/scripts/gUnknown_08796114.evt'
FIELD = 'assets/scripts/gUnknown_08780550.evt'


SKILL_ROWS, UI_TABLE = 0x71DAF8, 0x6BCE8
SKILLS, SPIRIT_SKILL, SPIRIT_NAME = 0x71DB04, 19, 1050      # UI 1050 and 1053 are unused text
UI = 'assets/text/ui_strings.txt'
ACTOR_BASE = 298


def new_actor_ids():
    """Ids add_actors will give: actors.json's new actors in order, then Super 13 and Android 13. Checked after the build."""
    cfg = json.load(open('ultimate/actors.json'))
    n = ACTOR_BASE + sum(1 for k, a in cfg.items() if not k.startswith('_') and 'replace' not in a)
    return {'super13': n, 'android13': n + 1, 'broly_fp': n + 2, 'gogeta_dbs': n + 3, 'gogeta_dbs_ss': n + 4, 'gogeta_ssb': n + 5, 'android13_player': n + 6, 'super13_player': n + 7, 'goku_ss2': n + 8, 'goku_ss2_b': n + 9, 'gohan_ss2': n + 10, 'gohan_green_ss2': n + 11, 'vegeta_ss2': n + 12, 'vegeta_ss2_b': n + 13, 'vegeta_armor_ss2': n + 14, 'gohan_armor_ss2': n + 15}


HUB_NPC = 'assets/scripts/gUnknown_08783D30.evt'    # a Hercule City resident: post-game, the tournament official's Challenge Board
TOUR_NPC = 'assets/scripts/gUnknown_08785590.evt'   # the West City resident to the west
QUEST_NPC = 'assets/scripts/gUnknown_08785580.evt'   # the West City resident outside the Z-Mart


UI_EDITS = {1051: 'Press the B Button to transform into a Super Saiyan Blue. You must already be a Super Saiyan to use this technique.', 1052: 'Android 13', 1054: 'DBS Gogeta', 1055: 'SSB Gogeta', 1056: 'Super 13', 1057: 'Super Saiyan Blue'}


def form_row(name):
    rows = json.load(open('ultimate/forms.json'))['rows']
    return FORM_COUNT + [r['id'] for r in rows].index(name)


def broly_defeat(src):
    """Beating Broly in the story adds him to the party, and says so once the fight's closing scene has played."""
    head = '    call set_flag(111)\n'
    tail = '    call 0x7B(50)\n    call 0x33(0)\n    end\n'
    if src.count(head) != 1 or not src.endswith(tail):
        sys.exit('Broly defeat script changed')
    src = src.replace(head, head + '    pushn 8, %d\n    call 0x%X\n' % (form_row('broly'), JOIN_NATIVE))
    return src[:-len(tail)] + '''    call 0x7B(50)
    end
step 2 say 0x00 "Broly joins you! Pick him on the Switch Character menu."
step 3 code
    call 0x33(0)
    end
'''


def quest_npc(src):
    """Post-game, this resident sends you to Zone 26, and rewards you once Super 13 is beaten (his death script runs this list).
    A step's `push N` jumps to the Nth step counting from 0, the same number the following step's position gets; past the last step ends the list."""
    head, old = src.split('step 1 say', 1)
    ids = new_actor_ids(); super13 = ids['super13'] + 9
    return head + '''step 1 code
    pushn 642
    call flag
    pushn 641
    call not_flag
    and
    jz L8
    push 21
    end
L8:
    pushn 620
    call flag
    pushn 623
    call not_flag
    and
    jz L4
    push 13
    end
L4:
    pushn 625
    call flag
    pushn 621
    call not_flag
    and
    jz L5
    push 15
    end
L5:
    pushn 622
    call flag
    jz L1
    push 11
    end
L1:
    pushn 621
    call flag
    jz L2
    push 7
    end
L2:
    pushn 623
    call flag
    jz L7
    push 24
    end
L7:
    call flag(149)
    jz L3
    push 3
L3:
    end
step 2 say''' + old.rstrip() + '''
step auto code
    push 24
    end
step auto say 0x85 "Something's wrong past the Z-Mart. Dr. Gero's old computer has woken up!"
step auto say 0x85 "It built one last Android, up in the snow. Hurry!"
step auto code
    call 0x78(30)
    pushn 26, 1, 1, 128, 240
    call 0x77
    call 0x79(30)
    end
step auto code
    push 24
    end
step auto say 0x85 "The signal stopped! You beat Super 13!"
step auto say 0x85 "Saiyan armor from Capsule Corp, and new allies! See the Switch Character menu."
step auto say 0x85 "And Goku, you learned the Spirit Bomb! Press L to select it."
step auto code
    pushn 622
    call set_flag
    pushn 0, 19
    call 0xA4
    pushn 1, 26
    call 0xA4
    pushn 610
    call set_flag
    pushn 611
    call set_flag
    pushn 612
    call set_flag
    pushn 613
    call set_flag
    pushn 614
    call set_flag
    pushn 615
    call set_flag
    pushn 616
    call set_flag
    pushn 617
    call set_flag
    pushn 8, %d
    call 0x%X
    pushn 7, %d
    call 0x%X
    push 24
    end
step auto say 0x85 "Want a real fight? Hercule City has a Challenge Board now. Ask the tournament official!"
step auto code
    push 24
    end
step auto say 0x00 "Android 13 pulls in the broken parts of 14 and 15!"
step auto code
    pushn 623
    call set_flag
    call play_sfx(24)
    pushn 5, 200, 200, 255, 10
    call 0x4C
    pushn %d, 120, 214
    call 0x35
    pushn %d, 17, 0
    call 0x51
    call wait(90)
    pushn 5, 200, 200, 255, 10
    call 0x4C
    pushn %d, 20, 0
    call 0x51
    call wait(40)
    push 24
    end
step auto say 0x02 "He's still standing! I need everyone's energy!"
step auto code
    call 0x95(0)
    pushn %d, 120, 214
    call 0x35
    pushn 100, 15
    call 0x2A
    push 120
    set 0x04
    push 236
    set 0x05
    push 6
    set 0x06
    push 42
    loop_begin
L1:
    call 0x04
    call 0x05
    call 0x06
    call 0xF4(80)
    inc 0x06
    call wait(2)
    loop L1
    end
step auto say 0x00 "Push the Spirit Bomb! Press the A Button fast!"
step auto code
    call 0xC6
    end
step auto code
    pushn 5, 200, 200, 255, 10
    call 0x4C
    push 40
    loop_begin
L1:
    call 0x04
    call 0x05
    call 0x06
    call 0xF4(80)
    dec 0x05
    call wait(1)
    loop L1
    call play_sfx(24)
    push 5
    loop_begin
L2:
    pushn 5, 200, 200, 255, 10
    call 0x4C
    call wait(15)
    loop L2
    pushn 621
    call set_flag
    call max_hp
    set hp
    call max_ki
    set ki
    call 0x78(60)
    pushn 4, 1, 1, 320, 392
    call 0x77
    call 0x79(30)
    call 0x2F
    call 0x33(0)
    end
step auto code
    push 24
    end
step auto say 0x85 "You beat all nine! Majin Buu, Super Janemba and Kid Buu join you. See Switch Character."
step auto code
    pushn 641
    call set_flag
    push 24
    end
step auto code
    end
''' % (form_row('super13'), JOIN_NATIVE, form_row('gogeta_dbs'), JOIN_NATIVE, super13, super13, super13, super13)


def tournament_npc(src):
    """The West City resident who ran the World Tournament now sends you to Hercule City. A debug zone build also uses him as a test's way into that city."""
    head, old = src.split('step 1 say', 1)
    hook = '    pushn 660\n    call flag\n    jz L0\n    call 0x78(30)\n    pushn 3, 1, 1, 208, 134\n    call 0x77\n    call 0x79(30)\n    push 4\n    end\nL0:\n' if '--zone' in sys.argv else ''
    return head + 'step 1 code\n' + hook + """    pushn 622
    call flag
    jz L2
    push 2
    end
L2:
    end
step 2 say""" + old.rstrip() + """
step auto say 0x5E "The World Tournament has moved to Hercule City. Ask the tournament official!"
step auto code
    end
"""


def hub_npc(src):
    """Hercule City's tournament official (character 192, speaker 0x62), once Super 13 is beaten: the Challenge Board. Before that his list is the resident's old line."""
    import zone26
    head, old = src.split('step 1 say', 1)
    speaker = 0x62
    steps = []                                 # (name, text of the step); a {name} in the text becomes that step's number
    def say(name, text):
        n = len(text.replace('\\n', ' ')); assert n < 100 and not 64 <= n <= 67, text      # long lines reset the game; 64-67 look like ROM pointers to the shifter
        steps.append((name, 'say 0x%02X "%s"\n' % (speaker, text)))
    def code(name, text): steps.append((name, 'code\n' + text))
    trials = zone26.TRIALS
    won = lambda k: zone26.TRIAL_WON + k
    paid = lambda k: zone26.TRIAL_PAID + k
    start = """    pushn 622
    call not_flag
    jz L0
    end
L0:
    pushn 643
    call flag
    pushn 644
    call not_flag
    and
    jz L1
    push {tour_won}
    end
L1:
    pushn 642
    call flag
    pushn 641
    call not_flag
    and
    jz L2
    push {rush_won}
    end
L2:
"""
    for k in range(len(trials)):
        start += '    pushn %d\n    call flag\n    pushn %d\n    call not_flag\n    and\n    jz T%d\n    push {trial%d}\n    end\nT%d:\n' % (won(k), paid(k), k, k, k)
    allpaid = ''.join('    pushn %d\n    call flag\n%s' % (paid(k), '    and\n' if k else '') for k in range(len(trials)))
    start += allpaid + '    pushn %d\n    call not_flag\n    and\n    jz L3\n    push {all_won}\n    end\nL3:\n    push {board}\n    end\n' % zone26.TRIAL_ALL
    code('start', start)
    steps.append(('old', 'say' + old.rstrip() + '\n'))
    code('after_old', '    push {END}\n    end\n')
    say('board', "Welcome to the Challenge Board! Pick your challenge!")
    say('menu', "- Boss Rush\\n- World Tournament\\n- Trials\\n- Rewards")
    code('menu_go', """    call 0x18
    push 0
    eq
    jz L1
    push {rush}
    end
L1:
    call 0x18
    push 1
    eq
    jz L2
    push {mode}
    end
L2:
    call 0x18
    push 2
    eq
    jz L3
    push {trials}
    end
L3:
    call 0x18
    push 3
    eq
    jz L4
    push {rewards}
    end
L4:
    push {END}
    end
""")
    say('rush', "Boss Rush! Nine bosses, one health bar. Good luck!")
    code('rush_go', """    call 0x78(30)
    pushn 26, %d, 1, 120, 276
    call 0x77
    call 0x79(30)
    push {END}
    end
""" % zone26.RUSH_FIRST)
    say('mode', "How's your bracket?\\n- Random draw\\n- Pick my opponents\\n- Not now")
    draw = ''.join('    pushn %d\n    call 0x19(%d)\n    call 0x%X\n' % (r, len(p), zone26.TOUR_PICK) for r, p in enumerate(zone26.TOUR_POOLS))
    code('mode_go', """    call 0x18
    push 0
    eq
    jz L1
""" + draw + """    push {enter}
    end
L1:
    call 0x18
    push 1
    eq
    jz L2
    push {pick0}
    end
L2:
    push {END}
    end
""")
    for r, title in enumerate(("First round. Pick your opponent!", "Second round. Who's next?", "The final! Who do you want?")):
        names = zone26.TOUR_NAMES[r]; nxt = 'pick%d' % (r + 1) if r < 2 else 'enter'
        def picks(base): return ''.join('    call 0x18\n    push %d\n    eq\n    jz L%d\n    pushn %d, %d\n    call 0x%X\n    push {%s}\n    end\nL%d:\n' % (v, v + 1, r, base + v, zone26.TOUR_PICK, nxt, v + 1) for v in range(3))
        say('pick%d' % r, title)
        say('a%d' % r, '\\n'.join('- ' + n for n in names[:3] + ('More',)))
        code('a%d_go' % r, picks(0) + '    call 0x18\n    push 3\n    eq\n    jz L9\n    push {b%d}\n    end\nL9:\n    push {END}\n    end\n' % r)
        say('b%d' % r, '\\n'.join('- ' + n for n in names[3:] + ('Back',)))
        code('b%d_go' % r, picks(3) + '    push {a%d}\n    end\n' % r)
    code('enter', """    pushn %d
    call flag
    jz L1
    call 0x78(30)
    pushn 26, %d, 1, 360, 420
    call 0x77
    call 0x79(30)
    push {END}
    end
L1:
%s    push {END}
    end
""" % (zone26.TOUR_ORDERED, zone26.tour_first(), zone26.tour_draw(0)))
    say('trials', "Four trials, as the hero named. Zenie and gear for each, and a prize for all four!")
    say('trial_menu', '\\n'.join('- %s vs %s' % (t[1], t[4]) for t in trials))
    code('trial_go', ''.join('    call 0x18\n    push %d\n    eq\n    jz L%d\n    call 0x95(%d)\n    call 0x78(30)\n    pushn 26, %d, 1, 360, 420\n    call 0x77\n    call 0x79(30)\n    push {END}\n    end\nL%d:\n' % (k, k + 1, t[0], zone26.trial_first() + k, k + 1) for k, t in enumerate(trials)) + '    push {END}\n    end\n')
    def status(name, flag, done, todo, nxt):
        code(name, '    pushn %d\n    call flag\n    jz L1\n    push {%s_done}\n    end\nL1:\n    push {%s_todo}\n    end\n' % (flag, name, name))
        say(name + '_done', done)
        code(name + '_skip', '    push {%s}\n    end\n' % nxt)
        say(name + '_todo', todo)
        code(name + '_next', '    push {%s}\n    end\n' % nxt)
    status('rewards', 641, "Boss Rush: cleared! Majin Buu, Super Janemba and Kid Buu are on your side.", "Boss Rush: win it and Majin Buu, Super Janemba and Kid Buu join you.", 'rew2')
    status('rew2', 644, "World Tournament: cleared! Each win pays 100,000 Zenie.", "World Tournament: each win pays 100,000 Zenie.", 'rew3')
    status('rew3', zone26.TRIAL_ALL, "Trials: all four cleared! You earned the Geromantium Bandana.", "Trials: Zenie and gear each. All four: Geromantium Bandana and ten Senzu Beans.", 'END')
    say('tour_won', "You won the World Tournament! That's 100,000 Zenie. Come back any time.")
    code('tour_won_go', '    pushn 644\n    call set_flag\n    push {END}\n    end\n')
    say('rush_won', "You beat all nine! Majin Buu, Super Janemba and Kid Buu join you. See Switch Character.")
    code('rush_won_go', '    pushn 641\n    call set_flag\n    push {END}\n    end\n')
    for k, t in enumerate(trials):
        say('trial%d' % k, "Well done, %s! You beat %s! Take 30,000 Zenie and the %s." % (t[1], t[4], t[6]))
        code('trial%d_go' % k, '    pushn %d\n    call set_flag\n    pushn %d\n    call 0x%X\n    call 0x93(%d)\n    push {END}\n    end\n' % (paid(k), zone26.TRIAL_PRIZE, zone26.ADD_ZENIE, t[5]))
    say('all_won', "All four trials cleared! Take this Geromantium Bandana and ten Senzu Beans.")
    code('all_won_go', '    pushn %d\n    call set_flag\n    pushn %d, %d\n    call 0x81\n    call 0x93(%d)\n    push {END}\n    end\n' % (zone26.TRIAL_ALL, zone26.TRIAL_ITEM, zone26.TRIAL_ITEMS, zone26.TRIAL_GEAR))
    code('last', '    end\n')
    number = {n: k for k, (n, _) in enumerate(steps)}; number['END'] = len(steps)
    return head + ''.join('step auto %s' % re.sub(r'\{(\w+)\}', lambda m: str(number[m.group(1)]), t) for _, t in steps)


def debug_edits(first_form):
    """Join Vegito and guest Broly at the start, and open the picker, then save, when the intro ends."""
    heal = ''.join('    push %d\n    set %s\n' % (v, n) for v, n in ((500, 'max_hp'), (500, 'hp'), (100, 'max_ki'), (100, 'ki')))
    flags = ''.join('    pushn %d\n    call set_flag\n' % f for f in sorted({o['flag'] for l in json.load(open('ultimate/outfits.json'))['characters'].values() for o in l if o['flag']}))
    flags += ''.join('    pushn %d\n    call set_flag\n' % u['flag'] for u in json.load(open('ultimate/outfits.json'))['unlocks'] if u['flag'] >= SS2_FLAG)
    if '--zone' in sys.argv: flags += '    pushn 149\n    call set_flag\n    pushn 0, 19\n    call 0xA4\n'
    join = ('step auto code\n' + flags + '    call 0x97(1)\n    call 0x97(3)\n    call 0x97(4)\n    call 0x97(6)\n    call 0x97(8)\n    call 0x95(3)\n' + heal + '    call 0xD0(21)\n    call 0x95(4)\n' + heal + '    call 0xD0(26)\n    call 0x95(1)\n' + heal + '    call 0xD0(15)\n    pushn 1, 107\n    call 0x9D\n    call 0xA4(1, 18)\n    call 0xA4(1, %d)\n' % BEAM_SKILL + '    call 0x95(6)\n' + heal + '    call 0x95(8)\n' + heal + '    pushn 8, 8\n    call 0xA4\n    pushn 8, %d\n    call 0xA4\n' % ERASER_SKILL +
            '    call 0xD0(%d)\n    call 0x95(0)\n    end\n' % first_form)
    s = open(INTRO).read()
    assert 'step 19 raw' in s
    open(INTRO, 'w').write(s.replace('step 19 raw', join + 'step 19 raw', 1))
    if '--zone' in sys.argv:                             # the debug door to the ending starts from its last scene
        e = open(ENDING).read()
        e, n = re.subn(r'(?m)^(step 1 z?code[^\n]*\n)', r'\1    push 66\n    end\n', e, 1)
        if n != 1: sys.exit('ending step 1 is not code')
        open(ENDING, 'w').write(e)
    if '--enemy' in sys.argv:
        open(ACTORS_FILE, 'a').write('enemy 8 0x70 0xB0 34   ; debug: a Bomber to test attacks on\n')
    s = open(FIELD).read()
    zone = '--zone' in sys.argv
    tail = '    set 0x10\n    end\n'
    i = s.rfind(tail)
    assert i > 0
    open(FIELD, 'w').write(s[:i] + (tail if zone else '    set 0x10\n    call 0x8D\n    call 0x%X\n    end\n' % DEBUG_NATIVE) + s[i + len(tail):])


def unlock_edits():
    """Set each outfit's unlock flag where the story first gives that outfit."""
    cfg = json.load(open('ultimate/outfits.json'))
    touched = {}
    for u in cfg['unlocks']:
        p = 'assets/scripts/%s.evt' % u['list']
        s = open(p).read()
        touched.setdefault(p, s)
        site = u.get('after', u.get('find'))
        if site not in s:
            sys.exit('unlock site not found in ' + p)
        flag = '    pushn %d\n    call set_flag\n' % u['flag']
        open(p, 'w').write(s.replace(site, site + flag if 'after' in u else flag + site, 1))
    return touched


def unlock_edits_paths():
    cfg = json.load(open('ultimate/outfits.json'))
    return {'assets/scripts/%s.evt' % u['list']: open('assets/scripts/%s.evt' % u['list']).read() for u in cfg['unlocks']}


def save_stub(addr):
    """Thumb native: sub_08004962(&G, slot 0, position, 0), the game's full save call."""
    src = """.syntax unified
.thumb
push {r4, lr}
sub sp, #8
ldr r0, =0x03001068
movs r1, #0
str r1, [sp]
movs r2, #120
str r2, [sp, #4]
mov r2, sp
movs r3, #0
ldr r4, =0x08004963
bl 1f
add sp, #8
pop {r4}
pop {r0}
bx r0
1: bx r4
.ltorg
"""
    d = tempfile.mkdtemp()
    open(d + '/s.s', 'w').write(src)
    subprocess.run(['arm-none-eabi-as', '-mthumb', '-mcpu=arm7tdmi', d + '/s.s', '-o', d + '/s.o'], check=True)
    subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', d + '/s.o', d + '/s.bin'], check=True)
    return open(d + '/s.bin', 'rb').read()


def find_once(rom, needle, what):
    i = rom.find(needle)
    if i < 0 or rom.find(needle, i + 1) >= 0:
        sys.exit('%s: expected exactly one match' % what)
    return i


ANDROID13_SLOTS = {str(s): 'a13_idle' for s in range(22)}
ANDROID13_SLOTS.update({'1': 'a13_walk', '2': 'a13_walk', '4': 'a13_lunge', '5': 'a13_lunge', '6': 'a13_lunge', '20': 'a13_lunge'})


def android13_frames(out, usable, pal):
    """Cut the walk sheet into 32x32 indexed cells (cap version), dropping the shadow drawn into each frame: the game adds its own."""
    from PIL import Image
    sheet = np.array(Image.open('ultimate/art/android13_sheet.png').convert('RGB')).astype(int)
    bg = sheet[0, 0]
    cols, rows = ((75, 93), (99, 117), (123, 141)), ((1, 32), (33, 64), (66, 96), (97, 128))
    u = np.array(usable); p = pal[u].astype(int)
    def cell(r, c):
        (y0, y1), (x0, x1) = rows[r], cols[c]
        a = sheet[y0:y1, x0 - 1:x1 + 1]; m = (a != bg).any(2)
        black = (a.sum(2) == 0)
        foot = m.shape[0] - 5                               # the shadow: pure black in the bottom rows
        m[foot:][black[foot:]] = False
        ys = np.nonzero(m.any(1))[0]; h = ys[-1] + 1
        img = np.zeros((32, 32), np.uint8); w = a.shape[1]; ox = (32 - w) // 2; oy = 32 - h
        for y in range(h):
            for x in range(w):
                if m[y, x]:
                    q = a[y, x]; ch = lambda v: np.stack([v[..., 0] - v[..., 1], v[..., 1] - v[..., 2]], -1)
                    d = ((p - q) ** 2).sum(1) + 6 * ((ch(p) - ch(q)) ** 2).sum(1)
                    img[y + oy, x + ox] = u[d.argmin()]
        return img
    DOWN, UP, RIGHT = 2, 0, 1
    def save(name, frames):
        for i, f in enumerate(frames):
            Image.fromarray(f).save('%s/%s_%02d.png' % (out, name, i))
    save('a13_idle', [cell(d, 1) for d in (DOWN, UP, RIGHT)])
    save('a13_walk', [cell(d, c) for d in (DOWN, UP, RIGHT) for c in (1, 0, 1, 2)])
    save('a13_lunge', [cell(d, c) for d in (DOWN, UP, RIGHT) for c in (0, 2)])


# Broly Full Power: made by Azure-Oni, ripped by DBZdogs. Frames as (x0, x1) on the down, up and side rows.
BROLY_FRAMES = {
    'idle': (((0, 46),), ((0, 46),), ((0, 27),)),
    'walk': (((94, 140), (158, 199), (225, 266), (287, 333)), ((93, 133), (153, 199), (218, 264), (289, 329)), ((98, 123), (142, 168), (172, 200), (205, 231))),
    'combo': (((347, 390), (406, 455), (478, 514)), ((349, 396), (410, 460), (462, 506)), ((327, 366), (372, 422), (444, 494))),
    'slam': (((600, 662), (665, 721)), ((585, 647), (658, 721)), ((599, 632), (647, 702))),
    'strike': (((756, 804), (817, 858)), ((754, 801), (816, 857)), ((750, 788), (822, 871))),
}
BROLY_SLOTS = {str(s): 'bfp_idle' for s in range(22)}
BROLY_SLOTS.update({'1': 'bfp_walk', '2': 'bfp_walk', '4': 'bfp_combo', '5': 'bfp_strike', '6': 'bfp_slam', '8': 'bfp_slam', '9': 'bfp_strike', '10': 'bfp_slam', '13': 'bfp_slam', '14': 'bfp_strike', '20': 'bfp_strike', '21': 'bfp_slam'})


def indexer(usable, pal):
    """RGB to the game's OBJ palette, with colour shifts weighted so neutrals don't land on tints."""
    u = np.array(usable); p = pal[u].astype(int); cache = {}
    def ch(v): return np.stack([v[..., 0] - v[..., 1], v[..., 1] - v[..., 2]], -1)
    def one(q):
        q = np.asarray(q, dtype=int)         # a uint8 colour would wrap in the differences below
        k = tuple(int(v) for v in q)
        if k not in cache:
            d = ((p - q) ** 2).sum(1) + 6 * ((ch(p) - ch(q)) ** 2).sum(1)
            cache[k] = int(u[d.argmin()])
        return cache[k]
    return one


def broly_frames(out, usable, pal):
    from PIL import Image
    sheet = np.array(Image.open('ultimate/art/broly_full_power_sheet.png').convert('RGB')).astype(int)
    bg = sheet[0, 0]; one = indexer(usable, pal)
    fg = (sheet[:232] != bg).any(2)
    def cell(row, x0, x1):
        # this frame's rows: the row-th block of ink in its own columns (the sheet's rows aren't level)
        ink = fg[:, x0:x1 + 1].any(1); ys = np.nonzero(ink)[0]
        blocks = np.split(ys, np.nonzero(np.diff(ys) > 2)[0] + 1)
        blocks = [k for k in blocks if len(k) > 20]
        y0, y1 = blocks[row][0], blocks[row][-1] + 1
        a = sheet[y0:y1, x0:x1 + 1]; m = fg[y0:y1, x0:x1 + 1]
        h, w = m.shape
        if h > 64 or w > 64: sys.exit('Broly frame %dx%d is over the 64x64 sprite limit' % (w, h))
        img = np.zeros((64, 64), np.uint8)
        for y, x in zip(*np.nonzero(m)):
            img[64 - h + y, (64 - w) // 2 + x] = one(a[y, x])
        return img
    for name, rows in BROLY_FRAMES.items():
        n = 0
        for row, spans in enumerate(rows):
            for x0, x1 in spans:
                Image.fromarray(cell(row, x0, x1)).save('%s/bfp_%s_%02d.png' % (out, name, n)); n += 1


def player_anim_lengths(clean):
    """Longest animation per slot across the retail player forms. Skills pick a frame by number, assuming a player's animation is as long as these, and
    past the end of a shorter one they read garbage as a frame (that is how Super 13's three-frame slot 19 crashed the Ghost Attack)."""
    u = lambda o: struct.unpack_from('<I', clean, o)[0]
    table = sprites.ACTOR_LIST; out = {}
    for f in range(FORM_COUNT):
        char = struct.unpack_from('<H', clean, FORMS + FORM_SIZE * f + 0x0E)[0]
        if char < 9: continue
        rec = u(table + 4 * (char - 9)) - ROM_BASE
        for s in range(u(rec) & 0xFF):
            a = u(rec + 0x54 + 4 * s)
            if a: out[s] = max(out.get(s, 0), u(a - ROM_BASE))
    return out


def add_actors(rom, clean):
    combo = open(COMBO, 'rb').read()
    if hashlib.sha1(combo).hexdigest() != COMBO_SHA1:
        sys.exit('%s is not the Legacy of Goku I & II (USA) cart (SHA-1 mismatch); set BFU_COMBO.' % COMBO)
    cfg = json.load(open('ultimate/actors.json'))
    slots = cfg.pop('_slots')
    for k, a in cfg.items():
        if not k.startswith('_') and 'replace' not in a and 'log2_record' in a: a['log2_slots'] = slots
    pal = np.frombuffer(clean[0x701B0 + 768:0x701B0 + 1536], np.uint8).reshape(256, 3)
    usable = [i for i in range(1, 256) if i not in artclean.MENU_SLOTS]
    cfg['super13'] = {'proto_actor': 230}
    clean_dir = tempfile.mkdtemp()
    android13_frames(clean_dir, usable, pal)
    cfg['android13'] = {'template': 157, 'slots': ANDROID13_SLOTS}
    broly_frames(clean_dir, usable, pal)
    cfg['broly_fp'] = {'template': 29, 'slots': BROLY_SLOTS, 'big': True, 'stretch': True}
    one = indexer(usable, pal); lengths = player_anim_lengths(clean)
    cfg['broly_fp']['grow'] = lengths
    for actor, form in (('gogeta_dbs', 'base'), ('gogeta_dbs_ss', 'ssj'), ('gogeta_ssb', 'ssb')):
        gogeta.write_frames(clean_dir, form, one)
        cfg[actor] = {'template': 93, 'slots': gogeta.slots(form), 'stretch': True, 'grow': lengths}
    for name in ('piccolo', 'android17', 'android18', 'krillin', 'future_trunks', 'future_trunks_ss', 'videl_player', 'kid_buu_player', 'majin_buu_player', 'super_janemba_player'):
        cfg[name]['grow'] = lengths
    for a in cfg.values():      # slot 18 is the pose held while firing a skill: LoG2's own firing pose when it has one, else its ki pose
        if isinstance(a, dict) and 'log2_record' in a and 'replace' not in a:
            rec = sprites.log2_rec(combo[0x800000:], a['log2_record'])
            has = struct.unpack_from('<I', combo, 0x800000 + rec + 0x4C + 16 * 18 + 8)[0]
            a.setdefault('log2_overrides', {}).setdefault('18', 18 if 0x08800000 <= has < 0x09000000 else 5)
    cfg['android13_player'] = {'template': 93, 'slots': ANDROID13_SLOTS, 'stretch': True, 'grow': lengths}    # the boss's small record can't carry a playable form
    cfg['super13_player'] = {'proto_actor': 230, 'fill': {8: 9, 10: 9, 11: 0, 12: 0, 13: 9, 14: 4, 15: 7, 16: 17}, 'grow': lengths}
    bright = (one(np.array((96, 248, 248))), one(np.array((200, 248, 248))))     # cyan: Super Saiyan 2's lightning
    for name, source in (('goku_ss2', 109), ('goku_ss2_b', 110), ('gohan_ss2', 104), ('gohan_green_ss2', 105), ('vegeta_ss2', 273), ('vegeta_ss2_b', 274), ('vegeta_armor_ss2', 'vegeta_armor_ss'), ('gohan_armor_ss2', 'gohan_armor_ss2_art'), ('trunks_ss2', 261), ('trunks_armor_ss2', 'trunks_armor_ss'), ('vegito_ss2', 276)):
        cfg[name] = {'bolts_of': source, 'bolt_colours': bright}
    cfg['_powerup'] = [104, 105, 273, 274, 261, 276, 'vegeta_armor_ss', 'gohan_armor_ss', 'trunks_armor_ss']
    ids, end = sprites.build_actors(rom, cfg, clean_dir, ACTORS_AT, combo[0x800000:], lambda act: (usable, pal), open(PROTO, 'rb').read())
    return ids, end


def patch_forms(rom, clean, cfg, actors):
    old = find_once(rom, clean[FORMS:FORMS + FORM_SIZE * FORM_COUNT], 'form table')
    rows = bytearray(rom[old:old + FORM_SIZE * FORM_COUNT])
    index = {}
    ids = {r['id']: k for k, r in enumerate(cfg['rows'])}
    for k, r in enumerate(cfg['rows']):
        row = bytearray(rows[FORM_SIZE * r['copy']:FORM_SIZE * (r['copy'] + 1)])
        if 'name' in r:
            struct.pack_into('<HH', row, 2, r['name'], r.get('status_name', r['name']))
        row[0x0C] = r['owner']
        struct.pack_into('<H', row, 0x0E, actors[r['actor']] + 9 if 'actor' in r else r['character'])
        if 'portrait' in r:
            row[0x10:0x16] = bytes([r['portrait']]) * 6
        for off, key in ((0x16, 'up'), (0x17, 'down')):
            v = r.get(key, 255)
            row[off] = v if isinstance(v, int) else FORM_COUNT + ids[v]
        if 'flags' in r:
            struct.pack_into('<H', row, 0, r['flags'])
        rows += row
        index[r['id']] = FORM_COUNT + k
    for k, e in cfg.get('edit', {}).items():
        o = FORM_SIZE * int(k)
        if 'up' in e: rows[o + 0x16] = index[e['up']]
        if 'down' in e: rows[o + 0x17] = index[e['down']]
    if len(rows) // FORM_SIZE > 255:
        sys.exit('too many forms: 255 is the "none" marker')
    rom[SPACE:SPACE + len(rows)] = rows
    n = 0
    for o in range(0, CODE_END, 4):
        if struct.unpack_from('<I', rom, o)[0] == ROM_BASE + old:
            struct.pack_into('<I', rom, o, ROM_BASE + SPACE)
            n += 1
    if n != 37:
        sys.exit('form table: expected 37 code references, found %d' % n)
    return index, SPACE + len(rows)


def symbol(name):
    out = subprocess.run(['arm-none-eabi-nm', 'buusfury_modern.elf'], capture_output=True, text=True, check=True).stdout
    for line in out.splitlines():
        p = line.split()
        if p[-1] == name:
            return int(p[0], 16)
    sys.exit('symbol %s not found' % name)


def add_outfits(rom, clean, at):
    """Compile the outfit code with its table at `at`, then point the Switch Character screen's vtable at it."""
    cfg = json.load(open('ultimate/outfits.json'))['characters']
    index, table = [], []
    fm = json.load(open(OUT + '/_forms.json'))
    for c in range(9):
        lst = cfg.get(str(c), [])
        index.append('{%d,%d}' % (len(table), len(lst)))
        form = lambda v: v if isinstance(v, int) else fm[v]
        table += ['{%d,%d,%d,(const u16 *)L"%s"}' % (form(o['form']), form(o.get('also', 255)), o['flag'], o['name']) for o in lst]
    d = tempfile.mkdtemp()
    pairs = ['{%d,%d}' % (base, 14 if row == 14 else fm[row]) for base, row in SAIYAMAN]
    c = open('ultimate/src/outfit.c').read() + '\nconst u16 outfit_index[9][2] = {%s};\nconst struct outfit outfit_table[] = {%s};\nconst u8 saiyaman_map[][2] = {%s};\nconst int saiyaman_count = %d;\nconst u8 ss2_rows[] = {%s,255};\n' % (','.join(index), ','.join(table) or '{0,0,0,0}', ','.join(pairs), len(pairs), ','.join(str(v) for k, v in fm.items() if k.endswith(('_ss2', '_ss2_b'))))
    open(d + '/o.c', 'w').write(c)
    import zone26
    flags = ['-mthumb', '-mcpu=arm7tdmi', '-O2', '-ffreestanding', '-fno-builtin', '-nostdlib', '-fshort-wchar', '-DERASER_SKILL=%d' % ERASER_SKILL, '-DBOMBER_SKILL=%d' % BOMBER_SKILL, '-DBEAM_SKILL=%d' % BEAM_SKILL, '-DBLITZ_SKILL=%d' % BLITZ_SKILL, '-DFORM_KID_BUU=%d' % fm['kid_buu'], '-DFORM_MAJIN_BUU=%d' % fm['majin_buu'], '-DFORM_JANEMBA=%d' % fm['super_janemba'], '-DDISC_SKILL=%d' % DISC_SKILL, '-DFORM_ANDROID17=%d' % fm['android17'], '-DFORM_ANDROID18=%d' % fm['android18'], '-DFORM_KRILLIN=%d' % fm['krillin'], '-DFORM_VIDEL=%d' % fm['videl'], '-DFORM_FUTURE_TRUNKS=%d' % fm['future_trunks'], '-DSS2_FLAG=%d' % SS2_FLAG, '-DTOUR_PICK_FLAG=%d' % zone26.TOUR_PICKS, '-DFORM_BROLY=%d' % fm['broly'], '-DFORM_FP=%d' % fm['broly_fp'], '-DFORM_PICCOLO=%d' % fm['piccolo'], '-DFORM_A13=%d' % fm['android13'], '-DFORM_S13=%d' % fm['super13'], '-DSOUND_MOVE=0x%X' % symbol('gUnknown_0831947C'), '-DFONT=0x%X' % symbol('gUnknown_0807012C'), '-DMELEE_RECTS=0x083C344C', '-DSOUND_HIT=0x%X' % symbol('gUnknown_083192A8')]
    syms = ['-Wl,--defsym=form_table=0x%X' % (ROM_BASE + SPACE), '-Wl,-Ttext=0x%X' % (ROM_BASE + at), '-Wl,-e,picker_update', '-Wl,--no-warn-rwx-segments']
    lib = subprocess.run(['arm-none-eabi-gcc', '-mthumb', '-mcpu=arm7tdmi', '-print-libgcc-file-name'], capture_output=True, text=True, check=True).stdout.strip()
    subprocess.run(['arm-none-eabi-gcc'] + flags + syms + [d + '/o.c', lib, '-o', d + '/o.elf'], check=True)
    subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', d + '/o.elf', d + '/o.bin'], check=True)
    code = open(d + '/o.bin', 'rb').read()
    nm = subprocess.run(['arm-none-eabi-nm', d + '/o.elf'], capture_output=True, text=True, check=True).stdout
    sym = {l.split()[2]: int(l.split()[0], 16) for l in nm.splitlines() if len(l.split()) == 3}
    if set(rom[at:at + len(code)]) != {0xFF}:
        sys.exit('outfit code space is not free')
    rom[at:at + len(code)] = code
    vt = symbol('_0804A5E0') - ROM_BASE
    for slot, want, name in ((5, 0x0802EBA5, 'picker_update'), (8, 0x0802ECEB, 'picker_input')):
        if ROM_BASE + vt + struct.unpack_from('<i', rom, vt + 4 * slot)[0] != want:
            sys.exit('vtable slot %d changed' % slot)
        struct.pack_into('<i', rom, vt + 4 * slot, (sym[name] | 1) - (ROM_BASE + vt))
    for vt, want, name in ((0x4C384, 0x08012D8B, 'state_a'), (0x4BEF0, 0x08012DEF, 'state_b'), (0x4C790, 0x08013023, 'state_c'), (0x4C3A8, 0x080131BB, 'state_d')):
        if ROM_BASE + vt + struct.unpack_from('<i', rom, vt + 8)[0] != want:
            sys.exit('state vtable changed at 0x%X' % vt)
        struct.pack_into('<i', rom, vt + 8, (sym[name] | 1) - (ROM_BASE + vt))
    if rom[0x3C344C:0x3C348C] != clean[0x3C344C:0x3C348C]:
        sys.exit('melee rectangles moved')
    IN, OUT_SITE = 0x1C5F2, 0x1C2D2
    if rom[IN:IN + 10] != bytes.fromhex('0e202875301cff305130') or rom[OUT_SITE:OUT_SITE + 8] != bytes.fromhex('0a202875301cf030'):
        sys.exit('Great Saiyaman code changed')
    rom[IN:IN + 10] = bytes.fromhex('0149fe460847') + struct.pack('<I', sym['saiyaman_hook_in'] | 1)
    rom[OUT_SITE:OUT_SITE + 12] = bytes.fromhex('0149fe460847') + struct.pack('<I', sym['saiyaman_hook_out'] | 1) + bytes.fromhex('c046')
    patch_slot_read(rom, sym)
    vt = sym['spirit_vt'] - ROM_BASE                      # 0 delete, 2 update every frame, others do nothing
    for k, name in enumerate(('spirit_destroyed', 'spirit_nop', 'spirit_update', 'spirit_nop', 'spirit_nop', 'spirit_nop')):
        struct.pack_into('<i', rom, vt + 4 * k, (sym[name] | 1) - (ROM_BASE + vt))
    tab = find_once(rom, clean[NATIVES:NATIVES + 64], 'native table')
    if struct.unpack_from('<I', rom, tab + 4 * JOIN_NATIVE)[0] != JOIN_OLD:
        sys.exit('native 0x%X changed' % JOIN_NATIVE)
    struct.pack_into('<I', rom, tab + 4 * JOIN_NATIVE, sym['party_join'] | 1)
    struct.pack_into('<I', rom, tab + 4 * 0xE0, sym['add_zenie'] | 1)
    import zone26
    struct.pack_into('<I', rom, tab + 4 * zone26.TOUR_PICK, sym['tour_pick'] | 1)
    struct.pack_into('<I', rom, tab + 4 * zone26.TOUR_GET, sym['tour_get'] | 1)
    row = SKILLS + 24 * SUPER_BLUE_SKILL                  # Super Saiyan 3's code runs on the form table's up and down, so only the words change
    if struct.unpack_from('<II', rom, row + 4) != (0x08019D25, 0x08019D29):
        sys.exit('skill row %d is in use' % SUPER_BLUE_SKILL)
    rom[row:row + 24] = rom[SKILLS + 24 * 22:SKILLS + 24 * 23]
    struct.pack_into('<HH', rom, row, 1057, 1051)
    row = SKILLS + 24 * SPIRIT_SKILL                     # an unused skill row: its stubs become the Spirit Bomb
    if struct.unpack_from('<II', rom, row + 4) != (0x08019D25, 0x08019D29):
        sys.exit('skill row %d is in use' % SPIRIT_SKILL)
    struct.pack_into('<HHII', rom, row, SPIRIT_NAME, SPIRIT_NAME + 3, sym['spirit_usable'] | 1, sym['spirit_use'] | 1)
    rom[row + 12:row + 24] = rom[SKILLS + 24 * 15 + 12:SKILLS + 24 * 15 + 24]
    row = SKILLS + 24 * 20                               # Super Saiyan's use goes up to Super Saiyan 2 where a form has one; Super Saiyan 3 waits for it
    if struct.unpack_from('<I', rom, row + 8)[0] != 0x0801A513 or struct.unpack_from('<I', rom, SKILLS + 24 * 22 + 4)[0] != 0x0801A55F:
        sys.exit('Super Saiyan skill rows changed')
    struct.pack_into('<I', rom, row + 8, sym['ss_use'] | 1)
    struct.pack_into('<I', rom, SKILLS + 24 * 22 + 4, sym['ss3_can'] | 1)
    DAMAGE = 0xE9D8                  # Combat_Damage's first 8 bytes: combat_orig runs them, then comes back
    if rom[DAMAGE:DAMAGE + 8] != bytes.fromhex('f0b5061c0c1c0831'):
        sys.exit('Combat_Damage changed: %s' % rom[DAMAGE:DAMAGE + 8].hex())
    rom[DAMAGE:DAMAGE + 8] = bytes.fromhex('004b1847') + struct.pack('<I', sym['combat_hook'] | 1)
    end = add_eraser(rom, clean, sym, at + len(code))    # after the row edits above: it moves the skill table
    i = rom.find(bytes.fromhex('092c'), 0x4C70, 0x4C84)    # Select Game draws 8 characters, not the guest slot: Broly's size covered the text
    if i < 0:
        sys.exit('Select Game party loop changed')
    rom[i:i + 2] = bytes.fromhex('082c')
    return end


def add_eraser(rom, clean, sym, at):
    """Eraser Cannon and SS Deadly Bomber: recoloured copies of Big Bang's two ball animations and icons, each move's parameter table (its last word scales the damage)
    and behaviour, new skill rows, and new UI strings."""
    pal = np.frombuffer(clean[0x701B0 + 768:0x701B0 + 1536], np.uint8).reshape(256, 3)
    one = indexer([i for i in range(1, 256) if i not in artclean.MENU_SLOTS], pal)
    def put(data):
        nonlocal at
        at = (at + 3) & ~3; o = at; rom[o:o + len(data)] = data; at += len(data)
        return ROM_BASE + o
    PARAMS, OLD_VT = 0x76ACC0, 0x4D05C                    # Big Bang's table: levels 1 and 2 cyan ball, level 3 gold
    icons = struct.unpack_from('<II', clean, SKILL_ROWS + 24 * 2 + 4)
    rows, strings = {}, []
    for name, skill, power, title, text, tint in NEW_MOVES:
        def recolour(v):
            if v == 0: return 0
            r, g, b = (int(x) for x in pal[v]); top = max(r, g, b); pale = min(r, g, b) / 255
            return one(np.array((top * (tint[0] + tint[1] * pale), top * (tint[2] + tint[3] * pale), top * (tint[4] + tint[5] * pale))).astype(int))
        remap = bytes(recolour(v) for v in range(256)); copies = {}
        def ball(rec):
            """One animation: four facings of 120 bytes, each up to ten {header, attributes, tile data} rows."""
            out = bytearray(clean[rec:rec + 480])
            for k in range(0, 480, 12):
                head, _, tiles = struct.unpack_from('<III', out, k)
                if tiles:
                    if tiles not in copies:
                        o = tiles - ROM_BASE; copies[tiles] = put(bytes(clean[o:o + (head >> 16 & 255) * (head >> 24 & 255)]).translate(remap))
                    struct.pack_into('<I', out, k + 8, copies[tiles])
            return put(bytes(out))
        if name == 'disc':
            l2u = open(LOG2, 'rb').read()      # USA cart: palette and tiles at the addresses its decomp gives
            l2pal = np.frombuffer(l2u[0x3ECEA4:0x3ECEA4 + 768], np.uint8).reshape(256, 3)
            l2map = bytes(0 if v == 0 else one(l2pal[v]) for v in range(256))
            spin = [put(l2u[t:t + 512].translate(l2map)) for t in (0x6DDA34, 0x6DDC34)]
            def ball(rec, place=((16, 4), (16, 12), (28, 8), (4, 8))):
                """The same rows and timing as Big Bang's ball, showing the two 32x16 frames of the disc in turn."""
                out = bytearray(clean[rec:rec + 480])
                for k in range(0, 480, 12):
                    if struct.unpack_from('<I', out, k + 8)[0]:
                        x, y = place[k // 120]
                        struct.pack_into('<4BII', out, k, x, y, 32, 16, 0x80006000, spin[(k // 12) & 1])
                return put(bytes(out))
        balls = {}; table = sym[name + '_params'] - ROM_BASE
        for i in range(3):
            a, b, rec, strength = struct.unpack_from('<4I', clean, PARAMS + 16 * i)
            balls.setdefault(rec, ball(rec - ROM_BASE))
            struct.pack_into('<4I', rom, table + 16 * i, a, b, balls[rec], int(strength * power[i]))
        vt = sym[name + '_vt'] - ROM_BASE                 # the behaviour's other methods stay Big Bang's: only the start differs
        for k in range(9):
            fn = ROM_BASE + OLD_VT + struct.unpack_from('<i', clean, OLD_VT + 4 * k)[0]
            struct.pack_into('<i', rom, vt + 4 * k, ((sym[name + '_start'] | 1) if k == 0 else fn) - (ROM_BASE + vt))
        row = bytearray(clean[SKILL_ROWS + 24 * 2:SKILL_ROWS + 24 * 3])
        struct.pack_into('<II', row, 4, *[put(bytes(clean[p - ROM_BASE:p - ROM_BASE + 0x200]).translate(remap)) for p in icons])
        struct.pack_into('<HH', row, 12, ERASER_UI + len(strings), ERASER_UI + len(strings) + 1)
        struct.pack_into('<I', row, 20, sym[name + '_use'] | 1)
        rows[skill] = bytes(row)
        strings += [put(t.encode('utf-16-le') + b'\0\0') for t in (title, text)]
    # Special Beam Cannon: copies of the Kamehameha's frame records, each {header, attributes, tile data} rows. The core goes pale yellow, the middle gold, and the rim purple.
    BEAM_TINT = {2: (248, 248, 216), 30: (248, 248, 216), 29: (248, 248, 144), 76: (248, 248, 72), 28: (248, 248, 72), 5: (248, 248, 72), 195: (248, 208, 0), 27: (248, 208, 0), 110: (248, 208, 0),
                 75: (168, 48, 224), 109: (168, 48, 224), 74: (112, 24, 168), 4: (112, 24, 168)}
    def beam_colour(v):
        if v == 0: return 0
        return one(np.array(BEAM_TINT.get(v, tuple(pal[v])), dtype=int))
    remap = bytes(beam_colour(v) for v in range(256)); copies = {}
    def frames(o, count):
        out = bytearray(clean[o:o + 12 * count])
        for k in range(0, 12 * count, 12):
            tiles = struct.unpack_from('<I', out, k + 8)[0]
            if not 0x08700000 <= tiles < 0x08800000: continue
            if tiles not in copies:
                t = tiles - ROM_BASE; copies[tiles] = put(bytes(clean[t:t + out[k + 2] * out[k + 3]]).translate(remap))
            struct.pack_into('<I', out, k + 8, copies[tiles])
        return put(bytes(out))
    BEAM_PARAMS, BEAM_VT = 0x71DA68, 0x4D9F8
    # The beam itself is LoG2's Special Beam Cannon: 7 rows a facing (muzzle 2, body 3, tip 2) laid into BF's 16-row facings (muzzle 0-1, body 3-5 and spare frame 6, tip 7-8 and 10-11).
    # Rows 13-14, a small end piece LoG2 doesn't have, keep the recoloured Kamehameha's. Every level uses this one thin shape.
    l2 = open(LOG2, 'rb').read(); L2_ART = 0x6E4560
    l2pal = np.frombuffer(l2[0x3ECEA4:0x3ECEA4 + 768], np.uint8).reshape(256, 3).astype(int)    # sprite palette in the USA cart
    l2map = bytes(0 if v == 0 else one(l2pal[v]) for v in range(256)); l2tiles = {}
    record = bytearray(rom[frames(struct.unpack_from('<I', clean, BEAM_PARAMS + 12)[0] - ROM_BASE, 64) - ROM_BASE:][:768])
    for facing in range(4):
        for bf, row in ((0, 0), (1, 1), (3, 2), (4, 3), (5, 4), (7, 5), (8, 6), (10, 5), (11, 6)):
            hdr, attr, tiles = struct.unpack_from('<III', l2, L2_ART + 12 * (facing * 7 + row))
            if tiles not in l2tiles:                     # always the whole 256-byte block: a short row still has the engine copy all of it
                t = tiles - ROM_BASE; l2tiles[tiles] = put(l2[t:t + 256].translate(l2map))
            struct.pack_into('<III', record, 12 * (facing * 16 + bf), hdr, attr, l2tiles[tiles])
        struct.pack_into('<I', record, 12 * (facing * 16 + 6) + 8, struct.unpack_from('<I', record, 12 * (facing * 16 + 5) + 8)[0])
    beam_art = put(bytes(record))
    shape, table = {}, sym['beam_params'] - ROM_BASE
    for i in range(3):
        a, strength, body, head = struct.unpack_from('<4I', clean, BEAM_PARAMS + 16 * i)
        shape.setdefault(body, frames(body - ROM_BASE, 9))
        struct.pack_into('<4I', rom, table + 16 * i, a, strength, shape[body], beam_art)
    vt = sym['beam_vt'] - ROM_BASE
    for k in range(9):
        fn = ROM_BASE + BEAM_VT + struct.unpack_from('<i', clean, BEAM_VT + 4 * k)[0]
        struct.pack_into('<i', rom, vt + 4 * k, ((sym['beam_start'] | 1) if k == 0 else fn) - (ROM_BASE + vt))
    row = bytearray(clean[SKILL_ROWS + 24 * 15:SKILL_ROWS + 24 * 16])
    struct.pack_into('<II', row, 4, *[put(bytes(clean[p - ROM_BASE:p - ROM_BASE + 0x200]).translate(remap)) for p in struct.unpack_from('<II', clean, SKILL_ROWS + 24 * 15 + 4)])
    struct.pack_into('<HH', row, 12, ERASER_UI + len(strings), ERASER_UI + len(strings) + 1)
    struct.pack_into('<I', row, 20, sym['beam_use'] | 1)
    rows[BEAM_SKILL] = bytes(row)
    strings += [put(t.encode('utf-16-le') + b'\0\0') for t in ('Special Beam Cannon', 'Press the B Button and hold it to charge, then release to fire a thin beam of energy from your fingertips.', 'Android 17', 'Future Trunks')]
    if struct.unpack_from('<I', rom, 0x13618)[0] != ROM_BASE + SKILL_ROWS:
        sys.exit('skill table reference moved')
    struct.pack_into('<I', rom, 0x13618, put(bytes(rom[SKILL_ROWS:SKILL_ROWS + 24 * ERASER_SKILL]) + b''.join(rows[k] for k in sorted(rows))))
    ptrs = find_once(rom, clean[UI_TABLE:UI_TABLE + 64], 'UI string table')
    new = put(bytes(rom[ptrs:ptrs + 4 * ERASER_UI]) + struct.pack('<%dI' % len(strings), *strings))
    n = 0
    for o in range(0, CODE_END, 4):
        if struct.unpack_from('<I', rom, o)[0] == ROM_BASE + ptrs:
            struct.pack_into('<I', rom, o, new); n += 1
    if n != 51:
        sys.exit('UI table: expected 51 references, found %d' % n)
    return at


def add_portraits(rom, clean, at):
    """Android 17 and Future Trunks: LoG2's portraits (the import Gero's Legacy uses) in Buu's Fury's gold frame, on speaker ids past the 163 retail ones."""
    LIT, TABLE, COUNT, TEMPLATE = 0x12194, 0x6F393C, 163, 9        # the frame comes from Android 18's portrait
    if struct.unpack_from('<I', rom, LIT)[0] != ROM_BASE + TABLE:
        sys.exit('portrait table reference moved')
    combo = open(COMBO, 'rb').read()[0x800000:]
    l2pal = np.frombuffer(combo[0x3ECD1C + 768:0x3ECD1C + 1536], np.uint8).reshape(256, 3)
    pal = np.frombuffer(clean[0x701B0 + 768:0x701B0 + 1536], np.uint8).reshape(256, 3)
    one = indexer([i for i in range(1, 256) if i not in artclean.MENU_SLOTS], pal)
    remap = np.array([one(l2pal[v]) for v in range(256)], np.uint8)
    def art(data, o):
        kind, size = struct.unpack_from('<II', data, o)
        raw = data[o + 8:o + 8 + 4096] if kind == 0 else bytes(wfz.decompress_stream(data, o + 8, 4096)[0])
        return np.frombuffer(raw, np.uint8).reshape(64, 64)
    frame = art(clean, struct.unpack_from('<I', clean, TABLE + 4 * TEMPLATE)[0] - ROM_BASE)
    table = list(struct.unpack_from('<%dI' % COUNT, clean, TABLE))
    table_at = (at + 3) & ~3; cur = table_at + 4 * 256
    for k in PORTRAITS:
        img = frame.copy()
        img[4:60, 4:60] = remap[art(combo, struct.unpack_from('<I', combo, 0x3ECB6C + 4 * k)[0] - 0x08800000)[4:60, 4:60]]
        rom[cur:cur + 4104] = struct.pack('<II', 0, 4096) + img.tobytes()
        table.append(ROM_BASE + cur); cur += 4104
    rom[table_at:table_at + 4 * 256] = struct.pack('<%dI' % len(table), *table) + bytes(4 * (256 - len(table)))
    struct.pack_into('<I', rom, LIT, ROM_BASE + table_at)
    return cur


def thumb_bl(at, to):
    d = (to - (at + 4)) >> 1
    return struct.pack('<HH', 0xF000 | (d >> 11 & 0x7FF), 0xF800 | (d & 0x7FF))


def patch_slot_read(rom, sym):
    """Send the game's three save-slot reads through slot_read. Code that far away is out of bl range, so sub_08004A76's
    18 bytes become two veneers; its one job moves to slot_area."""
    AREA, VENEER = 0x4A76, 0x4A7A
    if rom[AREA:AREA + 18] != bytes.fromhex('45214901401808b54178007803f0bbff08bd'):
        sys.exit('sub_08004A76 changed: %s' % rom[AREA:AREA + 18].hex())
    rom[AREA:AREA + 18] = bytes.fromhex('024a1047024a1047') + bytes(2) + struct.pack('<II', sym['slot_area'] | 1, sym['slot_read'] | 1)
    sites = [i for i in range(0x4000, 0x30000, 2) if rom[i:i + 4] == thumb_bl(i, 0x48A0)]
    if len(sites) != 3:
        sys.exit('expected 3 save-slot reads, found %s' % [hex(i) for i in sites])
    for i in sites:
        rom[i:i + 4] = thumb_bl(i, VENEER)


def main():
    debug = '--debug' in sys.argv
    clean = open('baserom.gba', 'rb').read()
    if hashlib.sha1(clean).hexdigest() != CLEAN_SHA1:
        sys.exit("baserom.gba isn't the clean Buu's Fury (USA) ROM (SHA-1 mismatch).")
    if not os.path.exists('assets/manifest.json'):
        subprocess.run(['make', 'extract'], check=True, stdout=subprocess.DEVNULL)
    cfg = json.load(open('ultimate/forms.json'))
    saved = {p: open(p).read() for p in (INTRO, FIELD, ACTORS_FILE, ENDING)}
    try:
        for p, s in unlock_edits_paths().items():
            saved.setdefault(p, s)
        unlock_edits()
        saved.setdefault(QUEST_NPC, open(QUEST_NPC).read())
        saved.setdefault(UI, open(UI).read())
        open(UI, 'w').write(re.sub(r'(?m)^1053\t.*$', '1053\tPress the B Button to gather energy above you, then throw it. It uses half your energy.', re.sub(r'(?m)^1050\t.*$', '1050\tSpirit Bomb', saved[UI])))
        saved.setdefault(BROLY_DEFEAT, open(BROLY_DEFEAT).read())
        open(BROLY_DEFEAT, 'w').write(broly_defeat(saved[BROLY_DEFEAT]))
        ui = open(UI).read()
        for k, v in UI_EDITS.items():
            ui, n = re.subn(r'(?m)^%d\t.*$' % k, '%d\t%s' % (k, v), ui)
            if n != 1: sys.exit('UI string %d not found' % k)
        open(UI, 'w').write(ui)
        npc = quest_npc(saved[QUEST_NPC])
        open(QUEST_NPC, 'w').write(npc)
        saved.setdefault(TOUR_NPC, open(TOUR_NPC).read())
        open(TOUR_NPC, 'w').write(tournament_npc(saved[TOUR_NPC]))
        saved.setdefault(HUB_NPC, open(HUB_NPC).read())
        open(HUB_NPC, 'w').write(hub_npc(saved[HUB_NPC]))
        if debug:
            debug_edits(FORM_COUNT)
        subprocess.run(['make', 'modern'], check=True, stdout=subprocess.DEVNULL)
    finally:
        for p, s in saved.items():
            open(p, 'w').write(s)
    rom = bytearray(open('buusfury_modern.gba', 'rb').read())
    if len(rom) != 0x800000 or set(rom[-16:]) != {0xFF}:
        sys.exit('modern ROM has outgrown the 8 MB base; move SPACE')
    rom += b'\xff' * 0x800000
    actors, actors_end = add_actors(rom, clean)
    index, free = patch_forms(rom, clean, cfg, actors)
    os.makedirs(OUT, exist_ok=True)
    json.dump(index, open(OUT + '/_forms.json', 'w'))
    free = add_outfits(rom, clean, (free + 3) & ~3)
    free = add_portraits(rom, clean, free)
    sys.path.insert(0, 'ultimate')
    import zone26
    zone_end, zone_info = zone26.apply(rom, clean, PROTO, LOG2, actors_end, actors, debug and '--zone' in sys.argv, symbol('gUnknown_08785580'), symbol('gUnknown_08796114'))
    print('zone 26 tiles:', zone_info)
    actors_end = zone_end
    if {k: actors[k] for k in new_actor_ids()} != new_actor_ids():
        sys.exit('actor ids differ from the ones the quest script used')
    npc = symbol('gUnknown_080783A0') - ROM_BASE      # the quest giver stands still: his wander box shrinks to his own spot
    struct.pack_into('<4H', rom, npc - 8, 320, 360, 320, 360)
    struct.pack_into('<4H', rom, symbol('gUnknown_080783CC') - ROM_BASE - 8, 96, 328, 96, 328)      # and so does the tournament's
    if debug:
        at = (free + 3) & ~3
        code = save_stub(at)
        rom[at:at + len(code)] = code
        tab = find_once(rom, clean[NATIVES:NATIVES + 64], 'native table')
        struct.pack_into('<I', rom, tab + 4 * DEBUG_NATIVE, ROM_BASE + at + 1)
    os.makedirs(OUT, exist_ok=True)
    name = ('BFU_debug_enemy' if '--enemy' in sys.argv else 'BFU_debug_zone' if '--zone' in sys.argv else 'BFU_debug') if debug else 'BFU'
    if free >= ACTORS_AT or actors_end > 0x1000000:
        sys.exit('ROM layout overflow: code ends %X (limit %X), sprites end %X' % (free, ACTORS_AT, actors_end))
    size = (actors_end + 0xFFFFF) & ~0xFFFFF
    out = bytes(rom[:size])
    if bps.apply(clean, bps.make(clean, out)) != out:
        sys.exit('BPS round trip failed')
    open('%s/%s.bps' % (OUT, name), 'wb').write(bps.make(clean, out))
    open('%s/%s_PERSONAL_USE_ONLY.gba' % (OUT, name), 'wb').write(out)
    ss2_lists = {str(u['flag']): symbol(u['list']) - ROM_BASE for u in json.load(open('ultimate/outfits.json'))['unlocks'] if u['flag'] >= SS2_FLAG}
    json.dump({'forms': index, 'first_free': hex(free), 'ss2_lists': ss2_lists}, open('%s/%s.map.json' % (OUT, name), 'w'), indent=1)
    print('%s: %d bytes, sha1 %s, patch %d bytes, forms %s' % (name, len(out), hashlib.sha1(out).hexdigest(),
          os.path.getsize('%s/%s.bps' % (OUT, name)), index))


main()

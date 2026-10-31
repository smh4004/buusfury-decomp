/* sub_0802641C  (original: 0x0802641C-0x0802648E in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern int sub_08024A9C();
extern int sub_08004098();
extern int Wfz_LoadContainer();
extern int sub_08049138();
extern int sub_0803D5B8();
extern int sub_0803DA10();
extern int sub_0803D63C();
extern undefined volatile DAT_0600f000;
extern undefined volatile gUnknown_0877D0C0;
extern undefined2 volatile REG_BG2VOFS;
extern undefined2 volatile REG_BG2HOFS;
extern undefined2 volatile REG_DISPCNT;
extern undefined volatile gUnknown_08732604;
extern undefined2 volatile REG_BG2CNT;


void sub_0802641C(undefined4 param_1)

{
  int a1;
  unsigned int __frame[30];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_78 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x5c))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x60))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x64))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0x68))
  sub_08024A9C(param_1,1);
  a1 = sub_0803D5B8(0x9600);
  Wfz_LoadContainer(&gUnknown_08732604,a1);
  sub_08049138(0x6000040,a1,0x9600);
  sub_0803D63C(a1);
  sub_0804912C(0x600f000,0,0x800);
  uStack_14 = 0x1e;
  uStack_10 = 0x14;
  uStack_1c = 0;
  uStack_18 = 0;
  sub_0803DA10(&uStack_1c,&DAT_0600f000,1);
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0x1d40;
  sub_08004098(auStack_78,&gUnknown_0877D0C0,0);
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  return;
}


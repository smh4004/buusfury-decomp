/* sub_08017C1C  (original: 0x08017C1C-0x08017C90 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 98% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_0800FDFA();
extern int sub_080110D8();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03001a4c;
extern undefined4 volatile DAT_03001a54;
extern undefined volatile _0804C92C;


undefined4 *
sub_08017C1C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_34 ((undefined1 *)((char *)__frame + 0x0))
#define puStack_24 (*(undefined4 * *)((char *)__frame + 0x10))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x14))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x18))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x1c))
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1d4), param_1 != (undefined4 *)0x0)) {
    sub_080110D8(param_1,uStack_20,param_4,param_5,param_6);
    *param_1 = &_0804C92C;
    *(undefined2 *)(param_1 + 0x6f) = 0;
    param_1[0x70] = 0;
    param_1[0x74] = uStack_1c;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    sub_0800FDFA(auStack_34,param_1);
    sub_08009930(auStack_34,DAT_03001a4c,0);
    sub_08009930(auStack_34,DAT_03001a54,0);
  }
  return param_1;
}


/* sub_08012012  (original: 0x08012012-0x08012166 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0800B188();
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049E90;


undefined4 * sub_08012012(undefined4 *param_1,short *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_1c (*(undefined2 *)((char *)__frame + 0x8))
#define uStack_1a (*(undefined2 *)((char *)__frame + 0xa))
#define uStack_18 (*(undefined2 *)((char *)__frame + 0xc))
#define uStack_16 (*(undefined2 *)((char *)__frame + 0xe))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049E90;
    sub_08011732(&DAT_03001c4c,0x1000);
    uStack_1c = sub_0801124C(&DAT_03001c4c,0x1000);
    sub_08011732(&DAT_03001c4c,0x1000);
    uStack_1a = sub_0801124C(&DAT_03001c4c,0x1000);
    if ((param_3 != 0) && (param_3 != 7)) {
      sub_08011732(&DAT_03001c4c,0x1000);
      uStack_16 = sub_0801124C(&DAT_03001c4c,0x1000);
    }
    sub_08011732(&DAT_03001c4c,0x800);
    uStack_18 = sub_0801124C(&DAT_03001c4c,0x800);
    uStack_24 = 0x78;
    uStack_20 = 0x28;
    if (param_3 == 0) {
      uStack_20 = 0x78;
    }
    else if (param_3 == 1) {
      if (-1 < *(int *)(param_4 + 4)) {
        uStack_20 = 0x78;
      }
    }
    else if (*(int *)(param_4 + 4) < 0) {
      uStack_20 = 0x78;
    }
    if (*param_2 == 0x21) {
      uStack_20 = 0x28;
      param_2 = param_2 + 1;
    }
    if (*param_2 == 0x40) {
      uStack_20 = 0x50;
      param_2 = param_2 + 1;
    }
    if (*param_2 == 0x23) {
      uStack_20 = 0x78;
      param_2 = param_2 + 1;
    }
    uVar1 = sub_0800B188(0,&uStack_1c,param_2,&uStack_24);
    param_1[1] = uVar1;
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return param_1;
}


/* sub_0800B928  (original: 0x0800B928-0x0800B99C in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 47% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800B5F0();
extern int sub_080043C2();
extern int sub_0801191A();
extern int sub_0803E378();
extern int sub_0800B8FC();
extern undefined1 volatile DAT_03001068;
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03001568;
extern undefined1 volatile DAT_03001574;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B82EC;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08319488;


void sub_0800B928(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x2c) == 0) && (-1 < *(int *)(&DAT_03001568 + (uint)DAT_03001068 * 0x68)))
  {
    if ((int)((uint)(byte)(&gUnknown_086B82EC)
                          [(uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18] << 0x1c) <
        0) {
      uVar1 = sub_0800B5F0(0,param_1,param_3,
                           (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 2,param_4);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
  }
  if (((int)((uint)DAT_03003304 << 0x16) < 0) && (iVar2 = sub_080043C2(&DAT_03001068), iVar2 != 0))
  {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
  }
  sub_0800B8FC(param_1);
  return;
}


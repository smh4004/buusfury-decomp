/* sub_0800BCC8  (original: 0x0800BCC8-0x0800BD5A in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0800B99C();
extern int sub_0803D5B8();
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001560;
extern undefined volatile DAT_0300158c;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804C070;
extern undefined volatile _08049680;


undefined4 sub_0800BCC8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x18) == 0) &&
     (*(short *)(&DAT_0300158c + (uint)DAT_03001068 * 0x68) != 0)) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_08049680;
      *(undefined2 *)((int)puVar1 + 0xe) = 0x100;
      iVar2 = sub_0801124C(&DAT_03001c4c,0x100);
      if (iVar2 == -1) {
        sub_08011732(&DAT_03001c4c,0x100);
        iVar2 = sub_0801124C(&DAT_03001c4c,0x100);
      }
      *(short *)(puVar1 + 3) = (short)iVar2;
      *puVar1 = &_0804C070;
      puVar1[4] = 0xffffffff;
      puVar1[5] = 0;
      puVar1[6] = param_1;
    }
    *(undefined4 **)(param_1 + 0x18) = puVar1;
    sub_0801191A(&DAT_03001c4c,puVar1);
  }
  sub_0800B99C(param_1,param_2,&DAT_03001560 + (uint)DAT_03001068 * 0x68);
  return 0;
}


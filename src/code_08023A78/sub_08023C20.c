/* sub_08023C20  (original: 0x08023C20-0x08023C5E in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080067F4();
extern int sub_0803D5B8();
extern int sub_0803D850();
extern int volatile DAT_03002f50;
extern undefined volatile _0804B5AC;
extern undefined volatile _0804920C;


undefined4 sub_08023C20(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_03002f50 != 0) {
    DAT_03002f50 = 0;
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    return 0;
  }
  uVar2 = sub_080067F4();
  return uVar2;
}


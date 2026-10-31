/* sub_0802601A  (original: 0x0802601A-0x08026048 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080261D4();
extern int sub_08024C04();
extern int sub_0803D850();
extern int sub_0803D5B8();
extern undefined volatile _0804E3C8;


undefined4 sub_0802601A(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    puVar1 = (undefined4 *)sub_0803D5B8(0x520);
    if (puVar1 != (undefined4 *)0x0) {
      sub_080261D4(puVar1);
      *puVar1 = &_0804E3C8;
    }
    sub_0803D850(puVar1);
    return 0;
  }
  uVar2 = sub_08024C04();
  return uVar2;
}


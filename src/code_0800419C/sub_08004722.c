/* sub_08004722  (original: 0x08004722-0x08004764 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800B854();
extern int sub_0803D5B8();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804B500;


void sub_08004722(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  puVar1 = (undefined4 *)sub_0803D5B8(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800B854(puVar1);
    *puVar1 = &_0804B500;
    puVar1[0xc] = param_2;
    puVar1[0xd] = param_3;
  }
  puVar1[10] = 0xfffffff0;
  puVar1[5] = 1;
  sub_0801191A(&DAT_03001c4c);
  return;
}


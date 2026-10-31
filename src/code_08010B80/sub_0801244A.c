/* sub_0801244A  (original: 0x0801244A-0x08012464 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804AEB0;


void sub_0801244A(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 2) = 0;
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AEB0;
  }
  return;
}


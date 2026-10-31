/* sub_08045AF6  (original: 0x08045AF6-0x08045B22 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_04000120;
extern undefined4 * volatile DAT_03005294;
extern undefined2 volatile DAT_04000128;


undefined4 sub_08045AF6(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_03005294;
  *DAT_03005294 = 5;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  DAT_04000120 = 0x80000000;
  DAT_04000128 = 0;
  DAT_04000128 = 0x5003;
  DAT_04000128 = 0x5082;
  return 0;
}


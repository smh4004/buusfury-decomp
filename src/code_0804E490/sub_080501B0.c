/* sub_080501B0  (original: 0x080501B0-0x080501D4 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EEB0();


undefined4 sub_080501B0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = sub_0800EEB0(param_2,0x11);
  if ((iVar1 == 0) && (iVar1 = sub_0800EEB0(param_2,0x13), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


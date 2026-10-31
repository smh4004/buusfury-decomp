/* sub_08036E60  (original: 0x08036E60-0x08036E76 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


undefined4 sub_08036E60(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_2,1,0,*(int *)(*param_2 + 0x74) + *param_2,param_4);
  return 1;
}


/* sub_080189CC  (original: 0x080189CC-0x080189E8 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08018950();


undefined4 sub_080189CC(int param_1,int param_2)

{
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 ((byte *)((char *)__frame + 0x0))
  local_24[0] = *(byte *)(param_2 + 0x10) ^ 1;
  sub_08018950(*(undefined4 *)(param_1 + 4),param_2,local_24);
  return 0;
}


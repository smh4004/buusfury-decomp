/* sub_0800B530  (original: 0x0800B530-0x0800B55C in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern byte volatile DAT_03001068;
extern undefined volatile DAT_0300158c;
extern undefined volatile DAT_03001c4c;


undefined4 sub_0800B530(undefined4 param_1)

{
  if (*(short *)(&DAT_0300158c + (uint)DAT_03001068 * 0x68) == 0) {
    sub_08011944(&DAT_03001c4c,param_1);
    return 0;
  }
  return 1;
}


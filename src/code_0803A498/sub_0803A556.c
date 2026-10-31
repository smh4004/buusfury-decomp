/* sub_0803A556  (original: 0x0803A556-0x0803A584 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_030032cc;


bool sub_0803A556(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,&DAT_030032cc);
  }
  return *(undefined4 **)(param_2 + 0x14) != &DAT_030032cc;
}


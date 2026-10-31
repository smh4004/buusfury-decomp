/* sub_08039B74  (original: 0x08039B74-0x08039BBA in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804D3C8;


bool sub_08039B74(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D3C8;
    }
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,puVar1);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return *(int *)(*(int *)(param_2 + 0x58) + 0xa0) != *(int *)(param_2 + 0x50);
}


/* sub_0801183E  (original: 0x0801183E-0x08011874 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern int sub_08011732();
extern int sub_0801124C();
extern undefined volatile DAT_03001c4c;


void sub_0801183E(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0xe) = param_2;
  if (*(short *)(param_1 + 0xc) != -1) {
    sub_0801142A(&DAT_03001c4c);
    iVar1 = sub_0801124C(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe));
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe),param_3,0,param_4);
      iVar1 = sub_0801124C(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xe));
    }
    *(short *)(param_1 + 0xc) = (short)iVar1;
  }
  return;
}


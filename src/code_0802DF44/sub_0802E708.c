/* sub_0802E708  (original: 0x0802E708-0x0802E732 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801157E();
extern int sub_08011A1E();
extern undefined volatile DAT_03001c4c;


bool sub_0802E708(int param_1)

{
  ushort uVar1;
  
  sub_0801157E(&DAT_03001c4c);
  sub_08011A1E(&DAT_03001c4c);
  uVar1 = *(short *)(param_1 + 8) + 1;
  *(ushort *)(param_1 + 8) = uVar1;
  return 0x3c < uVar1;
}


/* sub_0800CD00  (original: 0x0800CD00-0x0800CD36 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_0803D63C();
extern int Wfz_LoadContainer();
extern int sub_0803D5B8();
extern undefined volatile DAT_06010000;


void sub_0800CD00(int param_1)

{
  int a1;
  
  a1 = sub_0803D5B8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x2c) + 4));
  Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x2c),a1);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0x16) * 0x20),a1,
               *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x2c) + 4));
  sub_0803D63C(a1);
  return;
}


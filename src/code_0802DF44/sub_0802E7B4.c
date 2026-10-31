/* sub_0802E7B4  (original: 0x0802E7B4-0x0802E80E in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046E40();
extern int sub_0804915C();
extern int sub_0803DC96();
extern undefined4 volatile DAT_03002c00;
extern undefined volatile DAT_06010000;
extern undefined volatile _0802E82C;


undefined4 sub_0802E7B4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  sub_08046E40(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x14) = 8;
  *(undefined4 *)(param_1 + 0x18) = 7;
  sub_0803DC96(param_1 + 0x10,&_0802E82C,DAT_03002c00);
  sub_0804915C(param_1 + 0x10,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
               0x87573a8);
  puVar1 = (undefined4 *)*param_2;
  *param_2 = puVar1 + 2;
  *puVar1 = 0x8078600c;
  puVar1[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar1[1] & 0xfffffc00;
  return 0;
}


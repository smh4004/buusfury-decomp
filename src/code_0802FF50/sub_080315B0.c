/* sub_080315B0  (original: 0x080315B0-0x08031620 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08013C66();
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001560;
extern undefined volatile _080499A8;
extern undefined volatile DAT_030015ac;
extern undefined volatile DAT_030015ae;
extern undefined volatile DAT_030015b0;
extern undefined volatile DAT_030015b4;
extern undefined volatile _0804920C;


undefined4 * sub_080315B0(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x150), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804920C;
  param_1[1] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  *param_1 = &_080499A8;
  param_1[0x45] = 0;
  param_1[0x47] = 1;
  iVar1 = (uint)DAT_03001068 * 0x68;
  sub_08013C66(&DAT_03001560 + iVar1);
  param_1[0x48] = (uint)*(ushort *)(&DAT_030015ac + iVar1);
  param_1[0x49] = (uint)*(ushort *)(&DAT_030015ae + iVar1);
  param_1[0x4a] = (uint)*(ushort *)(&DAT_030015b0 + iVar1);
  param_1[0x4b] = (uint)*(ushort *)(&DAT_030015b4 + iVar1);
  return param_1;
}


/* sub_08011FD6  (original: 0x08011FD6-0x08012012 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_08049120();
extern int sub_08011F5A();
extern int sub_0803D5B8();
extern undefined volatile _0804CD74;


undefined4 * sub_08011FD6(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int a2;
  int a3;
  int iVar1;
  
  a2 = param_3;
  a3 = param_4;
  iVar1 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x808), param_1 != (undefined4 *)0x0)) {
    sub_08049120((int)(param_1 + 2),param_2 + 4,a2,a3);
    sub_08011F5A(param_1,param_1 + 2,param_3,param_4,iVar1);
    *param_1 = &_0804CD74;
  }
  return param_1;
}


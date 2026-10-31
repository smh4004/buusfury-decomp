/* sub_0801952C  (original: 0x0801952C-0x0801957C in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802A81C();
extern int sub_0803D5B8();
extern int sub_0803FACC();
extern undefined volatile gUnknown_08712FDC;
extern undefined volatile _0804A2C0;


undefined4 * sub_0801952C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x44), param_1 != (undefined4 *)0x0)) {
    iVar1 = sub_0803FACC(0x1000);
    sub_0802A81C(param_1,param_2,&gUnknown_08712FDC,4,iVar1 + 0x1000,0x400,param_3);
    *param_1 = &_0804A2C0;
  }
  return param_1;
}


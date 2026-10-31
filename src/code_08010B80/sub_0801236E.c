/* sub_0801236E  (original: 0x0801236E-0x080123A2 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08030C16();
extern int sub_0803D5B8();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804A7C4;


undefined4 * sub_0801236E(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804A7C4;
    uVar1 = sub_08030C16(0,param_2 + 4);
    param_1[1] = uVar1;
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return param_1;
}


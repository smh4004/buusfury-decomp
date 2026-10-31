/* sub_08027DB0  (original: 0x08027DB0-0x08027DEE in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_08011732();
extern int sub_0803D5B8();
extern int sub_08028144();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804A3E8;


undefined4 * sub_08027DB0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804A3E8;
  sub_08011732(&DAT_03001c4c,0x2800);
  uVar1 = sub_08028144(0,param_2);
  param_1[1] = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  return param_1;
}


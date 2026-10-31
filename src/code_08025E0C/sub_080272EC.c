/* sub_080272EC  (original: 0x080272EC-0x0802732C in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080272AC();
extern int sub_0803D5B8();
extern int sub_08000158();
extern int sub_0800EB60();
extern undefined4 volatile DAT_03001b0c;
extern undefined volatile _0804CE7C;


undefined4 * sub_080272EC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x198), param_1 != (undefined4 *)0x0)) {
    uVar1 = sub_08000158(*(undefined4 *)(param_2 + 4));
    sub_0800EB60(param_1,uVar1,&DAT_03001b0c);
    *param_1 = &_0804CE7C;
    param_1[0x65] = 0;
    sub_080272AC(param_1);
  }
  return param_1;
}


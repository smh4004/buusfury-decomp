/* sub_0801227E  (original: 0x0801227E-0x080122B4 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 91% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08012012();
extern int sub_0803D5B8();
extern int Text_LoadString();
extern undefined volatile _0804CD80;


undefined4 * sub_0801227E(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x1008), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  uVar1 = Text_LoadString(param_1,param_2);
  sub_08012012(param_1,uVar1,*(undefined1 *)(param_2 + 3),param_3);
  *param_1 = &_0804CD80;
  return param_1;
}


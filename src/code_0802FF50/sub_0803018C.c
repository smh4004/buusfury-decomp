/* sub_0803018C  (original: 0x0803018C-0x080301B8 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080301F8();
extern int sub_0803D5B8();
extern undefined volatile _0804D5BC;
extern undefined volatile gUnknown_08757B5C;


undefined4 * sub_0803018C(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x28), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080301F8(param_1,&gUnknown_08757B5C);
  *param_1 = &_0804D5BC;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  return param_1;
}


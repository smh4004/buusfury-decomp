/* sub_0801F506  (original: 0x0801F506-0x0801F556 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F44E();
extern int sub_0803D5B8();
extern undefined volatile _0804920C;
extern undefined volatile _0804A60C;


undefined4 * sub_0801F506(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0xbf8), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_0804920C;
  param_1[1] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  *param_1 = &_0804A60C;
  param_1[0x4b] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2f3] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  sub_0801F44E(param_1);
  return param_1;
}


/* sub_080335BC  (original: 0x080335BC-0x08033606 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803F540();
extern int sub_0803D5B8();
extern undefined volatile _08049338;


undefined4 * sub_080335BC(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049338;
  sub_0803F540(param_1 + 5,0xf0,0x40);
  param_1[4] = 0x54b;
  param_1[1] = 0x90;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined1 *)((int)param_1 + 0x17) = 2;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  param_1[0xd] = 0x803f5a5;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}


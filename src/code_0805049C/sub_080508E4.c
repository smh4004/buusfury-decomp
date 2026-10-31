/* sub_080508E4  (original: 0x080508E4-0x080508F8 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _08049AF0;


void sub_080508E4(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}


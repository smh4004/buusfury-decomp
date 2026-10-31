/* sub_080400AC  (original: 0x080400AC-0x080400C2 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08040048();
extern int sub_0803D5B8();
extern undefined volatile _0804B868;


void sub_080400AC(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B868;
  }
  sub_08040048();
  return;
}


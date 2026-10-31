/* sub_08040096  (original: 0x08040096-0x080400AC in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08040048();
extern int sub_0803D5B8();
extern undefined volatile _08049618;


void sub_08040096(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049618;
  }
  sub_08040048();
  return;
}


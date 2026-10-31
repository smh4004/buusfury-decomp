/* sub_08002862  (original: 0x08002862-0x080028B0 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D8F2();
extern int sub_08012628();
extern int sub_0803D850();
extern int sub_08011B04();
extern int sub_0803E2EC();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002a58;
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002a64;
extern undefined volatile DAT_03003e5c;
extern undefined volatile _0804A404;
extern undefined volatile _0804920C;


void sub_08002862(void)

{
  undefined4 *puVar1;
  
  DAT_03002a58 = 1;
  sub_08011B04(&DAT_03001c4c);
  sub_08012628(&DAT_03002a64);
  sub_0803E2EC(&DAT_03003e5c);
  sub_0803D8F2();
  puVar1 = (undefined4 *)sub_0803D5B8(0x11c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804920C;
    puVar1[1] = 0;
    puVar1[0x43] = 0;
    puVar1[0x42] = 0;
    puVar1[0x44] = 0;
    *puVar1 = &_0804A404;
  }
  sub_0803D850();
  return;
}


/* sub_08009196  (original: 0x08009196-0x080091B8 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080210D6();
extern int sub_080099B6();
extern int sub_08011DB4();
extern undefined4 volatile DAT_03001968;
extern undefined4 volatile DAT_0300196c;
extern undefined4 volatile DAT_03001970;
extern undefined4 volatile DAT_03001974;
extern undefined4 volatile DAT_03001978;
extern undefined4 volatile DAT_030019a4;
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002bd8;


void sub_08009196(undefined4 *param_1)

{
  DAT_03001968 = *param_1;
  DAT_0300196c = param_1[1];
  DAT_03001970 = param_1[2];
  DAT_03001974 = param_1[3];
  DAT_03001978 = param_1[4];
  sub_080210D6(&DAT_03002bd8);
  sub_080099B6(&DAT_030019a4);
  sub_08011DB4(&DAT_03001c4c);
  return;
}


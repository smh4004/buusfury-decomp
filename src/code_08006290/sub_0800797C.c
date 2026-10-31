/* sub_0800797C  (original: 0x0800797C-0x080079BC in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080210D6();
extern int sub_08021094();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bd8;
extern undefined volatile _0804A720;


void sub_0800797C(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A720;
  }
  puVar1[2] = param_1;
  *(char *)(puVar1 + 1) = (char)param_2;
  *(char *)((int)puVar1 + 5) =
       (char)((int)(((uint)(100 - param_2 >> 0x1f) >> 0x1c) + (100 - param_2)) >> 4) + '\x01';
  *(undefined1 *)((int)puVar1 + 6) = 1;
  sub_080210D6(&DAT_03002bd8);
  sub_08021094(&DAT_03002bd8,puVar1);
  return;
}


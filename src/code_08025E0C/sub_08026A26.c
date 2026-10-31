/* sub_08026A26  (original: 0x08026A26-0x08026B1A in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int sub_0801599C();
extern int volatile DAT_03001c34;
extern undefined volatile _08049ACC;
extern undefined volatile _0804AE70;
extern undefined volatile _0804B230;


void sub_08026A26(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 ((int *)((char *)__frame + 0x0))
#define local_1c (*(undefined * *)((char *)__frame + 0x8))
#define local_18 (*(int * *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
  iVar2 = 0;
  local_18 = (int *)0x0;
  local_14 = DAT_03001c34;
  local_1c = &_0804AE70;
  if (param_2 != 0) {
    iVar2 = param_2 + 0x18c;
  }
  sub_0801599C(&local_1c,iVar2);
  local_24[0] = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) - (*(int *)(param_2 + 0x1a0) >> 8);
  local_24[1] = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) - (*(int *)(param_2 + 0x1a4) >> 8);
  local_24[1 < *(byte *)(param_2 + 0x10)] = 0;
  if (local_24[0] < -0x80) {
    local_24[0] = -0x80;
  }
  if (0x80 < local_24[0]) {
    local_24[0] = 0x80;
  }
  if (local_24[1] < -0x80) {
    local_24[1] = -0x80;
  }
  if (0x80 < local_24[1]) {
    local_24[1] = 0x80;
  }
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B230;
    puVar1[1] = local_24[0] * 0x71d >> 8;
    puVar1[2] = local_24[1] * 0x71d >> 8;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar1);
  local_1c = &_08049ACC;
  if (local_18 != (int *)0x0) {
    __call_via_r2(local_18,1,*(int *)*local_18 + *local_18);
  }
  return;
}


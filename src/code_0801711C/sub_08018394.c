/* sub_08018394  (original: 0x08018394-0x08018432 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080192BA();
extern int sub_0801111C();
extern int sub_0801191A();
extern int sub_08000158();
extern int __call_via_r1();
extern int sub_08011944();
extern int * volatile DAT_03001bac;
extern undefined4 volatile DAT_03002a58;
extern undefined volatile DAT_03001c4c;


void sub_08018394(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(uint *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
  piVar2 = (int *)param_2[1];
  bVar4 = piVar2 == DAT_03001bac;
  if (bVar4) {
    DAT_03002a58 = 1;
  }
  __call_via_r1(piVar2,*(int *)(*piVar2 + 0x3c) + *piVar2);
  local_24 = piVar2[0x68] >> 8;
  local_18 = piVar2[0x69] >> 8;
  local_20 = (uint)*(byte *)(piVar2 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = *param_2;
  *param_2 = 0;
  local_1c = local_24;
  sub_08011944(&DAT_03001c4c,piVar2);
  local_24 = CONCAT22((short)local_18,(short)local_1c);
  uVar3 = sub_08000158(uVar3);
  piVar2 = (int *)sub_0801111C(0,uVar3,&local_24);
  *(char *)(piVar2 + 4) = (char)local_20;
  sub_0801191A(&DAT_03001c4c,piVar2);
  sub_080192BA(uVar1,piVar2 + 99);
  if (bVar4) {
    DAT_03001bac = piVar2;
  }
  return;
}


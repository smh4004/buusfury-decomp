/* sub_08006AE8  (original: 0x08006AE8-0x08006B5E in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_0803FC4E();
extern int sub_0803E42A();
extern int sub_0803FC3A();
extern int sub_0803F18C();
extern undefined volatile DAT_030038a4;
extern undefined volatile DAT_03003e5c;
extern undefined volatile DAT_03004a68;


void sub_08006AE8(byte *param_1)

{
  int iVar1;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(byte *)((char *)__frame + 0x0))
#define local_1b (*(byte *)((char *)__frame + 0x1))
#define local_1a (*(byte *)((char *)__frame + 0x2))
#define local_19 (*(byte *)((char *)__frame + 0x3))
#define local_18 (*(int *)((char *)__frame + 0x4))
  sub_0803FC3A(&DAT_03004a68,&local_1c,0,8);
  iVar1 = sub_0803FC4E(&local_1c);
  if ((((iVar1 + 0x12345678 == local_18) && (local_1c < 9)) && (local_1a < 9)) && (local_1b < 9)) {
    *param_1 = local_1c;
    param_1[1] = local_1b;
    param_1[2] = local_1a;
    param_1[3] = local_19;
  }
  else {
    *param_1 = 4;
    param_1[2] = 4;
    param_1[1] = 6;
    param_1[3] = 0;
  }
  sub_0803F18C(&DAT_030038a4,param_1[2]);
  sub_0803E42A(&DAT_03003e5c,param_1[1]);
  return;
}


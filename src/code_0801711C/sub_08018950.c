/* sub_08018950  (original: 0x08018950-0x080189CC in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801952C();
extern int sub_0801191A();
extern int sub_0800FE34();
extern int sub_080116FC();
extern int __call_via_r3();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_08018950(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_2c (*(int *)((char *)__frame + 0x0))
#define local_28 (*(int *)((char *)__frame + 0x4))
#define local_24 (*(int *)((char *)__frame + 0x8))
#define local_20 (*(int *)((char *)__frame + 0xc))
#define local_1c (*(int *)((char *)__frame + 0x10))
#define local_18 (*(int *)((char *)__frame + 0x14))
  if (param_2 != (int *)0x0) {
    do {
      piVar3 = (int *)param_2[0x7c];
      sub_0800FE34(&local_24,param_2);
      __call_via_r3(param_2,*(undefined4 *)(param_1 + 0xc),param_3,
                    *(int *)(*param_2 + 0x74) + *param_2);
      sub_08011944(&DAT_03001c4c,param_2);
      iVar1 = sub_080116FC(&DAT_03001c4c);
      if (0x3ff < iVar1) {
        local_28 = local_20 + local_18 >> 1;
        local_2c = local_24 + local_1c >> 1;
        uVar2 = sub_0801952C(0,&local_2c,0x38);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      param_2 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  return;
}


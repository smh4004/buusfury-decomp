/* sub_0803467A  (original: 0x0803467A-0x080346FC in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804F900();
extern int sub_0800ECDA();
extern int sub_0800FDFA();
extern int sub_0800ED18();
extern int volatile DAT_03001c34;
extern undefined4 volatile DAT_0300322c;


void sub_0803467A(undefined4 param_1,int param_2)

{
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_3c ((undefined1 *)((char *)__frame + 0x0))
#define local_2c (*(int *)((char *)__frame + 0x10))
#define local_28 (*(int *)((char *)__frame + 0x14))
#define auStack_24 ((undefined1 *)((char *)__frame + 0x18))
#define local_14 (*(int *)((char *)__frame + 0x28))
#define local_10 (*(int *)((char *)__frame + 0x2c))
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_0300322c);
  if (DAT_03001c34 != 0) {
    sub_0800FDFA(auStack_3c);
    sub_0804F900(&local_2c,auStack_3c);
    sub_0800FDFA(auStack_24,param_2);
    sub_0804F900(&local_14,auStack_24);
    local_28 = local_28 - local_10;
    if (local_2c - local_14 < 1) {
      if (local_2c - local_14 < 0) {
        if (local_28 < 1) {
          if (local_28 < 0) {
            *(undefined1 *)(param_2 + 0x10) = 1;
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x10) = 2;
        }
      }
    }
    else if (local_28 < 1) {
      if (local_28 < 0) {
        *(undefined1 *)(param_2 + 0x10) = 3;
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
  }
  return;
}


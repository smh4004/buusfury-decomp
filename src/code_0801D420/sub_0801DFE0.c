/* sub_0801DFE0  (original: 0x0801DFE0-0x0801E080 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B04();
extern int sub_08019B4E();
extern int sub_0800FE34();
extern int sub_0803D5B8();
extern undefined volatile _0804B480;
extern undefined volatile gUnknown_087202E8;


undefined4 * sub_0801DFE0(undefined4 *param_1,undefined4 param_2)

{
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_24 (*(int *)((char *)__frame + 0x0))
#define iStack_20 (*(int *)((char *)__frame + 0x4))
#define iStack_1c (*(int *)((char *)__frame + 0x8))
#define iStack_18 (*(int *)((char *)__frame + 0xc))
#define iStack_14 (*(int *)((char *)__frame + 0x10))
#define iStack_10 (*(int *)((char *)__frame + 0x14))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x400,param_2);
    *param_1 = &_0804B480;
    param_1[0x10] = 0;
    param_1[0x11] = 1;
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_0800FE34(&iStack_24,param_1[7]);
    iStack_10 = iStack_20 + iStack_18 >> 1;
    iStack_14 = iStack_24 + iStack_1c >> 1;
    param_1[6] = &gUnknown_087202E8;
    param_1[8] = iStack_14 << 8;
    param_1[9] = iStack_10 << 8;
    sub_08019B4E(param_1);
    param_1[1] = (*(int *)(param_1[7] + 0x1a4) >> 8) + (uint)(*(byte *)(param_1[7] + 0x19d) >> 1) +
                 1;
  }
  return param_1;
}


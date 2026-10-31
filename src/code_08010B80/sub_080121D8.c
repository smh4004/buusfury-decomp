/* sub_080121D8  (original: 0x080121D8-0x08012230 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();
extern int sub_08012012();
extern int sub_0803D5B8();
extern int sub_0803DB7C();
extern undefined volatile _0804D0BC;


undefined4 * sub_080121D8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned int __frame[37];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define puStack_94 (*(undefined1 * *)((char *)__frame + 0x0))
#define uStack_90 (*(undefined4 *)((char *)__frame + 0x4))
#define auStack_8c ((undefined1 *)((char *)__frame + 0x8))
#define uStack_4c (*(undefined4 *)((char *)__frame + 0x48))
#define puStack_24 (*(undefined4 * *)((char *)__frame + 0x70))
#define iStack_20 (*(int *)((char *)__frame + 0x74))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x78))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x7c))
  puStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1008), param_1 != (undefined4 *)0x0)) {
    uStack_90 = 0;
    uStack_4c = 0;
    ScriptVM_Run(&uStack_90,param_2 + 8,param_4);
    puStack_94 = auStack_8c;
    sub_0803DB7C(param_1 + 2,*(undefined4 *)(param_2 + 4),&puStack_94);
    puStack_94 = (undefined1 *)0x0;
    sub_08012012(param_1,param_1 + 2,*(undefined1 *)(param_2 + 3),uStack_1c);
    *param_1 = &_0804D0BC;
  }
  return param_1;
}


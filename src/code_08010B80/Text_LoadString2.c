/* Text_LoadString2  (original: 0x080122B4-0x08012334 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049144();
extern int Wfz_LoadContainer();
extern int ScriptVM_Run();
extern int sub_0803D63C();
extern int sub_0803D5B8();
extern int sub_0803DB7C();
extern undefined * volatile gTextBankTable;


int Text_LoadString2(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  unsigned int __frame[1060];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1090 (*(undefined1 * *)((char *)__frame + 0x0))
#define local_108c (*(undefined4 *)((char *)__frame + 0x4))
#define auStack_1088 ((undefined1 *)((char *)__frame + 0x8))
#define local_1048 (*(undefined4 *)((char *)__frame + 0x48))
#define auStack_1020 ((undefined2 *)((char *)__frame + 0x70))
#define local_20 (*(int *)((char *)__frame + 0x1070))
#define iStack_1c (*(int *)((char *)__frame + 0x1074))
#define local_18 (*(undefined4 *)((char *)__frame + 0x1078))
  local_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  iVar1 = sub_0803D5B8(0x10000);
  Wfz_LoadContainer(*(undefined4 *)
                     ((int)&gTextBankTable + ((uint)(*(int *)(param_2 + 4) << 0x1a) >> 0x18)),iVar1)
  ;
  sub_08049144((int)auStack_1020,((*(uint *)(param_2 + 4) << 0xb) >> 0x11) * 2 + iVar1,
               (*(uint *)(param_2 + 4) >> 0x15) << 1);
  auStack_1020[*(uint *)(param_2 + 4) >> 0x15] = 0;
  sub_0803D63C(iVar1);
  local_108c = 0;
  local_1048 = 0;
  ScriptVM_Run(&local_108c,param_2 + 8,local_18);
  local_1090 = auStack_1088;
  iVar1 = local_20 + 8;
  sub_0803DB7C(iVar1,auStack_1020,&local_1090);
  return iVar1;
}


/* sub_0801E164  (original: 0x0801E164-0x0801E1E8 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int ScriptVM_Run();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined1 volatile DAT_0300106a;
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804C83C;


void sub_0801E164(byte *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  unsigned int __frame[31];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_7c ((undefined4 *)((char *)__frame + 0x0))
#define local_38 (*(undefined4 *)((char *)__frame + 0x44))
  piVar3 = (int *)0x0;
  if ((int)((uint)*param_1 << 0x1e) < 0) {
    local_7c[0] = 0;
    local_38 = 0;
    ScriptVM_Run(local_7c,*(undefined4 *)(param_1 + 0x30),0);
  }
  else {
    puVar1 = (undefined4 *)sub_0803D5B8(0x14);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804C83C;
      puVar1[1] = 0;
      puVar1[3] = param_2;
      puVar1[2] = 0;
    }
    if (param_3 != (int *)0x0) {
      piVar3 = param_3 + 99;
    }
    sub_0801936A(&DAT_03002bac,puVar1,piVar3);
    iVar2 = __call_via_r1(param_3,*(int *)(*param_3 + 0x88) + *param_3);
    if (iVar2 != 0) {
      if ((byte)(&DAT_0300106a)[param_2] + 1 < 0x100) {
        (&DAT_0300106a)[param_2] = (char)((byte)(&DAT_0300106a)[param_2] + 1);
      }
      else {
        (&DAT_0300106a)[param_2] = 0xff;
      }
    }
  }
  return;
}


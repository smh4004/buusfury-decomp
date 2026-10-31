/* sub_08004098  (original: 0x08004098-0x08004102 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 69% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049120();
extern int sub_0803DF14();
extern int sub_0803D63C();
extern int sub_0803D5B8();
extern int ScriptVM_Run();


undefined4 * sub_08004098(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int a0;
  int a2;
  int a3;
  
  a2 = param_3;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x6c), param_1 != (undefined4 *)0x0)) {
    a3 = 0;
    *param_1 = 0;
    param_1[0x11] = 0;
    cVar1 = *(char *)(*param_2 + 2);
    if (cVar1 == '\0') {
      ScriptVM_Run(param_1,*param_2 + 3,param_3,0,param_4);
    }
    else if (cVar1 == '\x04') {
      a0 = sub_0803D5B8(0x800);
      sub_08049120(a0,*param_2 + 4,a2,a3);
      ScriptVM_Run(param_1,a0,param_3);
      sub_0803D63C(a0);
    }
    else {
      sub_0803DF14(L"\"Expected dialog to start with a code block\"",
                   "T:\\Source\\ByteCodeInterpreter\\ByteCodeInterpreter.cpp",0x3c);
    }
  }
  return param_1;
}


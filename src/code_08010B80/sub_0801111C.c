/* sub_0801111C  (original: 0x0801111C-0x08011162 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FD74();
extern int sub_0800A93C();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03001b0c;
extern undefined volatile gUnknown_080727C0;
extern undefined volatile _0804CEF4;


undefined4 * sub_0801111C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1bc), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,&DAT_03001b0c,param_3,0xffffffff);
    *param_1 = &_0804CEF4;
    sub_0800A93C(param_1 + 0x6c,&gUnknown_080727C0);
  }
  return param_1;
}


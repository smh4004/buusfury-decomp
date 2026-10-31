/* sub_080504B4  (original: 0x080504B4-0x080504F6 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_0804912C();
extern undefined4 volatile DAT_03002f50;
extern undefined4 volatile DAT_03002f54;
extern undefined volatile _08049A7C;
extern undefined volatile _080492EC;


undefined4 * sub_080504B4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x130), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = 3;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  *param_1 = &_08049A7C;
  param_1[0x4b] = 0;
  return param_1;
}


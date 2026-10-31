/* sub_080305AA  (original: 0x080305AA-0x080305E2 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_08010BB8();
extern int volatile DAT_03001c34;
extern undefined4 volatile DAT_03001b00;
extern undefined4 volatile DAT_03003144;
extern undefined4 volatile DAT_0300314c;


void sub_080305AA(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_03001c34;
  *(undefined1 *)(DAT_03001c34 + 0x11) = 0;
  sub_0800ECDA(iVar1,0);
  sub_0800ED18(iVar1,&DAT_03001b00);
  sub_08010BB8(DAT_03001c34,&DAT_03003144);
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_0300314c);
  return;
}


/* sub_0800365E  (original: 0x0800365E-0x080036A4 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011DB4();
extern int sub_0805058C();
extern int sub_08050568();
extern int sub_0803D8A0();
extern int sub_08031E84();
extern int sub_0800938C();
extern int sub_08011E0E();
extern undefined4 volatile DAT_030019a4;
extern undefined volatile DAT_03001c4c;


void sub_0800365E(int *param_1)

{
  int iVar1;
  
  sub_0805058C(0);
  sub_0803D8A0();
  sub_08011DB4(&DAT_03001c4c);
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08031E84(0,param_1[iVar1]);
  sub_0803D8A0();
  sub_08011E0E(&DAT_03001c4c);
  sub_0800938C(&DAT_030019a4,1);
  sub_08050568(0);
  sub_0803D8A0();
  return;
}


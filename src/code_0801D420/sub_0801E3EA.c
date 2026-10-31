/* sub_0801E3EA  (original: 0x0801E3EA-0x0801E43C in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_0803D876();
extern int sub_0801E14C();
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08319488;
extern undefined volatile gUnknown_08319494;
extern undefined1 volatile gUnknown_083BD2F8;


undefined4 sub_0801E3EA(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319494,0x40,0);
    sub_0801E14C(&gUnknown_083BD2F8 + *(int *)(param_1 + 0x114) * 0x34);
    sub_0803D876(1);
  }
  else if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(2);
    return 1;
  }
  return 0;
}


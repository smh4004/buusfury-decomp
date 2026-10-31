/* sub_080292E0  (original: 0x080292E0-0x08029372 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 23% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_0803D876();
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08319488;


undefined4 sub_080292E0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(1);
    return 1;
  }
  if (param_3 != 4) {
    if (param_3 == 5) {
      pcVar2 = (char *)(*(int *)(param_1 + 0x118) * 2 + *(int *)(param_1 + 0x114) * 0x68 + 0x300158e
                       );
      cVar1 = *pcVar2;
      do {
        *pcVar2 = cVar1 + '\x01';
      } while (*pcVar2 != (char)(cVar1 + '\x01'));
      *(undefined4 *)(param_1 + 0x110) = 0;
      return 0;
    }
    return 0;
  }
  pcVar2 = (char *)(*(int *)(param_1 + 0x118) * 2 + *(int *)(param_1 + 0x114) * 0x68 + 0x300158e);
  cVar1 = *pcVar2;
  do {
    *pcVar2 = cVar1 + -1;
  } while (*pcVar2 != (char)(cVar1 + -1));
  *(undefined4 *)(param_1 + 0x110) = 0;
  return 0;
}


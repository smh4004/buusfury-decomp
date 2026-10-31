/* sub_0800047C  (original: 0x0800047C-0x080004BA in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013C66();


void sub_0800047C(int param_1,undefined4 param_2,short param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x14);
  bVar1 = *pbVar2;
  do {
    *(short *)(pbVar2 + (uint)bVar1 * 0x68 + 0x50e) = param_3;
  } while (*(short *)(pbVar2 + (uint)bVar1 * 0x68 + 0x50e) != param_3);
  do {
    *(short *)(pbVar2 + (uint)bVar1 * 0x68 + 0x510) = param_3;
  } while (*(short *)(pbVar2 + (uint)bVar1 * 0x68 + 0x510) != param_3);
  if ((int)((uint)pbVar2[(uint)bVar1 * 0x68 + 0x50b] << 0x1f) < 0) {
    sub_08013C66();
  }
  return;
}


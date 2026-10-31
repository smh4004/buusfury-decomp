/* sub_08045D46  (original: 0x08045D46-0x08045D72 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern uint * volatile DAT_03005294;


uint sub_08045D46(int param_1)

{
  if (param_1 == 0) {
    return (uint)*(ushort *)((int)DAT_03005294 + 0x12);
  }
  if (param_1 == 1) {
    return (uint)(byte)DAT_03005294[5];
  }
  if (param_1 == 2) {
    return *DAT_03005294 & 0xffff;
  }
  if (param_1 == 3) {
    return (uint)*(byte *)((int)DAT_03005294 + 6);
  }
  return 0xffff;
}


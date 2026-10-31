/* sub_08045C5A  (original: 0x08045C5A-0x08045CA8 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045AF6();
extern int sub_08045B22();
extern int __call_via_r2();
extern int sub_08045BF4();
extern int sub_08045B92();
extern int volatile DAT_03005294;


void sub_08045C5A(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_03005294 + 0xc);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined1 *)(DAT_03005294 + 0x10) = 1;
      sub_08045BF4(0x32);
      return;
    }
    if (iVar1 == 3) {
      *(undefined1 *)(DAT_03005294 + 0x10) = 1;
      sub_08045B22();
      sub_08045AF6();
      if (*(int *)(DAT_03005294 + 0x18) == 0) {
        return;
      }
      __call_via_r2(0xff,0);
      return;
    }
    if (iVar1 != 4) {
      return;
    }
  }
  sub_08045B22();
  sub_08045B92();
  return;
}


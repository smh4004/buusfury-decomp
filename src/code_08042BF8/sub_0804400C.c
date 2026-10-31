/* sub_0804400C  (original: 0x0804400C-0x08044040 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045D46();
extern int volatile DAT_03005294;


char sub_0804400C(void)

{
  char cVar1;
  char cVar2;
  
  cVar2 = sub_08045D46(1);
  if (((cVar2 == '\x01') && (*(char *)(DAT_03005294 + 0x2c) != '\0')) &&
     ((cVar1 = *(char *)(DAT_03005294 + 6), cVar1 == '\'' || ((cVar1 == '%' || (cVar1 == '7')))))) {
    cVar2 = '\0';
  }
  return cVar2;
}


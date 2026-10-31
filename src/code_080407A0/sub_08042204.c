/* sub_08042204  (original: 0x08042204-0x0804223C in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080419D6();
extern int sub_08041CE4();
extern int sub_080421AE();
extern int sub_08041F98();
extern char volatile DAT_03004bee;


undefined4 sub_08042204(void)

{
  undefined4 uVar1;
  
  if (DAT_03004bee == '\0') {
    sub_080421AE();
    DAT_03004bee = '\x01';
  }
  else {
    if (DAT_03004bee == '\x01') {
      uVar1 = sub_08041F98();
      return uVar1;
    }
    if (DAT_03004bee == '\x02') {
      sub_08041CE4();
      DAT_03004bee = '\x03';
    }
    else if (DAT_03004bee == '\x03') {
      uVar1 = sub_080419D6();
      return uVar1;
    }
  }
  return 1;
}


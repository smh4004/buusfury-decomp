/* sub_08042278  (original: 0x08042278-0x080422B0 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08043368();
extern int sub_080439EE();
extern undefined1 volatile DAT_03004cd0;
extern char volatile DAT_03004ccc;
extern undefined1 volatile DAT_03004ccd;
extern undefined1 volatile DAT_03004ccf;
extern undefined1 volatile DAT_03004cd5;
extern undefined1 volatile DAT_03004cc9;
extern undefined1 volatile DAT_03004cc8;
extern undefined1 volatile DAT_03004cce;


int sub_08042278(void)

{
  int iVar1;
  
  iVar1 = sub_080439EE();
  if (iVar1 == 0x8001) {
    DAT_03004cd0 = 1;
  }
  if ((DAT_03004ccc != '\x17') && (DAT_03004ccc != '\x01')) {
    DAT_03004ccd = 0;
    DAT_03004ccc = '\0';
  }
  DAT_03004ccf = 0;
  DAT_03004cd5 = 0;
  DAT_03004cc9 = 0;
  DAT_03004cc8 = 0;
  DAT_03004cce = 0xff;
  sub_08043368();
  return iVar1;
}


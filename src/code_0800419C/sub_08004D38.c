/* sub_08004D38  (original: 0x08004D38-0x08004DC0 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_08004BC0();
extern int sub_08047018();
extern int sub_08046DD0();
extern int sub_0803D5B8();
extern int sub_08046FF4();
extern undefined4 volatile DAT_0300190c;
extern undefined4 volatile DAT_03001908;
extern undefined1 volatile DAT_03001068;
extern undefined1 volatile DAT_03001560;


int sub_08004D38(int param_1)

{
  int iVar1;
  unsigned int __frame[559];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_8bc ((undefined1 *)((char *)__frame + 0x0))
#define auStack_3c4 ((undefined1 *)((char *)__frame + 0x4f8))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x8a0))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x8a4))
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(0x180), param_1 != 0)) {
    sub_08046FF4(param_1,param_1 + 0x180,0x80,0x805049d);
    sub_08046DD0(auStack_8bc,&DAT_03001068,0x8a8);
    iVar1 = 0;
    do {
      sub_08004BC0(iVar1 * 0x80 + param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    sub_08046DD0(&DAT_03001068,auStack_8bc,0x4f8);
    sub_08047018(&DAT_03001560,auStack_3c4,&uStack_1c,0x68,0x805023d);
    DAT_0300190c = uStack_18;
    DAT_03001908 = uStack_1c;
  }
  return param_1;
}


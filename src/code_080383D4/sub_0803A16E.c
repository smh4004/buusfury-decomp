/* sub_0803A16E  (original: 0x0803A16E-0x0803A1E0 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int Enemy_Create();
extern int sub_0801191A();
extern undefined volatile gEnemyStats;
extern int volatile DAT_03001c34;
extern undefined volatile DAT_03001c4c;


undefined4 sub_0803A16E(void)

{
  undefined4 uVar1;
  unsigned int __frame[12];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_30 ((undefined1 *)((char *)__frame + 0x0))
#define local_28 (*(int *)((char *)__frame + 0x8))
#define local_24 (*(undefined4 *)((char *)__frame + 0xc))
#define local_20 (*(undefined4 *)((char *)__frame + 0x10))
#define local_1c (*(undefined4 *)((char *)__frame + 0x14))
#define local_18 (*(int *)((char *)__frame + 0x18))
#define local_14 (*(undefined4 *)((char *)__frame + 0x1c))
#define local_10 (*(int *)((char *)__frame + 0x20))
#define local_c (*(undefined4 *)((char *)__frame + 0x24))
  local_1c = 0;
  local_20 = 0x400;
  local_24 = *(undefined4 *)(DAT_03001c34 + 0x1a4);
  local_28 = *(int *)(DAT_03001c34 + 0x1a0) + 0x400;
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_28;
  local_c = local_24;
  sub_08049138((int)auStack_30,0x877b050,0x20);
  local_24 = CONCAT22((short)((uint)local_c >> 8),(short)((uint)local_10 >> 8));
  uVar1 = Enemy_Create(0,auStack_30,&gEnemyStats + local_28 * 0x1c,0xffffffff);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return uVar1;
}


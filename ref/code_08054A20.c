/* Ghidra reference decompilation of code_08054A20 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08054A20 @ 0x08054A20 */

uint sub_08054A20(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  undefined4 in_lr;
  bool bVar7;
  
  uVar2 = param_1 * 2 + 0x800000;
  uVar4 = param_2 * 2 + 0x800000;
  uVar5 = uVar2;
  if (uVar2 < 0xff800001) {
    uVar5 = uVar4;
  }
  if (uVar5 < 0xff800001) {
    if (0x7fffff < uVar2) {
      param_1 = param_2;
    }
sub_08054E78:
    uVar5 = in_r12 & 0xf;
    if (uVar5 != 9) {
      if (uVar5 != 8) {
        return param_1;
      }
      if (uVar5 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar5 = 0x7fc00000;
        }
        else {
          uVar5 = 0;
        }
        return uVar5;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar5 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar5 = 0;
        }
        return uVar5;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar5 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar5 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar5 = ~uVar5;
      }
      return uVar5;
    }
    uVar5 = 8;
    goto sub_08054F3C;
  }
  if ((in_r12 & 0x10) == 0) {
    uVar2 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar5 = *puVar1;
  if ((in_r12 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar6 = in_r12 | uVar5 & 0x1c00000;
  *puVar1 = uVar5 | (in_r12 << 1) >> 0x1b;
  bVar7 = (in_r12 & 0xf) != 8;
  if (bVar7) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar6 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar6;
  }
  if (!bVar7 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar5 = uVar5 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar5 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar5 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ uVar2;
        }
        else {
          param_2 = param_2 ^ uVar4;
        }
        goto _08054948;
      }
    }
    else if ((uVar5 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar5 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  else {
    uVar5 = uVar5 & 0x800;
joined_r0x08054900:
    if (uVar5 == 0) {
      return param_1;
    }
  }
  uVar5 = sub_080491E4(param_1,param_2,uVar2,uVar4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar5;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar5 = in_r12 & uVar5 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar2 = uVar5 << 0x1d;
    if ((bool)((byte)(uVar5 >> 3) & 1)) {
      uVar2 = uVar2 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar2;
    return uVar5;
  }
  if ((uVar5 & 8) != 0) {
    return uVar5;
  }
  return 2 - uVar5;
}


/* sub_08054A24 @ 0x08054A24 */

uint sub_08054A24(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  undefined4 in_lr;
  bool bVar7;
  
  uVar2 = param_1 * 2 + 0x800000;
  uVar4 = param_2 * 2 + 0x800000;
  uVar5 = uVar2;
  if (uVar2 < 0xff800001) {
    uVar5 = uVar4;
  }
  if (uVar5 < 0xff800001) {
    if (0x7fffff < uVar2) {
      param_1 = param_2;
    }
sub_08054E78:
    uVar5 = in_r12 & 0xf;
    if (uVar5 != 9) {
      if (uVar5 != 8) {
        return param_1;
      }
      if (uVar5 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar5 = 0x7fc00000;
        }
        else {
          uVar5 = 0;
        }
        return uVar5;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar5 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar5 = 0;
        }
        return uVar5;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar5 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar5 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar5 = ~uVar5;
      }
      return uVar5;
    }
    uVar5 = 8;
    goto sub_08054F3C;
  }
  if ((in_r12 & 0x10) == 0) {
    uVar2 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar5 = *puVar1;
  if ((in_r12 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar6 = in_r12 | uVar5 & 0x1c00000;
  *puVar1 = uVar5 | (in_r12 << 1) >> 0x1b;
  bVar7 = (in_r12 & 0xf) != 8;
  if (bVar7) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar6 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar6;
  }
  if (!bVar7 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar5 = uVar5 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar5 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar5 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ uVar2;
        }
        else {
          param_2 = param_2 ^ uVar4;
        }
        goto _08054948;
      }
    }
    else if ((uVar5 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar5 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  else {
    uVar5 = uVar5 & 0x800;
joined_r0x08054900:
    if (uVar5 == 0) {
      return param_1;
    }
  }
  uVar5 = sub_080491E4(param_1,param_2,uVar2,uVar4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar5;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar5 = in_r12 & uVar5 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar2 = uVar5 << 0x1d;
    if ((bool)((byte)(uVar5 >> 3) & 1)) {
      uVar2 = uVar2 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar2;
    return uVar5;
  }
  if ((uVar5 & 8) != 0) {
    return uVar5;
  }
  return 2 - uVar5;
}


/* sub_08054A48 @ 0x08054A48 */

uint sub_08054A48(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  undefined4 in_lr;
  bool bVar5;
  
  if ((param_1 & 0x400000) != 0) {
    uVar2 = in_r12 & 0x4f;
    if (uVar2 == 0x48) {
      param_3 = 0x48;
      goto sub_08054850;
    }
sub_08054E78:
    uVar4 = in_r12 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1;
      }
      if (uVar4 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar2 = 0x7fc00000;
        }
        else {
          uVar2 = 0;
        }
        return uVar2;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar4 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar2 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar2 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar2 = ~uVar2;
      }
      return uVar2;
    }
    uVar2 = 8;
    goto sub_08054F3C;
  }
sub_08054850:
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08054900:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar2;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08054A4C @ 0x08054A4C */

uint sub_08054A4C(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  undefined4 in_lr;
  bool bVar5;
  
  if ((param_1 & 0x400000) != 0) {
    uVar2 = in_r12 & 0x4f;
    if (uVar2 == 0x48) {
      param_3 = 0x48;
      goto sub_08054850;
    }
sub_08054E78:
    uVar4 = in_r12 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1;
      }
      if (uVar4 == 8 && (in_r12 & 0x40) == 0) {
        if ((in_r12 & 0x10) == 0) {
          uVar2 = 0x7fc00000;
        }
        else {
          uVar2 = 0;
        }
        return uVar2;
      }
      if ((in_r12 & 0x10000) != 0) {
        return 0;
      }
      if ((in_r12 & 0x20) != 0) {
        uVar4 = 0xffffffff;
        if ((uVar2 & 0x80000000) != 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      if ((in_r12 & 0x10) == 0) {
        uVar2 = 0x7fffffff;
        param_2 = param_1;
      }
      else {
        uVar2 = 0xffffffff;
      }
      if ((param_2 & 0x80000000) != 0) {
        uVar2 = ~uVar2;
      }
      return uVar2;
    }
    uVar2 = 8;
    goto sub_08054F3C;
  }
sub_08054850:
  if ((in_r12 & 0x10) == 0) {
    param_3 = param_2;
  }
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  if ((in_r12 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
    in_r12 = in_r12 | 0x40000000;
  }
  uVar4 = in_r12 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (in_r12 << 1) >> 0x1b;
  bVar5 = (in_r12 & 0xf) != 8;
  if (bVar5) {
    uVar3 = in_r12 & 0x70;
    in_r12 = uVar4 | uVar3 << 3;
  }
  else {
    uVar3 = 0x20000;
    in_r12 = uVar4;
  }
  if (!bVar5 && (uVar3 & ~in_r12) == 0) {
    in_r12 = in_r12 | 0xc00000;
  }
  if ((in_r12 & 0x20000000) == 0) {
    if ((in_r12 & 0x10000000) == 0) {
      if ((in_r12 & 0x40000000) != 0) {
        uVar2 = uVar2 & 0x1000;
        goto joined_r0x08054900;
      }
      if ((in_r12 & 0x8000000) == 0) {
        if ((uVar2 & 0x100) == 0) {
          uVar2 = param_2;
          if ((in_r12 & 0x80) == 0) {
            uVar2 = param_1;
          }
          uVar2 = uVar2 & 0x80000000;
          if ((in_r12 & 0x10) == 0) {
            param_1 = uVar2 | 0x7fc00000;
          }
          else {
            param_1 = 0;
            param_2 = uVar2;
          }
          goto sub_08054E78;
        }
      }
      else if ((uVar2 & 0x200) == 0) {
        if ((in_r12 & 0x10) == 0) {
          param_2 = param_1 ^ param_3;
        }
        else {
          param_2 = param_2 ^ param_4;
        }
        goto _08054948;
      }
    }
    else if ((uVar2 & 0x400) == 0) {
      if ((in_r12 & 0x80) == 0) {
        param_2 = param_1 & 0x80000000;
      }
      else {
        param_2 = param_2 & 0x80000000;
      }
_08054948:
      if ((in_r12 & 0x10) == 0) {
        uVar2 = param_2 & 0x80000000 | 0x7f800000;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 & 0x800;
joined_r0x08054900:
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar2 = sub_080491E4(param_1,param_2,param_3,param_4,in_r12,in_lr,in_r12,in_lr);
  if ((in_r12 & 0xf) != 9) {
    return uVar2;
  }
sub_08054F3C:
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar4 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08054A64 @ 0x08054A64 */

/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x08054948) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x08054efc) */
/* WARNING: Removing unreachable block (ram,0x0805496c) */
/* WARNING: Removing unreachable block (ram,0x08054978) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054eb0) */

uint sub_08054A64(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  uint uVar8;
  
  uVar3 = (int)param_1 >> 0x17;
  uVar4 = param_1 << 8;
  if (uVar3 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar3 < 0) {
    if (param_1 < 0xcf000001) {
      if ((uVar3 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      return -(uVar4 >> (0x9e - (uVar3 & 0xff) & 0xff));
    }
  }
  else if (uVar3 < 0x9f && 0x9e - uVar3 != 0) {
    return uVar4 >> (0x9e - uVar3 & 0xff);
  }
  uVar6 = 0x4020048;
  uVar3 = param_1 * 2;
  if (uVar3 < 0xff000001) {
    if (uVar3 == 0xff000000) {
      uVar6 = 0x4020048;
    }
  }
  else {
    uVar6 = 0x4030048;
  }
  uVar8 = uVar3;
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  uVar5 = uVar6 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (uVar6 << 1) >> 0x1b;
  bVar7 = (uVar6 & 0xf) != 8;
  if (bVar7) {
    uVar6 = uVar6 & 0x70;
    uVar5 = uVar5 | uVar6 << 3;
  }
  else {
    uVar6 = 0x20000;
  }
  if (!bVar7 && (uVar6 & ~uVar5) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  if ((uVar2 & 0x100) == 0) {
    uVar4 = uVar5 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1 & 0x80000000 | 0x7fc00000;
      }
      if (uVar4 == 8 && (uVar5 & 0x40) == 0) {
        return 0x7fc00000;
      }
      if ((uVar5 & 0x10000) != 0) {
        return 0;
      }
      uVar4 = 0x7fffffff;
      if ((param_1 & 0x80000000) != 0) {
        uVar4 = 0x80000000;
      }
      return uVar4;
    }
    uVar4 = 8;
  }
  else {
    uVar4 = sub_080491E4(param_1,uVar3,uVar8,uVar4,uVar5,in_lr,uVar5,in_lr);
    if ((uVar5 & 0xf) != 9) {
      return uVar4;
    }
  }
  if ((uVar5 & 0x100000) == 0) {
    uVar5 = uVar5 & uVar4 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((uVar5 & 0xf0000) != 0) {
    if ((uVar4 & 8) == 0) {
      return 2 - uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar4 << 0x1d;
  if ((bool)((byte)(uVar4 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar1 = (uint *)sub_08047A2C();
  *puVar1 = *puVar1 & 0xfffffff | uVar3;
  return uVar4;
}


/* sub_08054A68 @ 0x08054A68 */

/* WARNING: Removing unreachable block (ram,0x08054880) */
/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x080548e8) */
/* WARNING: Removing unreachable block (ram,0x0805493c) */
/* WARNING: Removing unreachable block (ram,0x08054944) */
/* WARNING: Removing unreachable block (ram,0x08054948) */
/* WARNING: Removing unreachable block (ram,0x0805495c) */
/* WARNING: Removing unreachable block (ram,0x08054964) */
/* WARNING: Removing unreachable block (ram,0x080548f4) */
/* WARNING: Removing unreachable block (ram,0x08054924) */
/* WARNING: Removing unreachable block (ram,0x08054930) */
/* WARNING: Removing unreachable block (ram,0x08054efc) */
/* WARNING: Removing unreachable block (ram,0x0805496c) */
/* WARNING: Removing unreachable block (ram,0x08054978) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054934) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054eb0) */

uint sub_08054A68(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  uint uVar8;
  
  uVar3 = (int)param_1 >> 0x17;
  uVar4 = param_1 << 8;
  if (uVar3 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar3 < 0) {
    if (param_1 < 0xcf000001) {
      if ((uVar3 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      return -(uVar4 >> (0x9e - (uVar3 & 0xff) & 0xff));
    }
  }
  else if (uVar3 < 0x9f && 0x9e - uVar3 != 0) {
    return uVar4 >> (0x9e - uVar3 & 0xff);
  }
  uVar6 = 0x4020048;
  uVar3 = param_1 * 2;
  if (uVar3 < 0xff000001) {
    if (uVar3 == 0xff000000) {
      uVar6 = 0x4020048;
    }
  }
  else {
    uVar6 = 0x4030048;
  }
  uVar8 = uVar3;
  puVar1 = (uint *)sub_08047A2C();
  uVar2 = *puVar1;
  uVar5 = uVar6 | uVar2 & 0x1c00000;
  *puVar1 = uVar2 | (uVar6 << 1) >> 0x1b;
  bVar7 = (uVar6 & 0xf) != 8;
  if (bVar7) {
    uVar6 = uVar6 & 0x70;
    uVar5 = uVar5 | uVar6 << 3;
  }
  else {
    uVar6 = 0x20000;
  }
  if (!bVar7 && (uVar6 & ~uVar5) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  if ((uVar2 & 0x100) == 0) {
    uVar4 = uVar5 & 0xf;
    if (uVar4 != 9) {
      if (uVar4 != 8) {
        return param_1 & 0x80000000 | 0x7fc00000;
      }
      if (uVar4 == 8 && (uVar5 & 0x40) == 0) {
        return 0x7fc00000;
      }
      if ((uVar5 & 0x10000) != 0) {
        return 0;
      }
      uVar4 = 0x7fffffff;
      if ((param_1 & 0x80000000) != 0) {
        uVar4 = 0x80000000;
      }
      return uVar4;
    }
    uVar4 = 8;
  }
  else {
    uVar4 = sub_080491E4(param_1,uVar3,uVar8,uVar4,uVar5,in_lr,uVar5,in_lr);
    if ((uVar5 & 0xf) != 9) {
      return uVar4;
    }
  }
  if ((uVar5 & 0x100000) == 0) {
    uVar5 = uVar5 & uVar4 << 0x10;
    if (uVar5 != 0) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if ((uVar5 & 0xf0000) != 0) {
    if ((uVar4 & 8) == 0) {
      return 2 - uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar4 << 0x1d;
  if ((bool)((byte)(uVar4 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar1 = (uint *)sub_08047A2C();
  *puVar1 = *puVar1 & 0xfffffff | uVar3;
  return uVar4;
}


/* sub_08054AD0 @ 0x08054AD0 */

uint sub_08054AD0(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x40000000;
  bVar3 = param_1 >> 0x10 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    iVar2 = 0x48000000;
  }
  if (bVar3) {
    return param_1;
  }
  if ((param_1 & 0xff000000) == 0) {
    param_1 = param_1 << 8;
  }
  else {
    iVar2 = iVar2 + 0x4000000;
  }
  if ((param_1 & 0xf0000000) == 0) {
    param_1 = param_1 << 4;
  }
  else {
    iVar2 = iVar2 + 0x2000000;
  }
  if ((param_1 & 0xc0000000) == 0) {
    param_1 = param_1 << 2;
    uVar1 = param_1;
  }
  else {
    iVar2 = iVar2 + 0x1000000;
    uVar1 = param_1 & 0xc0000000;
  }
  if ((int)uVar1 < 0) {
    iVar2 = iVar2 + 0x800000;
  }
  else {
    param_1 = param_1 << 1;
  }
  bVar3 = (bool)((byte)(param_1 >> 7) & 1);
  uVar1 = iVar2 + ((int)param_1 >> 8) + (uint)bVar3;
  if ((param_1 & 0x7f) != 0) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar1 = uVar1 & 0xfffffffe;
  }
  return uVar1;
}


/* sub_08054AD4 @ 0x08054AD4 */

uint sub_08054AD4(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x40000000;
  bVar3 = param_1 >> 0x10 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    iVar2 = 0x48000000;
  }
  if (!bVar3) {
    if ((param_1 & 0xff000000) == 0) {
      param_1 = param_1 << 8;
    }
    else {
      iVar2 = iVar2 + 0x4000000;
    }
    if ((param_1 & 0xf0000000) == 0) {
      param_1 = param_1 << 4;
    }
    else {
      iVar2 = iVar2 + 0x2000000;
    }
    if ((param_1 & 0xc0000000) == 0) {
      param_1 = param_1 << 2;
      uVar1 = param_1;
    }
    else {
      iVar2 = iVar2 + 0x1000000;
      uVar1 = param_1 & 0xc0000000;
    }
    if ((int)uVar1 < 0) {
      iVar2 = iVar2 + 0x800000;
    }
    else {
      param_1 = param_1 << 1;
    }
    bVar3 = (bool)((byte)(param_1 >> 7) & 1);
    uVar1 = iVar2 + ((int)param_1 >> 8) + (uint)bVar3;
    if ((param_1 & 0x7f) != 0) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  return param_1;
}


/* sub_08054ADC @ 0x08054ADC */

uint sub_08054ADC(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0x80000000;
  if (uVar2 != 0) {
    param_1 = -param_1;
  }
  uVar2 = uVar2 | 0x40000000;
  bVar3 = param_1 >> 0x10 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    uVar2 = uVar2 + 0x8000000;
  }
  if (bVar3) {
    return param_1;
  }
  if ((param_1 & 0xff000000) == 0) {
    param_1 = param_1 << 8;
  }
  else {
    uVar2 = uVar2 + 0x4000000;
  }
  if ((param_1 & 0xf0000000) == 0) {
    param_1 = param_1 << 4;
  }
  else {
    uVar2 = uVar2 + 0x2000000;
  }
  if ((param_1 & 0xc0000000) == 0) {
    param_1 = param_1 << 2;
    uVar1 = param_1;
  }
  else {
    uVar2 = uVar2 + 0x1000000;
    uVar1 = param_1 & 0xc0000000;
  }
  if ((int)uVar1 < 0) {
    uVar2 = uVar2 + 0x800000;
  }
  else {
    param_1 = param_1 << 1;
  }
  bVar3 = (bool)((byte)(param_1 >> 7) & 1);
  uVar2 = uVar2 + ((int)param_1 >> 8) + (uint)bVar3;
  if ((param_1 & 0x7f) != 0) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}


/* sub_08054AE0 @ 0x08054AE0 */

uint sub_08054AE0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0x80000000;
  if (uVar2 != 0) {
    param_1 = -param_1;
  }
  uVar2 = uVar2 | 0x40000000;
  bVar3 = param_1 >> 0x10 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    uVar2 = uVar2 + 0x8000000;
  }
  if (!bVar3) {
    if ((param_1 & 0xff000000) == 0) {
      param_1 = param_1 << 8;
    }
    else {
      uVar2 = uVar2 + 0x4000000;
    }
    if ((param_1 & 0xf0000000) == 0) {
      param_1 = param_1 << 4;
    }
    else {
      uVar2 = uVar2 + 0x2000000;
    }
    if ((param_1 & 0xc0000000) == 0) {
      param_1 = param_1 << 2;
      uVar1 = param_1;
    }
    else {
      uVar2 = uVar2 + 0x1000000;
      uVar1 = param_1 & 0xc0000000;
    }
    if ((int)uVar1 < 0) {
      uVar2 = uVar2 + 0x800000;
    }
    else {
      param_1 = param_1 << 1;
    }
    bVar3 = (bool)((byte)(param_1 >> 7) & 1);
    uVar2 = uVar2 + ((int)param_1 >> 8) + (uint)bVar3;
    if ((param_1 & 0x7f) != 0) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    return uVar2;
  }
  return param_1;
}


/* sub_08054B3C @ 0x08054B3C */

/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054efc) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x0805496c) */
/* WARNING: Removing unreachable block (ram,0x08054978) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054eb0) */

undefined * sub_08054B3C(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined4 in_lr;
  bool bVar13;
  bool bVar14;
  
  uVar5 = (uint)param_1 >> 7 & 0xff0000;
  bVar13 = uVar5 == 0;
  if (!bVar13) {
    param_4 = (uint)param_2 >> 7 & 0xff0000;
    bVar13 = param_4 == 0;
  }
  if (!bVar13) {
    bVar13 = uVar5 == 0xff0000;
  }
  if (!bVar13) {
    bVar13 = param_4 == 0xff0000;
  }
  if (bVar13) {
    uVar9 = (uint)param_2 >> 7 & 0xff0000;
    if ((int)((uint)param_1 ^ (uint)param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    if (uVar5 < 0xff0000 && uVar9 < 0xff0000) {
      if (((uint)param_1 & 0x7fffffff) == 0 || ((uint)param_2 & 0x7fffffff) == 0) {
        return (undefined *)(uVar5 << 0x17);
      }
      uVar3 = (int)param_1 << 8;
      puVar11 = (undefined *)((int)param_2 << 8);
      if ((uVar5 & 0xff0000) == 0) {
        if (uVar3 < 0x10000) {
          uVar5 = uVar5 - 0x100000;
          uVar3 = (int)param_1 << 0x18;
        }
        if ((uVar3 & 0xff000000) == 0) {
          uVar5 = uVar5 - 0x80000;
          uVar3 = uVar3 << 8;
        }
        if ((uVar3 & 0xf0000000) == 0) {
          uVar5 = uVar5 - 0x40000;
          uVar3 = uVar3 << 4;
        }
        uVar2 = uVar3 & 0xc0000000;
        if ((uVar3 & 0xc0000000) == 0) {
          uVar5 = uVar5 - 0x20000;
          uVar3 = uVar3 << 2;
          uVar2 = uVar3;
        }
        if ((int)uVar2 < 0) {
          uVar5 = uVar5 + 0x10000;
        }
        else {
          uVar3 = uVar3 << 1;
        }
        if (uVar9 != 0) {
          param_2 = (undefined *)((uint)puVar11 | 0x80000000);
          param_4 = uVar9;
          goto code_r0x08054b6c;
        }
      }
      uVar3 = uVar3 | 0x80000000;
      if (puVar11 < (undefined *)0x10000) {
        uVar9 = uVar9 - 0x100000;
        puVar11 = (undefined *)((int)param_2 << 0x18);
      }
      param_2 = puVar11;
      if (((uint)param_2 & 0xff000000) == 0) {
        uVar9 = uVar9 - 0x80000;
        param_2 = (undefined *)((int)param_2 << 8);
      }
      if (((uint)param_2 & 0xf0000000) == 0) {
        uVar9 = uVar9 - 0x40000;
        param_2 = (undefined *)((int)param_2 << 4);
      }
      puVar11 = (undefined *)((uint)param_2 & 0xc0000000);
      param_4 = uVar9;
      if ((undefined *)((uint)param_2 & 0xc0000000) == (undefined *)0x0) {
        param_4 = uVar9 - 0x20000;
        param_2 = (undefined *)((int)param_2 << 2);
        puVar11 = param_2;
      }
      if ((int)puVar11 < 0) {
        param_4 = param_4 + 0x10000;
      }
      else {
        param_2 = (undefined *)((int)param_2 << 1);
      }
      goto code_r0x08054b6c;
    }
    uVar3 = (int)param_1 * 2;
    if (uVar3 < 0xff000001) {
      uVar3 = (int)param_2 * 2;
    }
    puVar11 = &UNK_04000003;
    if (uVar3 < 0xff000001) {
      if (((uint)param_1 & 0x7fffffff) != 0 && ((uint)param_2 & 0x7fffffff) != 0) {
        return (undefined *)((uVar5 | 0xff) << 0x17);
      }
      puVar11 = &UNK_04000003;
      goto sub_08054850;
    }
    uVar3 = (int)param_1 * 2 + 0x800000;
    uVar9 = (int)param_2 * 2 + 0x800000;
    uVar5 = uVar3;
    if (uVar3 < 0xff800001) {
      uVar5 = uVar9;
    }
    if (0xff800000 < uVar5) goto sub_08054850;
    if (0x7fffff < uVar3) {
      param_1 = param_2;
    }
sub_08054E78:
    uVar5 = (uint)puVar11 & 0xf;
    if (uVar5 != 9) {
      if (uVar5 != 8) {
        return param_1;
      }
      if (uVar5 != 8) {
        puVar11 = (undefined *)0x7fffffff;
        if (((uint)param_1 & 0x80000000) != 0) {
          puVar11 = (undefined *)0x80000000;
        }
        return puVar11;
      }
      return (undefined *)0x7fc00000;
    }
    puVar8 = (undefined *)0x8;
  }
  else {
    if ((int)((uint)param_1 ^ (uint)param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    uVar3 = (int)param_1 << 8 | 0x80000000;
    param_2 = (undefined *)((int)param_2 << 8 | 0x80000000);
code_r0x08054b6c:
    uVar9 = (uint)(ZEXT48(param_2) * (ulonglong)uVar3 >> 0x20);
    iVar6 = uVar5 + param_4 + -0x800000;
    if ((int)(ZEXT48(param_2) * (ulonglong)uVar3) != 0) {
      uVar9 = uVar9 | 1;
    }
    bVar13 = 0x7fffffff < uVar9;
    if (!bVar13) {
      uVar9 = uVar9 << 1;
    }
    iVar1 = iVar6 >> 0x10;
    uVar3 = (uint)bVar13;
    uVar7 = iVar6 + iVar1 + uVar3;
    bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar5 = uVar9 >> 8;
    param_1 = (undefined *)(uVar5 + uVar7 * 0x800000 + (uint)bVar13);
    uVar2 = (uint)bVar13;
    puVar12 = &stack0x00000000 +
              uVar2 + (uint)bVar13 * 2 +
                      uVar5 * 2 + uVar3 * 0x1000000 + iVar1 * 0x1000000 + param_4 * 0x1000000;
    if (bVar13) {
      uVar5 = uVar9 & 0x7f;
    }
    if (uVar5 != 0) {
      bVar13 = 0xfbffff < uVar7;
    }
    if (!bVar13) {
      return param_1;
    }
    if (uVar5 == 0 || uVar7 == 0xfc0000) {
      param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
    }
    if (uVar7 < 0xfc0000) {
      return param_1;
    }
    if ((int)(uVar7 - 0xfc0000) < 0) {
      if ((int)param_1 * 2 - 0x1000000U < 0x3000000) {
        return param_1;
      }
      param_1 = param_1 + 0x60000000;
      bVar14 = (uVar9 & 0x7f) == 0;
      bVar13 = !bVar14;
      if (bVar13) {
        puVar12 = (undefined1 *)((uint)puVar12 >> 1 | uVar2 << 0x1f);
        bVar14 = puVar12 == (undefined1 *)0x0;
      }
      bVar13 = bVar13 && uVar2 != 0;
      if (bVar14) {
        bVar13 = -1 < (int)((uint)puVar12 >> 2 | (int)puVar12 << 0x1e);
      }
      if (bVar13) {
        puVar8 = (undefined *)0x40000003;
      }
      else {
        puVar8 = (undefined *)0xc0000003;
      }
      if ((uVar9 & 0xff) == 0) {
        puVar8 = (undefined *)0x3;
      }
      puVar4 = (uint *)sub_08047A2C();
      param_2 = (undefined *)*puVar4;
      if (((uint)param_2 & 0x1000000) != 0) {
        return (undefined *)((uint)param_1 & 0x80000000);
      }
      if (((uint)param_2 & 0x800) == 0) {
        uVar9 = 0xc1 - ((uint)param_1 & 0x80000000 | (uint)param_1 >> 0x17 & 0xfffffeff);
        if ((uVar9 & 0x7fffffff) < 0x18) {
          uVar5 = (int)param_1 << (0x20 - uVar9 & 0xff);
          uVar3 = 0x20 - (0x20 - uVar9);
          uVar9 = uVar3 & 0x80000000;
          param_1 = (undefined *)(((uint)param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | uVar9);
          if (uVar5 == 0) {
            param_2 = (undefined *)0x0;
            puVar11 = puVar8;
            if (((uint)puVar8 & 0x40000000) == 0) {
              return param_1;
            }
          }
          else {
            *puVar4 = *puVar4 | 8;
            param_2 = (undefined *)(uVar5 << 1);
            if (SUB41(uVar5 >> 0x1f,0)) {
              if (param_2 == (undefined *)0x0) {
                bVar13 = (bool)((byte)((uint)puVar8 >> 0x1e) & 1);
                uVar5 = ~((int)puVar8 >> 0x1f);
                if (!bVar13 || uVar5 == 0) {
                  param_1 = param_1 + 1;
                }
                if (!bVar13) {
                  param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
                }
              }
              else {
                param_1 = param_1 + 1;
              }
            }
            uVar9 = uVar5;
            puVar11 = (undefined *)((uint)puVar8 | 0x40000000);
          }
        }
        else {
          param_2 = (undefined *)(*puVar4 | 8);
          *puVar4 = (uint)param_2;
          if (SBORROW4(uVar9 & 0x7fffffff,-0x7fffffe7)) {
            param_1 = (undefined *)(uVar9 & 0x80000000);
          }
          else {
            uVar5 = (uint)param_1 & 0x7fffff;
            param_1 = (undefined *)(uVar9 & 0x80000000) + 1;
            if (uVar5 == 0 && ((uint)puVar8 & 0x80000000) == 0) {
              param_1 = (undefined *)(uVar9 & 0x80000000);
            }
          }
          puVar11 = (undefined *)0x40000000;
        }
        goto sub_08054850;
      }
      puVar11 = (undefined *)((uint)puVar8 | 0x20000000);
    }
    else {
      if ((int)(param_1 + 0x800000) * 2 < 0) {
        return param_1;
      }
      param_1 = param_1 + -0x60000000;
      puVar11 = (undefined *)0x10000003;
sub_08054850:
      puVar8 = param_2;
      puVar4 = (uint *)sub_08047A2C();
      uVar5 = *puVar4;
      puVar10 = puVar11;
      if (((uint)puVar11 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
        puVar10 = (undefined *)((uint)puVar11 | 0x40000000);
      }
      puVar11 = (undefined *)((uint)puVar10 | uVar5 & 0x1c00000);
      *puVar4 = uVar5 | (uint)((int)puVar10 << 1) >> 0x1b;
      bVar13 = ((uint)puVar10 & 0xf) != 8;
      if (bVar13) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x20000;
      }
      if (!bVar13 && (uVar3 & ~(uint)puVar11) == 0) {
        puVar11 = (undefined *)((uint)puVar11 | 0xc00000);
      }
      if (((uint)puVar11 & 0x10000000) == 0) {
        if (((uint)puVar11 & 0x40000000) == 0) {
          if ((uVar5 & 0x100) == 0) {
            param_1 = (undefined *)((uint)param_1 & 0x80000000 | 0x7fc00000);
            goto sub_08054E78;
          }
        }
        else if ((uVar5 & 0x1000) == 0) {
          return param_1;
        }
      }
      else if ((uVar5 & 0x400) == 0) {
        return (undefined *)((uint)param_1 & 0x80000000 | 0x7f800000);
      }
    }
    puVar8 = (undefined *)sub_080491E4(param_1,param_2,puVar8,uVar9,puVar11,in_lr,puVar11,in_lr);
    if (((uint)puVar11 & 0xf) != 9) {
      return puVar8;
    }
  }
  if (((uint)puVar11 & 0x100000) == 0) {
    puVar11 = (undefined *)((uint)puVar11 & (int)puVar8 << 0x10);
    if (puVar11 != (undefined *)0x0) {
      puVar11 = (undefined *)0x1;
    }
    return puVar11;
  }
  if (((uint)puVar11 & 0xf0000) != 0) {
    if (((uint)puVar8 & 8) == 0) {
      return (undefined *)(2 - (int)puVar8);
    }
    return puVar8;
  }
  uVar5 = (int)puVar8 << 0x1d;
  if ((bool)((byte)((uint)puVar8 >> 3) & 1)) {
    uVar5 = uVar5 | 0x30000000;
  }
  puVar4 = (uint *)sub_08047A2C();
  *puVar4 = *puVar4 & 0xfffffff | uVar5;
  return puVar8;
}


/* sub_08054B40 @ 0x08054B40 */

/* WARNING: Removing unreachable block (ram,0x08054950) */
/* WARNING: Removing unreachable block (ram,0x08054908) */
/* WARNING: Removing unreachable block (ram,0x08054914) */
/* WARNING: Removing unreachable block (ram,0x0805491c) */
/* WARNING: Removing unreachable block (ram,0x08054918) */
/* WARNING: Removing unreachable block (ram,0x08054920) */
/* WARNING: Removing unreachable block (ram,0x08054940) */
/* WARNING: Removing unreachable block (ram,0x08054efc) */
/* WARNING: Removing unreachable block (ram,0x08054ed0) */
/* WARNING: Removing unreachable block (ram,0x0805496c) */
/* WARNING: Removing unreachable block (ram,0x08054978) */
/* WARNING: Removing unreachable block (ram,0x08054edc) */
/* WARNING: Removing unreachable block (ram,0x08054ee8) */
/* WARNING: Removing unreachable block (ram,0x08054ef0) */
/* WARNING: Removing unreachable block (ram,0x080548f8) */
/* WARNING: Removing unreachable block (ram,0x08054904) */
/* WARNING: Removing unreachable block (ram,0x08054eb0) */

undefined * sub_08054B40(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined4 in_lr;
  bool bVar13;
  bool bVar14;
  
  uVar5 = (uint)param_1 >> 7 & 0xff0000;
  bVar13 = uVar5 == 0;
  if (!bVar13) {
    param_4 = (uint)param_2 >> 7 & 0xff0000;
    bVar13 = param_4 == 0;
  }
  if (!bVar13) {
    bVar13 = uVar5 == 0xff0000;
  }
  if (!bVar13) {
    bVar13 = param_4 == 0xff0000;
  }
  if (bVar13) {
    uVar9 = (uint)param_2 >> 7 & 0xff0000;
    if ((int)((uint)param_1 ^ (uint)param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    if (uVar5 < 0xff0000 && uVar9 < 0xff0000) {
      if (((uint)param_1 & 0x7fffffff) == 0 || ((uint)param_2 & 0x7fffffff) == 0) {
        return (undefined *)(uVar5 << 0x17);
      }
      uVar3 = (int)param_1 << 8;
      puVar11 = (undefined *)((int)param_2 << 8);
      if ((uVar5 & 0xff0000) == 0) {
        if (uVar3 < 0x10000) {
          uVar5 = uVar5 - 0x100000;
          uVar3 = (int)param_1 << 0x18;
        }
        if ((uVar3 & 0xff000000) == 0) {
          uVar5 = uVar5 - 0x80000;
          uVar3 = uVar3 << 8;
        }
        if ((uVar3 & 0xf0000000) == 0) {
          uVar5 = uVar5 - 0x40000;
          uVar3 = uVar3 << 4;
        }
        uVar2 = uVar3 & 0xc0000000;
        if ((uVar3 & 0xc0000000) == 0) {
          uVar5 = uVar5 - 0x20000;
          uVar3 = uVar3 << 2;
          uVar2 = uVar3;
        }
        if ((int)uVar2 < 0) {
          uVar5 = uVar5 + 0x10000;
        }
        else {
          uVar3 = uVar3 << 1;
        }
        if (uVar9 != 0) {
          param_2 = (undefined *)((uint)puVar11 | 0x80000000);
          param_4 = uVar9;
          goto code_r0x08054b6c;
        }
      }
      uVar3 = uVar3 | 0x80000000;
      if (puVar11 < (undefined *)0x10000) {
        uVar9 = uVar9 - 0x100000;
        puVar11 = (undefined *)((int)param_2 << 0x18);
      }
      param_2 = puVar11;
      if (((uint)param_2 & 0xff000000) == 0) {
        uVar9 = uVar9 - 0x80000;
        param_2 = (undefined *)((int)param_2 << 8);
      }
      if (((uint)param_2 & 0xf0000000) == 0) {
        uVar9 = uVar9 - 0x40000;
        param_2 = (undefined *)((int)param_2 << 4);
      }
      puVar11 = (undefined *)((uint)param_2 & 0xc0000000);
      param_4 = uVar9;
      if ((undefined *)((uint)param_2 & 0xc0000000) == (undefined *)0x0) {
        param_4 = uVar9 - 0x20000;
        param_2 = (undefined *)((int)param_2 << 2);
        puVar11 = param_2;
      }
      if ((int)puVar11 < 0) {
        param_4 = param_4 + 0x10000;
      }
      else {
        param_2 = (undefined *)((int)param_2 << 1);
      }
      goto code_r0x08054b6c;
    }
    uVar3 = (int)param_1 * 2;
    if (uVar3 < 0xff000001) {
      uVar3 = (int)param_2 * 2;
    }
    puVar11 = &UNK_04000003;
    if (uVar3 < 0xff000001) {
      if (((uint)param_1 & 0x7fffffff) != 0 && ((uint)param_2 & 0x7fffffff) != 0) {
        return (undefined *)((uVar5 | 0xff) << 0x17);
      }
      puVar11 = &UNK_04000003;
      goto sub_08054850;
    }
    uVar3 = (int)param_1 * 2 + 0x800000;
    uVar9 = (int)param_2 * 2 + 0x800000;
    uVar5 = uVar3;
    if (uVar3 < 0xff800001) {
      uVar5 = uVar9;
    }
    if (0xff800000 < uVar5) goto sub_08054850;
    if (0x7fffff < uVar3) {
      param_1 = param_2;
    }
sub_08054E78:
    uVar5 = (uint)puVar11 & 0xf;
    if (uVar5 != 9) {
      if (uVar5 != 8) {
        return param_1;
      }
      if (uVar5 != 8) {
        puVar11 = (undefined *)0x7fffffff;
        if (((uint)param_1 & 0x80000000) != 0) {
          puVar11 = (undefined *)0x80000000;
        }
        return puVar11;
      }
      return (undefined *)0x7fc00000;
    }
    puVar8 = (undefined *)0x8;
  }
  else {
    if ((int)((uint)param_1 ^ (uint)param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    uVar3 = (int)param_1 << 8 | 0x80000000;
    param_2 = (undefined *)((int)param_2 << 8 | 0x80000000);
code_r0x08054b6c:
    uVar9 = (uint)(ZEXT48(param_2) * (ulonglong)uVar3 >> 0x20);
    iVar6 = uVar5 + param_4 + -0x800000;
    if ((int)(ZEXT48(param_2) * (ulonglong)uVar3) != 0) {
      uVar9 = uVar9 | 1;
    }
    bVar13 = 0x7fffffff < uVar9;
    if (!bVar13) {
      uVar9 = uVar9 << 1;
    }
    iVar1 = iVar6 >> 0x10;
    uVar3 = (uint)bVar13;
    uVar7 = iVar6 + iVar1 + uVar3;
    bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar5 = uVar9 >> 8;
    param_1 = (undefined *)(uVar5 + uVar7 * 0x800000 + (uint)bVar13);
    uVar2 = (uint)bVar13;
    puVar12 = &stack0x00000000 +
              uVar2 + (uint)bVar13 * 2 +
                      uVar5 * 2 + uVar3 * 0x1000000 + iVar1 * 0x1000000 + param_4 * 0x1000000;
    if (bVar13) {
      uVar5 = uVar9 & 0x7f;
    }
    if (uVar5 != 0) {
      bVar13 = 0xfbffff < uVar7;
    }
    if (!bVar13) {
      return param_1;
    }
    if (uVar5 == 0 || uVar7 == 0xfc0000) {
      param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
    }
    if (uVar7 < 0xfc0000) {
      return param_1;
    }
    if ((int)(uVar7 - 0xfc0000) < 0) {
      if ((int)param_1 * 2 - 0x1000000U < 0x3000000) {
        return param_1;
      }
      param_1 = param_1 + 0x60000000;
      bVar14 = (uVar9 & 0x7f) == 0;
      bVar13 = !bVar14;
      if (bVar13) {
        puVar12 = (undefined1 *)((uint)puVar12 >> 1 | uVar2 << 0x1f);
        bVar14 = puVar12 == (undefined1 *)0x0;
      }
      bVar13 = bVar13 && uVar2 != 0;
      if (bVar14) {
        bVar13 = -1 < (int)((uint)puVar12 >> 2 | (int)puVar12 << 0x1e);
      }
      if (bVar13) {
        puVar8 = (undefined *)0x40000003;
      }
      else {
        puVar8 = (undefined *)0xc0000003;
      }
      if ((uVar9 & 0xff) == 0) {
        puVar8 = (undefined *)0x3;
      }
      puVar4 = (uint *)sub_08047A2C();
      param_2 = (undefined *)*puVar4;
      if (((uint)param_2 & 0x1000000) != 0) {
        return (undefined *)((uint)param_1 & 0x80000000);
      }
      if (((uint)param_2 & 0x800) == 0) {
        uVar9 = 0xc1 - ((uint)param_1 & 0x80000000 | (uint)param_1 >> 0x17 & 0xfffffeff);
        if ((uVar9 & 0x7fffffff) < 0x18) {
          uVar5 = (int)param_1 << (0x20 - uVar9 & 0xff);
          uVar3 = 0x20 - (0x20 - uVar9);
          uVar9 = uVar3 & 0x80000000;
          param_1 = (undefined *)(((uint)param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | uVar9);
          if (uVar5 == 0) {
            param_2 = (undefined *)0x0;
            puVar11 = puVar8;
            if (((uint)puVar8 & 0x40000000) == 0) {
              return param_1;
            }
          }
          else {
            *puVar4 = *puVar4 | 8;
            param_2 = (undefined *)(uVar5 << 1);
            if (SUB41(uVar5 >> 0x1f,0)) {
              if (param_2 == (undefined *)0x0) {
                bVar13 = (bool)((byte)((uint)puVar8 >> 0x1e) & 1);
                uVar5 = ~((int)puVar8 >> 0x1f);
                if (!bVar13 || uVar5 == 0) {
                  param_1 = param_1 + 1;
                }
                if (!bVar13) {
                  param_1 = (undefined *)((uint)param_1 & 0xfffffffe);
                }
              }
              else {
                param_1 = param_1 + 1;
              }
            }
            uVar9 = uVar5;
            puVar11 = (undefined *)((uint)puVar8 | 0x40000000);
          }
        }
        else {
          param_2 = (undefined *)(*puVar4 | 8);
          *puVar4 = (uint)param_2;
          if (SBORROW4(uVar9 & 0x7fffffff,-0x7fffffe7)) {
            param_1 = (undefined *)(uVar9 & 0x80000000);
          }
          else {
            uVar5 = (uint)param_1 & 0x7fffff;
            param_1 = (undefined *)(uVar9 & 0x80000000) + 1;
            if (uVar5 == 0 && ((uint)puVar8 & 0x80000000) == 0) {
              param_1 = (undefined *)(uVar9 & 0x80000000);
            }
          }
          puVar11 = (undefined *)0x40000000;
        }
        goto sub_08054850;
      }
      puVar11 = (undefined *)((uint)puVar8 | 0x20000000);
    }
    else {
      if ((int)(param_1 + 0x800000) * 2 < 0) {
        return param_1;
      }
      param_1 = param_1 + -0x60000000;
      puVar11 = (undefined *)0x10000003;
sub_08054850:
      puVar8 = param_2;
      puVar4 = (uint *)sub_08047A2C();
      uVar5 = *puVar4;
      puVar10 = puVar11;
      if (((uint)puVar11 & ~(uVar5 << 0x12) & 0x30000000) != 0) {
        puVar10 = (undefined *)((uint)puVar11 | 0x40000000);
      }
      puVar11 = (undefined *)((uint)puVar10 | uVar5 & 0x1c00000);
      *puVar4 = uVar5 | (uint)((int)puVar10 << 1) >> 0x1b;
      bVar13 = ((uint)puVar10 & 0xf) != 8;
      if (bVar13) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x20000;
      }
      if (!bVar13 && (uVar3 & ~(uint)puVar11) == 0) {
        puVar11 = (undefined *)((uint)puVar11 | 0xc00000);
      }
      if (((uint)puVar11 & 0x10000000) == 0) {
        if (((uint)puVar11 & 0x40000000) == 0) {
          if ((uVar5 & 0x100) == 0) {
            param_1 = (undefined *)((uint)param_1 & 0x80000000 | 0x7fc00000);
            goto sub_08054E78;
          }
        }
        else if ((uVar5 & 0x1000) == 0) {
          return param_1;
        }
      }
      else if ((uVar5 & 0x400) == 0) {
        return (undefined *)((uint)param_1 & 0x80000000 | 0x7f800000);
      }
    }
    puVar8 = (undefined *)sub_080491E4(param_1,param_2,puVar8,uVar9,puVar11,in_lr,puVar11,in_lr);
    if (((uint)puVar11 & 0xf) != 9) {
      return puVar8;
    }
  }
  if (((uint)puVar11 & 0x100000) == 0) {
    puVar11 = (undefined *)((uint)puVar11 & (int)puVar8 << 0x10);
    if (puVar11 != (undefined *)0x0) {
      puVar11 = (undefined *)0x1;
    }
    return puVar11;
  }
  if (((uint)puVar11 & 0xf0000) != 0) {
    if (((uint)puVar8 & 8) == 0) {
      return (undefined *)(2 - (int)puVar8);
    }
    return puVar8;
  }
  uVar5 = (int)puVar8 << 0x1d;
  if ((bool)((byte)((uint)puVar8 >> 3) & 1)) {
    uVar5 = uVar5 | 0x30000000;
  }
  puVar4 = (uint *)sub_08047A2C();
  *puVar4 = *puVar4 & 0xfffffff | uVar5;
  return puVar8;
}


/* sub_08054C68 @ 0x08054C68 */

void sub_08054C68(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar2 = param_1 << 8;
  uVar3 = param_2 << 8;
  if ((param_3 & 0xff0000) == 0) {
    if (uVar2 < 0x10000) {
      param_3 = param_3 - 0x100000;
      uVar2 = param_1 << 0x18;
    }
    if ((uVar2 & 0xff000000) == 0) {
      param_3 = param_3 - 0x80000;
      uVar2 = uVar2 << 8;
    }
    if ((uVar2 & 0xf0000000) == 0) {
      param_3 = param_3 - 0x40000;
      uVar2 = uVar2 << 4;
    }
    uVar1 = uVar2 & 0xc0000000;
    if ((uVar2 & 0xc0000000) == 0) {
      param_3 = param_3 - 0x20000;
      uVar2 = uVar2 << 2;
      uVar1 = uVar2;
    }
    if ((int)uVar1 < 0) {
      param_3 = param_3 + 0x10000;
    }
    else {
      uVar2 = uVar2 << 1;
    }
    if ((param_4 & 0xff0000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x08054cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  if (uVar3 < 0x10000) {
    param_4 = param_4 - 0x100000;
    uVar3 = param_2 << 0x18;
  }
  if ((uVar3 & 0xff000000) == 0) {
    param_4 = param_4 - 0x80000;
    uVar3 = uVar3 << 8;
  }
  if ((uVar3 & 0xf0000000) == 0) {
    param_4 = param_4 - 0x40000;
    uVar3 = uVar3 << 4;
  }
  uVar1 = uVar3 & 0xc0000000;
  if ((uVar3 & 0xc0000000) == 0) {
    param_4 = param_4 - 0x20000;
    uVar3 = uVar3 << 2;
    uVar1 = uVar3;
  }
  if ((int)uVar1 < 0) {
    param_4 = param_4 + 0x10000;
  }
  else {
    uVar3 = uVar3 << 1;
  }
                    /* WARNING: Could not recover jumptable at 0x08054cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar2 | 0x80000000,uVar3,param_3,param_4);
  return;
}


/* sub_08054C6C @ 0x08054C6C */

void sub_08054C6C(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar2 = param_1 << 8;
  uVar3 = param_2 << 8;
  if ((param_3 & 0xff0000) == 0) {
    if (uVar2 < 0x10000) {
      param_3 = param_3 - 0x100000;
      uVar2 = param_1 << 0x18;
    }
    if ((uVar2 & 0xff000000) == 0) {
      param_3 = param_3 - 0x80000;
      uVar2 = uVar2 << 8;
    }
    if ((uVar2 & 0xf0000000) == 0) {
      param_3 = param_3 - 0x40000;
      uVar2 = uVar2 << 4;
    }
    uVar1 = uVar2 & 0xc0000000;
    if ((uVar2 & 0xc0000000) == 0) {
      param_3 = param_3 - 0x20000;
      uVar2 = uVar2 << 2;
      uVar1 = uVar2;
    }
    if ((int)uVar1 < 0) {
      param_3 = param_3 + 0x10000;
    }
    else {
      uVar2 = uVar2 << 1;
    }
    if ((param_4 & 0xff0000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x08054cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  if (uVar3 < 0x10000) {
    param_4 = param_4 - 0x100000;
    uVar3 = param_2 << 0x18;
  }
  if ((uVar3 & 0xff000000) == 0) {
    param_4 = param_4 - 0x80000;
    uVar3 = uVar3 << 8;
  }
  if ((uVar3 & 0xf0000000) == 0) {
    param_4 = param_4 - 0x40000;
    uVar3 = uVar3 << 4;
  }
  uVar1 = uVar3 & 0xc0000000;
  if ((uVar3 & 0xc0000000) == 0) {
    param_4 = param_4 - 0x20000;
    uVar3 = uVar3 << 2;
    uVar1 = uVar3;
  }
  if ((int)uVar1 < 0) {
    param_4 = param_4 + 0x10000;
  }
  else {
    uVar3 = uVar3 << 1;
  }
                    /* WARNING: Could not recover jumptable at 0x08054cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar2 | 0x80000000,uVar3,param_3,param_4);
  return;
}


/* sub_08054D00 @ 0x08054D00 */

uint sub_08054D00(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  
  puVar1 = (uint *)sub_08047A2C();
  uVar3 = *puVar1;
  if ((uVar3 & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((uVar3 & 0x800) == 0) {
    param_4 = 0xc1 - (param_1 & 0x80000000 | param_1 >> 0x17 & 0xfffffeff);
    if ((param_4 & 0x7fffffff) < 0x18) {
      uVar4 = param_1 << (0x20 - param_4 & 0xff);
      uVar3 = 0x20 - (0x20 - param_4);
      param_4 = uVar3 & 0x80000000;
      param_1 = (param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | param_4;
      if (uVar4 == 0) {
        uVar3 = 0;
        uVar6 = param_3;
        if ((param_3 & 0x40000000) == 0) {
          return param_1;
        }
      }
      else {
        *puVar1 = *puVar1 | 8;
        uVar3 = uVar4 << 1;
        if (SUB41(uVar4 >> 0x1f,0)) {
          if (uVar3 == 0) {
            bVar7 = (bool)((byte)(param_3 >> 0x1e) & 1);
            uVar4 = ~((int)param_3 >> 0x1f);
            if (!bVar7 || uVar4 == 0) {
              param_1 = param_1 + 1;
            }
            if (!bVar7) {
              param_1 = param_1 & 0xfffffffe;
            }
          }
          else {
            param_1 = param_1 + 1;
          }
        }
        param_4 = uVar4;
        uVar6 = param_3 | 0x40000000;
      }
    }
    else {
      uVar3 = *puVar1 | 8;
      *puVar1 = uVar3;
      if (SBORROW4(param_4 & 0x7fffffff,-0x7fffffe7)) {
        param_1 = param_4 & 0x80000000;
      }
      else {
        uVar4 = param_1 & 0x7fffff;
        param_1 = (param_4 & 0x80000000) + 1;
        if (uVar4 == 0 && (param_3 & 0x80000000) == 0) {
          param_1 = param_4 & 0x80000000;
        }
      }
      uVar6 = 0x40000000;
    }
    if ((uVar6 & 0x10) == 0) {
      param_3 = uVar3;
    }
    puVar1 = (uint *)sub_08047A2C();
    uVar2 = *puVar1;
    if ((uVar6 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    uVar4 = uVar6 | uVar2 & 0x1c00000;
    *puVar1 = uVar2 | (uVar6 << 1) >> 0x1b;
    bVar7 = (uVar6 & 0xf) != 8;
    if (bVar7) {
      uVar6 = uVar6 & 0x70;
      uVar4 = uVar4 | uVar6 << 3;
    }
    else {
      uVar6 = 0x20000;
    }
    if (!bVar7 && (uVar6 & ~uVar4) == 0) {
      uVar4 = uVar4 | 0xc00000;
    }
    if ((uVar4 & 0x20000000) == 0) {
      if ((uVar4 & 0x10000000) == 0) {
        if ((uVar4 & 0x40000000) != 0) {
          uVar2 = uVar2 & 0x1000;
          goto joined_r0x08054900;
        }
        if ((uVar4 & 0x8000000) == 0) {
          if ((uVar2 & 0x100) == 0) {
            uVar6 = uVar3;
            if ((uVar4 & 0x80) == 0) {
              uVar6 = param_1;
            }
            uVar6 = uVar6 & 0x80000000;
            if ((uVar4 & 0x10) == 0) {
              uVar2 = uVar6 | 0x7fc00000;
            }
            else {
              uVar2 = 0;
              uVar3 = uVar6;
            }
            uVar5 = uVar4 & 0xf;
            if (uVar5 != 9) {
              if (uVar5 != 8) {
                return uVar2;
              }
              if (uVar5 == 8 && (uVar4 & 0x40) == 0) {
                if ((uVar4 & 0x10) == 0) {
                  uVar3 = 0x7fc00000;
                }
                else {
                  uVar3 = 0;
                }
                return uVar3;
              }
              if ((uVar4 & 0x10000) != 0) {
                return 0;
              }
              if ((uVar4 & 0x20) != 0) {
                uVar3 = 0xffffffff;
                if (uVar6 != 0) {
                  uVar3 = 0;
                }
                return uVar3;
              }
              if ((uVar4 & 0x10) == 0) {
                uVar4 = 0x7fffffff;
                uVar3 = uVar2;
              }
              else {
                uVar4 = 0xffffffff;
              }
              if ((uVar3 & 0x80000000) != 0) {
                uVar4 = ~uVar4;
              }
              return uVar4;
            }
            uVar3 = 8;
            goto sub_08054F3C;
          }
        }
        else if ((uVar2 & 0x200) == 0) {
          if ((uVar4 & 0x10) == 0) {
            uVar3 = param_1 ^ param_3;
          }
          else {
            uVar3 = uVar3 ^ param_4;
          }
          goto _08054948;
        }
      }
      else if ((uVar2 & 0x400) == 0) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = param_1 & 0x80000000;
        }
        else {
          uVar3 = uVar3 & 0x80000000;
        }
_08054948:
        if ((uVar4 & 0x10) == 0) {
          uVar3 = uVar3 & 0x80000000 | 0x7f800000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
    }
    else {
      uVar2 = uVar2 & 0x800;
joined_r0x08054900:
      if (uVar2 == 0) {
        return param_1;
      }
    }
  }
  else {
    uVar4 = param_3 | 0x20000000;
  }
  uVar3 = sub_080491E4(param_1,uVar3,param_3,param_4,uVar4,in_lr,uVar4,in_lr);
  if ((uVar4 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if ((uVar4 & 0x100000) == 0) {
    uVar4 = uVar4 & uVar3 << 0x10;
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    return uVar4;
  }
  if ((uVar4 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08054D04 @ 0x08054D04 */

uint sub_08054D04(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  
  puVar1 = (uint *)sub_08047A2C();
  uVar3 = *puVar1;
  if ((uVar3 & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((uVar3 & 0x800) == 0) {
    param_4 = 0xc1 - (param_1 & 0x80000000 | param_1 >> 0x17 & 0xfffffeff);
    if ((param_4 & 0x7fffffff) < 0x18) {
      uVar4 = param_1 << (0x20 - param_4 & 0xff);
      uVar3 = 0x20 - (0x20 - param_4);
      param_4 = uVar3 & 0x80000000;
      param_1 = (param_1 & 0xffffff | 0x800000) >> (uVar3 & 0xff) | param_4;
      if (uVar4 == 0) {
        uVar3 = 0;
        uVar6 = param_3;
        if ((param_3 & 0x40000000) == 0) {
          return param_1;
        }
      }
      else {
        *puVar1 = *puVar1 | 8;
        uVar3 = uVar4 << 1;
        if (SUB41(uVar4 >> 0x1f,0)) {
          if (uVar3 == 0) {
            bVar7 = (bool)((byte)(param_3 >> 0x1e) & 1);
            uVar4 = ~((int)param_3 >> 0x1f);
            if (!bVar7 || uVar4 == 0) {
              param_1 = param_1 + 1;
            }
            if (!bVar7) {
              param_1 = param_1 & 0xfffffffe;
            }
          }
          else {
            param_1 = param_1 + 1;
          }
        }
        param_4 = uVar4;
        uVar6 = param_3 | 0x40000000;
      }
    }
    else {
      uVar3 = *puVar1 | 8;
      *puVar1 = uVar3;
      if (SBORROW4(param_4 & 0x7fffffff,-0x7fffffe7)) {
        param_1 = param_4 & 0x80000000;
      }
      else {
        uVar4 = param_1 & 0x7fffff;
        param_1 = (param_4 & 0x80000000) + 1;
        if (uVar4 == 0 && (param_3 & 0x80000000) == 0) {
          param_1 = param_4 & 0x80000000;
        }
      }
      uVar6 = 0x40000000;
    }
    if ((uVar6 & 0x10) == 0) {
      param_3 = uVar3;
    }
    puVar1 = (uint *)sub_08047A2C();
    uVar2 = *puVar1;
    if ((uVar6 & ~(uVar2 << 0x12) & 0x30000000) != 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    uVar4 = uVar6 | uVar2 & 0x1c00000;
    *puVar1 = uVar2 | (uVar6 << 1) >> 0x1b;
    bVar7 = (uVar6 & 0xf) != 8;
    if (bVar7) {
      uVar6 = uVar6 & 0x70;
      uVar4 = uVar4 | uVar6 << 3;
    }
    else {
      uVar6 = 0x20000;
    }
    if (!bVar7 && (uVar6 & ~uVar4) == 0) {
      uVar4 = uVar4 | 0xc00000;
    }
    if ((uVar4 & 0x20000000) == 0) {
      if ((uVar4 & 0x10000000) == 0) {
        if ((uVar4 & 0x40000000) != 0) {
          uVar2 = uVar2 & 0x1000;
          goto joined_r0x08054900;
        }
        if ((uVar4 & 0x8000000) == 0) {
          if ((uVar2 & 0x100) == 0) {
            uVar6 = uVar3;
            if ((uVar4 & 0x80) == 0) {
              uVar6 = param_1;
            }
            uVar6 = uVar6 & 0x80000000;
            if ((uVar4 & 0x10) == 0) {
              uVar2 = uVar6 | 0x7fc00000;
            }
            else {
              uVar2 = 0;
              uVar3 = uVar6;
            }
            uVar5 = uVar4 & 0xf;
            if (uVar5 != 9) {
              if (uVar5 != 8) {
                return uVar2;
              }
              if (uVar5 == 8 && (uVar4 & 0x40) == 0) {
                if ((uVar4 & 0x10) == 0) {
                  uVar3 = 0x7fc00000;
                }
                else {
                  uVar3 = 0;
                }
                return uVar3;
              }
              if ((uVar4 & 0x10000) != 0) {
                return 0;
              }
              if ((uVar4 & 0x20) != 0) {
                uVar3 = 0xffffffff;
                if (uVar6 != 0) {
                  uVar3 = 0;
                }
                return uVar3;
              }
              if ((uVar4 & 0x10) == 0) {
                uVar4 = 0x7fffffff;
                uVar3 = uVar2;
              }
              else {
                uVar4 = 0xffffffff;
              }
              if ((uVar3 & 0x80000000) != 0) {
                uVar4 = ~uVar4;
              }
              return uVar4;
            }
            uVar3 = 8;
            goto sub_08054F3C;
          }
        }
        else if ((uVar2 & 0x200) == 0) {
          if ((uVar4 & 0x10) == 0) {
            uVar3 = param_1 ^ param_3;
          }
          else {
            uVar3 = uVar3 ^ param_4;
          }
          goto _08054948;
        }
      }
      else if ((uVar2 & 0x400) == 0) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = param_1 & 0x80000000;
        }
        else {
          uVar3 = uVar3 & 0x80000000;
        }
_08054948:
        if ((uVar4 & 0x10) == 0) {
          uVar3 = uVar3 & 0x80000000 | 0x7f800000;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
    }
    else {
      uVar2 = uVar2 & 0x800;
joined_r0x08054900:
      if (uVar2 == 0) {
        return param_1;
      }
    }
  }
  else {
    uVar4 = param_3 | 0x20000000;
  }
  uVar3 = sub_080491E4(param_1,uVar3,param_3,param_4,uVar4,in_lr,uVar4,in_lr);
  if ((uVar4 & 0xf) != 9) {
    return uVar3;
  }
sub_08054F3C:
  if ((uVar4 & 0x100000) == 0) {
    uVar4 = uVar4 & uVar3 << 0x10;
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    return uVar4;
  }
  if ((uVar4 & 0xf0000) == 0) {
    uVar4 = uVar3 << 0x1d;
    if ((bool)((byte)(uVar3 >> 3) & 1)) {
      uVar4 = uVar4 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar4;
    return uVar3;
  }
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  return 2 - uVar3;
}


/* sub_08054DEC @ 0x08054DEC */

uint sub_08054DEC(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  puVar1 = (uint *)sub_08047A2C();
  if ((*puVar1 & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((*puVar1 & 0x800) == 0) {
    return param_1;
  }
  uVar2 = param_1 & 0x80000000 | 0x60000000;
  if ((param_1 & 0xff0000) == 0) {
    param_1 = param_1 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_1 & 0xff0000) == 0) {
    param_1 = param_1 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_1 & 0xf00000) == 0) {
    param_1 = param_1 << 4;
    uVar2 = uVar2 + 0xfe000000;
  }
  if ((param_1 & 0xc00000) == 0) {
    param_1 = param_1 << 2;
    uVar2 = uVar2 - 0x1000000;
  }
  if ((param_1 & 0x800000) == 0) {
    param_1 = param_1 << 1;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  uVar3 = param_3 | 0x20000000;
  uVar2 = sub_080491E4(param_1 & 0xff7fffff | uVar2,uVar2,param_3,param_4,uVar3,in_lr,uVar3,in_lr);
  if ((uVar3 & 0xf) != 9) {
    return uVar2;
  }
  if ((uVar3 & 0x100000) == 0) {
    uVar3 = uVar3 & uVar2 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((uVar3 & 0xf0000) != 0) {
    if ((uVar2 & 8) == 0) {
      return 2 - uVar2;
    }
    return uVar2;
  }
  uVar3 = uVar2 << 0x1d;
  if ((bool)((byte)(uVar2 >> 3) & 1)) {
    uVar3 = uVar3 | 0x30000000;
  }
  puVar1 = (uint *)sub_08047A2C();
  *puVar1 = *puVar1 & 0xfffffff | uVar3;
  return uVar2;
}


/* sub_08054DF0 @ 0x08054DF0 */

uint sub_08054DF0(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  puVar1 = (uint *)sub_08047A2C();
  if ((*puVar1 & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((*puVar1 & 0x800) == 0) {
    return param_1;
  }
  uVar2 = param_1 & 0x80000000 | 0x60000000;
  if ((param_1 & 0xff0000) == 0) {
    param_1 = param_1 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_1 & 0xff0000) == 0) {
    param_1 = param_1 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_1 & 0xf00000) == 0) {
    param_1 = param_1 << 4;
    uVar2 = uVar2 + 0xfe000000;
  }
  if ((param_1 & 0xc00000) == 0) {
    param_1 = param_1 << 2;
    uVar2 = uVar2 - 0x1000000;
  }
  if ((param_1 & 0x800000) == 0) {
    param_1 = param_1 << 1;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  uVar3 = param_3 | 0x20000000;
  uVar2 = sub_080491E4(param_1 & 0xff7fffff | uVar2,uVar2,param_3,param_4,uVar3,in_lr,uVar3,in_lr);
  if ((uVar3 & 0xf) != 9) {
    return uVar2;
  }
  if ((uVar3 & 0x100000) == 0) {
    uVar3 = uVar3 & uVar2 << 0x10;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((uVar3 & 0xf0000) == 0) {
    uVar3 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar3;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08054DF4 @ 0x08054DF4 */

uint sub_08054DF4(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5
                 )

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  puVar1 = (uint *)sub_08047A2C();
  if ((*puVar1 & 0x1000000) != 0) {
    return param_5 & 0x80000000;
  }
  if ((*puVar1 & 0x800) == 0) {
    return param_5;
  }
  uVar2 = param_5 & 0x80000000 | 0x60000000;
  if ((param_5 & 0xff0000) == 0) {
    param_5 = param_5 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_5 & 0xff0000) == 0) {
    param_5 = param_5 << 8;
    uVar2 = uVar2 + 0xfc000000;
  }
  if ((param_5 & 0xf00000) == 0) {
    param_5 = param_5 << 4;
    uVar2 = uVar2 + 0xfe000000;
  }
  if ((param_5 & 0xc00000) == 0) {
    param_5 = param_5 << 2;
    uVar2 = uVar2 - 0x1000000;
  }
  if ((param_5 & 0x800000) == 0) {
    param_5 = param_5 << 1;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  uVar2 = sub_080491E4(param_5 & 0xff7fffff | uVar2,uVar2,param_3,param_4,param_3 | 0x20000000,in_lr
                      );
  if ((param_3 & 0xf) != 9) {
    return uVar2;
  }
  if ((param_3 & 0x100000) == 0) {
    uVar2 = (param_3 | 0x20000000) & uVar2 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((param_3 & 0xf0000) == 0) {
    uVar3 = uVar2 << 0x1d;
    if ((bool)((byte)(uVar2 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar1 = (uint *)sub_08047A2C();
    *puVar1 = *puVar1 & 0xfffffff | uVar3;
    return uVar2;
  }
  if ((uVar2 & 8) != 0) {
    return uVar2;
  }
  return 2 - uVar2;
}


/* sub_08054E74 @ 0x08054E74 */

/* WARNING: Removing unreachable block (ram,0x08054f54) */

ulonglong sub_08054E74(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar5 = in_r12 & 0xf;
  if (uVar5 == 9) {
    if ((in_r12 & 0x100000) == 0) {
      uVar5 = in_r12 & 0x80000;
      if (uVar5 != 0) {
        uVar5 = 1;
      }
      return CONCAT44(param_2,uVar5);
    }
    if ((in_r12 & 0xf0000) == 0) {
      puVar3 = (uint *)sub_08047A2C();
      *puVar3 = *puVar3 & 0xfffffff | 0x30000000;
      return 0x3000000000000008;
    }
    return CONCAT44(in_r12,8) & 0xf0000ffffffff;
  }
  if (uVar5 != 8) {
    return CONCAT44(param_2,param_1);
  }
  if (uVar5 == 8 && (in_r12 & 0x40) == 0) {
    if ((in_r12 & 0x10) == 0) {
      uVar2 = 0x7fc00000;
    }
    else {
      param_2 = 0x7ff80000;
      uVar2 = 0;
    }
    return CONCAT44(param_2,uVar2);
  }
  if ((in_r12 & 0x10000) != 0) {
    return 0;
  }
  if ((in_r12 & 0x20) != 0) {
    uVar2 = 0xffffffff;
    uVar4 = 0xffffffff;
    if ((param_3 & 0x80000000) != 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    return CONCAT44(uVar4,uVar2);
  }
  if ((in_r12 & 0x10) == 0) {
    uVar1 = 0x7fffffff;
    uVar5 = param_2;
  }
  else {
    uVar5 = 0x7fffffff;
    uVar1 = 0xffffffff;
    param_1 = param_2;
  }
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = ~uVar1;
    uVar5 = ~uVar5;
  }
  return CONCAT44(uVar5,uVar1);
}


/* sub_08054E78 @ 0x08054E78 */

/* WARNING: Removing unreachable block (ram,0x08054f54) */

ulonglong sub_08054E78(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar5 = in_r12 & 0xf;
  if (uVar5 == 9) {
    if ((in_r12 & 0x100000) == 0) {
      uVar5 = in_r12 & 0x80000;
      if (uVar5 != 0) {
        uVar5 = 1;
      }
      return CONCAT44(param_2,uVar5);
    }
    if ((in_r12 & 0xf0000) == 0) {
      puVar3 = (uint *)sub_08047A2C();
      *puVar3 = *puVar3 & 0xfffffff | 0x30000000;
      return 0x3000000000000008;
    }
    return CONCAT44(in_r12,8) & 0xf0000ffffffff;
  }
  if (uVar5 != 8) {
    return CONCAT44(param_2,param_1);
  }
  if (uVar5 == 8 && (in_r12 & 0x40) == 0) {
    if ((in_r12 & 0x10) == 0) {
      uVar2 = 0x7fc00000;
    }
    else {
      param_2 = 0x7ff80000;
      uVar2 = 0;
    }
    return CONCAT44(param_2,uVar2);
  }
  if ((in_r12 & 0x10000) != 0) {
    return 0;
  }
  if ((in_r12 & 0x20) != 0) {
    uVar2 = 0xffffffff;
    uVar4 = 0xffffffff;
    if ((param_3 & 0x80000000) != 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    return CONCAT44(uVar4,uVar2);
  }
  if ((in_r12 & 0x10) == 0) {
    uVar1 = 0x7fffffff;
    uVar5 = param_2;
  }
  else {
    uVar5 = 0x7fffffff;
    uVar1 = 0xffffffff;
    param_1 = param_2;
  }
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = ~uVar1;
    uVar5 = ~uVar5;
  }
  return CONCAT44(uVar5,uVar1);
}


/* sub_08054F10 @ 0x08054F10 */

uint sub_08054F10(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint in_r12;
  
  uVar1 = sub_080491E4();
  if ((in_r12 & 0xf) != 9) {
    return uVar1;
  }
  if ((in_r12 & 0x100000) == 0) {
    uVar1 = in_r12 & uVar1 << 0x10;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar3 = uVar1 << 0x1d;
    if ((bool)((byte)(uVar1 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar2 = (uint *)sub_08047A2C();
    *puVar2 = *puVar2 & 0xfffffff | uVar3;
    return uVar1;
  }
  if ((uVar1 & 8) != 0) {
    return uVar1;
  }
  return 2 - uVar1;
}


/* sub_08054F14 @ 0x08054F14 */

uint sub_08054F14(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint in_r12;
  
  uVar1 = sub_080491E4();
  if ((in_r12 & 0xf) != 9) {
    return uVar1;
  }
  if ((in_r12 & 0x100000) == 0) {
    uVar1 = in_r12 & uVar1 << 0x10;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  if ((in_r12 & 0xf0000) == 0) {
    uVar3 = uVar1 << 0x1d;
    if ((bool)((byte)(uVar1 >> 3) & 1)) {
      uVar3 = uVar3 | 0x30000000;
    }
    puVar2 = (uint *)sub_08047A2C();
    *puVar2 = *puVar2 & 0xfffffff | uVar3;
    return uVar1;
  }
  if ((uVar1 & 8) == 0) {
    return 2 - uVar1;
  }
  return uVar1;
}


/* sub_08054F38 @ 0x08054F38 */

ulonglong sub_08054F38(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint in_r12;
  
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & param_1 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return CONCAT44(param_2,uVar2);
  }
  if ((in_r12 & 0xf0000) != 0) {
    if ((param_1 & 8) != 0) {
      return CONCAT44(in_r12,param_1) & 0xf0000ffffffff;
    }
    return CONCAT44(param_2,2 - param_1);
  }
  uVar2 = param_1 << 0x1d;
  if ((bool)((byte)(param_1 >> 3) & 1)) {
    uVar2 = uVar2 | 0x30000000;
  }
  puVar1 = (uint *)sub_08047A2C();
  *puVar1 = *puVar1 & 0xfffffff | uVar2;
  return CONCAT44(uVar2,param_1);
}


/* sub_08054F3C @ 0x08054F3C */

ulonglong sub_08054F3C(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint in_r12;
  
  if ((in_r12 & 0x100000) == 0) {
    uVar2 = in_r12 & param_1 << 0x10;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return CONCAT44(param_2,uVar2);
  }
  if ((in_r12 & 0xf0000) != 0) {
    if ((param_1 & 8) == 0) {
      return CONCAT44(param_2,2 - param_1);
    }
    return CONCAT44(in_r12,param_1) & 0xf0000ffffffff;
  }
  uVar2 = param_1 << 0x1d;
  if ((bool)((byte)(param_1 >> 3) & 1)) {
    uVar2 = uVar2 | 0x30000000;
  }
  puVar1 = (uint *)sub_08047A2C();
  *puVar1 = *puVar1 & 0xfffffff | uVar2;
  return CONCAT44(uVar2,param_1);
}



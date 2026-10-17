
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00630d25(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1[0x13] == -1) {
    uVar2 = (-(uint)((param_3 & 0x80) != 0) & 0x4000) + 0x4000;
    if ((param_3 & 0x20) == 0) {
      uVar2 = uVar2 | 0x100;
    }
    uVar3 = 0x40;
    if ((param_3 & 0x40) != 0) {
      uVar2 = uVar2 | 0x400;
    }
    if ((param_3 & 8) != 0) {
      param_3 = param_3 | 2;
      uVar2 = uVar2 | 8;
    }
    if ((param_3 & 0x10) != 0) {
      param_3 = param_3 | 2;
      uVar2 = uVar2 | 0x200;
    }
    if ((param_3 & 2) == 0) {
      if ((param_3 & 1) == 0) {
        return (int *)0x0;
      }
    }
    else {
      if ((param_3 & 1) == 0) {
        uVar2 = uVar2 | 1;
      }
      else {
        uVar2 = uVar2 | 2;
      }
      if ((param_3 & 0x4d) == 0) {
        param_3 = param_3 | 0x10;
        uVar2 = uVar2 | 0x200;
      }
    }
    param_4 = param_4 & (DAT_00654598 | _DAT_006545a0 | _DAT_0065459c);
    if (param_4 != 0) {
      if (param_4 == 0x800) {
        uVar3 = 0x10;
      }
      else if (param_4 == 0xa00) {
        uVar3 = 0x20;
      }
      else if (param_4 == 0xc00) {
        uVar3 = 0x30;
      }
      else if (param_4 == 0xe00) {
        uVar3 = 0x40;
      }
    }
    iVar1 = FUN_00628550(param_2,uVar2,uVar3,0x180);
    param_1[0x13] = iVar1;
    if (iVar1 != -1) {
      if (param_1[0xc] < 0) {
        FUN_0062fb80(param_1 + 0xd);
      }
      param_1[0x14] = 1;
      if ((param_1[2] == 0) && (param_1[5] == 0)) {
        iVar1 = FUN_00631d33(0x200);
        if (iVar1 == 0) {
          param_1[2] = 1;
        }
        else {
          FUN_00630c81(iVar1,iVar1 + 0x200,1);
        }
      }
      if (((param_3 & 4) == 0) || (iVar1 = (**(code **)(*param_1 + 0xc))(0,2,param_3), iVar1 != -1))
      {
        if (param_1[0xc] < 0) {
          FUN_0062fb8b(param_1 + 0xd);
          return param_1;
        }
        return param_1;
      }
      FUN_0063078c();
      if (param_1[0xc] < 0) {
        FUN_0062fb8b(param_1 + 0xd);
      }
    }
  }
  return (int *)0x0;
}


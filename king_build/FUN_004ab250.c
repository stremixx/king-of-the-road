
int * __thiscall FUN_004ab250(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar4 = param_2[1];
  iVar5 = *param_2;
  iVar3 = *param_1;
  uVar1 = (iVar4 - iVar5) / 0xc;
  if ((uint)((param_1[2] - iVar3) / 0xc) < uVar1) {
    iVar3 = FUN_004a46c0(uVar1,iVar5,iVar4);
    iVar4 = param_1[1];
    for (iVar5 = *param_1; iVar5 != iVar4; iVar5 = iVar5 + 0xc) {
      FUN_00492340();
    }
    iVar4 = (param_1[2] - *param_1) / 0xc;
    if (iVar4 != 0) {
      FUN_0044b440(*param_1,iVar4 * 0xc);
    }
    *param_1 = iVar3;
    param_1[2] = iVar3 + uVar1 * 0xc;
  }
  else {
    uVar2 = (param_1[1] - iVar3) / 0xc;
    if (uVar2 < uVar1) {
      local_4 = (int)(uVar2 * 0xc) / 0xc;
      if (0 < local_4) {
        do {
          FUN_0040c060(iVar5);
          iVar5 = iVar5 + 0xc;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      FUN_004a2e60(*param_2 + ((param_1[1] - *param_1) / 0xc) * 0xc,param_2[1],param_1[1],uVar1);
    }
    else {
      iVar4 = (iVar4 - iVar5) / 0xc;
      if (0 < iVar4) {
        do {
          FUN_0040c060(iVar5);
          iVar5 = iVar5 + 0xc;
          iVar3 = iVar3 + 0xc;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = param_1[1];
      for (; iVar3 != iVar4; iVar3 = iVar3 + 0xc) {
        FUN_00492340();
      }
    }
  }
  param_1[1] = *param_1 + uVar1 * 0xc;
  return param_1;
}


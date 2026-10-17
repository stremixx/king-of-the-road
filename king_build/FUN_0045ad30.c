
int * __thiscall FUN_0045ad30(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar2 = param_2[1];
  puVar4 = (undefined4 *)*param_2;
  puVar5 = (undefined4 *)*param_1;
  uVar7 = iVar2 - (int)puVar4 >> 2;
  if ((uint)(param_1[2] - (int)puVar5 >> 2) < uVar7) {
    iVar2 = FUN_00462030(uVar7,puVar4,iVar2);
    iVar3 = param_1[2] - *param_1 >> 2;
    if (iVar3 != 0) {
      FUN_0044b440(*param_1,iVar3 << 2);
    }
    *param_1 = iVar2;
    param_1[2] = iVar2 + uVar7 * 4;
    param_1[1] = iVar2 + uVar7 * 4;
    return param_1;
  }
  uVar6 = param_1[1] - (int)puVar5 >> 2;
  if (uVar6 < uVar7) {
    iVar2 = (int)(uVar6 * 4) >> 2;
    if (0 < iVar2) {
      do {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_0046b5a0(*param_2 + (param_1[1] - *param_1 >> 2) * 4,param_2[1],param_1[1],param_2);
  }
  else {
    iVar2 = iVar2 - (int)puVar4 >> 2;
    if (0 < iVar2) {
      do {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      param_1[1] = *param_1 + uVar7 * 4;
      return param_1;
    }
  }
  param_1[1] = *param_1 + uVar7 * 4;
  return param_1;
}


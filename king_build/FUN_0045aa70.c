
int * __thiscall FUN_0045aa70(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_4;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar5 = param_2[1];
  puVar8 = (undefined4 *)*param_2;
  puVar4 = (undefined4 *)*param_1;
  uVar1 = (iVar5 - (int)puVar8) / 0x18;
  if ((uint)((param_1[2] - (int)puVar4) / 0x18) < uVar1) {
    iVar3 = FUN_00461b80(uVar1,puVar8,iVar5);
    iVar5 = param_1[1];
    for (iVar7 = *param_1; iVar7 != iVar5; iVar7 = iVar7 + 0x18) {
      FUN_0040cbb0();
    }
    iVar5 = (param_1[2] - *param_1) / 0x18;
    if (iVar5 != 0) {
      FUN_0044b440(*param_1,iVar5 * 0x18);
    }
    *param_1 = iVar3;
    param_1[2] = iVar3 + uVar1 * 0x18;
  }
  else {
    uVar2 = (param_1[1] - (int)puVar4) / 0x18;
    if (uVar2 < uVar1) {
      local_4 = (int)(uVar2 * 0x18) / 0x18;
      if (0 < local_4) {
        puVar6 = puVar8 + 2;
        do {
          *puVar4 = *puVar8;
          puVar4[1] = puVar8[1];
          FUN_0044c100(puVar6);
          puVar8 = puVar8 + 6;
          puVar6 = puVar6 + 6;
          puVar4 = puVar4 + 6;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      FUN_004661a0(*param_2 + ((param_1[1] - *param_1) / 0x18) * 0x18,param_2[1],param_1[1],param_2)
      ;
    }
    else {
      iVar5 = (iVar5 - (int)puVar8) / 0x18;
      if (0 < iVar5) {
        do {
          FUN_0045ac50(puVar8);
          puVar8 = puVar8 + 6;
          puVar4 = puVar4 + 6;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      puVar8 = (undefined4 *)param_1[1];
      for (; puVar4 != puVar8; puVar4 = puVar4 + 6) {
        FUN_0040cbb0();
      }
    }
  }
  param_1[1] = *param_1 + uVar1 * 0x18;
  return param_1;
}



int * __thiscall FUN_00479420(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_8;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar4 = param_2[1];
  puVar5 = (undefined4 *)*param_2;
  uVar1 = (iVar4 - (int)puVar5) / 0x28;
  local_8 = (undefined4 *)*param_1;
  if ((uint)((param_1[2] - (int)local_8) / 0x28) < uVar1) {
    iVar3 = FUN_0047adc0(uVar1,puVar5,iVar4);
    iVar4 = (param_1[2] - *param_1) / 0x28;
    if (iVar4 != 0) {
      FUN_0044b440(*param_1,iVar4 * 0x28);
    }
    *param_1 = iVar3;
    param_1[2] = iVar3 + uVar1 * 0x28;
  }
  else {
    uVar2 = (param_1[1] - (int)local_8) / 0x28;
    if (uVar2 < uVar1) {
      iVar4 = (int)(uVar2 * 0x28) / 0x28;
      if (0 < iVar4) {
        do {
          puVar6 = puVar5;
          puVar7 = local_8;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_8 = local_8 + 10;
          iVar4 = iVar4 + -1;
          puVar5 = puVar5 + 10;
        } while (iVar4 != 0);
      }
      FUN_0047d560(*param_2 + ((param_1[1] - *param_1) / 0x28) * 0x28,param_2[1],param_1[1],param_2)
      ;
    }
    else {
      iVar4 = (iVar4 - (int)puVar5) / 0x28;
      if (0 < iVar4) {
        do {
          puVar6 = puVar5;
          puVar7 = local_8;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = puVar5 + 10;
          local_8 = local_8 + 10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  param_1[1] = *param_1 + uVar1 * 0x28;
  return param_1;
}


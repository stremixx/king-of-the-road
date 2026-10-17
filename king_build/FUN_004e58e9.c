
uint FUN_004e58e9(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_dc [52];
  int local_c;
  uint local_8;
  
  local_8 = 0;
  puVar5 = param_3;
  puVar6 = local_dc;
  for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar1 = (int *)FUN_004e5507(param_1);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)FUN_004e55f0(piVar1);
    if (piVar2 != (int *)0x0) {
      local_8 = (**(code **)(*piVar2 + 0x34))(param_2,param_3);
      if ((local_8 & 1) != 0) {
        FUN_004e4f28(param_3);
        return local_8;
      }
      puVar5 = local_dc;
      puVar6 = param_3;
      for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    local_8 = (**(code **)(*piVar1 + 0x34))(param_2,param_3);
    if ((local_8 & 1) != 0) {
      FUN_004e4f28(param_3);
      return local_8;
    }
  }
  local_c = FUN_004e5817(param_1,*param_3,param_3 + 0x13,param_3 + 0x16);
  if ((local_c != 0) && (piVar1 = (int *)FUN_004e5507(local_c), piVar1 != (int *)0x0)) {
    piVar2 = (int *)FUN_004e55f0(piVar1);
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 0x34))(param_2,param_3);
      local_8 = uVar3 | 2;
      param_3[0x1a] = local_c;
      if ((uVar3 & 1) != 0) {
        FUN_004e4f28(param_3);
        return local_8;
      }
      puVar5 = local_dc;
      puVar6 = param_3;
      for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    uVar3 = (**(code **)(*piVar1 + 0x34))(param_2,param_3);
    local_8 = uVar3 | 2;
    if ((uVar3 & 1) != 0) {
      FUN_004e4f28(param_3);
    }
    param_3[0x1a] = local_c;
  }
  return local_8;
}


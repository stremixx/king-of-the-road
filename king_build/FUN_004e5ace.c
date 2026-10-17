
uint FUN_004e5ace(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_dc [52];
  int local_c;
  uint local_8;
  
  local_8 = 0;
  puVar4 = param_3;
  puVar5 = local_dc;
  for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  piVar1 = (int *)FUN_004e565e(param_1);
  if ((piVar1 == (int *)0x0) ||
     (local_8 = (**(code **)(*piVar1 + 0x34))(param_2,param_3), (local_8 & 1) == 0)) {
    local_c = FUN_004e5817(param_1,*param_3,param_3 + 0x13,param_3 + 0x16);
    if ((local_c != 0) && (piVar1 = (int *)FUN_004e565e(local_c), piVar1 != (int *)0x0)) {
      puVar4 = local_dc;
      puVar5 = param_3;
      for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar2 = (**(code **)(*piVar1 + 0x34))(param_2,param_3);
      local_8 = uVar2 | 2;
      param_3[0x1a] = local_c;
      if ((uVar2 & 1) != 0) {
        FUN_004e4f28(param_3);
      }
    }
  }
  else {
    FUN_004e4f28(param_3);
  }
  return local_8;
}


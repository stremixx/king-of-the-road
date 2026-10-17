
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490ad0(undefined4 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_90 [2];
  double local_88;
  double local_80;
  undefined4 local_70 [6];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  FUN_00487f80(*param_2,*param_2 + 0x18);
  iVar3 = *param_2;
  uVar4 = 2;
  if (2 < (uint)((param_2[1] - iVar3) / 0x18)) {
    iVar7 = 0x30;
    do {
      FUN_00488000(iVar3 + iVar7);
      iVar3 = *param_2;
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + 0x18;
    } while (uVar4 < (uint)((param_2[1] - iVar3) / 0x18));
  }
  local_88 = local_18 + local_30;
  local_80 = local_10 + local_28;
  local_50 = (local_20 + local_38) * _DAT_0064a6d0;
  local_48 = local_88 * _DAT_0064a6d0;
  local_40 = local_80 * _DAT_0064a6d0;
  pdVar5 = &local_50;
  puVar6 = local_70;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    puVar6 = puVar6 + 1;
  }
  pdVar5 = (double *)*param_2;
  local_58 = 0.0;
  for (iVar3 = (param_2[1] - (int)pdVar5) / 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    dVar2 = local_50 - *pdVar5;
    dVar1 = pdVar5[1];
    puVar6 = local_70;
    puVar8 = local_90;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_88 = local_88 - dVar1;
    local_80 = local_80 - pdVar5[2];
    dVar1 = SQRT(local_80 * local_80 + local_88 * local_88 + dVar2 * dVar2);
    if (local_58 < dVar1) {
      local_58 = dVar1;
    }
    pdVar5 = pdVar5 + 3;
  }
  puVar6 = local_70;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


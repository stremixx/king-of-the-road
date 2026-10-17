
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00615460(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float10 fVar10;
  float local_1c;
  float local_18;
  int local_14;
  float local_8;
  
  if ((((*(float *)(param_1 + 0x9ccc) <= *param_2) || (*param_2 <= *(float *)(param_1 + 0x9cc8))) ||
      (*(float *)(param_1 + 0x9cd0) <= param_2[1])) || (param_2[1] <= *(float *)(param_1 + 0x9cd4)))
  {
    return (float10)_DAT_006522e8;
  }
  fVar2 = (*param_2 - *(float *)(param_1 + 0x9cc8)) / *(float *)(param_1 + 0x9cd8);
  fVar1 = (param_2[1] - *(float *)(param_1 + 0x9cd4)) / *(float *)(param_1 + 0x9cdc);
  FUN_0061e749((double)(fVar2 / _DAT_00652230));
  uVar5 = __ftol();
  FUN_0061e749((double)(fVar1 / _DAT_00652234));
  uVar6 = __ftol();
  FUN_0061f447((double)(fVar2 / _DAT_00652230));
  uVar7 = __ftol();
  FUN_0061f447((double)(fVar1 / _DAT_00652234));
  uVar8 = __ftol();
  fVar2 = (fVar2 - (float)uVar5) / _DAT_00652230;
  fVar1 = (fVar1 - (float)uVar6) / _DAT_00652234;
  if ((uVar6 & 4) == 0) {
    if ((uVar5 & 4) == 0) goto LAB_00615685;
LAB_006155b8:
    bVar3 = true;
    local_14 = 2;
    bVar4 = true;
    if (_DAT_0064b240 - fVar1 <= fVar2) {
LAB_006155de:
      local_14 = 3;
    }
  }
  else {
    if ((uVar5 & 4) == 0) goto LAB_006155b8;
LAB_00615685:
    bVar3 = false;
    bVar4 = false;
    if (fVar2 < fVar1) goto LAB_006155de;
    local_14 = 2;
  }
  if (fVar1 == _DAT_0064b254) {
    iVar9 = FUN_00608170(uVar5,uVar6);
    fVar1 = *(float *)(iVar9 + (uVar5 % 0x101 + uVar6 % 0x101 + (uVar5 % 0x101) * 0x100) * 0x10);
    iVar9 = FUN_00608170(uVar7,uVar6);
    return ((float10)*(float *)(iVar9 + (uVar7 % 0x101 + uVar6 % 0x101 + (uVar7 % 0x101) * 0x100) *
                                        0x10) - (float10)fVar1) * (float10)fVar2 + (float10)fVar1;
  }
  if (fVar1 == _DAT_0064b240) {
    iVar9 = FUN_00608170(uVar5,uVar8);
    fVar1 = *(float *)(iVar9 + (uVar5 % 0x101 + uVar8 % 0x101 + (uVar5 % 0x101) * 0x100) * 0x10);
    iVar9 = FUN_00608170(uVar7,uVar8);
    return ((float10)*(float *)(iVar9 + (uVar7 % 0x101 + uVar8 % 0x101 + (uVar7 % 0x101) * 0x100) *
                                        0x10) - (float10)fVar1) * (float10)fVar2 + (float10)fVar1;
  }
  if (bVar3) {
    iVar9 = FUN_00608170(uVar7,uVar6);
    local_1c = *(float *)(iVar9 + ((uVar7 % 0x101) * 0x101 + uVar6 % 0x101) * 0x10);
    fVar10 = (float10)FUN_00608530(uVar5,uVar8);
    local_8 = (float)fVar10;
    if (local_14 == 3) {
      fVar10 = (float10)FUN_00608530(uVar7,uVar8);
      fVar2 = ((fVar1 + fVar2) - _DAT_0064b240) / fVar1;
      local_18 = local_1c;
    }
    else {
      fVar10 = (float10)FUN_00608530(uVar5,uVar6);
      local_18 = (float)fVar10;
      fVar10 = (float10)local_8;
      fVar2 = fVar2 / (_DAT_0064b240 - fVar1);
    }
    goto LAB_00615b57;
  }
  iVar9 = FUN_00608170(uVar5,uVar6);
  local_1c = *(float *)(iVar9 + ((uVar5 % 0x101) * 0x101 + uVar6 % 0x101) * 0x10);
  iVar9 = FUN_00608170(uVar7,uVar8);
  local_8 = *(float *)(iVar9 + ((uVar7 % 0x101) * 0x101 + uVar8 % 0x101) * 0x10);
  if (local_14 != 3) {
    fVar10 = (float10)FUN_00608530(uVar7,uVar6);
    local_18 = (float)fVar10;
    fVar10 = (float10)local_8;
    fVar2 = (fVar2 - fVar1) / (_DAT_0064b240 - fVar1);
    goto LAB_00615b57;
  }
  uVar6 = uVar5 / 0x101;
  uVar7 = uVar8 / 0x101;
  local_18 = local_1c;
  if ((uVar6 == 3) || (uVar7 == 3)) goto LAB_0061588d;
  if (2 - uVar6 != uVar7) {
    fVar10 = (float10)FUN_00608530(uVar5,uVar8);
    fVar2 = fVar2 / fVar1;
    goto LAB_00615b57;
  }
  if ((uVar6 == 0) && (uVar7 == 2)) {
    if (0x303 - uVar8 <= 0x101 - uVar5) {
LAB_0061588d:
      fVar10 = (float10)FUN_00608530(uVar5,uVar8);
      fVar2 = fVar2 / fVar1;
      goto LAB_00615b57;
    }
  }
  else if ((uVar6 == 2) && (uVar7 == 0)) {
    if (0x101 - uVar8 < 0x303 - uVar5) {
      fVar10 = (float10)FUN_00608530(uVar5,uVar8);
      fVar2 = fVar2 / fVar1;
      goto LAB_00615b57;
    }
    goto LAB_0061588d;
  }
  fVar10 = (float10)FUN_00608530(uVar5,uVar8);
  fVar2 = fVar2 / fVar1;
LAB_00615b57:
  local_1c = (local_8 - local_1c) * fVar1 + local_1c;
  fVar10 = (fVar10 - (float10)local_18) * (float10)fVar1 + (float10)local_18;
  if (((local_14 != 2) || (!bVar4)) && ((bVar4 || (local_14 != 3)))) {
    return (fVar10 - (float10)local_1c) * (float10)fVar2 + (float10)local_1c;
  }
  return ((float10)local_1c - fVar10) * (float10)fVar2 + fVar10;
}


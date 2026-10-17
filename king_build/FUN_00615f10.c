
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00615f10(int *param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  float10 fVar10;
  undefined8 uVar11;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_4;
  
  iVar1 = *(int *)(*param_1 + 4);
  if ((((*(float *)(iVar1 + 0x9ccc) <= param_2) || (param_2 <= *(float *)(iVar1 + 0x9cc8))) ||
      (*(float *)(iVar1 + 0x9cd0) <= param_3)) || (param_3 <= *(float *)(iVar1 + 0x9cd4))) {
    return (float10)_DAT_006522e8;
  }
  fVar2 = (param_2 - *(float *)(iVar1 + 0x9cc8)) / *(float *)(iVar1 + 0x9cd8);
  fVar3 = (param_3 - *(float *)(iVar1 + 0x9cd4)) / *(float *)(iVar1 + 0x9cdc);
  FUN_0061e749((double)(fVar2 / _DAT_00652230));
  uVar5 = __ftol();
  FUN_0061e749((double)(fVar3 / _DAT_00652234));
  uVar6 = __ftol();
  FUN_0061f447((double)(fVar2 / _DAT_00652230));
  uVar7 = __ftol();
  FUN_0061f447((double)(fVar3 / _DAT_00652234));
  uVar8 = __ftol();
  fVar2 = (fVar2 - (float)uVar5) / _DAT_00652230;
  fVar3 = (fVar3 - (float)uVar6) / _DAT_00652234;
  if ((uVar6 & 4) == 0) {
    if ((uVar5 & 4) == 0) goto LAB_006160e8;
LAB_00616068:
    bVar4 = true;
    local_18 = 2;
    if (fVar2 < _DAT_0064b240 - fVar3) goto LAB_00616095;
  }
  else {
    if ((uVar5 & 4) == 0) goto LAB_00616068;
LAB_006160e8:
    bVar4 = false;
    if (fVar3 <= fVar2) {
      local_18 = 2;
      goto LAB_00616095;
    }
  }
  local_18 = 3;
LAB_00616095:
  if (fVar3 == _DAT_0064b254) {
    uVar11 = CONCAT44(uVar6,uVar5);
    FUN_00608170(uVar5,uVar6);
    fVar9 = (float10)FUN_00608530(uVar11);
    fVar10 = (float10)FUN_00614960(uVar7,uVar6);
    return (fVar10 - (float10)(float)fVar9) * (float10)fVar2 + (float10)(float)fVar9;
  }
  if (fVar3 == _DAT_0064b240) {
    fVar9 = (float10)FUN_00614960(uVar5,uVar8);
    fVar10 = (float10)FUN_00614960(uVar7,uVar8);
    return (fVar10 - (float10)(float)fVar9) * (float10)fVar2 + (float10)(float)fVar9;
  }
  if (bVar4) {
    fVar9 = (float10)FUN_00614960(uVar7,uVar6);
    local_1c = (float)fVar9;
    fVar9 = (float10)FUN_00614960(uVar5,uVar8);
    local_4 = (float)fVar9;
    if (local_18 == 3) {
      fVar9 = (float10)FUN_00614960(uVar7,uVar8);
      fVar2 = ((fVar3 + fVar2) - _DAT_0064b240) / fVar3;
      local_10 = local_1c;
    }
    else {
      fVar9 = (float10)FUN_00614960(uVar5,uVar6);
      local_10 = (float)fVar9;
      fVar9 = (float10)local_4;
      fVar2 = fVar2 / (_DAT_0064b240 - fVar3);
    }
  }
  else {
    fVar9 = (float10)FUN_00614960(uVar5,uVar6);
    local_1c = (float)fVar9;
    fVar9 = (float10)FUN_00614960(uVar7,uVar8);
    local_4 = (float)fVar9;
    if (local_18 == 3) {
      fVar9 = (float10)FUN_00614960(uVar5,uVar8);
      fVar2 = fVar2 / fVar3;
      local_10 = local_1c;
    }
    else {
      fVar9 = (float10)FUN_00614960(uVar7,uVar6);
      local_10 = (float)fVar9;
      fVar9 = (float10)local_4;
      fVar2 = (fVar2 - fVar3) / (_DAT_0064b240 - fVar3);
    }
  }
  local_1c = (local_4 - local_1c) * fVar3 + local_1c;
  fVar9 = (fVar9 - (float10)local_10) * (float10)fVar3 + (float10)local_10;
  if (((local_18 != 2) || (!bVar4)) && ((bVar4 || (local_18 != 3)))) {
    return (fVar9 - (float10)local_1c) * (float10)fVar2 + (float10)local_1c;
  }
  return ((float10)local_1c - fVar9) * (float10)fVar2 + fVar9;
}


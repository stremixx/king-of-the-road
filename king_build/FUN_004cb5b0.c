
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cb5b0(float *param_1,float *param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  undefined4 *puVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644cc2;
  local_c = ExceptionList;
  local_1c = (float)*(double *)(DAT_00695184 + 0xb68) - param_1[2];
  local_20 = (float)*(double *)(DAT_00695184 + 0xb60) - param_1[1];
  local_24 = (float)*(double *)(DAT_00695184 + 0xb58) - *param_1;
  ExceptionList = &local_c;
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  fVar3 = (float10)FUN_005aabc0(&local_24);
  if ((((*(float *)(param_4 + 0x34) == (float)_DAT_0064a668) &&
       (*(float *)(param_4 + 0x38) == _DAT_0064b254)) &&
      (*(float *)(param_4 + 0x3c) == _DAT_0064b254)) || (param_4 == 0)) {
    fVar4 = (float10)param_3 * (float10)_DAT_0064b3f8;
  }
  else {
    fVar4 = ABS((float10)param_1[2] - (float10)*(float *)(param_4 + 0x3c));
    if ((float10)(param_3 * _DAT_0064b3f8) < fVar4) {
      fVar4 = (float10)(param_3 * _DAT_0064b3f8);
    }
  }
  fVar5 = (fVar3 - (float10)_DAT_0064b228) / ((float10)_DAT_0064b22c - (float10)_DAT_0064b228);
  if (fVar5 <= (float10)_DAT_0064b240) {
    if (fVar5 < (float10)_DAT_0064b254) {
      fVar5 = (float10)_DAT_0064b254;
    }
  }
  else {
    fVar5 = (float10)_DAT_0064b240;
  }
  fVar6 = (float)(((float10)*param_2 * (float10)local_24 +
                  (float10)param_2[1] * (float10)local_20 + (float10)param_2[2] * (float10)local_1c)
                 / fVar3);
  if (fVar6 < _DAT_0064b938) {
    ExceptionList = local_c;
    return;
  }
  fVar1 = _DAT_0064b240;
  if (fVar6 < _DAT_0064b73c) {
    fVar1 = fVar6 * _DAT_0064b934;
  }
  fVar6 = fVar1 * (float)(fVar5 * fVar4 +
                         ((float10)_DAT_0064b240 - fVar5) * ((float10)param_3 + (float10)param_3)) *
          _DAT_0064b930;
  if (param_5 == 0) {
    iVar2 = FUN_00578a50(0xbc,DAT_006f5a1c);
    local_4 = 0;
    if (iVar2 != 0) {
      FUN_005a0390(param_1,fVar6 * _DAT_0064b340,0,&DAT_00694c28,1);
    }
    local_4 = 0xffffffff;
    iVar2 = FUN_00578a50(0xbc,DAT_006f5a1c);
    local_4 = 1;
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    puVar7 = &DAT_00694c28;
  }
  else {
    if (param_5 == 1) {
      iVar2 = FUN_00578a50(0xbc,DAT_006f5a1c);
      local_4 = 2;
      if (iVar2 != 0) {
        FUN_005a0390(param_1,fVar6,0,&DAT_00694c20,1);
      }
      local_4 = 0xffffffff;
      iVar2 = FUN_00578a50(0xbc,DAT_006f5a1c);
      local_4 = 3;
      if (iVar2 == 0) {
        ExceptionList = local_c;
        return;
      }
      puVar7 = &DAT_00694c20;
      goto LAB_004cb8fa;
    }
    if (param_5 != 2) {
      ExceptionList = local_c;
      return;
    }
    iVar2 = FUN_00578a50(0xbc,DAT_006f5a1c);
    local_4 = 4;
    if (iVar2 != 0) {
      FUN_005a0390(param_1,fVar6 * _DAT_0064b340,0,&DAT_00694c24,2);
    }
    local_4 = 0xffffffff;
    iVar2 = FUN_00578a50(0xbc,DAT_006f5a1c);
    local_4 = 5;
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    puVar7 = &DAT_00694c24;
  }
  fVar6 = fVar6 * _DAT_0064b340;
LAB_004cb8fa:
  FUN_005a0390(param_1,fVar6,1,puVar7,0);
  ExceptionList = local_c;
  return;
}


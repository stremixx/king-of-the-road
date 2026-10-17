
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0060f2f0(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  float local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064978b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_00631d33(0x24);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
    goto LAB_0060f4ac;
  }
  *piVar4 = *(int *)(param_1 + 4);
  fVar5 = (float10)fpatan((float10)DAT_00724e30,(float10)DAT_00724e34);
  local_18 = DAT_00724e30;
  local_14 = DAT_00724e34;
  local_10 = DAT_00724e38;
  piVar4[3] = (int)(float)fVar5;
  fVar5 = (float10)FUN_004bff80(&local_18);
  piVar4[4] = (int)(float)SQRT(fVar5);
  if ((float10)DAT_006520c0 < SQRT(fVar5)) {
    piVar4[4] = (int)DAT_006520c0;
  }
  fVar1 = (float)piVar4[4] / (_DAT_0065209c * _DAT_00651ff4);
  piVar4[1] = (int)fVar1;
  fVar1 = (fVar1 * fVar1 * _DAT_0065209c) / _DAT_00724e2c;
  piVar4[2] = (int)fVar1;
  fVar1 = fVar1 * _DAT_00651ff0 + _DAT_0064b328;
  piVar4[7] = (int)fVar1;
  if (_DAT_0064b340 < fVar1) {
    piVar4[7] = 0x3fc00000;
  }
  fVar1 = (float)piVar4[1] * _DAT_0064c7a8;
  iVar2 = *piVar4;
  piVar4[5] = 0x453b8000;
  piVar4[3] = 0;
  piVar4[1] = (int)fVar1;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  fVar5 = (float10)FUN_0060b120(0);
  *(float *)(iVar2 + 0x54) = (float)fVar5;
  fVar5 = (float10)FUN_0060b0a0(*(undefined4 *)(iVar2 + 0x4c));
  *(float *)(iVar2 + 0x50) = (float)fVar5;
  fVar1 = (float)piVar4[7];
  iVar2 = *piVar4;
  *(float *)(iVar2 + 0x48) = fVar1;
  if ((fVar1 < _DAT_006520a0) || (_DAT_006520a4 < fVar1)) {
    if (*(int *)(iVar2 + 0x70) != 0) {
      uVar6 = 0;
      goto LAB_0060f43a;
    }
  }
  else if (*(int *)(iVar2 + 0x70) != 0) {
    uVar6 = 1;
LAB_0060f43a:
    FUN_006129a0(uVar6);
  }
  *(float *)(*piVar4 + 0x40) = _DAT_0064f320 / _DAT_00724e2c;
  *(float *)(*piVar4 + 0x44) = (float)piVar4[1] / _DAT_00724e2c;
  *(float *)(*piVar4 + 0x38) = ((float)piVar4[2] * _DAT_0064b310) / _DAT_00724e2c;
  *(float *)(*piVar4 + 0x3c) = (float)piVar4[2] / _DAT_00724e2c;
  iVar2 = *piVar4;
  *(float *)(iVar2 + 0x5c) = (*(float *)(iVar2 + 0x38) * _DAT_0064f7f4) / *(float *)(iVar2 + 0x40);
  *(float *)(iVar2 + 0x60) = (*(float *)(iVar2 + 0x3c) * _DAT_0064f7f4) / *(float *)(iVar2 + 0x44);
  *(int *)(*piVar4 + 0x6c) = piVar4[5];
LAB_0060f4ac:
  *(int **)(param_1 + 0x54) = piVar4;
  local_4 = 0xffffffff;
  fVar1 = (float)piVar4[7];
  fVar5 = (float10)fpatan((float10)param_2,(float10)param_3);
  piVar4[3] = (int)(float)fVar5;
  fVar3 = SQRT(param_2 * param_2 + param_3 * param_3 + param_4 * param_4);
  piVar4[4] = (int)fVar3;
  if (DAT_006520c0 < fVar3) {
    piVar4[4] = (int)DAT_006520c0;
  }
  fVar3 = (float)piVar4[4] / (_DAT_0065209c * _DAT_00651ff4);
  piVar4[1] = (int)fVar3;
  fVar3 = (fVar3 * fVar3 * _DAT_0065209c) / _DAT_00724e2c;
  piVar4[2] = (int)fVar3;
  fVar3 = fVar3 * _DAT_00651ff0 + _DAT_0064b328;
  piVar4[7] = (int)fVar3;
  if (_DAT_0064b340 < fVar3) {
    piVar4[7] = 0x3fc00000;
  }
  fVar3 = (float)piVar4[1] * _DAT_0064c7a8;
  piVar4[5] = 0x453b8000;
  piVar4[3] = 0;
  piVar4[8] = piVar4[7];
  piVar4[1] = (int)fVar3;
  piVar4[7] = (int)fVar1;
  iVar2 = *piVar4;
  *(float *)(iVar2 + 0x48) = fVar1;
  if ((fVar1 < _DAT_006520a0) || (_DAT_006520a4 < fVar1)) {
    if (*(int *)(iVar2 + 0x70) == 0) {
      ExceptionList = local_c;
      return;
    }
    uVar6 = 0;
  }
  else {
    if (*(int *)(iVar2 + 0x70) == 0) {
      ExceptionList = local_c;
      return;
    }
    uVar6 = 1;
  }
  FUN_006129a0(uVar6);
  ExceptionList = local_c;
  return;
}


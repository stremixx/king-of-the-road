
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0060d530(int *param_1,float *param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  
  piVar2 = *(int **)(*param_1 + 0x54);
  fVar3 = *param_2;
  fVar1 = (float)piVar2[7];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar7 = (float10)fpatan((float10)fVar3,(float10)fVar4);
  piVar2[3] = (int)(float)fVar7;
  fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
  piVar2[4] = (int)fVar3;
  if (DAT_00651f6c < fVar3) {
    piVar2[4] = (int)DAT_00651f6c;
  }
  fVar3 = (float)piVar2[4] / (_DAT_00651f48 * _DAT_00651ff4);
  piVar2[1] = (int)fVar3;
  fVar3 = (fVar3 * fVar3 * _DAT_00651f48) / _DAT_00724d14;
  piVar2[2] = (int)fVar3;
  fVar3 = fVar3 * _DAT_00651ff0 + _DAT_0064b328;
  piVar2[7] = (int)fVar3;
  if (_DAT_0064b340 < fVar3) {
    piVar2[7] = 0x3fc00000;
  }
  fVar3 = (float)piVar2[1] * _DAT_0064c7a8;
  piVar2[5] = 0x453b8000;
  piVar2[3] = 0;
  piVar2[8] = piVar2[7];
  piVar2[1] = (int)fVar3;
  piVar2[7] = (int)fVar1;
  iVar6 = *piVar2;
  *(float *)(iVar6 + 0x48) = fVar1;
  if ((fVar1 < _DAT_00651f4c) || (_DAT_00651f50 < fVar1)) {
    if (*(int *)(iVar6 + 0x70) != 0) {
      FUN_006129a0(0);
    }
  }
  else if (*(int *)(iVar6 + 0x70) != 0) {
    FUN_006129a0(1);
    return;
  }
  return;
}


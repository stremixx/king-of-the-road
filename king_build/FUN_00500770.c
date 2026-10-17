
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00500770(int param_1,int param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = param_1 + param_2 * 0x14;
  fVar3 = param_3 * *(float *)(param_1 + 0x4c + param_2 * 0x14) + *(float *)(iVar1 + 0x48);
  *(float *)(iVar1 + 0x48) = fVar3;
  if (_DAT_0064b240 < fVar3) {
    *(undefined4 *)(iVar1 + 0x48) = 0x3f800000;
  }
  uVar5 = __ftol();
  piVar2 = (int *)(param_1 + (param_2 * 5 + 0x37) * 4);
  *(undefined4 *)(param_1 + (param_2 * 5 + 0xf) * 4) = uVar5;
  fVar4 = _DAT_0064b240;
  iVar6 = *piVar2;
  fVar3 = _DAT_0064b928;
  if (iVar6 != 0) {
    fVar3 = (float)(int)(((iVar6 < 1) - 1 & 2) - 1);
  }
  fVar3 = fVar3 * *(float *)(iVar1 + 0xec) * param_3 + *(float *)(iVar1 + 0xe8);
  *(float *)(iVar1 + 0xe8) = fVar3;
  if (fVar3 <= fVar4) {
    if (fVar3 < _DAT_0064b928) {
      *(undefined4 *)(iVar1 + 0xe8) = 0xbf800000;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
  }
  iVar6 = __ftol();
  *piVar2 = iVar6;
  fVar3 = param_3 * *(float *)(iVar1 + 0x18c) + *(float *)(iVar1 + 0x188);
  *(float *)(iVar1 + 0x188) = fVar3;
  if (_DAT_0064b240 < fVar3) {
    *(undefined4 *)(iVar1 + 0x188) = 0x3f800000;
  }
  uVar5 = __ftol();
  *(undefined4 *)(param_1 + (param_2 * 5 + 0x5f) * 4) = uVar5;
  return;
}


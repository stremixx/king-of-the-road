
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005fd160(int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  if ((DAT_00722a88 != 0) &&
     ((*(byte *)(*(int *)(DAT_00722a94 + *(int *)(param_1 + 0x1c) * 4) + 0x18) & 1) != 0)) {
    param_2 = _DAT_00682b60 * param_2;
    if (param_2 <= _DAT_0064b240) {
      if (param_2 < _DAT_0064b254) {
        param_2 = 0.0;
      }
    }
    else {
      param_2 = 1.0;
    }
    param_3 = _DAT_00682b60 * param_3;
    if (param_3 <= _DAT_0064b240) {
      if (param_3 < _DAT_0064b254) {
        param_3 = 0.0;
      }
    }
    else {
      param_3 = 1.0;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = FUN_005fcbf0(param_1);
      if (iVar2 != -1) {
        fVar1 = (float)_DAT_0064ca48;
        *(int *)(param_1 + 0x18) = iVar2;
        *(undefined4 *)(param_1 + 0x14) = 1;
        *(undefined4 *)(param_1 + 0x10) = 1;
        FUN_006045e0(*(undefined4 *)(param_1 + 0x1c),iVar2,param_2 * (float)_DAT_0064ca48,
                     param_3 * fVar1,1000,0);
        return;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x18);
      FUN_006046a0(iVar2);
      if (-1 < iVar2) {
        (&DAT_00722a08)[iVar2] = 0;
      }
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x14) = 0;
      iVar2 = FUN_005fcbf0(param_1);
      if (iVar2 != -1) {
        fVar1 = (float)_DAT_0064ca48;
        *(int *)(param_1 + 0x18) = iVar2;
        *(undefined4 *)(param_1 + 0x10) = 1;
        *(undefined4 *)(param_1 + 0x14) = 1;
        FUN_006045e0(*(undefined4 *)(param_1 + 0x1c),iVar2,param_2 * (float)_DAT_0064ca48,
                     param_3 * fVar1,1000,0);
      }
    }
  }
  return;
}


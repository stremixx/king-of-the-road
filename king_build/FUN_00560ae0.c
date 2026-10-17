
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00560ae0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)FUN_004e1fd9();
  fVar3 = (float10)FUN_004e2035();
  if (param_1[5] != 0) {
    if (param_1[10] == param_1[0xb]) {
      param_1[0xb] = 0;
      param_1[10] = 0;
    }
    if (param_1[0xb] == 0) {
      iVar1 = -(uint)(param_1[10] != 0);
    }
    else {
      iVar1 = 1;
    }
    param_1[0x11] = iVar1;
    if (iVar1 != param_1[2]) {
      param_1[0xe] = (int)(float)fVar3;
    }
    fVar4 = (float10)_DAT_0064a778;
    param_1[2] = iVar1;
    fVar4 = ((float10)(float)fVar2 * fVar4 + (fVar3 - (float10)(float)param_1[0xe])) *
            (float10)_DAT_0067a1bc;
    if ((float10)_DAT_0064a660 < fVar4) {
      fVar4 = (float10)_DAT_0064a660;
    }
    param_1[0x14] = (int)(float)(fVar4 * (float10)iVar1);
  }
  if (param_1[4] != 0) {
    if (param_1[6] == param_1[7]) {
      param_1[7] = 0;
      param_1[6] = 0;
    }
    if (param_1[6] == 0) {
      iVar1 = -(uint)(param_1[7] != 0);
    }
    else {
      iVar1 = 1;
    }
    param_1[0x10] = iVar1;
    if (iVar1 != param_1[1]) {
      param_1[0xd] = (int)(float)fVar3;
    }
    fVar4 = (float10)_DAT_0064a778;
    param_1[1] = iVar1;
    fVar2 = ((float10)(float)fVar2 * fVar4 + (fVar3 - (float10)(float)param_1[0xd])) *
            (float10)_DAT_0067a1b8;
    if ((float10)_DAT_0064a660 < fVar2) {
      fVar2 = (float10)_DAT_0064a660;
    }
    param_1[0x13] = (int)(float)(fVar2 * (float10)iVar1);
  }
  if (param_1[3] != 0) {
    if (param_1[8] == param_1[9]) {
      param_1[9] = 0;
      param_1[8] = 0;
    }
    if (param_1[8] == 0) {
      iVar1 = -(uint)(param_1[9] != 0);
    }
    else {
      iVar1 = 1;
    }
    param_1[0xf] = iVar1;
    if (iVar1 != *param_1) {
      param_1[0xc] = (int)(float)fVar3;
      *param_1 = iVar1;
      param_1[0x12] = (int)(float)iVar1;
      return;
    }
    *param_1 = iVar1;
    param_1[0x12] = (int)(float)iVar1;
    return;
  }
  return;
}


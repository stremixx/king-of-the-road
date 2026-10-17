
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00541b80(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  pfVar4 = param_1 + 9;
  param_1[2] = 1.5;
  param_1[3] = 1.5;
  *param_1 = 0.0;
  param_1[1] = 2.0;
  param_1[4] = 1.0;
  param_1[5] = 1.0;
  param_1[6] = 1.0;
  param_1[7] = 1.0;
  param_1[8] = 1.0;
  *pfVar4 = 5.0;
  param_1[10] = 4.0;
  iVar5 = 0;
  pfVar3 = param_1 + 0xc;
  do {
    pfVar3[8] = 0.0;
    if (iVar5 < param_2) {
      *pfVar3 = 2.0;
      pfVar3[0x10] = 1.0;
    }
    else {
      *pfVar3 = 0.0;
      pfVar3[0x10] = 0.0;
    }
    fVar2 = _DAT_0064b254;
    iVar5 = iVar5 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar5 < 8);
  param_1[0xb] = 7.0;
  iVar5 = 9;
  pfVar3 = param_1;
  fVar1 = fVar2;
  do {
    fVar1 = fVar1 + *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 0x1b;
  pfVar3 = pfVar4;
  do {
    fVar2 = fVar2 + *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 9;
  param_1[0x24] = fVar2 + fVar1;
  pfVar3 = param_1;
  do {
    iVar5 = iVar5 + -1;
    *pfVar3 = *pfVar3 / param_1[0x24];
    pfVar3 = pfVar3 + 1;
  } while (iVar5 != 0);
  iVar5 = 0x1b;
  do {
    iVar5 = iVar5 + -1;
    *pfVar4 = *pfVar4 / param_1[0x24];
    pfVar4 = pfVar4 + 1;
  } while (iVar5 != 0);
  return;
}


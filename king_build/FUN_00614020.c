
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00614020(int *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  
  fVar4 = ((float)param_1[4] * *param_3 +
          (float)param_1[5] * param_3[1] + (float)param_1[6] * param_3[2]) /
          SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  if ((SQRT((*param_2 - (float)param_1[1]) * (*param_2 - (float)param_1[1]) +
            (param_2[1] - (float)param_1[2]) * (param_2[1] - (float)param_1[2]) +
            (param_2[2] - (float)param_1[3]) * (param_2[2] - (float)param_1[3])) < _DAT_006522bc) &&
     ((_DAT_00727794 < fVar4 || (fVar4 < -_DAT_00727794)))) {
    iVar5 = *param_1;
    *(float *)(iVar5 + 0x44) = *param_2;
    *(float *)(iVar5 + 0x48) = param_2[1];
    *(float *)(iVar5 + 0x4c) = param_2[2];
    *(float *)(iVar5 + 0x50) = *param_3;
    *(float *)(iVar5 + 0x54) = param_3[1];
    *(float *)(iVar5 + 0x58) = param_3[2];
    *(undefined4 *)(iVar5 + 0x5c) = *param_4;
    *(undefined4 *)(iVar5 + 0x60) = param_4[1];
    *(undefined4 *)(iVar5 + 100) = param_4[2];
    FUN_006143a0(iVar5 + 0x44,iVar5 + 0x50,iVar5 + 0x5c);
    *(undefined4 *)(iVar5 + 0x1c) = 1;
    *(undefined4 *)(iVar5 + 0x18) = 1;
    *(undefined4 *)(*param_1 + 0x18) = 1;
    *(undefined4 *)(*param_1 + 0x1c) = 1;
    goto LAB_00614327;
  }
  FUN_0060c1a0();
  if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
    if (_DAT_0064b440 <=
        SQRT((param_2[1] + _DAT_00652128) * (param_2[1] + _DAT_00652128) +
             (*param_2 - _DAT_006522e4) * (*param_2 - _DAT_006522e4))) {
      if (SQRT((param_2[1] + _DAT_0064e3e8) * (param_2[1] + _DAT_0064e3e8) +
               (*param_2 - _DAT_0064ca00) * (*param_2 - _DAT_0064ca00)) < _DAT_0064b440) {
        iVar5 = *param_1;
        *(float *)(iVar5 + 0x44) = *param_2;
        *(float *)(iVar5 + 0x48) = param_2[1];
        *(float *)(iVar5 + 0x4c) = param_2[2];
        pfVar3 = (float *)(iVar5 + 0x50);
        *(undefined4 *)(iVar5 + 0x50) = 0;
        fVar4 = 0.0;
        *(undefined4 *)(iVar5 + 0x54) = 0xbf800000;
        goto LAB_006142e7;
      }
      iVar5 = *param_1;
      *(float *)(iVar5 + 0x44) = *param_2;
      *(float *)(iVar5 + 0x48) = param_2[1];
      *(float *)(iVar5 + 0x4c) = param_2[2];
      *(float *)(iVar5 + 0x50) = *param_3;
      *(float *)(iVar5 + 0x54) = param_3[1];
      *(float *)(iVar5 + 0x58) = param_3[2];
      *(undefined4 *)(iVar5 + 0x5c) = *param_4;
      *(undefined4 *)(iVar5 + 0x60) = param_4[1];
      *(undefined4 *)(iVar5 + 100) = param_4[2];
    }
    else {
      iVar5 = *param_1;
      *(float *)(iVar5 + 0x44) = *param_2;
      *(float *)(iVar5 + 0x48) = param_2[1];
      *(float *)(iVar5 + 0x4c) = param_2[2];
      *(undefined4 *)(iVar5 + 0x50) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x54) = 0;
      *(undefined4 *)(iVar5 + 0x58) = 0;
      *(undefined4 *)(iVar5 + 0x5c) = *param_4;
      *(undefined4 *)(iVar5 + 0x60) = param_4[1];
      *(undefined4 *)(iVar5 + 100) = param_4[2];
    }
  }
  else {
    iVar5 = *param_1;
    *(float *)(iVar5 + 0x44) = *param_2;
    *(float *)(iVar5 + 0x48) = param_2[1];
    *(float *)(iVar5 + 0x4c) = param_2[2];
    pfVar3 = (float *)(iVar5 + 0x50);
    *pfVar3 = *param_3;
    *(float *)(iVar5 + 0x54) = param_3[1];
    fVar4 = param_3[2];
LAB_006142e7:
    pfVar3[2] = fVar4;
    *(undefined4 *)(iVar5 + 0x5c) = *param_4;
    *(undefined4 *)(iVar5 + 0x60) = param_4[1];
    *(undefined4 *)(iVar5 + 100) = param_4[2];
  }
  FUN_006143a0(iVar5 + 0x44,iVar5 + 0x50,iVar5 + 0x5c);
  *(undefined4 *)(iVar5 + 0x1c) = 1;
  *(undefined4 *)(iVar5 + 0x18) = 1;
  FUN_0060bd70();
LAB_00614327:
  param_1[1] = (int)*param_2;
  param_1[2] = (int)param_2[1];
  param_1[3] = (int)param_2[2];
  fVar2 = SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  fVar4 = param_3[1];
  fVar1 = param_3[2];
  param_1[4] = (int)(*param_3 / fVar2);
  param_1[5] = (int)(fVar4 / fVar2);
  param_1[6] = (int)(fVar1 / fVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00614630(int *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_0060c1a0();
  fVar1 = (float)param_1[10] * _DAT_0064b248;
  if ((((fVar1 + (float)param_1[7] < *param_2) || (*param_2 < (float)param_1[7] - fVar1)) ||
      ((float)param_1[0xb] * _DAT_0064b248 + (float)param_1[8] < param_2[1])) ||
     (param_2[1] < (float)param_1[8] - fVar1)) {
    fVar1 = SQRT((*param_2 - _DAT_006522e4) * (*param_2 - _DAT_006522e4) +
                 (param_2[1] + _DAT_00652128) * (param_2[1] + _DAT_00652128));
    fVar2 = SQRT((param_2[1] + _DAT_0064e3e8) * (param_2[1] + _DAT_0064e3e8) +
                 (*param_2 - _DAT_0064ca00) * (*param_2 - _DAT_0064ca00));
    if (fVar1 < fVar2) {
      iVar7 = *param_1;
      *(float *)(iVar7 + 0x44) = *param_2;
      *(float *)(iVar7 + 0x48) = param_2[1];
      *(float *)(iVar7 + 0x4c) = param_2[2];
      *(undefined4 *)(iVar7 + 0x50) = 0x3f800000;
      *(undefined4 *)(iVar7 + 0x54) = 0;
      *(undefined4 *)(iVar7 + 0x58) = 0;
      *(undefined4 *)(iVar7 + 0x5c) = *param_4;
      *(undefined4 *)(iVar7 + 0x60) = param_4[1];
      *(undefined4 *)(iVar7 + 100) = param_4[2];
      FUN_006143a0(iVar7 + 0x44,iVar7 + 0x50,iVar7 + 0x5c);
      *(undefined4 *)(iVar7 + 0x1c) = 1;
      *(undefined4 *)(iVar7 + 0x18) = 1;
    }
    if (fVar2 < fVar1) {
      iVar7 = *param_1;
      *(float *)(iVar7 + 0x44) = *param_2;
      *(float *)(iVar7 + 0x48) = param_2[1];
      *(float *)(iVar7 + 0x4c) = param_2[2];
      *(undefined4 *)(iVar7 + 0x50) = 0;
      *(undefined4 *)(iVar7 + 0x54) = 0xbf800000;
      *(undefined4 *)(iVar7 + 0x58) = 0;
      *(undefined4 *)(iVar7 + 0x5c) = *param_4;
      *(undefined4 *)(iVar7 + 0x60) = param_4[1];
      *(undefined4 *)(iVar7 + 100) = param_4[2];
      FUN_006143a0(iVar7 + 0x44,iVar7 + 0x50,iVar7 + 0x5c);
      *(undefined4 *)(iVar7 + 0x1c) = 1;
      *(undefined4 *)(iVar7 + 0x18) = 1;
    }
    if (fVar1 != fVar2) goto LAB_006148ca;
    iVar7 = *param_1;
    pfVar3 = (float *)(iVar7 + 0x44);
    *pfVar3 = *param_2;
    *(float *)(iVar7 + 0x48) = param_2[1];
    *(float *)(iVar7 + 0x4c) = param_2[2];
    puVar4 = (undefined4 *)(iVar7 + 0x50);
    *puVar4 = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x54) = 0xbf800000;
    *(undefined4 *)(iVar7 + 0x58) = 0;
    puVar5 = (undefined4 *)(iVar7 + 0x5c);
    *(undefined4 *)(iVar7 + 0x5c) = *param_4;
    *(undefined4 *)(iVar7 + 0x60) = param_4[1];
    uVar6 = param_4[2];
  }
  else {
    iVar7 = *param_1;
    pfVar3 = (float *)(iVar7 + 0x44);
    *pfVar3 = *param_2;
    *(float *)(iVar7 + 0x48) = param_2[1];
    *(float *)(iVar7 + 0x4c) = param_2[2];
    puVar4 = (undefined4 *)(iVar7 + 0x50);
    *puVar4 = *param_3;
    *(undefined4 *)(iVar7 + 0x54) = param_3[1];
    *(undefined4 *)(iVar7 + 0x58) = param_3[2];
    puVar5 = (undefined4 *)(iVar7 + 0x5c);
    *puVar5 = *param_4;
    *(undefined4 *)(iVar7 + 0x60) = param_4[1];
    uVar6 = param_4[2];
  }
  puVar5[2] = uVar6;
  FUN_006143a0(pfVar3,puVar4,iVar7 + 0x5c);
  *(undefined4 *)(iVar7 + 0x1c) = 1;
  *(undefined4 *)(iVar7 + 0x18) = 1;
LAB_006148ca:
  FUN_0060bd70();
  FUN_0060c1d0();
  return;
}


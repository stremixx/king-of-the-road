
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c5c50(undefined4 param_1,int param_2,float *param_3,int param_4,float param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = (int)param_9;
  FUN_005cc1f0(param_3,param_4,param_5,param_6,param_7,param_9);
  iVar4 = FUN_0062a160();
  param_9 = 1.0;
  if (iVar6 == 0) {
    pfVar5 = (float *)FUN_005adc60();
    local_c = *pfVar5 - *param_3;
    local_8 = pfVar5[1] - param_3[1];
    local_4 = pfVar5[2] - param_3[2];
    fVar8 = (float10)FUN_005aabc0(&local_c);
    if ((float10)_DAT_0064b240 < fVar8 * (float10)_DAT_0064b258) {
      return;
    }
    fVar8 = fVar8 * (float10)_DAT_0064b258 - (float10)_DAT_0064b324;
    if (fVar8 < (float10)_DAT_0064b254) {
      fVar8 = (float10)_DAT_0064b254;
    }
    param_9 = (float)((float10)_DAT_0064b240 - fVar8);
  }
  fVar1 = (float)iVar4;
  FUN_0061e749((double)((float)iVar4 * _DAT_0064b318));
  iVar6 = __ftol();
  iVar7 = 0;
  param_4 = iVar6;
  if (0 < iVar6) {
    do {
      param_6 = 0x14;
      do {
        fVar2 = (_DAT_0064b654 - (float)param_6) * _DAT_00650c64;
        if (param_9 <= fVar2) break;
        iVar7 = FUN_005cb380(&DAT_007073b0,iVar7,(param_9 - fVar2) * _DAT_0064b654,param_3[2],
                             param_5 * _DAT_0064c2e8,param_8);
        param_6 = param_6 + -1;
      } while (0 < param_6);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if (iVar6 * 0x14 < iVar4) {
    fVar2 = (float)iVar6 * _DAT_0064b654;
    do {
      fVar3 = (fVar1 - ((float)iVar4 - fVar2)) * _DAT_00650c64;
      if (param_9 <= fVar3) break;
      iVar7 = FUN_005cb380(&DAT_007073b0,iVar7,(param_9 - fVar3) * _DAT_0064b654,param_3[2],
                           param_5 * _DAT_0064c2e8,param_8);
      iVar4 = iVar4 + -1;
    } while (iVar6 * 0x14 < iVar4);
  }
  if (iVar7 == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_005b06d0(param_2,0,0,0);
  }
  (**(code **)(*DAT_0071f868 + 0x68))
            (DAT_0071f868,4,0x142,&DAT_007073b0,iVar7 * 4,&DAT_00706efc,iVar7 * 6,0);
  return;
}


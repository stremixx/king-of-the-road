
undefined4 FUN_00547840(int param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float local_c;
  float local_8;
  float local_4;
  
  *param_3 = DAT_007015b0;
  iVar4 = 0;
  param_3[1] = DAT_007015b4;
  param_3[2] = DAT_007015b8;
  *param_4 = DAT_007015b0;
  param_4[1] = DAT_007015b4;
  param_4[2] = DAT_007015b8;
  if (0 < param_2) {
    pfVar3 = (float *)(param_1 + 0x168);
    do {
      if (*(short *)(pfVar3 + 4) != 0) {
        iVar4 = iVar4 + 1;
        fVar1 = pfVar3[-1];
        fVar2 = *pfVar3;
        *param_3 = pfVar3[-2] + *param_3;
        param_3[1] = fVar1 + param_3[1];
        param_3[2] = param_3[2] + fVar2;
        local_c = pfVar3[1] + *param_4;
        local_8 = pfVar3[2] + param_4[1];
        local_4 = pfVar3[3] + param_4[2];
        *param_4 = local_c;
        param_4[1] = local_8;
        param_4[2] = local_4;
      }
      pfVar3 = pfVar3 + 0x3e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    if (iVar4 != 0) {
      FUN_005aad50(&local_c,(float)iVar4);
      FUN_005aad50(&local_c,(float)iVar4);
      return 1;
    }
  }
  return 0;
}


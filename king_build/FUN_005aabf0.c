
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aabf0(float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  undefined1 local_c [12];
  
  pfVar2 = (float *)FUN_005aaad0(local_c,&param_1);
  param_1 = *pfVar2;
  param_2 = pfVar2[1];
  param_3 = pfVar2[2];
  if ((float)_DAT_0064a660 < param_3) {
    param_3 = 1.0;
  }
  if (param_3 < (float)_DAT_0064ba38) {
    param_3 = -1.0;
  }
  fVar3 = (float10)FUN_0061d420();
  fVar1 = (float)fVar3;
  *param_5 = (float)fVar3;
  if ((float)_DAT_0064a648 <= fVar1) {
    if ((float)_DAT_0064a648 <= (float)_DAT_0064c8f0 - fVar1) {
      fVar3 = (float10)fsin((float10)fVar1);
      param_5 = (float *)(float)((float10)param_1 / fVar3);
      if ((float10)_DAT_0064a660 < (float10)param_1 / fVar3) {
        param_5 = (float *)0x3f800000;
      }
      if ((float)param_5 < (float)_DAT_0064ba38) {
        param_5 = (float *)0xbf800000;
      }
      fVar3 = (float10)FUN_0061d420();
      *param_4 = (float)fVar3;
    }
    else {
      *param_4 = 0.0;
    }
  }
  else {
    *param_4 = 0.0;
  }
  if (param_2 < (float)_DAT_0064a668) {
    *param_4 = (float)_DAT_0064c8f8 - *param_4;
  }
  return;
}


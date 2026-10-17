
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005de000(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,double *param_13,double *param_14,double *param_15,
                 double *param_16,double *param_17,double *param_18)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  *param_13 = (double)param_10;
  *param_14 = (double)param_11;
  *param_15 = (double)param_12;
  FUN_005aabf0(DAT_00701580 * param_1 + param_4 * DAT_00701584 + param_7 * DAT_00701588,
               param_2 * DAT_00701580 + param_5 * DAT_00701584 + param_8 * DAT_00701588,
               param_3 * DAT_00701580 + param_6 * DAT_00701584 + param_9 * DAT_00701588,&local_64,
               &local_80);
  *param_17 = (double)(local_80 - (float)_DAT_0064c9f0);
  fVar1 = (float)_DAT_0064c9f0;
  *param_16 = (double)(local_64 - fVar1);
  local_7c = DAT_00701590 * param_1 + param_4 * DAT_00701594 + param_7 * DAT_00701598;
  local_78 = param_2 * DAT_00701590 + param_5 * DAT_00701594 + param_8 * DAT_00701598;
  local_74 = param_3 * DAT_00701590 + param_6 * DAT_00701594 + param_9 * DAT_00701598;
  pfVar4 = (float *)FUN_005ab7d0(local_60,-(local_64 - fVar1));
  fVar1 = local_7c * *pfVar4 + local_78 * pfVar4[3] + local_74 * pfVar4[6] + pfVar4[9];
  fVar2 = local_7c * pfVar4[1] + local_78 * pfVar4[4] + local_74 * pfVar4[7] + pfVar4[10];
  fVar3 = local_7c * pfVar4[2] + local_78 * pfVar4[5] + local_74 * pfVar4[8] + pfVar4[0xb];
  pfVar4 = (float *)FUN_005ab5d0(local_30,(float)*param_17);
  FUN_0041ce10(fVar1 * *pfVar4 + fVar2 * pfVar4[3] + fVar3 * pfVar4[6] + pfVar4[9],
               fVar1 * pfVar4[1] + fVar2 * pfVar4[4] + fVar3 * pfVar4[7] + pfVar4[10],
               fVar1 * pfVar4[2] + fVar2 * pfVar4[5] + fVar3 * pfVar4[8] + pfVar4[0xb]);
  local_80 = (float)(uint)(local_68 < (float)_DAT_0064a6d0);
  if (ABS((double)(int)local_80) == _DAT_0064a668) {
    fVar5 = (float10)FUN_0061e4b0();
    *param_18 = (double)fVar5;
    if (local_68 < _DAT_0064b254) {
      *param_18 = (double)((float10)_DAT_0064c8f0 - fVar5);
    }
  }
  else {
    fVar5 = (float10)FUN_0061d420();
    *param_18 = (double)fVar5;
    if (local_70 < _DAT_0064b254) {
      *param_18 = (double)-fVar5;
      return;
    }
  }
  return;
}


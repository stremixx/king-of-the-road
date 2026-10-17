
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005a0390(undefined4 *param_1,float *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059a200(DAT_00695184,param_2,0x3f800000,0x3f800000,param_5,param_1[0x1c],0x40c00000,
               0x40c00000,100);
  pfVar1 = (float *)(param_1 + 0x27);
  *pfVar1 = 0.0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *param_1 = &PTR_LAB_0065023c;
  param_1[5] = &PTR_LAB_006501f0;
  param_1[0x25] = param_4;
  *pfVar1 = *param_2;
  local_4 = 0;
  param_1[0x28] = param_2[1];
  param_1[0x29] = param_2[2];
  param_1[0x2c] = param_3;
  param_1[0x26] = param_6;
  if (param_4 == 0) {
    param_1[0x2b] = 0;
    param_1[0x2a] = 0x3f800000;
  }
  else {
    param_1[0x2b] = 0x3f000000;
    param_1[0x2a] = 0x3dcccccd;
  }
  param_1[0x2e] = 0x3f3504f3;
  param_1[0x2d] = 0x3f3504f3;
  fVar2 = (float)*(double *)(DAT_00695184 + 0xb58);
  local_74 = (float)*(double *)(DAT_00695184 + 0xb60);
  local_70 = (float)*(double *)(DAT_00695184 + 0xb68);
  if (param_6 == 0) {
    local_6c = fVar2 - *pfVar1;
    local_68 = local_74 - (float)param_1[0x28];
    local_64 = local_70 - (float)param_1[0x29];
    local_3c = local_6c;
    local_38 = local_68;
    local_34 = local_64;
    pfVar4 = (float *)FUN_005aaad0(local_18,&local_3c);
    fVar2 = pfVar4[1] * _DAT_0064b2f4;
    fVar3 = pfVar4[2] * _DAT_0064b2f4;
    param_1[0x13] = *pfVar4 * _DAT_0064b2f4 + *pfVar1;
    param_1[0x14] = fVar2 + (float)param_1[0x28];
    param_1[0x15] = fVar3 + (float)param_1[0x29];
  }
  else if (param_6 == 1) {
    local_6c = fVar2 - *pfVar1;
    local_68 = local_74 - (float)param_1[0x28];
    local_64 = local_70 - (float)param_1[0x29];
    local_48 = local_6c;
    local_44 = local_68;
    local_40 = local_64;
    pfVar4 = (float *)FUN_005aaad0(local_24,&local_48);
    fVar2 = pfVar4[1] * _DAT_0064b250;
    fVar3 = pfVar4[2] * _DAT_0064b250;
    param_1[0x13] = *pfVar4 * _DAT_0064b250 + *pfVar1;
    param_1[0x14] = fVar2 + (float)param_1[0x28];
    param_1[0x15] = fVar3 + (float)param_1[0x29];
  }
  else if (param_6 == 2) {
    FUN_0041ce10(fVar2 - *pfVar1,local_74 - (float)param_1[0x28],local_70 - (float)param_1[0x29]);
    local_78 = local_6c;
    local_74 = local_68;
    local_70 = local_64;
    pfVar4 = (float *)FUN_005aaad0(local_30,&local_78);
    FUN_0041ce10(*pfVar4 * _DAT_0064b328,pfVar4[1] * _DAT_0064b328,pfVar4[2] * _DAT_0064b328);
    FUN_0041ce10(local_60 + *pfVar1,local_5c + (float)param_1[0x28],local_58 + (float)param_1[0x29])
    ;
    param_1[0x13] = local_54;
    param_1[0x14] = local_50;
    param_1[0x15] = local_4c;
  }
  ExceptionList = local_c;
  return param_1;
}


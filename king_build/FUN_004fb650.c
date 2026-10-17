
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004fb650(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6,
            int param_7)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_2c;
  undefined1 local_24 [12];
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_7 * 3 + 0x72f;
  pfVar4 = (float *)(param_1 + iVar1 * 4);
  FUN_0041ce10(pfVar4[1] * param_4[3] + pfVar4[2] * param_4[6] + *param_4 * *pfVar4 + param_4[9],
               param_4[1] * *pfVar4 + pfVar4[1] * param_4[4] + pfVar4[2] * param_4[7] + param_4[10],
               pfVar4[1] * param_4[5] +
               param_4[2] * *pfVar4 + *(float *)(param_1 + 8 + iVar1 * 4) * param_4[8] +
               param_4[0xb]);
  FUN_0041ce10(DAT_00701590 * _DAT_0064c7a8,DAT_00701594 * _DAT_0064c7a8,
               DAT_00701598 * _DAT_0064c7a8);
  FUN_0041ce10(*pfVar4 - local_68,pfVar4[1] - local_64,pfVar4[2] - local_60);
  FUN_0041ce10((float)local_98 * *param_4 + local_90 * param_4[6] + local_98._4_4_ * param_4[3] +
               param_4[9],
               local_90 * param_4[7] + local_98._4_4_ * param_4[4] + (float)local_98 * param_4[1] +
               param_4[10],
               local_90 * param_4[8] + (float)local_98 * param_4[2] + local_98._4_4_ * param_4[5] +
               param_4[0xb]);
  FUN_0041ce10(local_18 - local_8c,local_14 - local_88,local_10 - local_84);
  local_90 = local_60;
  FUN_005aaad0(&local_5c,&local_98);
  iVar1 = param_1 + param_7 * 0xf8;
  local_50 = *(float *)(iVar1 + 0x1024);
  local_4c = *(float *)(iVar1 + 0x1028);
  local_38 = *(float *)(iVar1 + 0x104);
  local_48 = *(float *)(iVar1 + 0x102c);
  local_34 = *(float *)(iVar1 + 0x108);
  local_30 = *(float *)(iVar1 + 0x10c);
  FUN_0041ce10(*param_6 - *param_5,param_6[1] - param_5[1],param_6[2] - param_5[2]);
  local_80 = local_68;
  local_7c = local_64;
  local_78 = local_60;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  fVar7 = (float10)FUN_005aabc0(&local_80);
  local_2c = (double)fVar7;
  if ((float10)_DAT_0064a648 <= fVar7) {
    FUN_005aad50(&local_74,(float)fVar7);
    FUN_0041ce10(local_7c * local_48 - local_78 * local_4c,local_78 * local_50 - local_48 * local_80
                 ,local_4c * local_80 - local_7c * local_50);
    FUN_0041ce10(local_64 * local_78 - local_60 * local_7c,local_60 * local_80 - local_68 * local_78
                 ,local_68 * local_7c - local_64 * local_80);
    local_74 = local_44;
    local_70 = local_40;
    local_6c = local_3c;
    pfVar4 = (float *)FUN_005aaad0(local_24,&local_74);
    local_98._0_4_ = *pfVar4;
    local_98._4_4_ = pfVar4[1];
    local_90 = pfVar4[2];
  }
  else {
    pfVar4 = (float *)(param_1 + (param_7 + 1) * 0xf8);
    FUN_0041ce10(*pfVar4 - *(float *)(iVar1 + 0x1018),pfVar4[1] - *(float *)(iVar1 + 0x101c),
                 *(float *)(param_1 + 8 + (param_7 + 1) * 0xf8) - *(float *)(iVar1 + 0x1020));
    local_90 = local_60;
    pfVar4 = (float *)FUN_005aaad0(&local_74,&local_98);
    local_80 = *pfVar4;
    local_7c = pfVar4[1];
    local_78 = pfVar4[2];
    FUN_0041ce10(local_38 + local_50,local_34 + local_4c,local_30 + local_48);
    FUN_0041ce10(local_68 * _DAT_0064b248,local_64 * _DAT_0064b248,local_60 * _DAT_0064b248);
    local_98._0_4_ = local_44;
    local_98._4_4_ = local_40;
    local_90 = local_3c;
  }
  if ((float)_DAT_0064a648 <=
      ABS(local_58 * local_98._4_4_ + local_54 * local_90 + local_5c * (float)local_98)) {
    *param_3 = (float)local_98;
    param_3[1] = local_98._4_4_;
    param_3[2] = local_90;
    uVar5 = FUN_004bde20(local_24,param_6,&local_8c);
    fVar7 = (float10)FUN_004e1080(param_3,uVar5);
    local_98 = (double)fVar7;
    fVar7 = (float10)FUN_004e1080(param_3,&local_5c);
    uVar5 = FUN_004bdd80(local_24,&local_5c,(float)((float10)local_98 / fVar7));
    pfVar4 = (float *)FUN_004bddd0(&local_74,&local_8c,uVar5);
    *param_2 = *pfVar4;
    param_2[1] = pfVar4[1];
    param_2[2] = pfVar4[2];
    puVar6 = (undefined4 *)FUN_004bde20(local_24,param_6,param_2);
    local_c = *puVar6;
    local_8 = puVar6[1];
    local_4 = puVar6[2];
    fVar7 = (float10)FUN_004e1080(&local_80,&local_c);
    if (fVar7 < (float10)_DAT_0064a668) {
      if (fVar7 <= (float10)local_2c) {
        *param_3 = local_50;
        param_3[1] = local_4c;
        param_3[2] = local_48;
        fVar7 = (float10)FUN_004e1080(&local_50,&local_5c);
        if (ABS(fVar7) < (float10)_DAT_0064a648) {
          *param_2 = local_8c;
          param_2[1] = local_88;
          param_2[2] = local_84;
          return 1;
        }
        uVar5 = FUN_004bde20(local_24,param_6,&local_8c);
        fVar7 = (float10)FUN_004e1080(param_3,uVar5);
        local_98 = (double)fVar7;
        fVar7 = (float10)FUN_004e1080(param_3,&local_5c);
        fVar7 = (float10)local_98 / fVar7;
        goto LAB_004fc0bd;
      }
    }
    else if (fVar7 <= (float10)local_2c) {
      fVar7 = (float10)FUN_004e1080(&local_5c,param_3);
      if ((float10)_DAT_0064a668 <= fVar7) {
        return 0;
      }
      return 1;
    }
    *param_3 = local_38;
    param_3[1] = local_34;
    param_3[2] = local_30;
    fVar7 = (float10)FUN_004e1080(&local_38,&local_5c);
    if (ABS(fVar7) < (float10)_DAT_0064a648) {
      *param_2 = local_8c;
      param_2[1] = local_88;
      param_2[2] = local_84;
      return 1;
    }
    uVar5 = FUN_004bde20(local_24,param_5,&local_8c);
    fVar7 = (float10)FUN_004e1080(param_3,uVar5);
    local_98 = (double)fVar7;
    fVar7 = (float10)FUN_004e1080(param_3,&local_5c);
    fVar7 = (float10)local_98 / fVar7;
LAB_004fc0bd:
    uVar5 = FUN_004bdd80(local_24,&local_5c,(float)fVar7);
    pfVar4 = (float *)FUN_004bddd0(&local_74,&local_8c,uVar5);
    *param_2 = *pfVar4;
    param_2[1] = pfVar4[1];
    param_2[2] = pfVar4[2];
    fVar7 = (float10)FUN_004e1080(&local_5c,param_3);
    if ((float10)_DAT_0064a668 <= fVar7) {
      return 0;
    }
    return 1;
  }
  if ((float)_DAT_0064a648 <=
      (float)local_98 * (float)local_98 + local_90 * local_90 + local_98._4_4_ * local_98._4_4_) {
    *param_2 = *param_5;
    param_2[1] = param_5[1];
    param_2[2] = param_5[2];
    *param_3 = (float)local_98;
    param_3[1] = local_98._4_4_;
    param_3[2] = local_90;
    return 1;
  }
  if (local_2c < _DAT_0064a648) {
    FUN_0041ce10(*param_6 - local_8c,param_6[1] - local_88,param_6[2] - local_84);
    FUN_0041ce10(*param_6 - local_18,param_6[1] - local_14,param_6[2] - local_10);
    *param_2 = *param_5;
    param_2[1] = param_5[1];
    param_2[2] = param_5[2];
    goto LAB_004fbdf0;
  }
  FUN_0041ce10(local_8c - *param_5,local_88 - param_5[1],local_84 - param_5[2]);
  bVar2 = local_74 * local_80 + local_70 * local_7c + local_6c * local_78 < (float)_DAT_0064a668;
  FUN_0041ce10(local_8c - *param_6,local_88 - param_6[1],local_84 - param_6[2]);
  bVar3 = (float)_DAT_0064a668 < local_74 * local_80 + local_70 * local_7c + local_6c * local_78;
  FUN_0041ce10(local_8c - *param_5,local_88 - param_5[1],local_84 - param_5[2]);
  local_44 = local_74;
  local_40 = local_70;
  local_3c = local_6c;
  fVar7 = (float10)FUN_004e1080(&local_80,&local_44);
  local_2c = (double)CONCAT44(local_2c._4_4_,1);
  if ((float10)_DAT_0064a668 <= fVar7) {
    local_2c = (double)((ulonglong)local_2c._4_4_ << 0x20);
  }
  uVar5 = FUN_004bde20(local_24,&local_8c,param_6);
  fVar7 = (float10)FUN_004e1080(&local_80,uVar5);
  if (bVar3) {
    if (bVar2) goto LAB_004fbd97;
LAB_004fbdb4:
    if ((bVar3) && ((int)local_2c != 0)) {
      *param_2 = *param_6;
      param_2[1] = param_6[1];
      param_2[2] = param_6[2];
      goto LAB_004fbdf0;
    }
    *param_2 = *param_6;
    param_2[1] = param_6[1];
    local_84 = param_6[2];
  }
  else {
    if (bVar2) {
LAB_004fbd97:
      if ((float10)_DAT_0064a668 < fVar7) {
        *param_2 = *param_5;
        param_2[1] = param_5[1];
        param_2[2] = param_5[2];
        goto LAB_004fbdf0;
      }
      goto LAB_004fbdb4;
    }
    *param_2 = local_8c;
    param_2[1] = local_88;
  }
  param_2[2] = local_84;
LAB_004fbdf0:
  uVar5 = FUN_004bddd0(local_24,&local_50,&local_38,0x40000000);
  pfVar4 = (float *)FUN_004e1030(&local_74,uVar5);
  *param_3 = *pfVar4;
  param_3[1] = pfVar4[1];
  param_3[2] = pfVar4[2];
  return 1;
}


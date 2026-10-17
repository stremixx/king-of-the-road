
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005f50f0(byte param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float local_9c;
  float local_98;
  float local_94;
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
  undefined8 local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_90 = 0.0;
  local_6c = *param_4;
  local_8c = 0.0;
  local_68 = param_4[1];
  local_88 = 0.0;
  local_84 = *param_5;
  local_64 = param_4[2];
  local_80 = param_5[1];
  local_78 = 0.0;
  local_40 = *param_2;
  local_7c = param_5[2];
  local_3c = param_2[1];
  local_74 = 0.0;
  local_34 = *param_3;
  local_38 = param_2[2];
  local_30 = param_3[1];
  local_2c = param_3[2];
  local_70 = 0.0;
  FUN_0041ce10(local_40 - local_34,local_3c - local_30,local_38 - local_2c);
  FUN_0041ce10(local_4c._4_4_ * DAT_00701598 - local_44 * DAT_00701594,
               local_44 * DAT_00701590 - (float)local_4c * DAT_00701598,
               (float)local_4c * DAT_00701594 - local_4c._4_4_ * DAT_00701590);
  local_9c = local_60;
  local_98 = local_5c;
  local_94 = local_58;
  pfVar4 = (float *)FUN_005aaad0(&local_28,&local_9c);
  local_90 = *pfVar4;
  local_8c = pfVar4[1];
  local_88 = pfVar4[2];
  FUN_004042a0();
  local_4 = 0.0;
  FUN_0041ce10(-local_90,-local_8c,-local_88);
  fVar1 = local_94 * local_38;
  local_64 = 0.0;
  local_7c = 0.0;
  local_38 = 0.0;
  local_2c = 0.0;
  local_50 = local_98 * local_3c + fVar1 + local_9c * local_40;
  FUN_0041ce10(local_84 - local_6c,local_80 - local_68,0);
  if ((local_98 * local_8c + local_94 * local_88 + local_9c * local_90 <= (float)_DAT_0064a738) &&
     ((float)_DAT_00650700 <=
      local_68 * local_8c + local_88 * local_64 + local_90 * local_6c + local_50)) {
    if ((param_1 & 2) == 0) {
      fVar7 = (float10)FUN_004e1080(&local_84,&local_90);
      if (fVar7 + (float10)local_50 <= (float10)_DAT_0064a738) {
        uVar6 = FUN_004bde20(&local_28,&local_84,&local_6c,&local_90);
        fVar7 = (float10)FUN_004e1080(uVar6);
        if ((float10)_DAT_0064a920 <= ABS(fVar7)) {
          fVar7 = (float10)FUN_004e1080(&local_6c,&local_90);
          local_4c = (double)(fVar7 + (float10)local_50);
          uVar6 = FUN_004bde20(&local_28,&local_84,&local_6c,&local_90);
          fVar7 = (float10)FUN_004e1080(uVar6);
          local_54 = (float)-((float10)local_4c / fVar7);
        }
        else {
          local_54 = 0.5;
        }
        if (((float)_DAT_00650700 <= local_54) && (local_54 <= (float)_DAT_00651cf0)) {
          uVar6 = FUN_004bde20(&local_28,&local_84,&local_6c,local_54);
          uVar6 = FUN_004bdd80(&local_1c,uVar6);
          pfVar4 = (float *)FUN_004bddd0(&local_9c,&local_6c,uVar6);
          local_78 = *pfVar4;
          local_74 = pfVar4[1];
          local_70 = pfVar4[2];
          uVar6 = FUN_004bde20(&local_28,&local_34,&local_40);
          fVar7 = (float10)FUN_005aabc0(uVar6);
          local_4c = (double)(fVar7 + (float10)_DAT_0064a738);
          uVar6 = FUN_004bde20(&local_28,&local_78,&local_40);
          fVar7 = (float10)FUN_005aabc0(uVar6);
          if (fVar7 <= (float10)local_4c) {
            uVar6 = FUN_004bde20(&local_28,&local_78,&local_34);
            fVar7 = (float10)FUN_005aabc0(uVar6);
            if (fVar7 <= (float10)local_4c) {
              fVar1 = param_5[2];
              *param_4 = local_78;
              param_4[1] = local_74;
              param_4[2] = (fVar1 - param_4[2]) * local_54 + param_4[2];
              *param_5 = local_90;
              param_5[1] = local_8c;
              param_5[2] = local_88;
              return 1;
            }
          }
        }
      }
    }
    else {
      local_50 = local_50 - param_6;
      if (local_80 * local_8c + local_88 * local_7c + local_90 * local_84 + local_50 <=
          (float)_DAT_0064a738) {
        FUN_0041ce10(local_84 - local_6c,local_80 - local_68,local_7c - local_64);
        if ((float)_DAT_0064a920 <=
            ABS(local_98 * local_8c + local_94 * local_88 + local_9c * local_90)) {
          FUN_0041ce10(local_84 - local_6c,local_80 - local_68,local_7c - local_64);
          local_54 = -((local_68 * local_8c + local_88 * local_64 + local_90 * local_6c + local_50)
                      / (local_98 * local_8c + local_94 * local_88 + local_9c * local_90));
          if (_DAT_0064b240 <= local_54) {
            return 0;
          }
          FUN_0041ce10(local_84 - local_6c,local_80 - local_68,local_7c - local_64);
          FUN_0041ce10(local_9c * local_54,local_98 * local_54,local_94 * local_54);
          FUN_0041ce10(local_60 + local_6c,local_5c + local_68,local_58 + local_64);
          local_78 = (float)local_4c;
          local_74 = local_4c._4_4_;
          local_70 = local_44;
          FUN_0041ce10(local_90 * param_6,local_8c * param_6,local_88 * param_6);
          FUN_0041ce10(local_78 - local_9c,local_74 - local_98,local_70 - local_94);
          local_78 = local_60;
          local_74 = local_5c;
          local_70 = local_58;
        }
        else {
          fVar1 = local_80 * local_8c + local_88 * local_7c + local_90 * local_84 + local_50 +
                  param_6;
          FUN_0041ce10(local_90 * fVar1,local_8c * fVar1,local_88 * fVar1);
          FUN_0041ce10(local_84 - local_9c,local_80 - local_98,local_7c - local_94);
          local_78 = local_60;
          local_74 = local_5c;
          local_70 = local_58;
          local_54 = 1.0;
        }
        FUN_0041ce10(local_34 - local_40,local_30 - local_3c,local_2c - local_38);
        local_60 = local_9c;
        local_5c = local_98;
        local_58 = local_94;
        fVar7 = (float10)FUN_005aabc0(&local_60);
        local_4c._0_4_ = (float)(fVar7 + (float10)param_6);
        FUN_0041ce10(local_78 - local_40,local_74 - local_3c,local_70 - local_38);
        local_60 = local_9c;
        local_5c = local_98;
        local_58 = local_94;
        fVar7 = (float10)FUN_005aabc0(&local_60);
        if (fVar7 < (float10)(float)local_4c) {
          FUN_0041ce10(local_78 - local_34,local_74 - local_30,local_70 - local_2c);
          local_60 = local_9c;
          local_5c = local_98;
          local_58 = local_94;
          fVar7 = (float10)FUN_005aabc0(&local_60);
          if (fVar7 < (float10)(float)local_4c) {
            fVar1 = param_5[2];
            fVar2 = param_4[2];
            fVar3 = param_4[2];
            *param_5 = local_90;
            param_5[1] = local_8c;
            param_5[2] = local_88;
            *param_4 = local_78;
            param_4[1] = local_74;
            param_4[2] = (fVar1 - fVar2) * local_54 + fVar3;
            return 1;
          }
        }
        FUN_0041ce10(local_6c - local_84,local_68 - local_80,local_64 - local_7c);
        local_60 = local_9c;
        local_5c = local_98;
        local_58 = local_94;
        pfVar4 = (float *)FUN_005aaad0(&local_28,&local_60);
        local_10 = *pfVar4;
        local_c = pfVar4[1];
        local_8 = pfVar4[2];
        FUN_0041ce10(-local_10,-local_c,-local_8);
        local_4 = local_9c * local_40 + local_98 * local_3c + local_94 * local_38;
        iVar5 = FUN_005abf10(&local_78,local_6c,local_68,local_64,local_84,local_80,local_7c);
        if (iVar5 != 0) {
          FUN_0041ce10(local_78 - local_40,local_74 - local_3c,local_70 - local_38);
          local_60 = local_9c;
          local_5c = local_98;
          local_58 = local_94;
          fVar7 = (float10)FUN_005aabc0(&local_60);
          if (fVar7 < (float10)param_6) {
            FUN_0041ce10(local_78 - local_6c,local_74 - local_68,local_70 - local_64);
            local_1c = local_9c;
            local_18 = local_98;
            local_14 = local_94;
            FUN_0041ce10(local_6c - local_84,local_68 - local_80,local_64 - local_7c);
            local_28 = local_60;
            local_24 = local_5c;
            local_20 = local_58;
            fVar7 = (float10)FUN_005aabc0(&local_1c);
            local_4c._0_4_ = (float)fVar7;
            fVar7 = (float10)FUN_005aabc0(&local_28);
            if ((float10)(float)local_4c < fVar7) {
              FUN_0041ce10(local_78 - local_84,local_74 - local_80,local_70 - local_7c);
              local_1c = local_28;
              local_18 = local_24;
              local_14 = local_20;
              fVar7 = (float10)FUN_005aabc0(&local_1c);
              local_4c._0_4_ = (float)fVar7;
              uVar6 = FUN_004bde20(&local_9c,&local_6c,&local_84);
              fVar7 = (float10)FUN_005aabc0(uVar6);
              if (((float10)(float)local_4c < fVar7) &&
                 ((float)_DAT_0064a668 <
                  local_80 * local_8c + local_88 * local_7c + local_90 * local_84 + local_50 +
                  param_6)) {
                *param_5 = local_90;
                param_5[1] = local_8c;
                param_5[2] = local_88;
                *param_4 = local_40;
                param_4[1] = local_3c;
                param_4[2] = local_38;
                return 1;
              }
            }
          }
        }
        uVar6 = FUN_004cb2c0(&local_28,&local_10,&local_34);
        fVar7 = (float10)FUN_004e1080(uVar6);
        local_4 = (float)fVar7;
        iVar5 = FUN_005abf10(&local_78,local_6c,local_68,local_64,local_84,local_80,local_7c);
        if (iVar5 != 0) {
          uVar6 = FUN_004bde20(&local_28,&local_78,&local_34);
          fVar7 = (float10)FUN_005aabc0(uVar6);
          if (fVar7 < (float10)param_6) {
            uVar6 = FUN_004bde20(&local_28,&local_78,&local_6c);
            fVar7 = (float10)FUN_005aabc0(uVar6);
            local_4c._0_4_ = (float)fVar7;
            uVar6 = FUN_004bde20(&local_1c,&local_6c,&local_84);
            fVar7 = (float10)FUN_005aabc0(uVar6);
            if ((float10)(float)local_4c < fVar7) {
              uVar6 = FUN_004bde20(&local_28,&local_78,&local_84);
              fVar7 = (float10)FUN_005aabc0(uVar6);
              local_4c = (double)CONCAT44(local_4c._4_4_,(float)fVar7);
              uVar6 = FUN_004bde20(&local_1c,&local_6c,&local_84);
              fVar7 = (float10)FUN_005aabc0(uVar6);
              if (((float10)(float)local_4c < fVar7) &&
                 (fVar7 = (float10)FUN_004e1080(&local_90,&local_84),
                 (float10)_DAT_0064a668 < fVar7 + (float10)local_50 + (float10)param_6)) {
                *param_5 = local_90;
                param_5[1] = local_8c;
                param_5[2] = local_88;
                *param_4 = local_34;
                param_4[1] = local_30;
                param_4[2] = local_2c;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


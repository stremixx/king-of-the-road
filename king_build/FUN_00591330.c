
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00591330(int param_1,float *param_2,undefined4 param_3,int param_4,float *param_5,
                float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  undefined4 uVar10;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *param_7 = 0.0;
  local_64 = *(float *)(param_1 + 0xd74) * param_2[6] +
             *(float *)(param_1 + 0xd70) * param_2[3] + *param_2 * *(float *)(param_1 + 0xd6c) +
             param_2[9];
  local_60 = param_2[1] * *(float *)(param_1 + 0xd6c) +
             *(float *)(param_1 + 0xd70) * param_2[4] + *(float *)(param_1 + 0xd74) * param_2[7] +
             param_2[10];
  local_5c = param_2[2] * *(float *)(param_1 + 0xd6c) +
             param_2[5] * *(float *)(param_1 + 0xd70) + param_2[8] * *(float *)(param_1 + 0xd74) +
             param_2[0xb];
  local_4c = *param_5 * *(float *)(param_4 + 0xd6c) +
             param_5[3] * *(float *)(param_4 + 0xd70) + param_5[6] * *(float *)(param_4 + 0xd74) +
             param_5[9];
  local_48 = param_5[4] * *(float *)(param_4 + 0xd70) +
             param_5[1] * *(float *)(param_4 + 0xd6c) + param_5[7] * *(float *)(param_4 + 0xd74) +
             param_5[10];
  local_44 = param_5[5] * *(float *)(param_4 + 0xd70) +
             param_5[2] * *(float *)(param_4 + 0xd6c) + param_5[8] * *(float *)(param_4 + 0xd74) +
             param_5[0xb];
  fVar1 = (local_60 - local_48) * (local_60 - local_48) +
          (local_64 - local_4c) * (local_64 - local_4c) +
          (local_5c - local_44) * (local_5c - local_44);
  local_6c = *(float *)(param_1 + 0xcc8) + *(float *)(param_4 + 0xcc8);
  if (local_6c * local_6c < fVar1) {
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0xcd0) + *(float *)(param_4 + 0xcd0);
  *param_7 = -*(float *)(param_1 + 0xcd0);
  if (fVar2 * fVar2 <= fVar1) {
    local_78 = 0.0;
    local_74 = 0.0;
    local_70 = 0.0;
    local_84 = 0.0;
    local_80 = 0.0;
    local_7c = 0.0;
    FUN_0058abf0();
    local_58 = 0;
    local_54 = 1;
    local_68 = 1;
    do {
      if (local_68 == 0) {
        local_54 = 0;
        FUN_0041ce10(local_64 * *param_6 + local_60 * param_6[3] + local_5c * param_6[6] +
                     param_6[9],
                     local_64 * param_6[1] + local_60 * param_6[4] + local_5c * param_6[7] +
                     param_6[10],
                     local_64 * param_6[2] + local_60 * param_6[5] + local_5c * param_6[8] +
                     param_6[0xb]);
        local_84 = local_18;
        local_80 = local_14;
        local_7c = local_10;
      }
      else {
        local_68 = FUN_0058c820(&local_78);
        fVar1 = local_74 * param_2[3] + local_70 * param_2[6] + local_78 * *param_2 + param_2[9];
        fVar3 = local_74 * param_2[4] + local_70 * param_2[7] + local_78 * param_2[1] + param_2[10];
        fVar2 = local_78 * param_2[2] + local_74 * param_2[5] + local_70 * param_2[8] + param_2[0xb]
        ;
        FUN_0041ce10(fVar1 * *param_6 + fVar3 * param_6[3] + fVar2 * param_6[6] + param_6[9],
                     fVar1 * param_6[1] + fVar3 * param_6[4] + fVar2 * param_6[7] + param_6[10],
                     fVar1 * param_6[2] + fVar3 * param_6[5] + fVar2 * param_6[8] + param_6[0xb]);
        local_84 = local_c;
        local_80 = local_8;
        local_7c = local_4;
      }
      local_50 = 1;
      local_88 = 0.0;
      iVar6 = FUN_0058c8f0(&local_34);
      while (iVar6 != 0) {
        FUN_0041ce10(local_84 - local_24,local_80 - local_20,local_7c - local_1c);
        fVar1 = local_40 * local_34 + local_3c * local_30 + local_38 * local_2c;
        if (local_54 == 0) {
          if (fVar1 <= _DAT_0064b254) {
            if (*param_7 < fVar1) {
              *param_7 = fVar1 - *(float *)(param_1 + 0xcd0);
            }
          }
          else {
            local_50 = 0;
          }
        }
        else if (fVar1 <= _DAT_0064b254) {
          if (*param_7 < fVar1) {
            *param_7 = fVar1;
          }
        }
        else {
          local_50 = 0;
          if (local_88 < fVar1) {
            local_88 = fVar1;
          }
        }
        iVar6 = FUN_0058c8f0(&local_34);
      }
      if ((local_54 != 0) && (local_88 < local_6c)) {
        local_6c = local_88;
      }
      if (local_50 != 0) {
        local_58 = 1;
      }
    } while (local_54 != 0);
    if (local_58 == 0) {
      bVar4 = true;
      *param_7 = -*(float *)(param_4 + 0xcd0);
      local_68 = 1;
      local_54 = 0;
      do {
        uVar10 = param_3;
        if (local_68 == 0) {
          pfVar7 = &local_4c;
          bVar4 = false;
          pfVar8 = &local_64;
        }
        else {
          local_68 = FUN_0058c820(&local_78);
          pfVar7 = (float *)FUN_0043f690(&local_18,&local_78,param_5,param_3);
          pfVar8 = &local_c;
        }
        pfVar7 = (float *)FUN_0043f690(pfVar8,pfVar7,uVar10);
        local_84 = *pfVar7;
        local_80 = pfVar7[1];
        local_7c = pfVar7[2];
        bVar5 = true;
        local_88 = 0.0;
        iVar6 = FUN_0058c8f0(&local_34);
        while (iVar6 != 0) {
          FUN_004bde20(&local_40,&local_84,&local_24);
          fVar9 = (float10)FUN_004e1080(&local_40,&local_34);
          fVar1 = (float)fVar9;
          if (bVar4) {
            if (fVar1 <= _DAT_0064b254) {
              if (*param_7 < fVar1) {
                *param_7 = fVar1;
              }
            }
            else {
              bVar5 = false;
              if (local_88 < fVar1) {
                local_88 = fVar1;
              }
            }
          }
          else if (fVar1 <= _DAT_0064b254) {
            if (*param_7 < fVar1) {
              *param_7 = fVar1 - *(float *)(param_4 + 0xcd0);
            }
          }
          else {
            bVar5 = false;
          }
          iVar6 = FUN_0058c8f0(&local_34);
        }
        if ((bVar4) && (local_88 < local_6c)) {
          local_6c = local_88;
        }
        if (bVar5) {
          local_58 = 1;
        }
      } while (bVar4);
      if (local_58 == 0) {
        *param_7 = local_6c;
      }
    }
    return local_58;
  }
  return 1;
}


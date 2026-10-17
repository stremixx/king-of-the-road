
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005ae6b0(int param_1,undefined4 param_2,int param_3,uint *param_4,float *param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int local_30;
  uint local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  undefined8 local_18;
  
  local_24 = (int *)(param_1 + 0x6dc + *param_4 * 0x58);
  local_28 = (int *)(param_1 + 0x6dc + (*param_4 ^ 1) * 0x58);
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = *local_24;
  pfVar7 = (float *)(param_1 + (iVar3 * 3 + 0x132) * 4);
  uVar5 = (uint)((float)_DAT_0064a668 <=
                *param_5 * *pfVar7 + pfVar7[1] * param_5[1] + pfVar7[2] * param_5[2] + param_5[3]);
  local_30 = 0;
  iVar8 = (int)local_18;
  if (0 < param_3) {
    local_1c = param_3;
    iVar6 = iVar3;
    local_20 = uVar5;
    do {
      local_2c = (uint)((float)_DAT_0064a668 <=
                       *param_5 * *pfVar7 + pfVar7[1] * param_5[1] + pfVar7[2] * param_5[2] +
                       param_5[3]);
      if (local_2c != local_20) {
        iVar2 = iVar8 * 3 + 0x132;
        fVar4 = (*(float *)(param_1 + iVar2 * 4 + 8) - pfVar7[2]) * param_5[2] +
                param_5[1] * (*(float *)(param_1 + 4 + iVar2 * 4) - pfVar7[1]) +
                (*(float *)(param_1 + iVar2 * 4) - *pfVar7) * *param_5;
        if (ABS(fVar4) < (float)_DAT_0064a738) {
          if (fVar4 <= (float)_DAT_0064a668) {
            fVar4 = (float)_DAT_00650700;
          }
          else {
            fVar4 = (float)_DAT_0064a738;
          }
        }
        fVar4 = -((*pfVar7 * *param_5 + pfVar7[1] * param_5[1] + pfVar7[2] * param_5[2] + param_5[3]
                  ) / fVar4);
        local_18 = (double)fVar4;
        if ((float)_DAT_0064a668 <= fVar4) {
          if ((float)_DAT_0064a660 < fVar4) {
            local_18 = 1.0;
          }
        }
        else {
          local_18 = 0.0;
        }
        FUN_005ae450(param_2,local_28,iVar6,iVar8,(int)local_18,local_18._4_4_);
        local_30 = local_30 + 1;
        local_28 = local_28 + 1;
      }
      if (local_2c != 0) {
        *local_28 = *local_24;
        local_28 = local_28 + 1;
        local_30 = local_30 + 1;
      }
      iVar8 = *local_24;
      iVar6 = local_24[1];
      local_24 = local_24 + 1;
      pfVar7 = (float *)(param_1 + (iVar6 * 3 + 0x132) * 4);
      local_20 = local_2c;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if (uVar5 != local_2c) {
    pfVar7 = (float *)(param_1 + (iVar8 * 3 + 0x132) * 4);
    iVar6 = iVar3 * 3 + 0x132;
    pfVar1 = (float *)(param_1 + iVar6 * 4);
    fVar4 = (pfVar7[2] - pfVar1[2]) * param_5[2] +
            param_5[1] * (pfVar7[1] - *(float *)(param_1 + 4 + iVar6 * 4)) +
            (*pfVar7 - *(float *)(param_1 + iVar6 * 4)) * *param_5;
    if (ABS(fVar4) < (float)_DAT_0064a738) {
      if (fVar4 <= (float)_DAT_0064a668) {
        fVar4 = (float)_DAT_00650700;
      }
      else {
        fVar4 = (float)_DAT_0064a738;
      }
    }
    fVar4 = -((*param_5 * *pfVar1 + pfVar1[1] * param_5[1] + pfVar1[2] * param_5[2] + param_5[3]) /
             fVar4);
    local_18 = (double)fVar4;
    if ((float)_DAT_0064a668 <= fVar4) {
      if ((float)_DAT_0064a660 < fVar4) {
        local_18 = 1.0;
      }
    }
    else {
      local_18 = 0.0;
    }
    FUN_005ae450(param_2,local_28,iVar3,iVar8,(int)local_18,local_18._4_4_);
    local_30 = local_30 + 1;
  }
  *param_4 = *param_4 ^ 1;
  return local_30;
}


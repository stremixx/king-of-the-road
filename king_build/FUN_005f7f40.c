
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005f7f40(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  ushort uVar3;
  float10 fVar4;
  float local_48;
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
  undefined1 local_c [12];
  
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  switch(*param_1) {
  case 0:
    return 1;
  case 1:
    pfVar2 = (float *)param_1[2];
    local_3c = *param_2 - *pfVar2;
    local_38 = param_2[1] - pfVar2[1];
    local_34 = param_2[2] - pfVar2[2];
    local_30 = local_3c;
    local_2c = local_38;
    local_28 = local_34;
    fVar4 = (float10)FUN_005aabc0(&local_30);
    if ((float10)*(float *)(param_1[2] + 0xc) < fVar4) {
      return 0;
    }
    return 1;
  case 2:
    pfVar2 = (float *)param_1[2];
    local_3c = *param_2 - *pfVar2;
    local_38 = param_2[1] - pfVar2[1];
    local_34 = param_2[2] - pfVar2[2];
    local_24 = local_3c;
    local_20 = local_38;
    local_1c = local_34;
    fVar4 = (float10)FUN_005aabc0(&local_24);
    uVar3 = (ushort)(fVar4 < (float10)*(float *)(param_1[2] + 0xc)) << 8 |
            (ushort)(fVar4 == (float10)*(float *)(param_1[2] + 0xc)) << 0xe;
    break;
  case 3:
    pfVar2 = (float *)param_1[2];
    local_3c = *param_2 - *pfVar2;
    local_38 = param_2[1] - pfVar2[1];
    local_34 = param_2[2] - pfVar2[2];
    fVar1 = pfVar2[3] * local_3c + pfVar2[4] * local_38 + pfVar2[5] * local_34;
    if (pfVar2[7] < ABS(fVar1)) {
      return 0;
    }
    local_20 = fVar1 * pfVar2[4];
    local_1c = fVar1 * pfVar2[5];
    local_48 = local_3c - fVar1 * pfVar2[3];
    local_44 = local_38 - local_20;
    local_40 = local_34 - local_1c;
    local_30 = local_48;
    local_2c = local_44;
    local_28 = local_40;
    fVar4 = (float10)FUN_005aabc0(&local_48);
    if ((float10)*(float *)(param_1[2] + 0x18) < fVar4) {
      return 0;
    }
    return 1;
  case 4:
    pfVar2 = (float *)param_1[2];
    local_48 = *param_2 - *pfVar2;
    local_44 = param_2[1] - pfVar2[1];
    local_40 = param_2[2] - pfVar2[2];
    fVar1 = pfVar2[3] * local_48 + pfVar2[4] * local_44 + pfVar2[5] * local_40;
    if (pfVar2[7] < ABS(fVar1)) {
      return 1;
    }
    local_3c = local_48;
    local_38 = local_44;
    local_34 = local_40;
    FUN_0041ce10(fVar1 * pfVar2[3],fVar1 * pfVar2[4],fVar1 * pfVar2[5]);
    local_18 = local_3c;
    local_14 = local_38;
    local_10 = local_34;
    pfVar2 = (float *)FUN_004bde20(local_c,&local_48,&local_18);
    local_48 = *pfVar2;
    local_44 = pfVar2[1];
    local_40 = pfVar2[2];
    fVar4 = (float10)FUN_005aabc0(&local_48);
    uVar3 = (ushort)(fVar4 < (float10)*(float *)(param_1[2] + 0x18)) << 8 |
            (ushort)(fVar4 == (float10)*(float *)(param_1[2] + 0x18)) << 0xe;
    break;
  case 5:
    pfVar2 = (float *)param_1[2];
    fVar1 = *param_2 * *pfVar2 + pfVar2[1] * param_2[1] + pfVar2[2] * param_2[2] + pfVar2[3];
    uVar3 = (ushort)(fVar1 < (float)_DAT_0064a668) << 8 |
            (ushort)(fVar1 == (float)_DAT_0064a668) << 0xe;
    break;
  default:
    goto switchD_005f7f69_caseD_6;
  }
  if (uVar3 == 0) {
    return 1;
  }
switchD_005f7f69_caseD_6:
  return 0;
}


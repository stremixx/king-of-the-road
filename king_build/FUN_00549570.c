
void __thiscall FUN_00549570(int *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*param_1 < param_2) {
    *param_1 = param_2;
    iVar2 = *(int *)(param_1[6] + 0x28b4) * 0x970;
    local_54 = *(float *)(&DAT_00696f38 + iVar2);
    local_50 = *(float *)(&DAT_00696f3c + iVar2);
    local_4c = *(float *)(&DAT_00696f40 + iVar2);
    pfVar1 = (float *)(param_1[6] + 0x2c4);
    pfVar3 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 1;
    }
    local_48 = local_30[0] * local_54 + local_30[3] * local_50 + local_18 * local_4c + local_c;
    local_44 = local_30[1] * local_54 + local_20 * local_50 + local_14 * local_4c + local_8;
    local_40 = local_30[2] * local_54 + local_1c * local_50 + local_10 * local_4c + local_4;
    pfVar1 = (float *)FUN_0057d570(local_30);
    local_54 = local_48 * *pfVar1 + local_44 * pfVar1[3] + local_40 * pfVar1[6] + pfVar1[9];
    local_50 = local_48 * pfVar1[1] + local_44 * pfVar1[4] + local_40 * pfVar1[7] + pfVar1[10];
    local_4c = local_48 * pfVar1[2] + local_44 * pfVar1[5] + local_40 * pfVar1[8] + pfVar1[0xb];
    local_3c = local_54;
    local_38 = local_50;
    local_34 = local_4c;
    FUN_004bc520(&local_54,1);
    if ((*(int *)(DAT_006cdbcc + 0x514) < 2) && (*(int *)(DAT_006cdbcc + 0x524) == 0)) {
      FUN_00554c60(0xbecccccd);
    }
  }
  return;
}


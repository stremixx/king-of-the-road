
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00549070(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  float *pfVar7;
  float10 fVar8;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064699b;
  local_c = ExceptionList;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) == 0) {
    ExceptionList = &local_c;
    if ((&DAT_00697110)[*(int *)(*(int *)(param_1 + 0x18) + 0x28b4) * 0x25c] == 3) {
      ExceptionList = &local_c;
      FUN_004ba0b0(*(int *)(param_1 + 0x18),&LAB_00548c90);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = 2;
    fVar8 = (float10)FUN_004e2035();
    *(float *)(param_1 + 4) = (float)fVar8;
    iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x28b4) * 0x970;
    local_54 = *(float *)(&DAT_00696f38 + iVar4);
    local_50 = *(float *)(&DAT_00696f3c + iVar4);
    local_4c = *(float *)(&DAT_00696f40 + iVar4);
    pfVar5 = (float *)(*(int *)(param_1 + 0x18) + 0x2c4);
    pfVar7 = local_3c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    fVar1 = local_3c[0] * local_54 + local_3c[3] * local_50 + local_24 * local_4c + local_18;
    fVar2 = local_3c[1] * local_54 + local_2c * local_50 + local_20 * local_4c + local_14;
    fVar3 = local_3c[2] * local_54 + local_28 * local_50 + local_1c * local_4c + local_10;
    pfVar5 = (float *)FUN_0057d570(local_3c);
    local_54 = fVar1 * *pfVar5 + fVar2 * pfVar5[3] + fVar3 * pfVar5[6] + pfVar5[9];
    local_50 = fVar1 * pfVar5[1] + fVar2 * pfVar5[4] + fVar3 * pfVar5[7] + pfVar5[10];
    local_4c = fVar1 * pfVar5[2] + fVar2 * pfVar5[5] + fVar3 * pfVar5[8] + pfVar5[0xb];
    local_5c = SQRT(*(float *)(*(int *)(param_1 + 0x18) + 0xcd4) * _DAT_0064e730);
    if (_DAT_0064b240 < local_5c) {
      local_5c = 1.0;
    }
    local_48 = local_54;
    local_44 = local_50;
    local_40 = local_4c;
    iVar4 = FUN_00631d33(0x10);
    local_4 = 0;
    if (iVar4 != 0) {
      uVar6 = FUN_00549830(&local_54,local_5c);
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  ExceptionList = local_c;
  return;
}


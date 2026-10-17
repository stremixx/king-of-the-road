
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ad5b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if (DAT_0071f868 != (int *)0x0) {
    FUN_005b5dc0(&local_68);
    iVar3 = *(int *)(param_1 + 0x7a4);
    piVar4 = local_58;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_58[0] = (*(int *)(param_1 + 0x7a0) >> 0x14) + local_68;
    local_58[1] = (iVar3 >> 0x14) + local_64;
    *(int *)(param_1 + 0x2164) = local_58[0];
    iVar3 = (*(int *)(param_1 + 0x7a8) >> 0x14) + 1;
    *(int *)(param_1 + 0x2168) = local_58[1];
    local_58[2] = iVar3 * 2;
    iVar2 = (*(int *)(param_1 + 0x7ac) >> 0x14) + 1;
    *(int *)(param_1 + 0x216c) = iVar3;
    *(int *)(param_1 + 0x2170) = iVar2;
    if ((uint)(local_60 - local_68) < (uint)local_58[2]) {
      local_58[2] = local_60 - local_68;
    }
    local_58[3] = iVar2 * 2;
    if ((uint)(local_5c - local_64) < (uint)local_58[3]) {
      local_58[3] = local_5c - local_64;
    }
    local_44 = 0x3f800000;
    local_48 = 0;
    (**(code **)(*DAT_0071f868 + 0x34))(DAT_0071f868,local_58);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x2024) * 0x30 + 0x10a0 + param_1);
    if (*(double *)(param_1 + 0x2110) <= _DAT_0064a920) {
      local_48 = 0x3f800000;
      uStack_34 = 0x3f800000;
      uStack_28 = 0;
      uStack_24 = 0;
      fStack_20 = 1.0;
      uStack_1c = 0;
      fStack_10 = 0.0;
      uStack_c = 0x3f800000;
    }
    else {
      fVar5 = (float10)*(double *)(param_1 + 0x2118) - (float10)*(double *)(param_1 + 0x2110);
      local_48 = *puVar1;
      uStack_34 = puVar1[8];
      uStack_28 = puVar1[3];
      uStack_24 = puVar1[5];
      uStack_1c = 0x3f800000;
      uStack_c = 0;
      fStack_20 = (float)((float10)*(double *)(param_1 + 0x2118) / fVar5);
      fStack_10 = (float)-(((float10)*(double *)(param_1 + 0x2110) *
                           (float10)*(double *)(param_1 + 0x2118)) / fVar5);
    }
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    local_44 = 0;
    (**(code **)(*DAT_0071f868 + 0x2c))(DAT_0071f868,3,&local_48);
  }
  return;
}


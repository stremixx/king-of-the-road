
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005bc6a0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60 [9];
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30 [9];
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = *(int *)(param_1 + 8);
  local_6c = *(float *)(iVar2 + 0x24);
  local_68 = *(float *)(iVar2 + 0x28);
  local_64 = *(float *)(iVar2 + 0x2c);
  pfVar1 = (float *)(*(int *)(param_1 + 4) * 0x30 + -0xc + iVar2);
  local_78 = *pfVar1;
  local_74 = pfVar1[1];
  local_70 = pfVar1[2];
  puVar4 = *(undefined4 **)(param_2 + 8);
  puVar3 = puVar4;
  puVar5 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_84 = local_6c - local_c;
  local_80 = local_68 - local_8;
  local_7c = local_64 - local_4;
  puVar4 = puVar4 + *(int *)(param_2 + 4) * 0xc + -0xc;
  puVar3 = local_60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  fVar6 = (float10)FUN_005aabc0(&local_84);
  if ((float10)_DAT_0064b240 <= fVar6) {
    local_84 = local_6c - local_3c;
    local_80 = local_68 - local_38;
    local_7c = local_64 - local_34;
    fVar6 = (float10)FUN_005aabc0(&local_84);
    if (fVar6 < (float10)_DAT_0064b240) {
      *(int *)(param_1 + 0x40 + *(int *)(param_1 + 0x38) * 4) = param_2;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_2 + 0x68 + *(int *)(param_2 + 0x3c) * 4) = param_1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
    }
    local_84 = local_78 - local_3c;
    local_80 = local_74 - local_38;
    local_7c = local_70 - local_34;
    fVar6 = (float10)FUN_005aabc0(&local_84);
    if (fVar6 < (float10)_DAT_0064b240) {
      *(int *)(param_1 + 0x68 + *(int *)(param_1 + 0x3c) * 4) = param_2;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(int *)(param_2 + 0x68 + *(int *)(param_2 + 0x3c) * 4) = param_1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
    }
    local_84 = local_78 - local_c;
    local_80 = local_74 - local_8;
    local_7c = local_70 - local_4;
    fVar6 = (float10)FUN_005aabc0(&local_84);
    if ((float10)_DAT_0064b240 <= fVar6) {
      return;
    }
    *(int *)(param_1 + 0x68 + *(int *)(param_1 + 0x3c) * 4) = param_2;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  else {
    *(int *)(param_1 + 0x40 + *(int *)(param_1 + 0x38) * 4) = param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  *(int *)(param_2 + 0x40 + *(int *)(param_2 + 0x38) * 4) = param_1;
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  return;
}


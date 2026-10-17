
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00548900(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 local_d0 [12];
  undefined4 local_c4 [9];
  undefined1 local_a0 [12];
  undefined1 local_94 [48];
  undefined1 local_64 [100];
  
  piVar1 = (int *)(param_1 + 0x10);
  FUN_0057d570();
  iVar3 = FUN_004e2140(local_a0);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_0057d650(local_94);
    puVar6 = local_c4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = FUN_004e2140(local_a0,0x466a6000);
    if (iVar3 != 0) {
      FUN_0061c369(local_64);
      FUN_004e1e9c(local_64);
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x334);
  local_e8 = *(float *)(param_1 + 0x1b0);
  local_e4 = *(float *)(param_1 + 0x1b4);
  local_e0 = *(float *)(param_1 + 0x1b8);
  iVar3 = FUN_004e2140(&local_e8);
  if (iVar3 != 0) {
    local_e8 = *(float *)(param_1 + 0x1d4);
    local_e4 = *(float *)(param_1 + 0x1d8);
    local_e0 = *(float *)(param_1 + 0x1dc);
    iVar3 = FUN_004e2140(&local_e8);
    if (iVar3 != 0) {
      iVar3 = FUN_004e2140(&local_e8);
      if (iVar3 == 0) {
        pfVar5 = (float *)FUN_005aaad0(local_d0);
        local_e8 = *pfVar5 * _DAT_0064b438;
        local_e4 = pfVar5[1] * _DAT_0064b438;
        local_e0 = pfVar5[2] * _DAT_0064b438;
        local_dc = local_e8;
        local_d8 = local_e4;
        local_d4 = local_e0;
      }
      else {
        local_e8 = DAT_007015b0;
        local_e4 = DAT_007015b4;
        local_e0 = DAT_007015b8;
      }
    }
  }
  local_f4 = *(float *)(param_1 + 0x1bc);
  local_f0 = *(float *)(param_1 + 0x1c0);
  local_ec = *(float *)(param_1 + 0x1c4);
  iVar3 = FUN_004e2140(&local_f4);
  if (iVar3 != 0) {
    iVar3 = FUN_004e2140(&local_f4);
    if (iVar3 != 0) {
      pfVar5 = (float *)FUN_00580ef0();
      local_f4 = *pfVar5;
      local_f0 = pfVar5[1];
      local_ec = pfVar5[2];
      iVar3 = FUN_004e2140(&local_f4);
      if (iVar3 != 0) {
        iVar3 = FUN_004e2140(&local_f4);
        if (iVar3 == 0) {
          pfVar5 = (float *)FUN_005aaad0(local_d0);
          local_f4 = *pfVar5 * _DAT_0064b440;
          local_f0 = pfVar5[1] * _DAT_0064b440;
          local_ec = pfVar5[2] * _DAT_0064b440;
          local_dc = local_f4;
          local_d8 = local_f0;
          local_d4 = local_ec;
        }
        else {
          local_f4 = DAT_007015b0;
          local_f0 = DAT_007015b4;
          local_ec = DAT_007015b8;
        }
      }
    }
  }
  (**(code **)(*piVar1 + 0x8c))(uVar2);
  (**(code **)(*piVar1 + 0x90))(&local_f0,s_limit_2_0067908c);
  (**(code **)(*piVar1 + 0x94))(&stack0xfffffefc,s_limit_3_00679084);
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005674d0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float **ppfVar7;
  float *apfStack_10c [4];
  int *piStack_fc;
  undefined1 *puStack_f8;
  float local_f4;
  int *local_f0;
  int *local_ec;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_b4 [3];
  undefined4 local_a8;
  undefined4 local_a4;
  char *local_a0;
  char *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  int local_80 [8];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0xc4c) == 0) {
    local_ec = (int *)(param_1 + 0x24);
    local_f0 = *(int **)(*(int *)(param_1 + 0x60) + 0xc);
    local_f4 = 7.939819e-39;
    FUN_00560800();
  }
  local_f0 = local_b4;
  local_ec = *(int **)(*(int *)(param_1 + 0x60) + 0xc);
  local_f4 = 7.939843e-39;
  FUN_004365d0();
  if (local_b4[0] == -1) {
    if (*(int *)(param_1 + 0xca4) == 4) {
      return;
    }
    local_ec = (int *)0x4;
    local_f0 = (int *)0x567531;
    FUN_00565a00();
    return;
  }
  pfVar1 = (float *)(param_1 + 0x24);
  puStack_f8 = (undefined1 *)local_b4[0];
  local_f4 = *pfVar1;
  local_f0 = *(int **)(param_1 + 0x28);
  local_ec = *(int **)(param_1 + 0x2c);
  piStack_fc = local_80;
  apfStack_10c[3] = (float *)0x567561;
  FUN_00437470();
  if (local_80[0] == -1) {
    local_ec = (int *)0x4;
    local_f0 = (int *)0x567575;
    FUN_00565a00();
    return;
  }
  local_ec = local_b4 + 1;
  local_8c = 0xffffffff;
  local_88 = 0xffffffff;
  piVar6 = local_80;
  ppfVar7 = apfStack_10c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppfVar7 = (float *)*piVar6;
    piVar6 = piVar6 + 1;
    ppfVar7 = ppfVar7 + 1;
  }
  local_b4[1] = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = s_UNDEFINED_MODULE_0066c638;
  local_9c = s_UNDEFINED_ROOM_0066c628;
  local_98 = 0;
  local_94 = 0;
  FUN_00438e50();
  ppfVar7 = apfStack_10c;
  piVar6 = local_80;
  for (iVar5 = 8; ppfVar7 = (float **)((int)ppfVar7 + 4), iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppfVar7 = (float *)*piVar6;
    piVar6 = piVar6 + 1;
  }
  apfStack_10c[0] = &local_c0;
  FUN_00439660();
  fVar2 = local_bc - *(float *)(param_1 + 0x28);
  fVar3 = local_b8 - *(float *)(param_1 + 0x2c);
  if (fVar3 * fVar3 + fVar2 * fVar2 + (local_c0 - *pfVar1) * (local_c0 - *pfVar1) <= _DAT_0064ed3c)
  {
    fVar2 = *(float *)(param_1 + 0xcb8) - *pfVar1;
    fVar3 = *(float *)(param_1 + 0xcbc) - *(float *)(param_1 + 0x28);
    fVar4 = *(float *)(param_1 + 0xcc0) - *(float *)(param_1 + 0x2c);
    if (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 < _DAT_0064ed38) {
      return;
    }
    local_ec = *(int **)(param_1 + 0xcc8);
    local_f0 = (int *)0x567729;
    local_f0 = (int *)FUN_00436590();
    local_f4 = 0.0;
    puStack_f8 = (undefined1 *)0x567731;
    iVar5 = FUN_005ee8e0();
    if (iVar5 == 0) {
      return;
    }
    local_f4 = *(float *)(param_1 + 0xcb8);
    local_f0 = *(int **)(param_1 + 0xcbc);
    local_ec = *(int **)(param_1 + 0xcc0);
    puStack_f8 = local_30;
    piStack_fc = (int *)0x567766;
    FUN_005ab330();
    local_ec = (int *)local_30;
    local_f0 = (int *)iVar5;
  }
  else {
    local_f4 = DAT_00701590 * _DAT_0064b440 + local_c0;
    local_f0 = (int *)(DAT_00701594 * _DAT_0064b440 + local_bc);
    local_ec = (int *)(DAT_00701598 * _DAT_0064b440 + local_b8);
    puStack_f8 = local_60;
    piStack_fc = (int *)0x5676bb;
    FUN_005ab330();
    local_ec = (int *)local_60;
    local_f0 = (int *)*(int *)(param_1 + 0x60);
  }
  local_f4 = 7.940711e-39;
  FUN_00561420();
  local_ec = &DAT_007015b0;
  local_f0 = (int *)0x567785;
  FUN_00561480();
  local_ec = &DAT_007015b0;
  local_f0 = (int *)0x567791;
  FUN_00561460();
  return;
}


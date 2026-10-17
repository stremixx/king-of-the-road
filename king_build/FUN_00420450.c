
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00420450(int param_1)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  double **ppdVar9;
  double *apdStack_170 [7];
  undefined4 uStack_154;
  int *piStack_150;
  uint *puStack_14c;
  int local_138;
  int local_134 [11];
  double local_108;
  double local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  double local_f0;
  double local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8 [2];
  undefined4 local_d0;
  undefined4 local_cc;
  char *local_c8;
  char *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90 [16];
  double local_80;
  undefined4 local_78 [8];
  undefined4 local_58 [8];
  undefined1 local_38 [40];
  double local_10;
  
  puVar7 = (undefined4 *)(param_1 + 0x20);
  ppdVar9 = apdStack_170 + 2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppdVar9 = (double *)*puVar7;
    puVar7 = puVar7 + 1;
    ppdVar9 = ppdVar9 + 1;
  }
  apdStack_170[0] = (double *)0x420479;
  apdStack_170[1] = (double *)(param_1 + 0x10);
  iVar2 = FUN_0043abf0();
  local_134[0] = *(int *)(param_1 + 0x10);
  iVar2 = iVar2 + 1;
  piVar5 = (int *)(local_134[0] + iVar2 * 0xc);
  iVar4 = piVar5[1];
  while( true ) {
    if (iVar4 == 0) {
      return 0x11;
    }
    iVar4 = *piVar5;
    iVar6 = *(int *)(DAT_0068be60 + iVar4 * 4);
    if (2 < (*(int *)(iVar6 + 0x24) - *(int *)(iVar6 + 0x20) >> 2) +
            (*(int *)(iVar6 + 0x18) - *(int *)(iVar6 + 0x14) >> 2)) break;
    iVar4 = piVar5[4];
    piVar5 = piVar5 + 3;
    iVar2 = iVar2 + 1;
  }
  iVar6 = 0;
  local_134[2] = 0;
  piVar5 = (int *)(*(int *)(DAT_0068be60 + iVar4 * 4) + 0x18);
  local_138 = 2;
  do {
    for (piVar8 = (int *)piVar5[-1]; piVar8 != (int *)*piVar5; piVar8 = piVar8 + 1) {
      if ((*(byte *)(**(int **)(*piVar8 + 0x78) + 8) & 0x10) == 0) {
        iVar6 = iVar6 + 1;
      }
      else {
        local_134[2] = local_134[2] + 1;
      }
    }
    piVar5 = piVar5 + 3;
    local_138 = local_138 + -1;
  } while (local_138 != 0);
  iVar2 = *(int *)(local_134[0] + 4 + iVar2 * 0xc);
  local_134[3] = 0xffffffff;
  local_134[4] = 0xffffffff;
  local_134[5] = 0;
  local_134[6] = 0;
  local_134[7] = 0;
  local_134[8] = 0;
  local_134[9] = 0;
  local_134[10] = 0xffffffff;
  if (iVar4 == *(int *)(*(int *)(iVar2 + 0x70) + 0x10)) {
    puStack_14c = *(uint **)(iVar2 + 0xc);
    piStack_150 = (int *)local_38;
    uStack_154 = 0x420579;
    piVar5 = (int *)FUN_00480040();
    piVar8 = local_134 + 3;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
  }
  else if (iVar4 == *(int *)(*(int *)(iVar2 + 0x74) + 0x10)) {
    puStack_14c = *(uint **)(iVar2 + 0xc);
    piStack_150 = (int *)local_38;
    uStack_154 = 0x4205a4;
    piVar5 = (int *)FUN_004801c0();
    piVar8 = local_134 + 3;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    local_134[9] = local_134[9] | 1;
  }
  puVar7 = (undefined4 *)(param_1 + 0x268);
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    puVar7 = (undefined4 *)(param_1 + 0x130);
  }
  pdVar3 = &local_a8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  apdStack_170[1] = (double *)local_38;
  piVar5 = local_134 + 3;
  ppdVar9 = apdStack_170 + 2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppdVar9 = (double *)*piVar5;
    piVar5 = piVar5 + 1;
    ppdVar9 = ppdVar9 + 1;
  }
  apdStack_170[0] = (double *)0x420603;
  pdVar3 = (double *)FUN_00435cd0();
  local_10 = local_a0 - pdVar3[1];
  if (_DAT_0064a718 <
      SQRT((local_98 - pdVar3[2]) * (local_98 - pdVar3[2]) +
           local_10 * local_10 + (local_a8 - *pdVar3) * (local_a8 - *pdVar3))) {
    return 0x11;
  }
  piStack_150 = local_134;
  puStack_14c = (uint *)0x0;
  local_134[0] = 0;
  piVar5 = local_134 + 3;
  ppdVar9 = apdStack_170;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppdVar9 = (double *)*piVar5;
    piVar5 = piVar5 + 1;
    ppdVar9 = ppdVar9 + 1;
  }
  local_134[1] = 0x40200000;
  FUN_0041ec60(0,param_1);
  FUN_0043b650(local_78);
  piStack_150 = local_134;
  puStack_14c = (uint *)0x0;
  local_134[0] = 0;
  local_134[1] = 0xc0200000;
  piVar5 = local_134 + 3;
  ppdVar9 = apdStack_170;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppdVar9 = (double *)*piVar5;
    piVar5 = piVar5 + 1;
    ppdVar9 = ppdVar9 + 1;
  }
  FUN_0041ec60(0,param_1);
  FUN_0043b650(local_58);
  puStack_14c = local_d8;
  local_d8[0] = 0;
  local_d0 = 0;
  local_cc = 0;
  puVar7 = local_58;
  ppdVar9 = apdStack_170 + 1;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppdVar9 = (double *)*puVar7;
    puVar7 = puVar7 + 1;
    ppdVar9 = ppdVar9 + 1;
  }
  local_c8 = s_UNDEFINED_MODULE_0066c638;
  local_c4 = s_UNDEFINED_ROOM_0066c628;
  local_c0 = 0;
  local_bc = 0;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  apdStack_170[0] = (double *)0x42074f;
  FUN_00438e50();
  if ((local_d8[0] & 0x10) == 0) {
    puStack_14c = local_d8;
    puVar7 = local_78;
    ppdVar9 = apdStack_170 + 1;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppdVar9 = (double *)*puVar7;
      puVar7 = puVar7 + 1;
      ppdVar9 = ppdVar9 + 1;
    }
    apdStack_170[0] = (double *)0x42077a;
    FUN_00438e50();
    if (((local_d8[0] & 0x10) == 0) && (iVar6 == 2)) {
      return 0x11;
    }
  }
  puVar7 = local_78;
  ppdVar9 = apdStack_170 + 2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppdVar9 = (double *)*puVar7;
    puVar7 = puVar7 + 1;
    ppdVar9 = ppdVar9 + 1;
  }
  apdStack_170[1] = &local_f0;
  apdStack_170[0] = (double *)0x4207b0;
  FUN_00439180();
  apdStack_170[1] = &local_108;
  puVar7 = local_58;
  ppdVar9 = apdStack_170 + 2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppdVar9 = (double *)*puVar7;
    puVar7 = puVar7 + 1;
    ppdVar9 = ppdVar9 + 1;
  }
  apdStack_170[0] = (double *)0x4207cd;
  FUN_00439180();
  apdStack_170[0] = &local_108;
  local_e0 = 0;
  local_dc = 0;
  local_f8 = 0;
  local_f4 = 0;
  dVar1 = _DAT_0064a660 / SQRT(local_e8 * local_e8 + local_f0 * local_f0);
  local_f0 = dVar1 * local_f0;
  local_e8 = local_e8 * dVar1;
  dVar1 = _DAT_0064a660 / SQRT(local_100 * local_100 + local_108 * local_108);
  local_108 = dVar1 * local_108;
  local_100 = local_100 * dVar1;
  FUN_00487e90(local_90,&local_f0);
  if (local_80 <= _DAT_0064a5a8) {
    if (_DAT_0064a710 <= local_80) {
      return 0x10;
    }
    return 0xf;
  }
  return 0xe;
}


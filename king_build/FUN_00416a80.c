
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416a80(int param_1)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  double *pdVar6;
  int **ppiVar7;
  bool bVar8;
  undefined4 auStack_a4 [5];
  undefined4 uStack_90;
  undefined4 *puStack_8c;
  int iStack_88;
  double *pdStack_84;
  int *apiStack_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_58;
  int local_54;
  int local_50;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 uStack_44;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  if (9 < *(int *)(param_1 + 0x2d4)) {
    local_68 = (double)CONCAT44(param_1,local_4c);
    local_70 = (double)CONCAT44(0x416aa6,(undefined4)local_70);
    puVar3 = (undefined4 *)FUN_0040a590();
    iStack_88 = *puVar3;
    local_68 = (double)CONCAT44(&local_48,(undefined4)local_68);
    puVar3 = (undefined4 *)(param_1 + 0x28);
    pdVar6 = &local_28;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      pdVar6 = (double *)((int)pdVar6 + 4);
    }
    local_48 = 0;
    uStack_44 = 0;
    puStack_8c = (undefined4 *)0x416adc;
    FUN_0040a430();
    pdVar6 = &local_28;
    puVar3 = auStack_a4;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *(undefined4 *)pdVar6;
      pdVar6 = (double *)((int)pdVar6 + 4);
      puVar3 = puVar3 + 1;
    }
    FUN_00486900(0);
    dVar1 = (double)CONCAT44(uStack_44,local_48);
    goto LAB_00417082;
  }
  local_68 = (double)CONCAT44(s_check_point1_0066c168,&local_58);
  local_70 = (double)CONCAT44(0x416b0e,(undefined4)local_70);
  FUN_004365f0();
  local_70 = (double)CONCAT44(s_check_point2_0066c158,&local_50);
  local_78 = (double)CONCAT44(0x416b1d,(undefined4)local_78);
  FUN_004365f0();
  local_78 = (double)CONCAT44(s_check_point3_0066c148,&local_54);
  apiStack_80[1] = (int *)0x416b2c;
  FUN_004365f0();
  pdStack_84 = &local_40;
  puVar3 = (undefined4 *)(param_1 + 0x28);
  ppiVar7 = apiStack_80;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppiVar7 = (int *)*puVar3;
    puVar3 = puVar3 + 1;
    ppiVar7 = ppiVar7 + 1;
  }
  iStack_88 = 0x416b48;
  FUN_00435cd0();
  if (DAT_0066b6e4 == 1) {
    bVar8 = *(int *)(param_1 + 0x5c) != 7;
LAB_00416b70:
    if (bVar8) goto LAB_00416b78;
    iVar5 = *(int *)(DAT_0068be60 + local_58 * 4);
    local_68 = local_30 - *(double *)(iVar5 + 0x40);
    local_70 = local_38 - *(double *)(iVar5 + 0x38);
    local_78 = local_40 - *(double *)(iVar5 + 0x30);
    apiStack_80[1] = (int *)0x416d8e;
    FUN_00405ea0();
    iVar5 = local_54;
    if (_DAT_0064a690 <= SQRT(local_18 * local_18 + local_20 * local_20 + local_28 * local_28)) {
      iVar5 = *(int *)(DAT_0068be60 + local_50 * 4);
      local_68 = local_30 - *(double *)(iVar5 + 0x40);
      local_70 = local_38 - *(double *)(iVar5 + 0x38);
      local_78 = local_40 - *(double *)(iVar5 + 0x30);
      apiStack_80[1] = (int *)0x416e09;
      FUN_00405ea0();
      iVar5 = local_58;
      if (_DAT_0064a690 <= SQRT(local_18 * local_18 + local_20 * local_20 + local_28 * local_28)) {
        iVar5 = *(int *)(DAT_0068be60 + local_54 * 4);
        local_68 = local_30 - *(double *)(iVar5 + 0x40);
        local_70 = local_38 - *(double *)(iVar5 + 0x38);
        local_78 = local_40 - *(double *)(iVar5 + 0x30);
        apiStack_80[1] = (int *)0x416e81;
        FUN_00405ea0();
        iVar5 = local_50;
        if (_DAT_0064a690 <= SQRT(local_28 * local_28 + local_18 * local_18 + local_20 * local_20))
        {
          local_68 = (double)CONCAT44(param_1,local_4c);
          local_70 = (double)CONCAT44(0x41702e,(undefined4)local_70);
          puVar3 = (undefined4 *)FUN_0040a590();
          iStack_88 = *puVar3;
          local_68 = (double)CONCAT44(&local_48,(undefined4)local_68);
          puVar3 = (undefined4 *)(param_1 + 0x28);
          pdVar6 = &local_28;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pdVar6 = *puVar3;
            puVar3 = puVar3 + 1;
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          local_48 = 0;
          uStack_44 = 0;
          puStack_8c = (undefined4 *)0x417064;
          FUN_0040a430();
          pdVar6 = &local_28;
          puVar3 = auStack_a4;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar3 = *(undefined4 *)pdVar6;
            pdVar6 = (double *)((int)pdVar6 + 4);
            puVar3 = puVar3 + 1;
          }
          FUN_00486900(0);
          dVar1 = (double)CONCAT44(uStack_44,local_48);
          goto LAB_00417082;
        }
      }
    }
  }
  else {
    if (DAT_0066b6e4 == 2) {
      bVar8 = *(int *)(param_1 + 0x5c) == 7;
      goto LAB_00416b70;
    }
LAB_00416b78:
    iVar5 = *(int *)(DAT_0068be60 + local_58 * 4);
    local_68 = local_30 - *(double *)(iVar5 + 0x40);
    local_70 = local_38 - *(double *)(iVar5 + 0x38);
    local_78 = local_40 - *(double *)(iVar5 + 0x30);
    apiStack_80[1] = (int *)0x416bb9;
    FUN_00405ea0();
    iVar5 = local_50;
    if (_DAT_0064a690 <= SQRT(local_28 * local_28 + local_18 * local_18 + local_20 * local_20)) {
      iVar5 = *(int *)(DAT_0068be60 + local_50 * 4);
      local_68 = local_30 - *(double *)(iVar5 + 0x40);
      local_70 = local_38 - *(double *)(iVar5 + 0x38);
      local_78 = local_40 - *(double *)(iVar5 + 0x30);
      apiStack_80[1] = (int *)0x416c2e;
      FUN_00405ea0();
      iVar5 = local_54;
      if (_DAT_0064a690 <= SQRT(local_28 * local_28 + local_18 * local_18 + local_20 * local_20)) {
        iVar5 = *(int *)(DAT_0068be60 + local_54 * 4);
        local_68 = local_30 - *(double *)(iVar5 + 0x40);
        local_70 = local_38 - *(double *)(iVar5 + 0x38);
        local_78 = local_40 - *(double *)(iVar5 + 0x30);
        apiStack_80[1] = (int *)0x416ca9;
        FUN_00405ea0();
        iVar5 = local_58;
        if (_DAT_0064a690 <= SQRT(local_28 * local_28 + local_18 * local_18 + local_20 * local_20))
        {
          local_68 = (double)CONCAT44(param_1,local_4c);
          local_70 = (double)CONCAT44(0x416cf5,(undefined4)local_70);
          puVar3 = (undefined4 *)FUN_0040a590();
          iStack_88 = *puVar3;
          local_68 = (double)CONCAT44(&local_48,(undefined4)local_68);
          puVar3 = (undefined4 *)(param_1 + 0x28);
          pdVar6 = &local_28;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pdVar6 = *puVar3;
            puVar3 = puVar3 + 1;
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          local_48 = 0;
          uStack_44 = 0;
          puStack_8c = (undefined4 *)0x416d2b;
          FUN_0040a430();
          pdVar6 = &local_28;
          puVar3 = auStack_a4;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar3 = *(undefined4 *)pdVar6;
            pdVar6 = (double *)((int)pdVar6 + 4);
            puVar3 = puVar3 + 1;
          }
          FUN_00486900(0);
          dVar1 = (double)CONCAT44(uStack_44,local_48);
          goto LAB_00417082;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x2d4) == 9) {
    local_68 = (double)CONCAT44(*(int *)(param_1 + 0x2d8) + 1,DAT_0066b6e4);
    local_70 = (double)CONCAT44(s_finish_d__d_0066c198,&local_28);
    local_78 = (double)CONCAT44(0x416ee3,(undefined4)local_78);
    FUN_0061c369();
    local_78 = (double)CONCAT44(&local_28,local_4c);
    apiStack_80[1] = (int *)0x416ef2;
    piVar4 = (int *)FUN_004365f0();
    iVar5 = *piVar4;
  }
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) ||
     (*(int *)(*(int *)(param_1 + 0x1c) + -0xc) != iVar5)) {
    local_68 = *(double *)(param_1 + 0x18);
    local_70 = (double)CONCAT44(0x416f84,(undefined4)local_70);
    FUN_0044aa20();
    local_68 = (double)CONCAT44(1,(undefined4)local_68);
    *(undefined1 *)(iVar2 + 0x368) = 1;
    puStack_8c = (undefined4 *)0x416f98;
    iStack_88 = iVar5;
    FUN_0040a430();
    puStack_8c = &param_1;
    uStack_90 = 0x416fa4;
    FUN_0041d3f0();
    puStack_8c = (undefined4 *)0x416fa9;
    FUN_00478300();
    local_68 = (double)CONCAT44(param_1,local_4c);
    local_70 = (double)CONCAT44(0x416fbd,(undefined4)local_70);
    puVar3 = (undefined4 *)FUN_0040a590();
    iStack_88 = *puVar3;
    local_68 = (double)CONCAT44(&local_48,(undefined4)local_68);
    puVar3 = (undefined4 *)(param_1 + 0x28);
    pdVar6 = &local_28;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      pdVar6 = (double *)((int)pdVar6 + 4);
    }
    local_48 = 0;
    uStack_44 = 0;
    puStack_8c = (undefined4 *)0x416ff3;
    FUN_0040a430();
    pdVar6 = &local_28;
    puVar3 = auStack_a4;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *(undefined4 *)pdVar6;
      pdVar6 = (double *)((int)pdVar6 + 4);
      puVar3 = puVar3 + 1;
    }
    FUN_00486900(0);
    dVar1 = (double)CONCAT44(uStack_44,local_48);
    *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
  }
  else {
    local_68 = (double)CONCAT44(param_1,local_4c);
    local_70 = (double)CONCAT44(0x416f18,(undefined4)local_70);
    puVar3 = (undefined4 *)FUN_0040a590();
    iStack_88 = *puVar3;
    local_68 = (double)CONCAT44(&local_48,(undefined4)local_68);
    puVar3 = (undefined4 *)(param_1 + 0x28);
    pdVar6 = &local_28;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      pdVar6 = (double *)((int)pdVar6 + 4);
    }
    local_48 = 0;
    uStack_44 = 0;
    puStack_8c = (undefined4 *)0x416f4e;
    FUN_0040a430();
    pdVar6 = &local_28;
    puVar3 = auStack_a4;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *(undefined4 *)pdVar6;
      pdVar6 = (double *)((int)pdVar6 + 4);
      puVar3 = puVar3 + 1;
    }
    FUN_00486900(0);
    dVar1 = (double)CONCAT44(uStack_44,local_48);
  }
LAB_00417082:
  *(double *)(param_1 + 0x1f8) = -dVar1 - *(double *)(&DAT_0068bed0 + *(int *)(param_1 + 0x2d4) * 8)
  ;
  return;
}


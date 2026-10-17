
float10 FUN_00409a00(undefined4 param_1,undefined1 *param_2,int param_3,int param_4,
                    undefined4 param_5,undefined4 param_6,uint param_7,int param_8,
                    undefined4 param_9,undefined4 param_10,int param_11,int param_12,
                    undefined4 param_13,undefined4 param_14,uint param_15,int param_16)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_EBX;
  int *piVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  float10 fVar13;
  float10 fVar14;
  int *apiStack_80 [2];
  char *pcStack_78;
  char *pcStack_74;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  int local_50;
  uint local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_28 [36];
  
  if (param_3 == -1) {
    iVar9 = *(int *)(DAT_0068be60 + param_4 * 4);
    if (iVar9 == *(int *)(param_2 + 0x70)) {
      puStack_68 = local_28;
      puStack_64 = param_2;
      uStack_70 = (double)CONCAT44(0x409a35,(undefined4)uStack_70);
      puVar6 = (undefined4 *)FUN_0047fe10();
      puVar11 = &param_3;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    else if (iVar9 == *(int *)(param_2 + 0x74)) {
      puStack_68 = local_28;
      puStack_64 = param_2;
      uStack_70 = (double)CONCAT44(0x409a56,(undefined4)uStack_70);
      puVar6 = (undefined4 *)FUN_0047ff40();
      puVar11 = &param_3;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    else {
      puStack_64 = &DAT_0068c120;
      puStack_68 = &DAT_0068c120;
      uStack_70 = 1.0116182046288942e-306;
      pcStack_74 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      pcStack_78 = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
      apiStack_80[1] = (int *)0x64;
      apiStack_80[0] = (int *)0x0;
      FUN_00401010();
    }
  }
  if (param_11 == -1) {
    iVar9 = *(int *)(DAT_0068be60 + param_12 * 4);
    if (iVar9 == *(int *)(param_2 + 0x70)) {
      puStack_68 = local_28;
      puStack_64 = param_2;
      uStack_70 = (double)CONCAT44(0x409ab5,(undefined4)uStack_70);
      puVar6 = (undefined4 *)FUN_0047fe10();
      puVar11 = &param_11;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    else if (iVar9 == *(int *)(param_2 + 0x74)) {
      puStack_68 = local_28;
      puStack_64 = param_2;
      uStack_70 = (double)CONCAT44(0x409ad6,(undefined4)uStack_70);
      puVar6 = (undefined4 *)FUN_0047ff40();
      puVar11 = &param_11;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    else {
      puStack_64 = &DAT_0068c120;
      puStack_68 = &DAT_0068c120;
      uStack_70 = 1.0116046238558337e-306;
      pcStack_74 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      pcStack_78 = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
      apiStack_80[1] = (int *)0x64;
      apiStack_80[0] = (int *)0x0;
      FUN_00401010();
    }
  }
  puVar6 = &param_11;
  ppiVar12 = apiStack_80;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *ppiVar12 = (int *)*puVar6;
    puVar6 = puVar6 + 1;
    ppiVar12 = ppiVar12 + 1;
  }
  cVar5 = FUN_00402740();
  iVar9 = param_8;
  uVar4 = param_7;
  uVar3 = param_6;
  uVar2 = param_5;
  if (cVar5 == '\0') {
    local_40 = param_5;
    local_3c = param_6;
    local_50 = param_8;
    local_4c = param_7;
    if (param_8 == *(int *)(param_2 + 0x7c) - *(int *)(param_2 + 0x78) >> 2) {
      local_50 = param_8 + -1;
      puStack_64 = (undefined1 *)0x409d1e;
      iVar9 = (**(code **)(**(int **)(*(int *)(param_2 + 0x78) + -4 + param_8 * 4) + 0x18))();
      local_4c = iVar9 - 1;
      local_40 = 0;
      local_3c = 0;
    }
    iVar9 = param_16;
    if (param_16 == local_50) {
      piVar1 = *(int **)(*(int *)(param_2 + 0x78) + param_16 * 4);
      if (piVar1 == (int *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = piVar1 + 2;
      }
      puStack_64 = (undefined1 *)local_4c;
      puStack_68 = (undefined1 *)local_3c;
      uStack_70 = (double)CONCAT44(local_40,param_15);
      pcStack_74 = (char *)param_14;
      pcStack_78 = (char *)param_13;
      apiStack_80[1] = (int *)0x409e4e;
      fVar13 = (float10)(**(code **)(*piVar1 + 0x20))();
      apiStack_80[0] = (int *)0x409e5c;
      apiStack_80[1] = piVar10;
      fVar14 = (float10)FUN_00409e70();
      return fVar14 * (float10)(double)fVar13;
    }
    iVar7 = *(int *)(param_2 + 0x78);
    puStack_64 = (undefined1 *)0x409d4d;
    iVar8 = (**(code **)(**(int **)(iVar7 + param_16 * 4) + 0x18))();
    piVar1 = *(int **)(iVar7 + iVar9 * 4);
    puStack_64 = (undefined1 *)(iVar8 + -1);
    if (piVar1 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = piVar1 + 2;
    }
    puStack_68 = (undefined1 *)0x3ff00000;
    uStack_70 = (double)(ulonglong)param_15;
    pcStack_74 = (char *)param_14;
    pcStack_78 = (char *)param_13;
    apiStack_80[1] = (int *)0x409d75;
    (**(code **)(*piVar1 + 0x20))();
    apiStack_80[0] = (int *)0x409d83;
    apiStack_80[1] = piVar10;
    FUN_00409e70();
    iVar9 = iVar9 + 1;
    if (iVar9 < (int)puStack_68) {
      do {
        piVar1 = *(int **)(*(int *)(param_2 + 0x78) + iVar9 * 4);
        if (piVar1 == (int *)0x0) {
          apiStack_80[1] = (int *)0x0;
        }
        else {
          apiStack_80[1] = piVar1 + 2;
        }
        apiStack_80[0] = (int *)0x409daf;
        FUN_00409e70();
        apiStack_80[1] = (int *)0x409dba;
        (**(code **)(*piVar1 + 0x24))();
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)puStack_68);
    }
    piVar1 = *(int **)(*(int *)(param_2 + 0x78) + (int)puStack_68 * 4);
    if (piVar1 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = piVar1 + 2;
    }
    apiStack_80[1] = (int *)puStack_64;
    fVar13 = (float10)(**(code **)(*piVar1 + 0x20))(0,0,0,unaff_EBX);
    uStack_70 = (double)fVar13;
    fVar13 = (float10)FUN_00409e70(piVar10);
    return fVar13 * (float10)uStack_70 + (float10)(double)CONCAT44(puStack_64,puStack_68);
  }
  local_40 = param_13;
  local_3c = param_14;
  local_50 = param_16;
  local_4c = param_15;
  if (param_16 == *(int *)(param_2 + 0x7c) - *(int *)(param_2 + 0x78) >> 2) {
    local_50 = param_16 + -1;
    puStack_64 = (undefined1 *)0x409b90;
    iVar7 = (**(code **)(**(int **)(*(int *)(param_2 + 0x78) + -4 + param_16 * 4) + 0x18))();
    local_4c = iVar7 - 1;
    local_40 = 0;
    local_3c = 0;
  }
  if (iVar9 == local_50) {
    piVar1 = *(int **)(*(int *)(param_2 + 0x78) + iVar9 * 4);
    if (piVar1 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = piVar1 + 2;
    }
    puStack_64 = (undefined1 *)local_4c;
    puStack_68 = (undefined1 *)local_3c;
    uStack_70 = (double)CONCAT44(local_40,uVar4);
    pcStack_74 = (char *)uVar3;
    pcStack_78 = (char *)uVar2;
    apiStack_80[1] = (int *)0x409cbd;
    fVar13 = (float10)(**(code **)(*piVar1 + 0x20))();
    apiStack_80[0] = (int *)0x409ccb;
    apiStack_80[1] = piVar10;
    fVar14 = (float10)FUN_00409e70();
    return fVar14 * (float10)(double)fVar13;
  }
  iVar7 = *(int *)(param_2 + 0x78);
  puStack_64 = (undefined1 *)0x409bba;
  iVar8 = (**(code **)(**(int **)(iVar7 + iVar9 * 4) + 0x18))();
  piVar1 = *(int **)(iVar7 + iVar9 * 4);
  puStack_64 = (undefined1 *)(iVar8 + -1);
  if (piVar1 == (int *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = piVar1 + 2;
  }
  puStack_68 = (undefined1 *)0x3ff00000;
  uStack_70 = (double)(ulonglong)uVar4;
  pcStack_74 = (char *)uVar3;
  pcStack_78 = (char *)uVar2;
  apiStack_80[1] = (int *)0x409be5;
  (**(code **)(*piVar1 + 0x20))();
  apiStack_80[0] = (int *)0x409bf3;
  apiStack_80[1] = piVar10;
  FUN_00409e70();
  iVar9 = iVar9 + 1;
  if (iVar9 < (int)puStack_68) {
    do {
      piVar1 = *(int **)(*(int *)(param_2 + 0x78) + iVar9 * 4);
      if (piVar1 == (int *)0x0) {
        apiStack_80[1] = (int *)0x0;
      }
      else {
        apiStack_80[1] = piVar1 + 2;
      }
      apiStack_80[0] = (int *)0x409c1f;
      FUN_00409e70();
      apiStack_80[1] = (int *)0x409c2a;
      (**(code **)(*piVar1 + 0x24))();
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)puStack_68);
  }
  piVar1 = *(int **)(*(int *)(param_2 + 0x78) + (int)puStack_68 * 4);
  if (piVar1 == (int *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = piVar1 + 2;
  }
  apiStack_80[1] = (int *)puStack_64;
  fVar13 = (float10)(**(code **)(*piVar1 + 0x20))(0,0,0,unaff_EBX);
  uStack_70 = (double)fVar13;
  fVar13 = (float10)FUN_00409e70(piVar10);
  return fVar13 * (float10)uStack_70 + (float10)(double)CONCAT44(puStack_64,puStack_68);
}


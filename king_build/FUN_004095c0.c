
float10 FUN_004095c0(undefined1 *param_1,int param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,int param_6,int param_7,undefined4 param_8,undefined4 param_9
                    ,int param_10,int param_11,undefined4 param_12,undefined4 param_13,int param_14,
                    int param_15)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_EBX;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  float10 fVar12;
  int aiStack_78 [2];
  char *pcStack_70;
  char *pcStack_6c;
  int iStack_68;
  char *pcStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_28 [36];
  
  if (param_2 == -1) {
    iVar8 = *(int *)(DAT_0068be60 + param_3 * 4);
    if (iVar8 == *(int *)(param_1 + 0x70)) {
      puStack_60 = local_28;
      puStack_5c = param_1;
      pcStack_64 = (char *)0x4095f5;
      puVar5 = (undefined4 *)FUN_0047fe10();
    }
    else {
      if (iVar8 != *(int *)(param_1 + 0x74)) {
        puStack_5c = &DAT_0068c120;
        puStack_60 = &DAT_0068c120;
        pcStack_64 = s_Internal_error_7644_0066bb74;
        iStack_68 = 0x81b;
        pcStack_6c = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        pcStack_70 = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
        aiStack_78[1] = 100;
        aiStack_78[0] = 0;
        FUN_00401010();
        goto LAB_00409642;
      }
      puStack_60 = local_28;
      puStack_5c = param_1;
      pcStack_64 = (char *)0x409616;
      puVar5 = (undefined4 *)FUN_0047ff40();
    }
    puVar10 = &param_2;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
  }
LAB_00409642:
  if (param_10 == -1) {
    iVar8 = *(int *)(DAT_0068be60 + param_11 * 4);
    if (iVar8 == *(int *)(param_1 + 0x70)) {
      puStack_60 = local_28;
      puStack_5c = param_1;
      pcStack_64 = (char *)0x409666;
      puVar5 = (undefined4 *)FUN_0047fe10();
    }
    else {
      if (iVar8 != *(int *)(param_1 + 0x74)) {
        puStack_5c = &DAT_0068c120;
        puStack_60 = &DAT_0068c120;
        pcStack_64 = s_Internal_error_7645_0066bb60;
        iStack_68 = 0x826;
        pcStack_6c = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        pcStack_70 = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
        aiStack_78[1] = 100;
        aiStack_78[0] = 0;
        FUN_00401010();
        goto LAB_004096b3;
      }
      puStack_60 = local_28;
      puStack_5c = param_1;
      pcStack_64 = (char *)0x409687;
      puVar5 = (undefined4 *)FUN_0047ff40();
    }
    puVar10 = &param_10;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
  }
LAB_004096b3:
  puVar5 = &param_10;
  piVar11 = aiStack_78;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    piVar11 = piVar11 + 1;
  }
  cVar4 = FUN_00402740();
  iVar7 = param_7;
  iVar8 = param_6;
  uVar3 = param_5;
  uVar2 = param_4;
  if (cVar4 != '\0') {
    local_38 = param_12;
    local_34 = param_13;
    puStack_5c = (undefined1 *)param_14;
    iVar9 = param_15;
    if (param_15 == *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) {
      iVar9 = param_15 + -1;
      puStack_5c = (undefined1 *)0x40971f;
      iVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + -4 + param_15 * 4) + 0x18))();
      puStack_5c = (undefined1 *)(iVar6 + -1);
      local_38 = 0;
      local_34 = 0;
    }
    piVar11 = *(int **)(*(int *)(param_1 + 0x78) + iVar7 * 4);
    if (iVar7 != iVar9) {
      iVar7 = *piVar11;
      puStack_5c = (undefined1 *)0x40974d;
      iVar6 = (**(code **)(iVar7 + 0x18))();
      puStack_5c = (undefined1 *)(iVar6 + -1);
      puStack_60 = (undefined1 *)0x3ff00000;
      pcStack_64 = (char *)0x0;
      iStack_68 = iVar8;
      pcStack_6c = (char *)uVar3;
      pcStack_70 = (char *)uVar2;
      aiStack_78[1] = 0x40976c;
      (**(code **)(iVar7 + 0x20))();
      puVar1 = puStack_60;
      while (puVar1 = (undefined1 *)((int)puVar1 + 1), (int)puVar1 < iVar9) {
        aiStack_78[1] = 0x409786;
        (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + (int)puVar1 * 4) + 0x24))();
      }
      aiStack_78[1] = (int)puStack_5c;
      fVar12 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x78) + iVar9 * 4) + 0x20))
                                  (0,0,0,unaff_EBX);
      return fVar12 + (float10)(double)CONCAT44(puStack_5c,puStack_60);
    }
    puStack_60 = (undefined1 *)local_34;
    pcStack_64 = (char *)local_38;
    iStack_68 = iVar8;
    pcStack_6c = (char *)uVar3;
    pcStack_70 = (char *)uVar2;
    aiStack_78[1] = 0x4097df;
    fVar12 = (float10)(**(code **)(*piVar11 + 0x20))();
    return fVar12;
  }
  local_34 = param_5;
  local_38 = param_4;
  iVar8 = param_7;
  puStack_5c = (undefined1 *)param_6;
  if (param_7 == *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) {
    iVar8 = param_7 + -1;
    puStack_5c = (undefined1 *)0x409817;
    iVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + -4 + param_7 * 4) + 0x18))();
    puStack_5c = (undefined1 *)(iVar7 + -1);
    local_38 = 0;
    local_34 = 0;
  }
  piVar11 = *(int **)(*(int *)(param_1 + 0x78) + param_15 * 4);
  if (param_15 != iVar8) {
    iVar7 = *piVar11;
    puStack_5c = (undefined1 *)0x409844;
    iVar9 = (**(code **)(iVar7 + 0x18))();
    puStack_5c = (undefined1 *)(iVar9 + -1);
    puStack_60 = (undefined1 *)0x3ff00000;
    pcStack_64 = (char *)0x0;
    iStack_68 = param_14;
    pcStack_6c = (char *)param_13;
    pcStack_70 = (char *)param_12;
    aiStack_78[1] = 0x409860;
    (**(code **)(iVar7 + 0x20))();
    iVar7 = param_15;
    while (iVar7 = iVar7 + 1, iVar7 < iVar8) {
      aiStack_78[1] = 0x409879;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + iVar7 * 4) + 0x24))();
    }
    aiStack_78[1] = (int)puStack_60;
    fVar12 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x78) + iVar8 * 4) + 0x20))
                                (0,0,0,unaff_EBX);
    return fVar12 + (float10)(double)CONCAT44(puStack_5c,puStack_60);
  }
  puStack_60 = (undefined1 *)local_34;
  pcStack_64 = (char *)local_38;
  iStack_68 = param_14;
  pcStack_6c = (char *)param_13;
  pcStack_70 = (char *)param_12;
  aiStack_78[1] = 0x4098d3;
  fVar12 = (float10)(**(code **)(*piVar11 + 0x20))();
  return fVar12;
}


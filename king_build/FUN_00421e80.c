
void FUN_00421e80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  char **ppcVar9;
  uint *puVar10;
  char *apcStack_b8 [4];
  uint uStack_a8;
  char *pcStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  int local_80;
  int local_7c;
  undefined1 local_78 [4];
  char *local_74;
  undefined *local_70;
  uint local_6c [2];
  undefined1 *local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c [5];
  int local_38;
  uint local_2c [4];
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063cce8;
  pvStack_c = ExceptionList;
  pcStack_94 = (char *)0x8;
  pcStack_98 = s_START__0066b830;
  local_74 = s_createDealerForSale_ParkingData___0066c8a4;
  local_70 = &DAT_0071d768;
  piStack_9c = (int *)0x421ebd;
  ExceptionList = &pvStack_c;
  FUN_00401870();
  pcStack_94 = s_createDealerForSale_ParkingData___0066c8a4;
  pcStack_98 = (char *)0x421ecc;
  FUN_004018b0();
  pcStack_94 = (char *)param_3;
  pcStack_98 = (char *)param_2;
  piStack_a0 = &local_7c;
  piStack_9c = param_1;
  pcStack_a4 = local_78;
  local_4 = 0;
  local_7c = -1;
  uStack_a8 = 0x421f03;
  piVar3 = (int *)FUN_00418ce0();
  iVar2 = *piVar3;
  pcStack_94 = (char *)0xffffffff;
  pcStack_98 = (char *)0x0;
  local_6c[0] = 0xffffffff;
  local_64 = (undefined1 *)0x0;
  local_6c[1] = *(undefined4 *)
                 (*(int *)(*(int *)(DAT_0068bbf8 + iVar2 * 4) + 0x1c) + local_7c * 0x24);
  local_60 = (int *)0x0;
  local_5c = (int *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0xffffffff;
  puVar7 = local_6c;
  ppcVar9 = apcStack_b8;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar9 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  FUN_00421b10(&local_80);
  *(undefined4 *)(local_80 + 100) = 0x100;
  param_1[1] = param_1[1] + 1;
  puVar7 = (uint *)(local_80 + 0x28);
  puVar6 = local_6c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  pcStack_94 = (char *)0x421f8c;
  iVar5 = FUN_0040a460();
  if (iVar5 == 0) {
    puVar7 = (uint *)(local_80 + 0x28);
    puVar6 = local_6c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    pcStack_94 = (char *)local_54;
    pcStack_98 = (char *)local_58;
    piStack_9c = local_5c;
    piStack_a0 = local_60;
    pcStack_a4 = local_64;
    uStack_a8 = local_6c[0];
    apcStack_b8[3] = s___d__g__d__d__x__0066bc0c;
    apcStack_b8[2] = &DAT_0077d640;
    apcStack_b8[1] = (char *)0x421fcf;
    FUN_0061c369();
    apcStack_b8[1] = &DAT_0077d640;
    apcStack_b8[0] = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1e88,s_Invalid_id_0066bbf4);
  }
  puVar7 = (uint *)(local_80 + 0x28);
  puVar6 = puVar7;
  puVar10 = local_6c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((-1 < (int)local_6c[0]) && (local_6c[0] < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    puVar6 = puVar7;
    puVar10 = local_4c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar6 = puVar7;
    puVar10 = local_6c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar5 = *(int *)(DAT_0068be98 + local_6c[0] * 4);
    if (local_38 < *(int *)(iVar5 + 0x7c) - *(int *)(iVar5 + 0x78) >> 2) {
      puVar6 = puVar7;
      puVar10 = local_2c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar6 = puVar7;
      puVar10 = local_6c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar6 = local_4c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      pcStack_94 = (char *)0x4220a5;
      iVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + local_4c[0] * 4) + 0x78) +
                                     local_58 * 4) + 0x18))();
      if (iStack_1c < iVar5) goto LAB_004220d5;
    }
    pcStack_94 = &DAT_0068c120;
    pcStack_98 = &DAT_0068c120;
    piStack_9c = (int *)s_Invalid_Position_Id_0066bbe0;
    piStack_a0 = (int *)0x1e88;
    pcStack_a4 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    uStack_a8 = (uint)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
    apcStack_b8[3] = (char *)0x64;
    apcStack_b8[2] = (char *)0x21;
    apcStack_b8[1] = (char *)0x4220d2;
    FUN_00401010();
  }
LAB_004220d5:
  *(int *)(local_80 + 0x78) = iVar2;
  *(int *)(local_80 + 0x7c) = local_7c;
  if (*(int *)(*(int *)(*(int *)(DAT_0068bbf8 + iVar2 * 4) + 0x1c) + 8 + local_7c * 0x24) !=
      DAT_0068a8f0) {
    pcStack_94 = &DAT_0068c120;
    pcStack_98 = &DAT_0068c120;
    piStack_9c = (int *)s_Internal_error_97725_0066c88c;
    piStack_a0 = (int *)0x1e8e;
    pcStack_a4 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    uStack_a8 = (uint)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
    apcStack_b8[3] = (char *)0x64;
    apcStack_b8[2] = (char *)0x0;
    apcStack_b8[1] = (char *)0x42212e;
    FUN_00401010();
  }
  *(int *)(*(int *)(*(int *)(DAT_0068bbf8 + iVar2 * 4) + 0x1c) + 8 + local_7c * 0x24) = local_80;
  iVar5 = *(int *)(*(int *)(DAT_0068bbf8 + iVar2 * 4) + 0x1c);
  *(uint *)(iVar5 + 4 + local_7c * 0x24) = *(uint *)(iVar5 + 4 + local_7c * 0x24) | 1;
  iVar2 = *(int *)(DAT_0068bbf8 + iVar2 * 4);
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + 1;
  *(int **)(local_80 + 0x3cc) = param_1;
  iVar2 = *(int *)(local_80 + 0x204);
  uVar8 = *(uint *)(iVar2 + 0x28) & 0xfffffffc;
  *(uint *)(iVar2 + 0x28) = uVar8;
  iVar5 = *param_1;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      uVar8 = uVar8 | 1;
    }
    else {
      if (iVar5 != 2) {
        pcStack_94 = &DAT_0068c120;
        pcStack_98 = &DAT_0068c120;
        piStack_9c = (int *)s_Internal_error_3020_0066c878;
        piStack_a0 = (int *)0x1ea4;
        pcStack_a4 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        uStack_a8 = (uint)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
        apcStack_b8[3] = (char *)0x1;
        apcStack_b8[2] = (char *)0x0;
        apcStack_b8[1] = (char *)0x4221ce;
        FUN_00401010();
        goto LAB_004221de;
      }
      uVar8 = uVar8 | 2;
    }
    *(uint *)(iVar2 + 0x28) = uVar8;
  }
LAB_004221de:
  *(uint *)(local_80 + 0x60) = *(uint *)(local_80 + 0x60) | 0x40;
  puVar7 = (uint *)(*(int *)(*(int *)(DAT_0068bbf8 + *(int *)(local_80 + 0x78) * 4) + 0x1c) + 4 +
                   *(int *)(local_80 + 0x7c) * 0x24);
  *puVar7 = *puVar7 | 1;
  *(int *)(*(int *)(local_80 + 0x3cc) + 0xc) = *(int *)(*(int *)(local_80 + 0x3cc) + 0xc) + 1;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_createDealerForSale_ParkingData___0066c8a4;
  cVar1 = s_createDealerForSale_ParkingData___0066c8a4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


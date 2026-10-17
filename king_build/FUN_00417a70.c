
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417a70(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 local_4c [5];
  int local_38;
  undefined4 local_2c [4];
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c868;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00401870();
  FUN_004018b0();
  iVar4 = param_1;
  iVar6 = 0;
  local_4 = 0;
  FUN_00447d40();
  *(undefined1 *)(iVar4 + 0x368) = 1;
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
    do {
      FUN_00417a50();
      FUN_004560f0();
      if (param_2 == 0xffffffff) {
        FUN_00401010();
      }
      FUN_0040a430();
      FUN_0041d3f0(&param_1);
      FUN_00478300();
      iVar6 = iVar6 + 1;
      fVar8 = (float10)FUN_004843f0(param_1 + 0x18);
      iVar4 = param_1;
      if ((fVar8 < (float10)_DAT_0064a698) && (iVar6 < 3)) {
        FUN_00447d40();
        *(undefined1 *)(iVar4 + 0x368) = 1;
      }
    } while (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c));
  }
  puVar2 = (undefined4 *)(param_1 + 0x28);
  puVar5 = &param_2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar4 = FUN_0040a460();
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x28);
    puVar5 = &param_2;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1174,s_Invalid_id_0066bbf4);
  }
  puVar2 = (undefined4 *)(param_1 + 0x28);
  puVar5 = puVar2;
  puVar7 = &param_2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((-1 < (int)param_2) && (param_2 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    puVar5 = puVar2;
    puVar7 = local_4c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar5 = puVar2;
    puVar7 = &param_2;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar4 = *(int *)(DAT_0068be98 + param_2 * 4);
    if (local_38 < *(int *)(iVar4 + 0x7c) - *(int *)(iVar4 + 0x78) >> 2) {
      puVar5 = puVar2;
      puVar7 = local_2c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = puVar2;
      puVar7 = local_4c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = &param_2;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar4 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + param_2 * 4) + 0x78) +
                                     local_38 * 4) + 0x18))();
      if (iStack_1c < iVar4) goto LAB_00417d3b;
    }
    FUN_00401010();
  }
LAB_00417d3b:
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_traceToArbitraryDestinationNoTur_0066c264;
  cVar1 = s_traceToArbitraryDestinationNoTur_0066c264[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar3;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


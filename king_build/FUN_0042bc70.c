
undefined4 FUN_0042bc70(char **param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  char *extraout_ECX;
  undefined1 *extraout_ECX_00;
  int iVar3;
  undefined1 *extraout_ECX_01;
  char *pcVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int aiStack_6c [4];
  int *piStack_5c;
  undefined1 *puStack_58;
  char *pcStack_54;
  char *local_50;
  int local_30;
  int local_2c;
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d048;
  local_c = ExceptionList;
  local_50 = (char *)0x8;
  pcStack_54 = s_START__0066b830;
  puStack_58 = (undefined1 *)0x42bcad;
  ExceptionList = &local_c;
  FUN_00401870();
  local_50 = s_activateAmbush_AI_Ambush___ambus_0066cc78;
  pcStack_54 = (char *)0x42bcbc;
  FUN_004018b0();
  puVar1 = (undefined1 *)param_1;
  local_4 = 0;
  if ((char)param_2 == '\0') {
    if (*(char *)((int)param_1 + 0x1c) != '\0') {
      local_50 = (char *)param_1;
      pcStack_54 = (char *)0x42bfd4;
      FUN_0042b950();
      if (*(int *)(puVar1 + 0x24) == 2) {
        puVar5 = *(uint **)(puVar1 + 0x70);
        if (puVar5 != *(uint **)(puVar1 + 0x74)) {
          do {
            local_50 = (char *)0x0;
            pcStack_54 = (char *)(*puVar5 % 1000);
            puStack_58 = (undefined1 *)0x42bffc;
            FUN_00568a20();
            puVar5 = puVar5 + 1;
          } while (puVar5 != *(uint **)(puVar1 + 0x74));
        }
      }
      else if ((*(int *)(puVar1 + 0x24) == 1) &&
              (puVar5 = *(uint **)(puVar1 + 0x70), puVar5 != *(uint **)(puVar1 + 0x74))) {
        do {
          local_50 = (char *)0x0;
          pcStack_54 = (char *)(*puVar5 % 1000);
          puStack_58 = (undefined1 *)0x42c02d;
          FUN_00568b20();
          puVar5 = puVar5 + 1;
        } while (puVar5 != *(uint **)(puVar1 + 0x74));
      }
    }
  }
  else if (*(char *)((int)param_1 + 0x1c) == '\0') {
    if (*(int *)((int)param_1 + 0x24) == 2) {
      if (*(int *)((int)param_1 + 0x7c) == DAT_0068a8f0) {
        local_50 = param_2;
        param_1 = &pcStack_54;
        puStack_58 = (undefined1 *)&pcStack_54;
        pcStack_54 = param_2;
        piStack_5c = (int *)0x42bd16;
        FUN_004896a0();
        piStack_5c = (int *)&puStack_58;
        aiStack_6c[3] = 0x42bd28;
        puStack_58 = extraout_ECX_00;
        FUN_004af790();
        piStack_5c = &local_30;
        aiStack_6c[3] = 0x42bd32;
        FUN_0045f0c0();
        aiStack_6c[0] = local_30;
        puVar2 = &DAT_0068aa10;
        puVar6 = local_24;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar6 = puVar6 + 1;
        }
        aiStack_6c[1] = local_2c;
        puVar2 = local_24;
        piVar7 = aiStack_6c + 2;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          piVar7 = piVar7 + 1;
        }
        local_4._0_1_ = 1;
        FUN_0045f250();
        if (local_30 == local_2c) {
          local_4 = (uint)local_4._1_3_ << 8;
          local_50 = (char *)0x42bd83;
          FUN_00451450();
        }
        else {
          local_50 = (char *)0x42bd91;
          puVar2 = (undefined4 *)FUN_00459c40();
          local_50 = (char *)*puVar2;
          pcStack_54 = (char *)0x42bda5;
          FUN_004042b0();
          local_50 = (char *)&param_1;
          pcStack_54 = (char *)0x42bdb3;
          FUN_00450ef0();
          local_50 = (char *)local_24;
          local_4._0_1_ = 2;
          pcStack_54 = (char *)0x42bdc4;
          FUN_0042c0c0();
          local_4 = CONCAT31(local_4._1_3_,1);
          local_50 = (char *)0x42bdd2;
          FUN_004497b0();
          puVar2 = (undefined4 *)(puVar1 + 0xb0);
          piVar7 = aiStack_6c;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = *puVar2;
            puVar2 = puVar2 + 1;
            piVar7 = piVar7 + 1;
          }
          FUN_0041d3f0(&param_1);
          FUN_00478740();
          local_50 = (char *)param_1;
          pcStack_54 = (char *)0x42be0e;
          FUN_00477cf0();
          local_4 = local_4 & 0xffffff00;
          *(uint *)((int)param_1 + 0x60) = *(uint *)((int)param_1 + 0x60) | 0x80000;
          local_50 = (char *)0x42be2f;
          FUN_00449a70();
        }
      }
      puVar5 = *(uint **)(puVar1 + 0x70);
      if (puVar5 != *(uint **)(puVar1 + 0x74)) {
        do {
          local_50 = (char *)0x0;
          pcStack_54 = (char *)(*puVar5 % 1000);
          puStack_58 = (undefined1 *)0x42be50;
          FUN_00568a20();
          puVar5 = puVar5 + 1;
        } while (puVar5 != *(uint **)(puVar1 + 0x74));
      }
    }
    else if (*(int *)((int)param_1 + 0x24) == 1) {
      if (*(int *)((int)param_1 + 0x7c) == DAT_0068a8f0) {
        local_50 = param_2;
        param_1 = &pcStack_54;
        puStack_58 = (undefined1 *)&pcStack_54;
        piStack_5c = (int *)0x42be95;
        pcStack_54 = extraout_ECX;
        FUN_004896a0();
        piStack_5c = (int *)&puStack_58;
        aiStack_6c[3] = 0x42bea7;
        puStack_58 = extraout_ECX_01;
        FUN_004af790();
        piStack_5c = &local_30;
        aiStack_6c[3] = 0x42beb1;
        FUN_0045f6d0();
        aiStack_6c[0] = local_30;
        puVar2 = &DAT_0068aa10;
        puVar6 = local_24;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar2 = local_24;
        piVar7 = aiStack_6c + 2;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          piVar7 = piVar7 + 1;
        }
        local_4._0_1_ = 3;
        aiStack_6c[1] = local_2c;
        FUN_0045f250();
        if (local_30 != local_2c) {
          local_50 = (char *)0x42bf01;
          puVar2 = (undefined4 *)FUN_00459c40();
          local_50 = (char *)*puVar2;
          pcStack_54 = (char *)0x42bf15;
          FUN_004042b0();
          local_50 = (char *)&param_1;
          pcStack_54 = (char *)0x42bf23;
          FUN_00450ef0();
          local_50 = (char *)local_24;
          local_4._0_1_ = 4;
          pcStack_54 = (char *)0x42bf34;
          FUN_0042c0c0();
          local_4._0_1_ = 3;
          local_50 = (char *)0x42bf42;
          FUN_004497b0();
          puVar2 = (undefined4 *)(puVar1 + 0xb0);
          piVar7 = aiStack_6c;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = *puVar2;
            puVar2 = puVar2 + 1;
            piVar7 = piVar7 + 1;
          }
          FUN_0041d3f0(&param_1);
          FUN_00478740();
          local_50 = (char *)param_1;
          pcStack_54 = (char *)0x42bf7e;
          FUN_00477cf0();
          *(uint *)((int)param_1 + 0x60) = *(uint *)((int)param_1 + 0x60) | 0x80000;
        }
        local_4 = (uint)local_4._1_3_ << 8;
        local_50 = (char *)0x42bf9a;
        FUN_00449a70();
      }
      puVar5 = *(uint **)(puVar1 + 0x70);
      if (puVar5 != *(uint **)(puVar1 + 0x74)) {
        do {
          local_50 = (char *)0x0;
          pcStack_54 = (char *)(*puVar5 % 1000);
          puStack_58 = (undefined1 *)0x42bfbb;
          FUN_00568b20();
          puVar5 = puVar5 + 1;
        } while (puVar5 != *(uint **)(puVar1 + 0x74));
      }
    }
  }
  puVar1[0x1c] = (char)param_2;
  if (puVar1 == (undefined1 *)0x0) {
    local_50 = (undefined1 *)0x0;
  }
  else {
    local_50 = puVar1 + 0xc;
  }
  pcStack_54 = (char *)0x42c052;
  FUN_00483d00();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  local_50 = s_activateAmbush_AI_Ambush___ambus_0066cc78;
  pcStack_54 = (char *)0x42c09f;
  FUN_004018b0();
  ExceptionList = local_c;
  return 0;
}


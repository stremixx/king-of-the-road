
void FUN_0042c650(char *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  int aiStack_54 [2];
  char *pcStack_4c;
  char *pcStack_48;
  undefined4 uStack_44;
  char *pcStack_40;
  char *pcStack_3c;
  undefined1 **ppuStack_38;
  char *pcStack_34;
  char *local_30;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d0a8;
  local_c = ExceptionList;
  local_30 = (char *)0x8;
  pcStack_34 = s_START__0066b830;
  local_14 = s_releaseAmbushPlayer_PlayerId_pla_0066ccc8;
  local_10 = &DAT_0071d768;
  ppuStack_38 = (undefined1 **)0x42c68c;
  ExceptionList = &local_c;
  FUN_00401870();
  local_30 = s_releaseAmbushPlayer_PlayerId_pla_0066ccc8;
  pcStack_34 = (char *)0x42c69b;
  FUN_004018b0();
  local_20 = (undefined1 *)&local_30;
  local_4 = 0;
  local_30 = param_1;
  pcStack_34 = (char *)0x42c6b5;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    local_30 = &DAT_0066c4e4;
    pcStack_34 = &DAT_0077d5c0;
    ppuStack_38 = (undefined1 **)0x42c6cb;
    FUN_0061c369();
    ppuStack_38 = (undefined1 **)&DAT_0077d5c0;
    pcStack_3c = s_PlayerId_0066c4d8;
    pcStack_40 = s_Invalid_id_0066bbf4;
    uStack_44 = 0x2ccd;
    pcStack_48 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    pcStack_4c = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    aiStack_54[1] = 100;
    aiStack_54[0] = 0x21;
    FUN_00401010();
  }
  piVar6 = DAT_006898d0;
  if (DAT_006898d0 != DAT_006898d4) {
    do {
      local_30 = (char *)*piVar6;
      if (*(char **)(local_30 + 0x7c) == param_1) {
        pcStack_34 = (char *)0x42c71f;
        FUN_0042b950();
        pcStack_34 = (char *)*piVar6;
        ppuStack_38 = (undefined1 **)0x42c727;
        FUN_0042bb00();
        ppuStack_38 = &local_20;
        pcStack_3c = (char *)0x42c731;
        piVar3 = (int *)FUN_00477c00();
        local_30 = (char *)0x2;
        puVar4 = (undefined4 *)(*piVar3 + 0x28);
        piVar3 = aiStack_54 + 1;
        for (aiStack_54[0] = 8; aiStack_54[0] != 0; aiStack_54[0] = aiStack_54[0] + -1) {
          *piVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          piVar3 = piVar3 + 1;
        }
        local_1c = (undefined1 *)aiStack_54;
        FUN_0041d3f0(&param_1);
        FUN_00478300();
        pcVar5 = param_1;
        puVar4 = (undefined4 *)FUN_00477c00(local_18);
        *(undefined4 *)(pcVar5 + 0x3c8) = *puVar4;
        if (*(int *)(*piVar6 + 0x24) == 1) {
          local_1c = (undefined1 *)&local_30;
          pcStack_34 = (char *)&local_30;
          ppuStack_38 = (undefined1 **)0x42c793;
          FUN_00477c00();
          pcStack_34 = (char *)0x42c79b;
          FUN_0040a960();
        }
        else if (*(int *)(*piVar6 + 0x24) == 2) {
          local_1c = (undefined1 *)&local_30;
          pcStack_34 = (char *)&local_30;
          ppuStack_38 = (undefined1 **)0x42c7af;
          FUN_00477c00();
          pcStack_34 = (char *)0x42c7b7;
          FUN_0040a5f0();
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != DAT_006898d4);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_releaseAmbushPlayer_PlayerId_pla_0066ccc8;
  cVar1 = s_releaseAmbushPlayer_PlayerId_pla_0066ccc8[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = local_c;
  return;
}


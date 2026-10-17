
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425ec0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char **ppcVar7;
  int *piStack_b4;
  undefined1 *puStack_b0;
  char *apcStack_ac [3];
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  char *pcStack_94;
  double *local_90;
  int local_78;
  int local_74;
  undefined1 *local_70;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  double local_60;
  uint local_54;
  undefined4 uStack_50;
  char *local_4c;
  undefined *local_48;
  undefined1 local_44 [24];
  undefined1 local_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cde8;
  local_14 = ExceptionList;
  local_90 = (double *)0x8;
  pcStack_94 = s_START__0066b830;
  local_4c = s_provideCompetitionSpecial___0066c98c;
  local_48 = &DAT_0071d768;
  piStack_98 = (int *)0x425f03;
  ExceptionList = &local_14;
  FUN_00401870();
  local_90 = (double *)s_provideCompetitionSpecial___0066c98c;
  pcStack_94 = (char *)0x425f12;
  FUN_004018b0();
  local_90 = (double *)&local_74;
  local_c = 0;
  pcStack_94 = (char *)0x425f25;
  FUN_00477c00();
  if (local_74 == DAT_0068a8f0) {
    local_90 = (double *)0x8;
    pcStack_94 = s_COMPL__0066b7ec;
    piStack_98 = (int *)0x425f47;
    FUN_00401870();
    local_90 = (double *)s_provideCompetitionSpecial___0066c98c;
    pcStack_94 = (char *)0x425f56;
    FUN_004018b0();
    ExceptionList = local_14;
    return;
  }
  local_78 = DAT_0068a8f0;
  iVar1 = local_74 + 8;
  piStack_9c = (int *)((DAT_006898e4 - DAT_006898e0 >> 2) + DAT_0068c0c4);
  if (piStack_9c < DAT_0068c0bc) {
    do {
      local_90 = (double *)&DAT_0068a928;
      piStack_98 = &DAT_0068aa10;
      local_70 = (undefined1 *)(apcStack_ac + 4);
      piStack_a0 = &local_74;
      apcStack_ac[2] = (char *)0x425fb8;
      pcStack_94 = (char *)piStack_9c;
      FUN_0041d3f0();
      piStack_a0 = (int *)0x425fbf;
      FUN_00426370();
      piStack_98 = (int *)local_6c;
      piStack_9c = (int *)0x425fc9;
      piVar3 = (int *)FUN_00457150();
      local_78 = *piVar3;
      if (local_78 == DAT_0068a8f0) {
        local_90 = (double *)&DAT_0068a928;
        pcStack_94 = (char *)DAT_0068a8f0;
        local_70 = (undefined1 *)(apcStack_ac + 5);
        piStack_98 = (int *)DAT_0068a8f0;
        piStack_9c = &local_74;
        piStack_a0 = (int *)0x425ff9;
        FUN_0041d3f0();
        piStack_9c = (int *)0x426000;
        FUN_004042b0();
        piStack_98 = (int *)local_68;
        piStack_9c = (int *)0x42600a;
        piVar3 = (int *)FUN_004571c0();
        local_78 = *piVar3;
        if (local_78 == DAT_0068a8f0) break;
      }
      local_90 = (double *)(local_78 + 8);
      pcStack_94 = (char *)0x42602a;
      FUN_00477940();
      piStack_98 = (int *)0x426030;
      pcStack_94 = (char *)iVar1;
      local_90 = (double *)FUN_00477850();
      piStack_98 = &local_78;
      local_70 = (undefined1 *)(apcStack_ac + 6);
      piStack_9c = (int *)0x426045;
      FUN_0041d3f0();
      piStack_98 = (int *)0x42604a;
      FUN_00425910();
      DAT_0068c074 = 1;
      piStack_9c = (int *)0x426057;
      piStack_98 = (int *)iVar1;
      iVar4 = FUN_00477850();
      piStack_b4 = &local_78;
      puVar5 = (undefined4 *)(iVar4 + 0x18);
      ppcVar7 = apcStack_ac;
      for (puStack_b0 = (undefined1 *)0x8; puStack_b0 != (undefined1 *)0x0;
          puStack_b0 = puStack_b0 + -1) {
        *ppcVar7 = (char *)*puVar5;
        puVar5 = puVar5 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      local_70 = (undefined1 *)&puStack_b0;
      FUN_0041d3f0();
      piStack_b4 = (int *)0x42607e;
      FUN_00478740();
      local_90 = (double *)0x1;
      piStack_98 = (int *)0x426089;
      pcStack_94 = (char *)iVar1;
      FUN_00477850();
      pcStack_94 = (char *)0x426096;
      pcStack_94 = (char *)FUN_00426360();
      piStack_98 = (int *)local_64;
      piStack_9c = (int *)0x4260a1;
      puVar5 = (undefined4 *)FUN_00404d60();
      piStack_b4 = (int *)*puVar5;
      local_70 = (undefined1 *)&puStack_b0;
      FUN_0040a430();
      local_70 = (undefined1 *)&piStack_b4;
      FUN_0041d3f0(&local_78);
      FUN_00478300();
      puVar5 = (undefined4 *)(local_74 + 0x28);
      ppcVar7 = apcStack_ac;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar7 = (char *)*puVar5;
        puVar5 = puVar5 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      puStack_b0 = local_44;
      piStack_b4 = (int *)0x4260e1;
      local_90 = (double *)FUN_00435cd0();
      piStack_98 = &local_78;
      local_70 = (undefined1 *)(apcStack_ac + 6);
      piStack_9c = (int *)0x4260f6;
      FUN_0041d3f0();
      piStack_98 = (int *)0x4260fb;
      FUN_0043dd40();
      puVar5 = (undefined4 *)(local_78 + 0x28);
      ppcVar7 = apcStack_ac;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar7 = (char *)*puVar5;
        puVar5 = puVar5 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      puStack_b0 = local_2c;
      piStack_b4 = (int *)0x42611b;
      FUN_00435cd0();
      local_70 = (undefined1 *)((DAT_0068c0c0 - (DAT_006898e4 - DAT_006898e0 >> 2)) - DAT_0068c0c4);
      if ((int)local_70 < 1) {
        local_70 = (undefined1 *)((int)local_70 + -1);
      }
      DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
      uStack_50 = 0;
      DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
      (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
      local_54 = (uint)(&DAT_0068a928)[DAT_0068aa04] % 0x14;
      local_60 = ((double)(int)local_70 * _DAT_0064a718 + (double)local_54) - _DAT_0064a770;
      if ((local_60 <= _DAT_0064a7c0) || (_DAT_0064a668 <= local_60)) {
        if ((local_60 < _DAT_0064a718) && (_DAT_0064a668 < local_60)) {
          local_60 = 150.0;
        }
      }
      else {
        local_60 = -150.0;
      }
      local_90 = &local_60;
      piStack_98 = &local_78;
      pcStack_94 = (char *)0x14;
      piStack_9c = (int *)0x426240;
      local_70 = (undefined1 *)(apcStack_ac + 6);
      FUN_0041d3f0();
      piStack_98 = (int *)0x426245;
      FUN_00435b70();
      local_90 = (double *)local_78;
      pcStack_94 = (char *)0x426259;
      local_70 = (undefined1 *)(apcStack_ac + 7);
      FUN_004174c0();
      *(undefined4 *)(local_78 + 100) = 4;
      local_90 = (double *)local_78;
      pcStack_94 = (char *)0x426275;
      local_70 = (undefined1 *)(apcStack_ac + 7);
      FUN_00477e00();
      local_90 = (double *)local_78;
      pcStack_94 = (char *)0x426286;
      local_70 = (undefined1 *)(apcStack_ac + 7);
      FUN_004772b0();
      puStack_b0 = (undefined1 *)(local_78 + 8);
      puVar5 = (undefined4 *)(local_78 + 0x28);
      ppcVar7 = apcStack_ac;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar7 = (char *)*puVar5;
        puVar5 = puVar5 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      piStack_b4 = (int *)0x4262a2;
      FUN_0041a8a0();
      DAT_0068c074 = 0;
      piStack_9c = (int *)DAT_0068c0bc;
    } while ((uint)((DAT_006898e4 - DAT_006898e0 >> 2) + DAT_0068c0c4) < DAT_0068c0bc);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_provideCompetitionSpecial___0066c98c;
  cVar2 = s_provideCompetitionSpecial___0066c98c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar6;
    }
  }
  ExceptionList = local_14;
  return;
}


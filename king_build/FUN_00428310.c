
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428310(void)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  int *apiStack_204 [4];
  undefined1 *puStack_1f4;
  undefined1 *puStack_1f0;
  int *piStack_1ec;
  int *piStack_1e8;
  int local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  int local_1bc [2];
  double local_1b4;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  char *local_19c;
  undefined *local_198;
  undefined4 local_194 [24];
  undefined4 local_134 [24];
  undefined4 local_d4 [24];
  undefined1 local_74 [72];
  undefined1 local_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063ceeb;
  local_14 = ExceptionList;
  piStack_1e8 = (int *)0x8;
  piStack_1ec = (int *)s_START__0066b830;
  local_19c = s_recalculateCompetitionPlace___0066caec;
  local_198 = &DAT_0071d768;
  puStack_1f0 = (undefined1 *)0x428356;
  ExceptionList = &local_14;
  FUN_00401870();
  piStack_1e8 = (int *)s_recalculateCompetitionPlace___0066caec;
  piStack_1ec = (int *)0x428365;
  FUN_004018b0();
  piStack_1e8 = &local_1c8;
  piStack_1ec = &local_1cc;
  local_c = 0;
  local_1cc = 0;
  local_1c8 = 0xffffffff;
  uStack_1c4 = 0x7fefffff;
  puStack_1f0 = (undefined1 *)0x428391;
  FUN_00428020();
  if (_DAT_0064a700 < (double)CONCAT44(uStack_1c4,local_1c8)) {
    piStack_1e8 = &local_1d0;
    piStack_1ec = (int *)0x4283b3;
    FUN_00477c00();
    if (local_1d0 != DAT_0068a8f0) {
      *(int *)(local_1d0 + 0x20c) = (DAT_006898e4 - DAT_006898e0 >> 2) + DAT_0068c0c4;
      iVar1 = DAT_0068c0c4 + local_1cc;
      if ((DAT_0068c0e8 == 0) && (*(int *)(local_1d0 + 100) != 5)) {
        puVar6 = &DAT_0068bb88;
        puVar8 = (undefined4 *)(local_1d0 + 0x228);
        puVar9 = local_134;
        for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        do {
          piStack_1e8 = (int *)0x3ff00000;
          piStack_1ec = (int *)0x0;
          puStack_1f0 = (undefined1 *)0x428437;
          FUN_00428650();
          piStack_1ec = (int *)0x428444;
          piStack_1e8 = (int *)puVar6;
          FUN_00405ed0();
          piStack_1ec = local_d4;
          puVar8 = local_194;
          puVar9 = local_d4;
          for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          piStack_1e8 = local_134;
          puStack_1f0 = local_74;
          puStack_1f4 = (undefined1 *)0x428473;
          FUN_00487ef0();
          puStack_1f4 = local_2c;
          apiStack_204[2] = local_1bc;
          apiStack_204[3] = *(int **)(local_1d0 + 0x354);
          apiStack_204[1] = (int *)0x428490;
          FUN_004366b0();
          if (((((local_1bc[0] != -1) || (local_1bc[1] != -1)) || (local_1b4 != _DAT_0064a668)) ||
              ((local_1ac != 0 || (local_1a8 != 0)))) || (local_1a4 != 0)) {
            iVar5 = local_1d0 + 8;
            piVar7 = local_1bc;
            ppiVar10 = apiStack_204;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *ppiVar10 = (int *)*piVar7;
              piVar7 = piVar7 + 1;
              ppiVar10 = ppiVar10 + 1;
            }
            FUN_0041a8a0(iVar5);
            FUN_00428020(&local_1cc,&local_1c8);
            if (DAT_0068c0c4 + local_1cc < iVar1) {
              *(int *)(local_1d0 + 0x210) = DAT_0068c0c4 + local_1cc;
              if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
                pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
                *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
                *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
                DAT_0071d778 = DAT_0071d778 + 8;
              }
              piStack_1e8 = (int *)s_recalculateCompetitionPlace___0066caec;
              piStack_1ec = (int *)0x4285fd;
              FUN_004018b0();
              ExceptionList = local_14;
              return;
            }
          }
          puVar6 = puVar6 + 0x18;
        } while ((int)puVar6 < 0x68bbe8);
        iVar4 = local_1d0 + 8;
        puVar8 = (undefined4 *)(local_1d0 + 0x28);
        ppiVar10 = apiStack_204;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppiVar10 = (int *)*puVar8;
          puVar8 = puVar8 + 1;
          ppiVar10 = ppiVar10 + 1;
        }
        FUN_0041a8a0(iVar4);
      }
      *(int *)(local_1d0 + 0x210) = iVar1;
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_recalculateCompetitionPlace___0066caec;
  cVar2 = s_recalculateCompetitionPlace___0066caec[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar3;
    }
  }
  ExceptionList = local_14;
  return;
}


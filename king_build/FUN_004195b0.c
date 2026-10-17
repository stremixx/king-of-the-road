
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004195b0(int *param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_44 [2];
  char *pcStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  int *local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c988;
  local_c = ExceptionList;
  local_28 = (int *)0x8;
  pcStack_2c = s_START__0066b830;
  pcStack_30 = (char *)0x4195eb;
  ExceptionList = &local_c;
  FUN_00401870();
  local_28 = (int *)s_sendForSomething_PlayerId_player_0066c44c;
  pcStack_2c = (undefined1 *)0x4195fa;
  FUN_004018b0();
  local_4 = 0;
  if (DAT_0068c0e8 == 0) {
    if (((DAT_0068c0ac < DAT_0068c0b0) && (param_1[0x17] == 2)) && (param_1[0x19] == 0)) {
      local_28 = param_1;
      pcStack_2c = (undefined1 *)0x419649;
      cVar2 = FUN_004190b0();
      if (cVar2 != '\0') {
        iVar3 = param_1[0x82];
        if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == -1)) {
          iVar3 = param_1[0x81];
          if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == -1)) {
            local_28 = (int *)&DAT_0068c120;
            pcStack_2c = &DAT_0068c120;
            pcStack_30 = s_Internal_error_9012_0066c41c;
            uStack_34 = 0x2e4;
            pcStack_38 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
            pcStack_3c = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
            aiStack_44[1] = 1;
            aiStack_44[0] = 0;
            FUN_00401010();
            piVar5 = param_1;
          }
          else {
            piVar5 = (int *)(iVar3 + 0x1c);
          }
        }
        else {
          piVar5 = (int *)(iVar3 + 0x1c);
        }
        if (*piVar5 == piVar5[1]) {
          pcStack_2c = (char *)0x4196c8;
          local_28 = param_1;
          FUN_00419100();
          goto LAB_0041979c;
        }
      }
    }
    local_28 = (int *)0x4196d9;
    iVar3 = FUN_00474260();
    dVar1 = *(double *)(iVar3 + 0x28);
    DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
    DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
    (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
    if (dVar1 * _DAT_0064a6a0 <= (double)((uint)(&DAT_0068a928)[DAT_0068aa04] % 1000000)) {
      piVar5 = param_1 + 10;
      piVar6 = aiStack_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      FUN_0041d3f0(&param_1);
      FUN_00417720();
    }
    else {
      local_28 = param_1;
      pcStack_2c = (char *)0x419799;
      FUN_004186a0();
    }
  }
LAB_0041979c:
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_sendForSomething_PlayerId_player_0066c44c;
  cVar2 = s_sendForSomething_PlayerId_player_0066c44c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar4;
    }
  }
  ExceptionList = local_c;
  return;
}


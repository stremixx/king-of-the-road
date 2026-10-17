
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442820(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  int local_34;
  int local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063de98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_accountForGuilt_PlayerId_player__0066e100);
  bVar2 = false;
  iVar1 = param_1[0x82];
  local_4 = 0;
  bVar3 = false;
  local_30 = -1;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
    iVar1 = param_1[0x81];
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      puVar5 = param_1;
    }
    else {
      puVar5 = (undefined4 *)(iVar1 + 0x1c);
    }
  }
  else {
    puVar5 = (undefined4 *)(iVar1 + 0x1c);
  }
  piVar8 = (int *)*puVar5;
  while( true ) {
    iVar1 = param_1[0x82];
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
      iVar1 = param_1[0x81];
      if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120,&DAT_0068c120);
      }
      else {
        local_34 = iVar1 + 0x1c;
      }
    }
    else {
      local_34 = iVar1 + 0x1c;
    }
    if (piVar8 == *(int **)(local_34 + 4)) break;
    iVar1 = DAT_0068bc18 + *piVar8 * 0x68;
    if (((piVar8[1] != -1) &&
        (bVar3 = true, (*(byte *)(DAT_0068bc18 + 0x30 + piVar8[1] * 0x68) & 2) != 0)) &&
       (cVar4 = FUN_004298d0(), cVar4 != '\0')) {
      bVar2 = true;
    }
    if (((*(byte *)(iVar1 + 0x30) & 2) != 0) && (cVar4 = FUN_004298d0(), cVar4 != '\0')) {
      bVar2 = true;
    }
    if (bVar3) {
      uVar6 = FUN_004155e0(1000000);
      if (_DAT_0064a898 <= (double)uVar6) {
        if (bVar2) {
          if (piVar8[0x22] == -1) {
            DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
            DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
            (&DAT_0068a928)[DAT_0068aa04] =
                 (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
            piVar8[0x22] = 0;
          }
          local_30 = piVar8[0x22];
        }
LAB_00442ac2:
        piVar8 = piVar8 + 0x24;
      }
      else {
        bVar2 = false;
        bVar3 = false;
        piVar8 = piVar8 + 0x24;
      }
    }
    else {
      if (!bVar2) goto LAB_00442ac2;
      if (_DAT_0064a5e0 <= *(double *)(piVar8 + 0x10)) {
        uVar6 = FUN_004155e0(1000000);
        if (_DAT_0064a898 <= (double)uVar6) goto LAB_00442ac2;
        bVar2 = false;
        piVar8 = piVar8 + 0x24;
      }
      else {
        uVar6 = FUN_004155e0(1000000);
        if (_DAT_0064a890 <= (double)uVar6) goto LAB_00442ac2;
        bVar2 = false;
        piVar8 = piVar8 + 0x24;
      }
    }
  }
  if (bVar3) {
    if (bVar2) {
      if (local_30 == 1) goto LAB_00442aef;
      bVar2 = false;
    }
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  else {
LAB_00442aef:
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  if (bVar2) {
    *(undefined1 *)((int)param_1 + 0xc9) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0xc9) = 0;
  }
  if ((*(byte *)(param_1[0x81] + 0x28) & 2) != 0) {
    DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
    DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
    (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
    if ((double)((uint)(&DAT_0068a928)[DAT_0068aa04] % 1000000) < _DAT_0064a890) {
      *(undefined1 *)(param_1 + 0x42) = 1;
      goto LAB_00442b9b;
    }
  }
  *(undefined1 *)(param_1 + 0x42) = 0;
LAB_00442b9b:
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_accountForGuilt_PlayerId_player__0066e100;
  cVar4 = s_accountForGuilt_PlayerId_player__0066e100[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar4 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar4;
      cVar4 = *pcVar7;
    }
  }
  ExceptionList = local_c;
  return;
}


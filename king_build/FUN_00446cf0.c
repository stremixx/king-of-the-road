
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446cf0(int param_1,double param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 *local_ac;
  undefined1 local_94 [128];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063e11b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  puVar5 = (undefined4 *)&stack0xffffff40;
  puVar8 = &stack0xffffff40;
  local_ac = &stack0xffffff40;
  local_c = 0;
  iVar4 = FUN_00456670();
  if (iVar4 != 0) {
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x47d2,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  if (_DAT_0064a650 < param_2) {
    iVar4 = *(int *)(param_1 + 0x208);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
      iVar4 = *(int *)(param_1 + 0x204);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120);
      }
      else {
        puVar5 = (undefined4 *)(iVar4 + 0x1c);
      }
    }
    else {
      puVar5 = (undefined4 *)(iVar4 + 0x1c);
    }
    piVar9 = (int *)*puVar5;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x208);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
        iVar4 = *(int *)(param_1 + 0x204);
        if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
          FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                       s_Internal_error_9012_0066c41c,&DAT_0068c120);
        }
        else {
          puVar8 = (undefined1 *)(iVar4 + 0x1c);
        }
      }
      else {
        puVar8 = (undefined1 *)(iVar4 + 0x1c);
      }
      if (piVar9 == *(int **)(puVar8 + 4)) break;
      dVar1 = (_DAT_0064a660 - *(double *)(DAT_0068bc18 + 0x40 + *piVar9 * 0x68)) * param_2 *
              _DAT_0064a948;
      dVar2 = _DAT_0064a660;
      if ((dVar1 <= _DAT_0064a660) && (dVar2 = dVar1, dVar1 < _DAT_0064a590)) {
        dVar2 = _DAT_0064a668;
      }
      *(double *)(piVar9 + 0x18) = (_DAT_0064a660 - dVar2) * *(double *)(piVar9 + 0x18);
      cVar3 = FUN_00417560();
      local_ac = &stack0xffffff40;
      if ((cVar3 != '\0') &&
         ((piVar9[0x18] != 0 || (local_ac = &stack0xffffff40, piVar9[0x19] != 0x3ff00000)))) {
        local_ac = (undefined1 *)__ftol();
        uVar6 = FUN_0040e1d0(s_X_DAMAGED_0066e414,(double)(int)local_ac);
        FUN_0061c369(local_94,uVar6);
        FUN_00483da0(local_94);
      }
      piVar9 = piVar9 + 0x24;
    }
    iVar4 = *(int *)(param_1 + 0x208);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
      iVar4 = *(int *)(param_1 + 0x204);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120);
      }
      else {
        local_ac = (undefined1 *)(iVar4 + 0x1c);
      }
    }
    else {
      local_ac = (undefined1 *)(iVar4 + 0x1c);
    }
    cVar3 = FUN_00429f20(local_ac);
    if (cVar3 != '\0') {
      *(double *)(param_1 + 0x88) = *(double *)(param_1 + 0x88) - 0.0;
      FUN_004772b0();
      cVar3 = FUN_00417560();
      if (cVar3 != '\0') {
        uVar6 = FUN_0040e1d0();
        FUN_0056a570(uVar6);
        FUN_00442c30();
        uVar6 = FUN_0040e1d0(s_FORFEIT_0066e2bc,0);
        FUN_0061c369(local_94,uVar6);
        FUN_0056a570(local_94);
        FUN_0056eda0();
        FUN_00483f50(0,0);
        FUN_00483f70(7,0);
      }
      FUN_00427000();
      cVar3 = FUN_004171e0();
      if ((cVar3 != '\0') && (iVar4 = FUN_00477920(), iVar4 == 0)) {
        DAT_0068c0bc = DAT_0068c0bc + -1;
        FUN_00417430();
      }
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_hitPlayer_PlayerId_player__doubl_0066e420;
  cVar3 = s_hitPlayer_PlayerId_player__doubl_0066e420[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
      cVar3 = *pcVar7;
    }
  }
  ExceptionList = local_14;
  return;
}


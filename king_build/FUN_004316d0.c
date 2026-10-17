
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004316d0(int param_1,int *param_2,uint param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 fVar9;
  ulonglong local_24;
  undefined8 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870();
  FUN_004018b0();
  local_4 = 0;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x326a,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x326b,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  switch(param_2[0x17]) {
  case 2:
    if ((param_3 & 0x10) != 0) {
      cVar1 = FUN_004171e0();
      if (cVar1 == '\0') goto switchD_004317e2_caseD_3;
      iVar2 = param_2[0x82];
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
        iVar2 = param_2[0x81];
        if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
          FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                       s_Internal_error_9012_0066c41c,&DAT_0068c120);
          piVar4 = param_2;
        }
        else {
          piVar4 = (int *)(iVar2 + 0x1c);
        }
      }
      else {
        piVar4 = (int *)(iVar2 + 0x1c);
      }
      if (*piVar4 == piVar4[1]) goto switchD_004317e2_caseD_3;
      iVar2 = *(int *)(param_1 + 0x208);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
        iVar2 = *(int *)(param_1 + 0x204);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
          FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                       s_Internal_error_9012_0066c41c,&DAT_0068c120);
          piVar4 = param_2;
        }
        else {
          piVar4 = (int *)(iVar2 + 0x1c);
        }
      }
      else {
        piVar4 = (int *)(iVar2 + 0x1c);
      }
      if (*piVar4 == piVar4[1]) goto switchD_004317e2_caseD_3;
      iVar2 = FUN_00477920();
      if (iVar2 == 0) {
        fVar9 = (float10)_DAT_0064a8a0;
      }
      else {
        fVar8 = (float10)FUN_004715b0(iVar2,0,0);
        fVar9 = (float10)FUN_004715b0(iVar2,0,0x3ff00000,0);
        fVar9 = (float10)(double)fVar8 - fVar9;
      }
      fVar9 = fVar9 * (float10)(double)CONCAT44(DAT_0066b794,DAT_0066b790) + (float10)*param_4;
      *param_4 = (double)fVar9;
      log2(fVar9);
      iVar2 = __ftol();
      iVar7 = 1;
      if (2 < iVar2) {
        iVar2 = 2;
      }
      if (0 < iVar2) {
        do {
          iVar7 = iVar7 * 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = __ftol();
      *param_4 = (double)(iVar2 * iVar7);
      if ((double)(iVar2 * iVar7) <= _DAT_0064a668) goto LAB_0043209c;
    }
    if ((param_3 & 0x20) != 0) {
      cVar1 = FUN_004171e0();
      if (cVar1 == '\0') {
switchD_004317e2_caseD_3:
        if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
          pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
          *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
          *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
          DAT_0071d778 = DAT_0071d778 + 8;
        }
        pcVar6 = s_queryBribeSum_PlayerId_giver__Pl_0066d01c;
        cVar1 = s_queryBribeSum_PlayerId_giver__Pl_0066d01c[0];
        if (DAT_0071d774 != 0) {
          for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
          {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
            cVar1 = *pcVar6;
          }
        }
        ExceptionList = local_c;
        return 1;
      }
      iVar2 = *(int *)(param_1 + 0x208);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
        iVar2 = *(int *)(param_1 + 0x204);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
          FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                       s_Internal_error_9012_0066c41c,&DAT_0068c120);
          piVar4 = param_2;
        }
        else {
          piVar4 = (int *)(iVar2 + 0x1c);
        }
      }
      else {
        piVar4 = (int *)(iVar2 + 0x1c);
      }
      if (*piVar4 == piVar4[1]) goto switchD_004317e2_caseD_3;
      iVar2 = FUN_00477920();
      if (iVar2 != 0) {
        FUN_004715b0(iVar2,0,0);
        FUN_004715b0(iVar2,0,0x3ff00000,0);
      }
      log2((float10)*param_4);
      iVar2 = __ftol();
      iVar7 = 1;
      if (2 < iVar2) {
        iVar2 = 2;
      }
      if (0 < iVar2) {
        do {
          iVar7 = iVar7 * 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      fVar9 = extraout_ST0;
      iVar2 = __ftol();
      *param_4 = (double)(iVar2 * iVar7);
      fVar9 = fVar9 * (float10)(double)CONCAT44(DAT_0066b794,DAT_0066b790) +
              (float10)(iVar2 * iVar7);
      *param_4 = (double)fVar9;
      if (fVar9 <= (float10)_DAT_0064a668) {
LAB_0043209c:
        FUN_00401870();
        FUN_004018b0();
        ExceptionList = local_c;
        return 1;
      }
    }
    local_1c = (double)CONCAT44(DAT_0066b794,DAT_0066b790);
    uVar5 = FUN_004155e0();
    local_24 = (ulonglong)uVar5;
    if ((double)local_24 < local_1c * _DAT_0064a6a0) goto switchD_004317e2_caseD_7;
    break;
  default:
    goto switchD_004317e2_caseD_3;
  case 5:
    if ((param_3 & 1) != 0) {
      uVar3 = FUN_00477920();
      fVar9 = (float10)FUN_00430960();
      cVar1 = FUN_00431420();
      if (cVar1 == '\0') {
        fVar8 = (float10)(double)fVar9;
      }
      else {
        fVar8 = (float10)FUN_004715f0(uVar3,(double)*(int *)(param_1 + 0x210));
        fVar8 = fVar8 + (float10)(double)fVar9;
      }
      fVar9 = (fVar8 - ((float10)_DAT_0064a660 - (float10)_DAT_0066b768) *
                       ((float10)_DAT_0066b770 + fVar8)) / (float10)_DAT_0066b768 +
              (float10)*param_4;
      *param_4 = (double)fVar9;
      log2(fVar9);
      iVar2 = __ftol();
      iVar7 = 1;
      if (2 < iVar2) {
        iVar2 = 2;
      }
      if (0 < iVar2) {
        do {
          iVar7 = iVar7 * 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = __ftol();
      *param_4 = (double)(iVar2 * iVar7);
      if ((double)(iVar2 * iVar7) <= _DAT_0064a668) goto LAB_0043209c;
    }
    if ((param_3 & 2) != 0) {
      iVar2 = FUN_00477920();
      if (iVar2 == 0) {
        fVar9 = (float10)*(double *)(param_1 + 0x3c0);
      }
      else {
        fVar9 = (float10)FUN_004715f0(iVar2,(double)*(int *)(param_1 + 0x210));
      }
      fVar9 = fVar9 + (float10)*(double *)(param_1 + 0xe0);
      fVar9 = (fVar9 - ((float10)_DAT_0064a660 - (float10)_DAT_0066b768) *
                       ((float10)_DAT_0066b778 + fVar9)) / (float10)_DAT_0066b768 +
              (float10)*param_4;
      *param_4 = (double)fVar9;
      log2(fVar9);
      iVar2 = __ftol();
      iVar7 = 1;
      if (2 < iVar2) {
        iVar2 = 2;
      }
      if (0 < iVar2) {
        do {
          iVar7 = iVar7 * 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = __ftol();
      *param_4 = (double)(iVar2 * iVar7);
      if ((double)(iVar2 * iVar7) <= _DAT_0064a668) goto LAB_0043209c;
    }
    if ((param_3 & 4) != 0) {
      iVar2 = *(int *)(param_1 + 0x208);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
        iVar2 = *(int *)(param_1 + 0x204);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
          FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                       s_Internal_error_9012_0066c41c,&DAT_0068c120);
        }
        else {
          param_2 = (int *)(iVar2 + 0x1c);
        }
      }
      else {
        param_2 = (int *)(iVar2 + 0x1c);
      }
      if ((*param_2 == param_2[1]) || (DAT_006898e0 == DAT_006898e4)) goto switchD_004317e2_caseD_3;
      iVar2 = FUN_00477920();
      if (iVar2 == 0) {
        fVar9 = (float10)_DAT_0064a8a0;
      }
      else {
        fVar8 = (float10)FUN_004715b0(iVar2,0,0);
        fVar9 = (float10)FUN_004715b0(iVar2,0,0x3ff00000,0);
        fVar9 = (float10)(double)fVar8 - fVar9;
      }
      fVar9 = (fVar9 - ((float10)_DAT_0064a660 - (float10)_DAT_0066b768) *
                       ((float10)_DAT_0066b778 + fVar9)) / (float10)_DAT_0066b768 +
              (float10)*param_4;
      *param_4 = (double)fVar9;
      log2(fVar9);
      iVar2 = __ftol();
      iVar7 = 1;
      if (2 < iVar2) {
        iVar2 = 2;
      }
      if (0 < iVar2) {
        do {
          iVar7 = iVar7 * 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = __ftol();
      *param_4 = (double)(iVar2 * iVar7);
      if ((double)(iVar2 * iVar7) <= _DAT_0064a668) goto LAB_0043209c;
    }
    cVar1 = FUN_004742b0();
    if (cVar1 != '\0') {
      FUN_00401870();
      FUN_004018b0();
      ExceptionList = local_c;
      return 0;
    }
    break;
  case 6:
    if ((param_3 & 8) != 0) {
      iVar2 = FUN_00477920();
      if (iVar2 == 0) {
        fVar9 = (float10)*(double *)(param_1 + 0x3c0);
      }
      else {
        fVar9 = (float10)FUN_004715f0(iVar2,(double)*(int *)(param_1 + 0x210));
      }
      fVar9 = (fVar9 + (float10)*(double *)(param_1 + 0xe0)) * (float10)_DAT_0066b788 +
              (float10)*param_4;
      *param_4 = (double)fVar9;
      log2(fVar9);
      iVar2 = __ftol();
      iVar7 = 1;
      if (2 < iVar2) {
        iVar2 = 2;
      }
      if (0 < iVar2) {
        do {
          iVar7 = iVar7 * 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = __ftol();
      param_2 = (int *)(iVar2 * iVar7);
      *param_4 = (double)(int)param_2;
      if ((double)(int)param_2 <= _DAT_0064a668) goto LAB_0043209c;
    }
    if ((param_3 & 4) != 0) {
      iVar2 = *(int *)(param_1 + 0x208);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
        iVar2 = *(int *)(param_1 + 0x204);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
          FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                       s_Internal_error_9012_0066c41c,&DAT_0068c120);
        }
        else {
          param_2 = (int *)(iVar2 + 0x1c);
        }
      }
      else {
        param_2 = (int *)(iVar2 + 0x1c);
      }
      if ((*param_2 == param_2[1]) || (DAT_006898e0 == DAT_006898e4)) goto switchD_004317e2_caseD_3;
      iVar2 = FUN_00477920();
      if (iVar2 == 0) {
        fVar9 = (float10)_DAT_0064a8a0;
      }
      else {
        fVar8 = (float10)FUN_004715b0(iVar2,0,0);
        fVar9 = (float10)FUN_004715b0(iVar2,0,0x3ff00000,0);
        fVar9 = (float10)(double)fVar8 - fVar9;
      }
      fVar9 = fVar9 * (float10)_DAT_0066b788 + (float10)*param_4;
      *param_4 = (double)fVar9;
      log2(fVar9);
      iVar2 = __ftol();
      iVar7 = 1;
      if (2 < iVar2) {
        iVar2 = 2;
      }
      if (0 < iVar2) {
        do {
          iVar7 = iVar7 * 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = __ftol();
      *param_4 = (double)(iVar2 * iVar7);
      if ((double)(iVar2 * iVar7) <= _DAT_0064a668) goto LAB_0043209c;
    }
    FUN_00401870();
    FUN_004018b0();
    ExceptionList = local_c;
    return 0;
  case 7:
  case 8:
  case 9:
switchD_004317e2_caseD_7:
    if ((param_3 & 0x40) == 0) {
LAB_004324f5:
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar6 = s_queryBribeSum_PlayerId_giver__Pl_0066d01c;
      cVar1 = s_queryBribeSum_PlayerId_giver__Pl_0066d01c[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          cVar1 = *pcVar6;
        }
      }
      ExceptionList = local_c;
      return 0;
    }
    if (*(int *)(param_1 + 0x54) == -1) {
      fVar9 = (float10)_DAT_0064a668;
    }
    else {
      fVar9 = (float10)FUN_004cd760();
    }
    fVar9 = fVar9 * (float10)_DAT_0064a838 + (float10)*param_4 + (float10)_DAT_0064a850;
    *param_4 = (double)fVar9;
    log2(fVar9);
    iVar2 = __ftol();
    iVar7 = 1;
    if (2 < iVar2) {
      iVar2 = 2;
    }
    if (0 < iVar2) {
      do {
        iVar7 = iVar7 * 10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = __ftol();
    *param_4 = (double)(iVar2 * iVar7);
    if ((double)(iVar2 * iVar7) <= _DAT_0064a668) {
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      FUN_004018b0();
      ExceptionList = local_c;
      return 1;
    }
    if (*(int *)(DAT_006898b8 + param_2[0xf8] * 0x38) == 2) {
      if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_00432298;
    }
    else {
      cVar1 = FUN_004171e0();
      if (cVar1 == '\0') {
        if (*(int *)(DAT_006898b8 + *(int *)(param_1 + 0x3e0) * 0x38) == 2) {
          DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
          DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
          (&DAT_0068a928)[DAT_0068aa04] =
               (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
          local_1c = (double)(ulonglong)((uint)(&DAT_0068a928)[DAT_0068aa04] % 1000000);
          if ((double)(longlong)local_1c < _DAT_0064a898) {
            if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
              pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
              *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
              *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
              DAT_0071d778 = DAT_0071d778 + 8;
            }
            pcVar6 = s_queryBribeSum_PlayerId_giver__Pl_0066d01c;
            cVar1 = s_queryBribeSum_PlayerId_giver__Pl_0066d01c[0];
            if (DAT_0071d774 != 0) {
              for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770));
                  DAT_0071d778 = DAT_0071d778 + 1) {
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
                cVar1 = *pcVar6;
              }
            }
            ExceptionList = local_c;
            return 2;
          }
        }
        else {
          DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
          DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
          (&DAT_0068a928)[DAT_0068aa04] =
               (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
          local_1c = (double)(ulonglong)((uint)(&DAT_0068a928)[DAT_0068aa04] % 1000000);
          if ((double)(longlong)local_1c < _DAT_0064a890) {
            if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
              pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
              *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
              *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
              DAT_0071d778 = DAT_0071d778 + 8;
            }
            pcVar6 = s_queryBribeSum_PlayerId_giver__Pl_0066d01c;
            cVar1 = s_queryBribeSum_PlayerId_giver__Pl_0066d01c[0];
            if (DAT_0071d774 != 0) {
              for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770));
                  DAT_0071d778 = DAT_0071d778 + 1) {
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
                cVar1 = *pcVar6;
              }
            }
            ExceptionList = local_c;
            return 2;
          }
        }
        goto LAB_004324f5;
      }
      if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_00432298;
    }
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
    goto LAB_00432298;
  }
  FUN_00401870();
LAB_00432298:
  FUN_004018b0();
  ExceptionList = local_c;
  return 2;
}


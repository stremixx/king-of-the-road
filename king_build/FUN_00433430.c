
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00433430(int param_1,int *param_2,double *param_3)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  double local_60;
  double local_4c;
  double local_44;
  double local_3c;
  int local_34 [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d5d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  *param_2 = 0;
  piVar8 = (int *)(param_1 + 0x28);
  piVar5 = local_34;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar5 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar5 = piVar5 + 1;
  }
  local_c = 0;
  if ((local_34[1] == -1) ||
     (iVar7 = *(int *)(*(int *)(DAT_0068be60 + local_34[1] * 4) + 0xac), iVar7 == -1)) {
    FUN_0040b030(&local_4c);
    local_60 = 1.79769313486232e+308;
    piVar8 = DAT_0068bbf8;
    if (DAT_0068bbf8 != DAT_0068bbfc) {
      do {
        piVar5 = *(int **)(*piVar8 + 0x1c);
        if (piVar5 != *(int **)(*piVar8 + 0x20)) {
          do {
            if (piVar5[6] != piVar5[7]) {
              iVar7 = *(int *)(DAT_0068be60 + *piVar5 * 4);
              dVar2 = local_4c - *(double *)(iVar7 + 0x30);
              dVar3 = local_44 - *(double *)(iVar7 + 0x38);
              dVar4 = local_3c - *(double *)(iVar7 + 0x40);
              dVar2 = SQRT(dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3);
              if (dVar2 < local_60) {
                *param_2 = (int)(piVar5 + 6);
                *param_3 = *(double *)(*piVar8 + 0x30) * _DAT_0064a680;
                local_60 = dVar2;
              }
            }
            piVar5 = piVar5 + 9;
          } while (piVar5 != *(int **)(*piVar8 + 0x20));
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != DAT_0068bbfc);
    }
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar6 = s_getAssortment_PlayerId_dealer__v_0066d104;
    cVar1 = s_getAssortment_PlayerId_dealer__v_0066d104[0];
    if (DAT_0071d774 != 0) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar6;
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  *param_3 = *(double *)(DAT_0068bbf8[iVar7] + 0x30) * _DAT_0064a680;
  piVar8 = *(int **)(DAT_0068bbf8[iVar7] + 0x20);
  piVar5 = *(int **)(DAT_0068bbf8[iVar7] + 0x1c);
  if (piVar5 != piVar8) {
    do {
      if (*piVar5 == local_34[1]) break;
      piVar5 = piVar5 + 9;
    } while (piVar5 != piVar8);
    if (piVar5 != piVar8) {
      if (piVar5[6] == piVar5[7]) {
        FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3438,
                     s_Internal_error_0875_0066d0dc,&DAT_0068c120);
      }
      *param_2 = (int)(piVar5 + 6);
      FUN_00401870(s_COMPL__0066b7ec);
      FUN_004018b0();
      ExceptionList = local_14;
      return 0;
    }
  }
  FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3433,s_Internal_error_0873_0066d0f0,
               &DAT_0068c120);
  FUN_00401870(s_COMPL__0066b7ec);
  FUN_004018b0();
  ExceptionList = local_14;
  return 1;
}


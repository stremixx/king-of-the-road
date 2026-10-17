
void FUN_0041b470(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  float10 fVar9;
  int local_28;
  undefined1 local_24 [4];
  int *local_20;
  undefined4 uStack_1c;
  undefined1 local_18 [4];
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ca53;
  local_c = ExceptionList;
  local_14 = s_fillTownOrder_TownOrder______to__0066c5d4;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_fillTownOrder_TownOrder______to__0066c5d4);
  uVar4 = param_3;
  piVar8 = (int *)0x0;
  local_4 = 0;
  *param_1 = 0;
  local_28 = 0;
  do {
    if (piVar8 != (int *)0x0) goto LAB_0041b5dd;
    if ((*(byte *)(param_2 + 4) & 4) == 0) {
      piVar8 = (int *)FUN_0041b370(local_24,uVar4,(-(param_4 != 1) & 8U) + 8,0x1c);
    }
    else {
      piVar8 = (int *)FUN_0041b1f0(&param_3,4,4);
    }
    iVar1 = *piVar8;
    if (iVar1 == -1) goto LAB_0041b580;
    piVar8 = (int *)FUN_00631d33(0x20);
    local_4._0_1_ = 1;
    local_20 = piVar8;
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_00405180(local_18,uVar4,iVar1);
      iVar2 = *piVar6;
      *piVar8 = iVar1;
      piVar8[1] = -1;
      piVar8[2] = -1;
      piVar8[4] = 0;
      piVar8[6] = 0;
      piVar8[3] = iVar2;
      piVar8[5] = 0;
      piVar8[7] = 0;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    local_28 = local_28 + 1;
  } while (local_28 < 100);
  if (piVar8 == (int *)0x0) {
LAB_0041b580:
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    FUN_004018b0(s_fillTownOrder_TownOrder______to__0066c5d4);
    ExceptionList = local_c;
    return;
  }
LAB_0041b5dd:
  DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
  DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
  (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
  uVar3 = (&DAT_0068a928)[DAT_0068aa04];
  fVar9 = (float10)FUN_00401000();
  local_20 = (int *)(uVar3 % 300 + 200);
  uStack_1c = 0;
  *(double *)(piVar8 + 4) = (double)((float10)local_20 + fVar9);
  FUN_0041b3d0(piVar8,uVar4);
  if (((*(byte *)(DAT_0068bc18 + 0x30 + *piVar8 * 0x68) & 4) == 0) &&
     (cVar5 = FUN_004298a0(), iVar1 = param_4, cVar5 != '\0')) {
    DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
    DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
    (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
    if ((uint)(&DAT_0068a928)[DAT_0068aa04] % 5 == 2) {
      piVar6 = (int *)FUN_0041b2b0(&param_4,(-(param_4 != 1) & 8U) + 8 | 1,0x19);
      iVar2 = *piVar6;
      piVar8[1] = iVar2;
      if (iVar2 == -1) {
        FUN_00401010(0,200,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1730,
                     s_Internal_error_066321_0066c5bc,&DAT_0068c120,&DAT_0068c120);
        FUN_005d2250(s_additional__0066c5ac,iVar1);
      }
      else {
        piVar8[2] = *piVar8;
        *piVar8 = piVar8[1];
      }
    }
  }
  *param_1 = piVar8;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_fillTownOrder_TownOrder______to__0066c5d4;
  cVar5 = s_fillTownOrder_TownOrder______to__0066c5d4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar5 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar5 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
      cVar5 = *pcVar7;
    }
  }
  ExceptionList = local_c;
  return;
}



int * FUN_00418ce0(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  char *local_94;
  undefined *local_90;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c956;
  local_c = ExceptionList;
  local_94 = s_findAppropriateParkingPlace_int___0066c378;
  local_90 = &DAT_0071d768;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_findAppropriateParkingPlace_int___0066c378);
  iVar5 = -1;
  local_4 = 0;
  local_b0 = 1000;
  piVar4 = DAT_0068bbf8;
  if (DAT_0068bbf8 == DAT_0068bbfc) {
LAB_00418dfe:
    FUN_0061c369(local_8c,s___d__d__d__d__0066c368,*param_3,param_3[2],param_3[1],param_3[3]);
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1274,s_Internal_error_07467_0066c350,
                 local_8c,&DAT_0068c120);
    *param_1 = -1;
    FUN_00401870(s_COMPL__0066b7ec,8);
    FUN_004018b0(s_findAppropriateParkingPlace_int___0066c378);
    ExceptionList = local_c;
    return param_1;
  }
  do {
    FUN_00418c80(&local_a0,*piVar4,param_3,param_4,param_5);
    if (local_a0 != local_9c) {
      iVar1 = *piVar4;
      uVar2 = *(uint *)(iVar1 + 0x28);
      if (((int)uVar2 < (int)local_b0) &&
         (uVar2 < (uint)((*(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c)) / 0x24))) {
        iVar5 = (int)piVar4 - (int)DAT_0068bbf8 >> 2;
        local_b0 = uVar2;
      }
    }
    iVar1 = local_98 - local_a0 >> 2;
    if (iVar1 != 0) {
      FUN_0044b440(local_a0,iVar1 * 4);
    }
    piVar4 = piVar4 + 1;
  } while (piVar4 != DAT_0068bbfc);
  if (iVar5 == -1) goto LAB_00418dfe;
  piVar4 = (int *)(DAT_0068bbf8[iVar5] + 0x1c);
  FUN_00418c80(&local_ac,DAT_0068bbf8[iVar5],param_3,param_4,param_5);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_ac == local_a8) {
    FUN_00418a00(param_1,param_2);
    iVar5 = local_a4 - (int)local_ac >> 2;
    if (iVar5 != 0) {
      uVar2 = iVar5 * 4;
      if (uVar2 < 0x81) {
        FUN_00401aa0();
        *local_ac = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = local_ac;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(local_ac);
      }
    }
    if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_0041900b;
  }
  else {
    FUN_0045cf10(local_ac,local_a8,0,0,piVar4);
    *param_2 = (local_a8[-1] - *piVar4) / 0x24;
    *param_1 = iVar5;
    iVar5 = local_a4 - (int)local_ac >> 2;
    if (iVar5 != 0) {
      uVar2 = iVar5 * 4;
      if (uVar2 < 0x81) {
        FUN_00401aa0();
        *local_ac = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = local_ac;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(local_ac);
      }
    }
    if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_0041900b;
  }
  pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
  *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
  *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
  DAT_0071d778 = DAT_0071d778 + 8;
LAB_0041900b:
  FUN_004018b0(s_findAppropriateParkingPlace_int___0066c378);
  ExceptionList = local_c;
  return param_1;
}


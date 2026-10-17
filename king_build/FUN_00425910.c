
void FUN_00425910(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  double local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  cVar4 = FUN_00417560(param_1);
  if (cVar4 != '\0') {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x22e1,s_Internal_error_9012_0066c41c,
                 &DAT_0068c120,&DAT_0068c120);
  }
  piVar3 = param_2;
  iVar1 = *param_2;
  local_10 = *(undefined4 *)(DAT_0068bc18 + 0x18 + iVar1 * 0x68);
  iVar5 = DAT_0068bc18 + iVar1 * 0x68;
  puVar9 = &local_20;
  uStack_c = *(undefined4 *)(iVar5 + 0x1c);
  local_28 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x14),
                              *(undefined4 *)(DAT_0068bc18 + 0x10 + iVar1 * 0x68));
  puVar8 = &local_18;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0;
  puVar10 = puVar8;
  FUN_0041d3f0(&param_1);
  FUN_0041b9e0(puVar8,puVar9,puVar10);
  local_30 = (double)CONCAT44(uStack_1c,local_20) / local_28;
  iVar5 = *(int *)(param_1 + 0x208);
  local_28 = (double)CONCAT44(uStack_14,local_18) / (double)CONCAT44(uStack_c,local_10);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == -1)) {
    iVar5 = *(int *)(param_1 + 0x204);
    if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      iVar5 = local_30._0_4_;
    }
    else {
      iVar5 = iVar5 + 0x1c;
    }
  }
  else {
    iVar5 = iVar5 + 0x1c;
  }
  if (*(int *)(iVar5 + 4) == *(int *)(iVar5 + 8)) {
    FUN_00450900(*(int *)(iVar5 + 4),piVar3);
  }
  else {
    FUN_00460d50();
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 0x90;
  }
  pdVar6 = &local_30;
  if (local_28 <= local_30) {
    pdVar6 = (double *)&local_28;
  }
  iVar5 = *(int *)(param_1 + 0x208);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == -1)) {
    iVar5 = *(int *)(param_1 + 0x204);
    if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      iVar5 = local_30._0_4_;
    }
    else {
      iVar5 = iVar5 + 0x1c;
    }
  }
  else {
    iVar5 = iVar5 + 0x1c;
  }
  iVar5 = *(int *)(iVar5 + 4);
  uVar2 = *(undefined4 *)((int)pdVar6 + 4);
  pdVar7 = &local_30;
  *(undefined4 *)(iVar5 + -0x58) = *(undefined4 *)pdVar6;
  *(undefined4 *)(iVar5 + -0x54) = uVar2;
  if (local_28 <= local_30) {
    pdVar7 = (double *)&local_28;
  }
  iVar5 = *(int *)(param_1 + 0x208);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == -1)) {
    iVar5 = *(int *)(param_1 + 0x204);
    if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      iVar5 = local_30._0_4_;
    }
    else {
      iVar5 = iVar5 + 0x1c;
    }
  }
  else {
    iVar5 = iVar5 + 0x1c;
  }
  *(double *)(*(int *)(iVar5 + 4) + -0x50) =
       (*(double *)(piVar3 + 0x10) * *pdVar7) / *(double *)(piVar3 + 0xe);
  FUN_00442c30(param_1);
  return;
}


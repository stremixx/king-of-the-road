
void FUN_0041f1c0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  float10 fVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063cbd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  local_4 = 0;
  iVar5 = FUN_00456670();
  if (iVar5 != 0) {
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1ac5,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  iVar5 = FUN_00456c60();
  if (iVar5 != 0) {
    FUN_0061c369(&DAT_0077d540);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1ac6,s_Invalid_id_0066bbf4,
                 s_PresentId_0066c64c,&DAT_0077d540);
  }
  FUN_00417560();
  if (((byte)*(undefined4 *)(*(int *)(param_2 + 8) + 8) & 0xf0) != 0x10) {
    FUN_00427510();
  }
  uVar2 = *(uint *)(*(int *)(param_2 + 8) + 8);
  if ((uVar2 & 0x80) != 0) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1ad6,
                 s_pickPresent_called_for_a_parked_c_0066c770,&DAT_0068c120);
    FUN_00401870(s_COMPL__0066b7ec);
    FUN_004018b0();
    ExceptionList = local_c;
    return;
  }
  if (((uVar2 & 0x20) != 0) && (*(int *)(*(int *)(param_2 + 8) + 0x14) != 0)) {
    if (*(int *)(param_1 + 0x208) != 0) {
      FUN_0041f4c0();
      FUN_00631d5c();
    }
    puVar3 = *(undefined4 **)(*(int *)(param_2 + 8) + 0x14);
    *(undefined4 **)(param_1 + 0x208) = puVar3;
    *puVar3 = **(undefined4 **)(param_2 + 8);
    *(undefined4 *)(*(int *)(param_2 + 8) + 0x14) = 0;
    if ((*(char *)(*(int *)(param_2 + 8) + 0x68) == '\0') &&
       (iVar5 = *(int *)(*(int *)(param_1 + 0x208) + 0x1c),
       iVar5 != *(int *)(*(int *)(param_1 + 0x208) + 0x20))) {
      fVar7 = (float10)FUN_00401000();
      *(double *)(iVar5 + 0x48) = (double)(fVar7 + (float10)*(double *)(iVar5 + 0x58));
    }
    cVar4 = FUN_00417560();
    if (cVar4 != '\0') {
      FUN_004722c0();
    }
  }
  iVar5 = *(int *)(*(int *)(param_2 + 8) + 0x6c);
  if (iVar5 != -1) {
    piVar1 = (int *)(*(int *)(DAT_0068c018 + iVar5 * 4) + 0x28);
    *piVar1 = *piVar1 + -1;
  }
  FUN_0041f000();
  FUN_00425880();
  FUN_0041f080();
  FUN_0056eda0();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s__pickPresent_PlayerId_player__Pr_0066c794;
  cVar4 = s__pickPresent_PlayerId_player__Pr_0066c794[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar4 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar4;
      cVar4 = *pcVar6;
    }
  }
  ExceptionList = local_c;
  return;
}



void FUN_0041ee50(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063cbb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  iVar3 = param_1;
  local_4 = 0;
  iVar4 = FUN_00456c60();
  if (iVar4 != 0) {
    FUN_0061c369(&DAT_0077d540);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1a8a,s_Invalid_id_0066bbf4,
                 s_PresentId_0066c64c,&DAT_0077d540);
  }
  iVar4 = *(int *)(*(int *)(iVar3 + 8) + 0x18);
  if (iVar4 != -1) {
    puVar1 = (uint *)(*(int *)(DAT_0068be60 + iVar4 * 4) + 0xc);
    *puVar1 = *puVar1 & 0xffffffef;
  }
  uVar5 = *(uint *)(*(int *)(iVar3 + 8) + 8) & 0xf0;
  if (uVar5 == 0x10) {
    DAT_006898c8 = DAT_006898c8 + -1;
  }
  else if (uVar5 == 0x20) {
    DAT_0068bf7c = DAT_0068bf7c + -1;
  }
  else if (uVar5 == 0x40) {
    DAT_0068bf44 = DAT_0068bf44 + -1;
  }
  else if (uVar5 == 0x60) {
    DAT_0068c044 = DAT_0068c044 + -1;
  }
  else if (uVar5 == 0x80) {
    DAT_0068be94 = DAT_0068be94 + -1;
  }
  FUN_00602180(&param_1);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_destroyPresentSilently_PresentId_0066c73c;
  cVar2 = s_destroyPresentSilently_PresentId_0066c73c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar6;
    }
  }
  ExceptionList = local_c;
  return;
}


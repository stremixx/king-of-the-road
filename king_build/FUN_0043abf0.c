
int FUN_0043abf0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int in_stack_00000024;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar5 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063da88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_findPosition_vector<Hop>___hops__0066d794);
  local_4 = 0;
  piVar4 = param_1;
  if (param_2 != -1) {
    iVar2 = param_1[1];
    iVar3 = *param_1;
    piVar4 = *(int **)(DAT_0068be98 + param_2 * 4);
    if (((in_stack_00000024 <= (iVar2 - iVar3) / 0xc) || (in_stack_00000024 < 0)) ||
       (iVar6 = FUN_00457380(iVar3 + in_stack_00000024 * 0xc,iVar2,piVar4), iVar6 == iVar2)) {
      iVar6 = FUN_00457380(iVar3,iVar2,piVar4);
    }
    if (iVar6 != param_1[1]) {
      iVar2 = *param_1;
      FUN_00401870(s_COMPL__0066b7ec,8);
      FUN_004018b0(s_findPosition_vector<Hop>___hops__0066d794);
      ExceptionList = local_c;
      return (iVar6 - iVar2) / 0xc;
    }
  }
  param_1 = piVar4;
  if (param_3 != -1) {
    iVar2 = piVar5[1];
    iVar3 = *piVar5;
    if (((iVar2 - iVar3) / 0xc < in_stack_00000024) && (-1 < in_stack_00000024)) {
      iVar6 = FUN_004607d0(iVar3 + in_stack_00000024 * 0xc,iVar2,param_3,param_1);
      if (iVar6 == iVar2) {
        iVar6 = FUN_004607d0(iVar3,iVar2,param_3);
      }
    }
    else {
      iVar6 = FUN_004607d0(iVar3,iVar2,param_3,param_1);
    }
    if (iVar6 != piVar5[1]) {
      iVar2 = *piVar5;
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar7 = s_findPosition_vector<Hop>___hops__0066d794;
      cVar1 = s_findPosition_vector<Hop>___hops__0066d794[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          cVar1 = *pcVar7;
        }
      }
      ExceptionList = local_c;
      return (iVar6 - iVar2) / 0xc;
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_findPosition_vector<Hop>___hops__0066d794;
  cVar1 = s_findPosition_vector<Hop>___hops__0066d794[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar7;
    }
  }
  ExceptionList = local_c;
  return -1;
}


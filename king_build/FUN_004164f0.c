
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004164f0(void)

{
  char cVar1;
  double *pdVar2;
  double *pdVar3;
  char *pcVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_1c;
  undefined *local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063c808;
  local_14 = ExceptionList;
  local_1c = s_calculateWeigthsPerSubstate___0066c178;
  local_18 = &DAT_0071d768;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_calculateWeigthsPerSubstate___0066c178);
  local_c = 0;
  FUN_004365f0(&local_30,s_check_point1_0066c168);
  FUN_004365f0(&local_2c,s_check_point2_0066c158);
  FUN_004365f0(&local_34,s_check_point3_0066c148);
  if (DAT_0066b6e4 == 1) {
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_30,local_2c,&local_28);
    _DAT_0068bed0 = local_28;
    _DAT_0068bed4 = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_2c,local_34,&local_28);
    _DAT_0068bed8 = local_28;
    _DAT_0068bedc = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_34,local_30,&local_28);
    _DAT_0068bee0 = local_28;
    _DAT_0068bee4 = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_30,local_2c,&local_28);
    _DAT_0068bee8 = local_28;
    _DAT_0068beec = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_2c,local_34,&local_28);
    _DAT_0068bef0 = local_28;
    _DAT_0068bef4 = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_34,local_30,&local_28);
    _DAT_0068bef8 = local_28;
    _DAT_0068befc = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_30,local_2c,&local_28);
    _DAT_0068bf00 = local_28;
    _DAT_0068bf04 = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_2c,local_34,&local_28);
    _DAT_0068bf08 = local_28;
    _DAT_0068bf0c = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_34,local_30,&local_28);
    _DAT_0068bf10 = local_28;
    _DAT_0068bf14 = local_24;
  }
  else if (DAT_0066b6e4 == 2) {
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_30,local_34,&local_28);
    _DAT_0068bed0 = local_28;
    _DAT_0068bed4 = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_34,local_2c,&local_28);
    _DAT_0068bed8 = local_28;
    _DAT_0068bedc = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_2c,local_30,&local_28);
    _DAT_0068bee0 = local_28;
    _DAT_0068bee4 = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_30,local_34,&local_28);
    _DAT_0068bee8 = local_28;
    _DAT_0068beec = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_34,local_2c,&local_28);
    _DAT_0068bef0 = local_28;
    _DAT_0068bef4 = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_2c,local_30,&local_28);
    _DAT_0068bef8 = local_28;
    _DAT_0068befc = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_30,local_34,&local_28);
    _DAT_0068bf00 = local_28;
    _DAT_0068bf04 = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_34,local_2c,&local_28);
    _DAT_0068bf08 = local_28;
    _DAT_0068bf0c = local_24;
    local_28 = 0;
    local_24 = 0;
    FUN_00485780(0,local_2c,local_30,&local_28);
    _DAT_0068bf10 = local_28;
    _DAT_0068bf14 = local_24;
  }
  DAT_0068bf18._0_4_ = 0;
  DAT_0068bf18._4_4_ = 0;
  DAT_0068bf20._0_4_ = 0;
  DAT_0068bf20._4_4_ = 0;
  DAT_0068bf28._0_4_ = 0;
  DAT_0068bf28._4_4_ = 0;
  pdVar2 = (double *)&DAT_0068bf20;
  do {
    pdVar3 = pdVar2 + -1;
    *pdVar2 = pdVar2[1] + *pdVar2;
    pdVar2 = pdVar3;
  } while (0x68becf < (int)pdVar3);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_calculateWeigthsPerSubstate___0066c178;
  cVar1 = s_calculateWeigthsPerSubstate___0066c178[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  ExceptionList = local_14;
  return;
}


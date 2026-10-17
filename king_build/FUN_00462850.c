
int FUN_00462850(int param_1)

{
  char cVar1;
  int iVar2;
  LONG LVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined **local_1e8 [3];
  char local_1dc [255];
  undefined1 local_dd;
  int local_dc [46];
  int local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0063f508;
  local_10 = ExceptionList;
  piVar7 = local_dc;
  for (iVar4 = 0x2e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_8 = 0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    ExceptionList = &local_10;
    local_14 = &stack0xfffffe0c;
    FUN_004666b0(*(undefined4 *)(param_1 + 0x14),local_dc);
    FUN_004666b0(*(undefined4 *)(param_1 + 0x18),local_dc);
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xfffffe0c;
    FUN_004693e0(param_1,local_dc);
  }
  iVar4 = 0;
  for (iVar6 = 0; iVar6 < 0x2e; iVar6 = iVar6 + 1) {
    iVar2 = iVar4;
    if (local_dc[iVar6] != 0) {
      local_8 = CONCAT31(local_8._1_3_,1);
      local_24 = iVar4;
      iVar2 = FUN_00462f30(local_dc[iVar6],iVar4);
      LVar3 = InterlockedDecrement((LONG *)(local_dc[iVar6] + 4));
      if (LVar3 == 0) {
        FUN_0044f150();
      }
      local_8 = local_8 & 0xffffff00;
      local_dc[iVar6] = 0;
      if ((iVar4 != 0) && (LVar3 = InterlockedDecrement((LONG *)(iVar4 + 4)), LVar3 == 0)) {
        FUN_0044f150();
      }
    }
    iVar4 = iVar2;
  }
  uVar5 = 0xffffffff;
  if (*(byte *)(iVar4 + 0xd) < 0x2e) {
    ExceptionList = local_10;
    return iVar4;
  }
  local_20 = (char *)0x0;
  local_1c = (char *)0x0;
  local_18 = (char *)0x0;
  local_8 = 3;
  pcVar8 = s_rope_too_long_0066e534;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  if (uVar5 == 0xffffffff) {
    FUN_00462d20();
  }
  else if (uVar5 == 0) {
    local_20 = (char *)0x0;
    local_1c = (char *)0x0;
    local_18 = (char *)0x0;
  }
  else {
    local_20 = (char *)FUN_0044b6e0(uVar5);
    local_18 = local_20 + uVar5;
    local_1c = local_20;
  }
  local_1c = (char *)FUN_00407250(s_rope_too_long_0066e534,
                                  s___AVlength_error___0066e520 + uVar5 + 0x13,local_20);
  FUN_00462cc0();
  local_8 = 4;
  FUN_0061d750();
  local_1e8[0] = &PTR_FUN_0064a964;
  _strncpy(local_1dc,local_20,0x100);
  local_dd = 0;
  local_1e8[0] = &PTR_FUN_0064a95c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_1e8,&DAT_0065b538);
}


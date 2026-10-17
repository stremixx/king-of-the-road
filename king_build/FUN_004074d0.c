
void FUN_004074d0(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iStack_54;
  uint uStack_4c;
  int iStack_48;
  uint uStack_40;
  int *local_3c [2];
  uint local_34;
  int *apiStack_30 [2];
  uint uStack_28;
  int *apiStack_24 [2];
  uint uStack_1c;
  int *apiStack_18 [2];
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063b348;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_00407ec0();
  local_4._0_1_ = 1;
  cVar2 = FUN_004b6670(uVar3);
  local_4._0_1_ = 0;
  if (((((local_34 & 0x10000) == 0) && (local_3c[0] != (int *)0x0)) &&
      (local_3c[0][1] = local_3c[0][1] + -1, local_3c[0][1] == 0)) && (local_3c[0] != (int *)0x0)) {
    (**(code **)(*local_3c[0] + 0xc))();
  }
  if (cVar2 == '\0') goto LAB_004078e1;
  if (((param_4 & 0x10000) == 0) && (param_2 != 0)) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  piVar4 = (int *)FUN_004af560(apiStack_30,1);
  FUN_004042a0();
  local_4._0_1_ = 3;
  if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
    local_3c[0] = (int *)0x0;
    local_34 = 0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)*piVar4)();
    if (iVar5 == 6) {
      local_3c[0] = (int *)*piVar4;
      local_34 = piVar4[2];
      local_3c[0][1] = local_3c[0][1] + 1;
    }
    else {
      (**(code **)(*(int *)*piVar4 + 4))();
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  if ((((uStack_28 & 0x10000) == 0) && (apiStack_30[0] != (int *)0x0)) &&
     ((apiStack_30[0][1] = apiStack_30[0][1] + -1, apiStack_30[0][1] == 0 &&
      (apiStack_30[0] != (int *)0x0)))) {
    (**(code **)(*apiStack_30[0] + 0xc))();
  }
  if (local_3c[0] == (int *)0x0) {
    FUN_004a5470();
  }
  if ((local_34 & 0x10000) != 0) {
    FUN_004a5470();
  }
  puVar1 = (undefined4 *)(DAT_0068be88 + 4);
  uVar3 = FUN_004b0f30();
  *puVar1 = uVar3;
  if (((param_4 & 0x10000) == 0) && (param_2 != 0)) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  piVar4 = (int *)FUN_004af560(apiStack_24,2);
  FUN_004042a0();
  local_4._0_1_ = 7;
  if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
    iStack_48 = 0;
    uStack_40 = 0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)*piVar4)();
    if (iVar5 == 3) {
      iStack_48 = *piVar4;
      uStack_40 = piVar4[2];
      *(int *)(iStack_48 + 4) = *(int *)(iStack_48 + 4) + 1;
    }
    else {
      (**(code **)(*(int *)*piVar4 + 4))();
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,9);
  if (((((uStack_1c & 0x10000) == 0) && (apiStack_24[0] != (int *)0x0)) &&
      (apiStack_24[0][1] = apiStack_24[0][1] + -1, apiStack_24[0][1] == 0)) &&
     (apiStack_24[0] != (int *)0x0)) {
    (**(code **)(*apiStack_24[0] + 0xc))();
  }
  if (uStack_40 == 0) {
    if (iStack_48 != 0) goto LAB_0040776b;
  }
  else {
    if (iStack_48 == 0) {
      FUN_004a5470();
    }
LAB_0040776b:
    if ((uStack_40 & 0x10000) != 0) {
      FUN_004a5470();
    }
    _strncpy(s_RenaultL_0066b60c,*(char **)(iStack_48 + 0xc),0x80);
  }
  if (((param_4 & 0x10000) == 0) && (param_2 != 0)) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  piVar4 = (int *)FUN_004af560(apiStack_18,3);
  FUN_004042a0();
  local_4._0_1_ = 0xb;
  if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
    iStack_54 = 0;
    uStack_4c = 0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)*piVar4)();
    if (iVar5 == 6) {
      iStack_54 = *piVar4;
      uStack_4c = piVar4[2];
      *(int *)(iStack_54 + 4) = *(int *)(iStack_54 + 4) + 1;
    }
    else {
      (**(code **)(*(int *)*piVar4 + 4))();
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,0xd);
  if ((((uStack_10 & 0x10000) == 0) && (apiStack_18[0] != (int *)0x0)) &&
     ((apiStack_18[0][1] = apiStack_18[0][1] + -1, apiStack_18[0][1] == 0 &&
      (apiStack_18[0] != (int *)0x0)))) {
    (**(code **)(*apiStack_18[0] + 0xc))();
  }
  if (uStack_4c == 0) {
    if (iStack_54 != 0) goto LAB_00407898;
  }
  else {
    if (iStack_54 == 0) {
      FUN_004a5470();
    }
LAB_00407898:
    if ((uStack_4c & 0x10000) != 0) {
      FUN_004a5470();
    }
    DAT_0068c0a8 = FUN_004b0f30();
  }
  local_4._0_1_ = 9;
  FUN_00492340();
  local_4._0_1_ = 5;
  FUN_00492340();
  local_4._0_1_ = 0;
  FUN_00492340();
LAB_004078e1:
  uVar3 = FUN_00407ec0();
  local_4._0_1_ = 0xe;
  cVar2 = FUN_004b6670(uVar3);
  local_4._0_1_ = 0;
  if (((((uStack_10 & 0x10000) == 0) && (apiStack_18[0] != (int *)0x0)) &&
      (apiStack_18[0][1] = apiStack_18[0][1] + -1, apiStack_18[0][1] == 0)) &&
     (apiStack_18[0] != (int *)0x0)) {
    (**(code **)(*apiStack_18[0] + 0xc))();
  }
  if (cVar2 != '\0') {
    FUN_00407f50();
    local_4._0_1_ = 0xf;
    piVar4 = (int *)FUN_00407e60(apiStack_18);
    FUN_004042a0();
    local_4._0_1_ = 0x11;
    if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
      local_3c[0] = (int *)0x0;
      local_34 = 0;
    }
    else {
      iVar5 = (*(code *)**(undefined4 **)*piVar4)();
      if (iVar5 == 6) {
        local_3c[0] = (int *)*piVar4;
        local_34 = piVar4[2];
        local_3c[0][1] = local_3c[0][1] + 1;
      }
      else {
        (**(code **)(*(int *)*piVar4 + 4))();
        FUN_004a5670(2);
      }
    }
    local_4._0_1_ = 0x14;
    if ((((uStack_10 & 0x10000) == 0) && (apiStack_18[0] != (int *)0x0)) &&
       ((apiStack_18[0][1] = apiStack_18[0][1] + -1, apiStack_18[0][1] == 0 &&
        (apiStack_18[0] != (int *)0x0)))) {
      (**(code **)(*apiStack_18[0] + 0xc))();
    }
    local_4 = CONCAT31(local_4._1_3_,0x13);
    if ((((uStack_1c & 0x10000) == 0) && (apiStack_24[0] != (int *)0x0)) &&
       ((apiStack_24[0][1] = apiStack_24[0][1] + -1, apiStack_24[0][1] == 0 &&
        (apiStack_24[0] != (int *)0x0)))) {
      (**(code **)(*apiStack_24[0] + 0xc))();
    }
    if (local_3c[0] == (int *)0x0) {
      FUN_004a5470();
    }
    if ((local_34 & 0x10000) != 0) {
      FUN_004a5470();
    }
    puVar1 = (undefined4 *)(DAT_0068be88 + 8);
    uVar3 = FUN_004b0f30();
    *puVar1 = uVar3;
    if (((param_4 & 0x10000) == 0) && (param_2 != 0)) {
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    }
    FUN_004af560(apiStack_30,2);
    local_4._0_1_ = 0x15;
    FUN_0044cae0();
    local_4._0_1_ = 0x13;
    FUN_00492340();
    local_4._0_1_ = 0;
    FUN_00492340();
  }
  uVar3 = FUN_00407ec0();
  local_4._0_1_ = 0x16;
  cVar2 = FUN_004b6670(uVar3);
  local_4._0_1_ = 0;
  FUN_00492340();
  if (cVar2 != '\0') {
    FUN_00407f50();
    local_4._0_1_ = 0x17;
    FUN_00407e60(apiStack_24);
    local_4._0_1_ = 0x18;
    FUN_00455640();
    local_4._0_1_ = 0x1b;
    FUN_00492340();
    local_4._0_1_ = 0x1a;
    FUN_00492340();
    puVar1 = (undefined4 *)(DAT_0068be88 + 0x14);
    FUN_004b8250();
    uVar3 = FUN_004b0f30();
    *puVar1 = uVar3;
    FUN_00455dc0(&param_2);
    FUN_004af560(local_3c,2);
    local_4._0_1_ = 0x1c;
    FUN_0044cae0();
    local_4._0_1_ = 0x1a;
    FUN_00492340();
    local_4._0_1_ = 0;
    FUN_00492340();
  }
  uVar3 = FUN_00407ec0();
  local_4._0_1_ = 0x1d;
  cVar2 = FUN_004b6670(uVar3);
  local_4._0_1_ = 0;
  FUN_00492340();
  if (cVar2 != '\0') {
    FUN_00407f50();
    local_4._0_1_ = 0x1e;
    FUN_00407e60(apiStack_24);
    local_4._0_1_ = 0x1f;
    FUN_00455640();
    local_4._0_1_ = 0x22;
    FUN_00492340();
    local_4._0_1_ = 0x21;
    FUN_00492340();
    puVar1 = (undefined4 *)(DAT_0068be88 + 0x18);
    FUN_004b8250();
    uVar3 = FUN_004b0f30();
    *puVar1 = uVar3;
    FUN_00455dc0(&param_2);
    FUN_004af560(local_3c,2);
    local_4._0_1_ = 0x23;
    FUN_0044cae0();
    local_4._0_1_ = 0x21;
    FUN_00492340();
    local_4._0_1_ = 0;
    FUN_00492340();
  }
  uVar3 = FUN_00407ec0();
  local_4._0_1_ = 0x24;
  cVar2 = FUN_004b6670(uVar3);
  local_4._0_1_ = 0;
  FUN_00492340();
  if (cVar2 != '\0') {
    FUN_00407f50();
    local_4._0_1_ = 0x25;
    FUN_00407e60(apiStack_24);
    local_4._0_1_ = 0x26;
    FUN_00455640();
    local_4._0_1_ = 0x29;
    FUN_00492340();
    local_4._0_1_ = 0x28;
    FUN_00492340();
    puVar1 = (undefined4 *)(DAT_0068be88 + 0x20);
    FUN_004b8250();
    FUN_004b0f20();
    uVar3 = __ftol();
    *puVar1 = uVar3;
    local_4._0_1_ = 0;
    FUN_00492340();
  }
  uVar3 = FUN_00407ec0();
  local_4._0_1_ = 0x2a;
  cVar2 = FUN_004b6670(uVar3);
  local_4._0_1_ = 0;
  FUN_00492340();
  if (cVar2 != '\0') {
    FUN_00407f50();
    local_4._0_1_ = 0x2b;
    FUN_00407e60(apiStack_24);
    local_4._0_1_ = 0x2c;
    FUN_00455640();
    local_4._0_1_ = 0x2f;
    FUN_00492340();
    local_4._0_1_ = 0x2e;
    FUN_00492340();
    puVar1 = (undefined4 *)(DAT_0068be88 + 0x24);
    FUN_004b8250();
    FUN_004b0f20();
    uVar3 = __ftol();
    *puVar1 = uVar3;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
  }
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}


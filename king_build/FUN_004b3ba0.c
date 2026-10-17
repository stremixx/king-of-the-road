
undefined4 FUN_004b3ba0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_70 [12];
  int *local_64 [2];
  uint local_5c;
  int *local_58 [2];
  uint local_50;
  int *local_4c [2];
  uint local_44;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643e9f;
  pvStack_c = ExceptionList;
  iVar3 = 1;
  ExceptionList = &pvStack_c;
  FUN_004b2bf0(1);
  FUN_004b2770();
  *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
  FUN_004b2bf0(1);
  FUN_004b2770();
  *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
  FUN_004b2bf0(1);
  FUN_004042a0();
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  puVar1 = (undefined4 *)FUN_004b27c0(local_1c,0);
  if (*(int *)*puVar1 == 0x6e) {
    FUN_004b2bf0(8);
    do {
      puVar1 = (undefined4 *)FUN_004b27c0(local_1c,iVar3);
      if (*(int *)*puVar1 != (int)s_newline_00670480[iVar3]) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    if (iVar3 != 7) goto LAB_004b3e73;
    do {
      FUN_004b36a0();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = FUN_0049c310(local_4c,0,10);
    local_4._0_1_ = 4;
    FUN_004a1ac0(uVar2);
    local_4._0_1_ = 5;
    FUN_0049c660(local_28);
    local_4._0_1_ = 4;
    FUN_00492340();
    local_4._0_1_ = 1;
    if (((local_44 & 0x10000) != 0) || (local_4c[0] == (int *)0x0)) goto LAB_004b3e73;
    local_4c[0][1] = local_4c[0][1] + -1;
    iVar3 = local_4c[0][1];
  }
  else {
    if (*(int *)*puVar1 != 0x73) {
      puVar1 = (undefined4 *)FUN_004b27c0(local_1c,0);
      uVar2 = FUN_0049c310(local_64,0,*(undefined4 *)*puVar1);
      local_4._0_1_ = 6;
      FUN_004a1ac0(uVar2);
      local_4._0_1_ = 7;
      FUN_0049c660(local_40);
      local_4._0_1_ = 6;
      FUN_00492340();
      local_4._0_1_ = 1;
      if (((((local_5c & 0x10000) == 0) && (local_64[0] != (int *)0x0)) &&
          (local_64[0][1] = local_64[0][1] + -1, local_64[0][1] == 0)) &&
         (local_64[0] != (int *)0x0)) {
        (**(code **)(*local_64[0] + 0xc))(1);
      }
      FUN_004b2bf0(1);
      FUN_004b2770();
      *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
      goto LAB_004b3e73;
    }
    FUN_004b2bf0(6);
    do {
      puVar1 = (undefined4 *)FUN_004b27c0(local_1c,iVar3);
      if (*(int *)*puVar1 != (int)s_space_00670488[iVar3]) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    if (iVar3 != 5) goto LAB_004b3e73;
    do {
      FUN_004b36a0();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = FUN_0049c310(local_58,0,0x20);
    local_4._0_1_ = 2;
    FUN_004a1ac0(uVar2);
    local_4._0_1_ = 3;
    FUN_0049c660(local_34);
    local_4._0_1_ = 2;
    FUN_00492340();
    local_4._0_1_ = 1;
    if (((local_50 & 0x10000) != 0) || (local_58[0] == (int *)0x0)) goto LAB_004b3e73;
    local_58[0][1] = local_58[0][1] + -1;
    iVar3 = local_58[0][1];
    local_4c[0] = local_58[0];
  }
  local_4._0_1_ = 1;
  if ((iVar3 == 0) && (local_4._0_1_ = 1, local_4c[0] != (int *)0x0)) {
    local_4._0_1_ = 1;
    (**(code **)(*local_4c[0] + 0xc))(1);
  }
LAB_004b3e73:
  FUN_00455dc0(local_70);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return param_1;
}


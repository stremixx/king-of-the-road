
undefined4 * FUN_00491db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00640e07;
  local_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_00491b70(param_2,&local_30,&local_3c,param_3,&DAT_0066f640);
  if (iVar2 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4._0_1_ = 1;
    if (((((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) &&
        (local_3c[1] = local_3c[1] + -1, local_3c[1] == 0)) && (local_3c != (int *)0x0)) {
      (**(code **)(*local_3c + 0xc))(1);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_28 & 0x10000) != 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (local_30 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    local_30[1] = local_30[1] + -1;
    if (local_30[1] != 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (local_30 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    (**(code **)(*local_30 + 0xc))(1);
    ExceptionList = local_c;
    return param_1;
  }
  if (((local_30 == local_3c) && (local_28 == local_34)) && (local_2c == local_38)) {
    uVar4 = 0xffffffff;
LAB_00491ece:
    FUN_00492320(param_1,0,uVar4);
    if (((local_34 & 0x10000) != 0) || (local_3c == (int *)0x0)) goto LAB_00491f92;
    local_3c[1] = local_3c[1] + -1;
    iVar2 = local_3c[1];
  }
  else {
    if (((local_30 == (int *)0x0) && (local_28 == 0)) && (local_2c == 0)) {
      uVar4 = 0;
      goto LAB_00491ece;
    }
    if (((local_3c == (int *)0x0) && (local_34 == 0)) && (local_38 == 0)) {
      uVar4 = 0;
      goto LAB_00491ece;
    }
    if ((char)local_34 == (char)local_28) {
      uVar3 = local_28 & 0xff;
      if (uVar3 != 7) {
        if (uVar3 == 9) {
          FUN_0044c9a0(&local_30);
          local_4._0_1_ = 5;
          FUN_0044c9a0(&local_3c);
          local_4._0_1_ = 6;
          iVar2 = FUN_004b8250();
          uVar4 = *(undefined4 *)(iVar2 + 0xc);
          iVar2 = FUN_004b8250();
          iVar2 = FUN_0061d520(*(undefined4 *)(iVar2 + 0xc),uVar4);
          FUN_00492320(param_1,0,iVar2 == 0);
          local_4._0_1_ = 5;
          FUN_00492340();
          local_4._0_1_ = 2;
          FUN_00492340();
        }
        else if (uVar3 == 8) {
          FUN_004922a0(&local_30);
          local_4._0_1_ = 7;
          FUN_004922a0(&local_3c);
          local_4._0_1_ = 8;
          FUN_00492320(param_1,0,local_24 == local_18);
          local_4._0_1_ = 7;
          FUN_00492340();
          local_4._0_1_ = 2;
          FUN_00492340();
        }
        else if (((uVar3 == 4) || (uVar3 == 5)) || (uVar3 != 6)) {
          FUN_00492320(param_1,0,0);
        }
        else {
          FUN_00455640(&local_30);
          local_4._0_1_ = 9;
          FUN_00455640(&local_3c);
          local_4._0_1_ = 10;
          uVar1 = FUN_004b1040(local_24,local_18);
          FUN_00492320(param_1,0,uVar1);
          local_4._0_1_ = 9;
          FUN_00492340();
          local_4._0_1_ = 2;
          FUN_00492340();
        }
        goto LAB_004921ed;
      }
      FUN_00492220(&local_30);
      local_4._0_1_ = 3;
      FUN_00492220(&local_3c);
      local_4._0_1_ = 4;
      if (local_18 == 0) {
        if (local_24 != 0) goto LAB_00492016;
LAB_00492054:
        uVar4 = 1;
      }
      else {
        if (local_24 != 0) goto LAB_00492054;
LAB_00492016:
        uVar4 = 0;
      }
      FUN_00492320(param_1,0,uVar4);
      local_4._0_1_ = 3;
      FUN_00492340();
      local_4._0_1_ = 2;
      FUN_00492340();
LAB_004921ed:
      local_4._0_1_ = 1;
      FUN_00492340();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00492340();
      ExceptionList = local_c;
      return param_1;
    }
    FUN_00492320(param_1,0,0);
    if (((local_34 & 0x10000) != 0) || (local_3c == (int *)0x0)) goto LAB_00491f92;
    local_3c[1] = local_3c[1] + -1;
    iVar2 = local_3c[1];
  }
  if ((iVar2 == 0) && (local_3c != (int *)0x0)) {
    local_4._0_1_ = 1;
    (**(code **)(*local_3c + 0xc))(1);
  }
LAB_00491f92:
  local_4 = (uint)local_4._1_3_ << 8;
  if (((((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) &&
      (local_30[1] = local_30[1] + -1, local_30[1] == 0)) && (local_30 != (int *)0x0)) {
    (**(code **)(*local_30 + 0xc))(1);
  }
  ExceptionList = local_c;
  return param_1;
}


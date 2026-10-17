
undefined4 * FUN_0049ec00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_40;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  uint local_28;
  int *apiStack_24 [2];
  uint uStack_1c;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &DAT_00642517;
  local_c = ExceptionList;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_3c,param_3,s_open_output_file_0066f94c);
  if (iVar1 == 0) {
    if ((char)local_34 == '\x03') {
      FUN_004042a0();
      local_4._0_1_ = 2;
      if (local_3c == (int *)0x0) {
        local_30 = (int *)0x0;
        local_28 = 0;
      }
      else {
        iVar1 = (**(code **)*local_3c)();
        if (iVar1 == 3) {
          local_30 = local_3c;
          local_28 = local_34;
          local_3c[1] = local_3c[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_3c + 4))(s_String_0066ba58);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      param_3 = 2;
      if (local_30 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((local_28 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iStack_40 = local_30[3];
      piVar3 = (int *)FUN_00455760(auStack_18,0,&iStack_40,&param_3);
      FUN_004042a0();
      local_4._0_1_ = 5;
      if ((undefined4 *)*piVar3 == (undefined4 *)0x0) {
        apiStack_24[0] = (int *)0x0;
        uStack_1c = 0;
      }
      else {
        iVar1 = (*(code *)**(undefined4 **)*piVar3)();
        if (iVar1 == 0xb) {
          apiStack_24[0] = (int *)*piVar3;
          uStack_1c = piVar3[2];
          apiStack_24[0][1] = apiStack_24[0][1] + 1;
        }
        else {
          uVar2 = (**(code **)(*(int *)*piVar3 + 4))(&DAT_0066bb28);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_00492340();
      if (apiStack_24[0] == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((uStack_1c & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iVar1 = (**(code **)(*apiStack_24[0] + 0x28))();
      if (iVar1 != 0) {
        if (local_30 == (int *)0x0) {
          FUN_004a5470(0,1);
        }
        if ((local_28 & 0x10000) != 0) {
          FUN_004a5470(4,1);
        }
        FUN_004a5be0(param_2,8,local_30[3]);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        local_4._0_1_ = 3;
        FUN_00492340();
        local_4._0_1_ = 1;
        FUN_00492340();
        local_4 = (uint)local_4._1_3_ << 8;
        goto LAB_0049ec74;
      }
      FUN_00455dc0(apiStack_24);
      local_4._0_1_ = 3;
      FUN_00492340();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00492340();
    }
    else {
      FUN_004a5cd0(param_2,0xf,s_String_0066ba58,s_open_output_file_0066f94c);
      FUN_004042a0();
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00492340();
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4 = local_4 & 0xffffff00;
LAB_0049ec74:
    if (((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) {
      local_3c[1] = local_3c[1] + -1;
      if ((local_3c[1] == 0) && (local_3c != (int *)0x0)) {
        (**(code **)(*local_3c + 0xc))(1);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}


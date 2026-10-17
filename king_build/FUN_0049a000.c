
int * FUN_0049a000(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00641bf7;
  local_c = ExceptionList;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_3c,param_3,s_number_>string_0066f7c0);
  if (iVar1 == 0) {
    if ((char)local_34 == '\x06') {
      FUN_004042a0();
      local_4._0_1_ = 2;
      if (local_3c == (int *)0x0) {
        local_30 = (int *)0x0;
        local_28 = 0;
      }
      else {
        iVar1 = (**(code **)*local_3c)();
        if (iVar1 == 6) {
          local_30 = local_3c;
          local_28 = local_34;
          local_3c[1] = local_3c[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_3c + 4))(s_Number_0066ba60);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4._0_1_ = 3;
      FUN_00478a20(&param_3);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (local_30 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((local_28 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      FUN_004b0d00(local_24);
      piVar3 = (int *)FUN_004a1f30(local_18,0,local_24);
      if ((piVar3[2] & 0x10000U) == 0) {
        param_1[1] = 0;
        iVar1 = *piVar3;
        if (iVar1 == 0) {
          *param_1 = 0;
          param_1[2] = 0;
        }
        else {
          *param_1 = iVar1;
          param_1[2] = piVar3[2];
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
      }
      else {
        param_1[2] = piVar3[2];
        *param_1 = *piVar3;
        param_1[1] = piVar3[1];
      }
      FUN_00492340();
      local_4._0_1_ = 3;
      FUN_0044a450();
      local_4._0_1_ = 1;
    }
    else {
      FUN_004a5cd0(param_2,0xf,s_Number_0066ba60,s_number_>string_0066f7c0);
      uVar2 = FUN_004042a0();
      FUN_00455dc0(uVar2);
    }
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
  }
  else {
    local_30 = (int *)0x0;
    local_2c = 0;
    local_28 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) {
      local_3c[1] = local_3c[1] + -1;
      if ((local_3c[1] == 0) && (local_3c != (int *)0x0)) {
        (**(code **)(*local_3c + 0xc))(1);
        ExceptionList = pvStack_10;
        return param_1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}


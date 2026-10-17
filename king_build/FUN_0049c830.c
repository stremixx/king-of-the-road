
int * FUN_0049c830(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  undefined4 local_20;
  uint local_1c;
  undefined1 auStack_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006420df;
  local_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_30,param_3,s_string_length_0066f898);
  if (iVar1 == 0) {
    if ((char)local_28 == '\x03') {
      local_24 = (int *)0x0;
      local_20 = 0;
      local_1c = 0;
      local_4._0_1_ = 2;
      if (local_30 == (int *)0x0) {
        local_24 = (int *)0x0;
        local_1c = 0;
      }
      else {
        iVar1 = (**(code **)*local_30)();
        if (iVar1 == 3) {
          local_24 = local_30;
          local_1c = local_28;
          local_30[1] = local_30[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_30 + 4))(s_String_0066ba58);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      if (local_24 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((local_1c & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      param_3 = (local_24[4] - local_24[3]) + -1;
      param_2 = 0;
      piVar3 = (int *)FUN_004a2630(auStack_18,0,&param_2,&param_3);
      if ((piVar3[2] & 0x10000U) == 0) {
        param_1[1] = 0;
        if (*piVar3 == 0) {
          *param_1 = 0;
          param_1[2] = 0;
        }
        else {
          *param_1 = *piVar3;
          param_1[2] = piVar3[2];
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
        }
      }
      else {
        param_1[2] = piVar3[2];
        *param_1 = *piVar3;
        param_1[1] = piVar3[1];
      }
      FUN_00492340();
      local_4._0_1_ = 1;
      FUN_00492340();
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
      ExceptionList = pvStack_10;
      return param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((local_28 & 0x10000) != 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (local_30 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    local_30[1] = local_30[1] + -1;
    iVar1 = local_30[1];
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((local_28 & 0x10000) != 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (local_30 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    local_30[1] = local_30[1] + -1;
    iVar1 = local_30[1];
  }
  if ((iVar1 == 0) && (local_30 != (int *)0x0)) {
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*local_30 + 0xc))(1);
  }
  ExceptionList = local_c;
  return param_1;
}


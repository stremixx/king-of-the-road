
int * FUN_0049bf20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24 [2];
  uint local_1c;
  undefined1 local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00641fb7;
  local_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_30,param_3,s_char_>integer_0066f864);
  if (iVar1 == 0) {
    if ((char)local_28 != '\b') {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
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
    FUN_004a1ac0(&local_30);
    local_4._0_1_ = 2;
    param_3 = 0;
    piVar2 = (int *)FUN_004a2460(local_18,0,&param_3,local_24);
    if ((piVar2[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      if (*piVar2 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = *piVar2;
        param_1[2] = piVar2[2];
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
      }
    }
    else {
      param_1[2] = piVar2[2];
      *param_1 = *piVar2;
      param_1[1] = piVar2[1];
    }
    FUN_00492340();
    local_4._0_1_ = 1;
    if (((((local_1c & 0x10000) == 0) && (local_24[0] != (int *)0x0)) &&
        (local_24[0][1] = local_24[0][1] + -1, local_24[0][1] == 0)) && (local_24[0] != (int *)0x0))
    {
      (**(code **)(*local_24[0] + 0xc))(1);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) &&
     ((local_30[1] = local_30[1] + -1, local_30[1] == 0 && (local_30 != (int *)0x0)))) {
    (**(code **)(*local_30 + 0xc))(1);
    ExceptionList = pvStack_10;
    return param_1;
  }
  ExceptionList = local_c;
  return param_1;
}


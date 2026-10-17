
undefined4 *
FUN_004a0970(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  int *local_24 [2];
  uint uStack_1c;
  undefined1 local_18 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006427ff;
  pvStack_c = ExceptionList;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  while( true ) {
    if ((param_5 == 0) && (param_3 == (int *)0x0)) {
      FUN_00455dc0(&local_3c);
      local_4._0_1_ = 1;
      FUN_00492340();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00492340();
      ExceptionList = pvStack_c;
      return param_1;
    }
    if ((char)param_5 != '\x02') break;
    FUN_004a2a10(local_30,0,param_2);
    uVar2 = FUN_00407e60(local_18,&param_3);
    local_4._0_1_ = 7;
    FUN_004b8250(uVar2);
    FUN_0040c060(uVar2);
    local_4._0_1_ = 6;
    FUN_00492340();
    puVar3 = &local_3c;
    FUN_004b8250(puVar3);
    FUN_0040c060(puVar3);
    FUN_0049c660(local_30);
    local_4._0_1_ = 2;
    FUN_00492340();
    puVar3 = (undefined4 *)FUN_00409000(local_24,&param_3);
    local_4._0_1_ = 3;
    if (((param_3 != (int *)0x0) && ((param_5 & 0x10000) == 0)) &&
       ((param_3[1] = param_3[1] + -1, param_3[1] == 0 &&
        ((cVar1 = FUN_00408fd0(&param_3,puVar3), cVar1 == '\0' && (param_3 != (int *)0x0)))))) {
      (**(code **)(*param_3 + 0xc))(1);
    }
    param_5 = puVar3[2];
    if ((param_5 & 0x10000) == 0) {
      param_4 = 0;
      param_3 = (int *)*puVar3;
      if (param_3 == (int *)0x0) {
        param_3 = (int *)0x0;
        param_5 = 0;
      }
      else {
        param_5 = puVar3[2];
        param_3[1] = param_3[1] + 1;
      }
    }
    else {
      param_3 = (int *)*puVar3;
      param_4 = puVar3[1];
    }
    local_4._0_1_ = 2;
    if (((((uStack_1c & 0x10000) == 0) && (local_24[0] != (int *)0x0)) &&
        (local_24[0][1] = local_24[0][1] + -1, local_24[0][1] == 0)) && (local_24[0] != (int *)0x0))
    {
      (**(code **)(*local_24[0] + 0xc))(1);
    }
  }
  FUN_004a5be0(param_2,10,s_string_append_0066f9ec);
  FUN_004042a0();
  *param_1 = 0;
  param_1[2] = 0;
  local_4._0_1_ = 1;
  FUN_00492340();
  local_4 = (uint)local_4._1_3_ << 8;
  if (((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
      (param_3[1] = param_3[1] + -1, param_3[1] == 0)) && (param_3 != (int *)0x0)) {
    (**(code **)(*param_3 + 0xc))(1);
    ExceptionList = pvStack_10;
    return param_1;
  }
  ExceptionList = pvStack_c;
  return param_1;
}


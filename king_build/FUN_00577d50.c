
int FUN_00577d50(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0x14;
  local_c = 0;
  local_10 = 0x10;
  local_8 = 1;
  local_4 = param_2;
  switch(param_1) {
  case 0:
    local_c = 0;
    break;
  case 1:
    local_c = 4;
    break;
  case 2:
    local_c = 8;
    break;
  case 3:
    local_c = 0xc;
    break;
  case 4:
    local_c = 0x10;
    break;
  case 5:
    local_c = 0x14;
    break;
  case 6:
    local_c = 0x18;
    break;
  case 7:
    local_c = 0x1c;
  }
  if (param_3 != 0) {
    FUN_0061d86c(param_3,s_SetProperty_DIPROP_DEADZONE__Axe_0067bcc8,param_1);
  }
  iVar1 = (**(code **)(*DAT_006f3ae8 + 0x18))(DAT_006f3ae8,5,&local_14);
  if (param_3 != 0) {
    if (iVar1 < 0) {
      FUN_0061d86c(param_3,s_error__0X_0067b49c,iVar1);
      return iVar1;
    }
    FUN_0061d86c(param_3,&DAT_006761c8);
  }
  return iVar1;
}


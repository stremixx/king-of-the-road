
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4a41(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (param_1 != 0) {
    FUN_004e4808(param_2,param_3,param_4,&local_10,&local_8);
    if (local_10 <= local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = local_10;
    }
    local_c = local_14;
    if ((float)_DAT_0064a590 < local_14) {
      FUN_005fd160(local_10,local_8);
    }
  }
  return;
}



int FUN_004e3fe0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char local_d4 [200];
  size_t local_c;
  int local_8;
  
  local_8 = FUN_005ee8e0(param_1,param_2);
  if (local_8 == 0) {
    local_c = 0;
    if (param_3 != 0) {
      FUN_0061c369(local_d4,&DAT_006729e0,param_3);
      local_c = _strlen(local_d4);
    }
    if (param_1 == 0) {
      FUN_0061c369(local_d4 + local_c,s_There_is_NO_any_node_with_name___006729e4,param_2);
    }
    else {
      uVar1 = FUN_004cf600();
      FUN_0061c369(local_d4 + local_c,s_There_is_NO_any_node_with_name___00672a14,param_2,uVar1);
    }
    FUN_004e1e9c(local_d4);
  }
  return local_8;
}


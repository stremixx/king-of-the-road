
int FUN_004e5507(int param_1)

{
  int iVar1;
  undefined1 local_f8 [200];
  size_t local_30;
  int local_2c;
  char *local_28;
  undefined1 local_24 [32];
  
  local_28 = (char *)FUN_004cf600();
  if ((DAT_00696450 != param_1) ||
     (iVar1 = _strcmp(&DAT_00696458,local_28), local_2c = DAT_00696454, iVar1 != 0)) {
    local_30 = _strlen(local_28);
    if ((int)local_30 < 4) {
      FUN_0061c369(local_f8,s_get_road_collision____EITHER_nod_00672c40,local_28);
      FUN_004e1e9c(local_f8);
    }
    FUN_0061e950(local_24,local_28 + 4);
    FUN_0061c369(local_f8,s_road_s_00672c90,local_24);
    local_2c = FUN_005ee8e0(param_1,local_f8);
    if (local_2c != 0) {
      DAT_00696450 = param_1;
      DAT_00696454 = local_2c;
      FUN_0061e950(&DAT_00696458,local_28);
    }
  }
  return local_2c;
}


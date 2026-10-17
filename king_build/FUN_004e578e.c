
undefined4 FUN_004e578e(undefined4 param_1)

{
  char *_Str;
  size_t sVar1;
  undefined4 uVar2;
  undefined1 local_5c [36];
  undefined1 local_38 [52];
  
  _Str = (char *)FUN_004cf600();
  sVar1 = _strlen(_Str);
  if ((int)sVar1 < 4) {
    FUN_0061c369(local_38,s_get_sort_collision_____strlen<2)_00672cd8,_Str);
    FUN_004e1e9c(local_38);
  }
  FUN_0061e950(local_5c,_Str + 4);
  FUN_0061c369(local_38,s_sort_s_00672d08,local_5c);
  uVar2 = FUN_005ee8e0(param_1,local_38);
  return uVar2;
}


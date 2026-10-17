
int FUN_004e565e(int param_1)

{
  char *_Str2;
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined1 local_58 [32];
  undefined1 local_38 [52];
  
  _Str2 = (char *)FUN_004cf600();
  if ((DAT_006964b0 != param_1) ||
     (iVar1 = _strcmp(&DAT_006964b8,_Str2), iVar3 = DAT_006964b4, iVar1 != 0)) {
    sVar2 = _strlen(_Str2);
    if ((int)sVar2 < 4) {
      FUN_0061c369(local_38,s_get_obj_collision_____len<4)tree_00672ca4,_Str2);
      FUN_004e1e9c(local_38);
    }
    FUN_0061e950(local_58,_Str2 + 4);
    FUN_0061c369(local_38,s_obj_s_00672cd0,local_58);
    iVar3 = FUN_005ee8e0(param_1,local_38);
    if (iVar3 != 0) {
      DAT_006964b0 = param_1;
      DAT_006964b4 = iVar3;
      FUN_0061e950(&DAT_006964b8,_Str2);
    }
  }
  return iVar3;
}



undefined4 __thiscall FUN_004e55f0(undefined4 param_1,int param_2)

{
  char *_Str2;
  int iVar1;
  
  _Str2 = (char *)FUN_004cf600(param_1);
  if ((DAT_00696480 != param_2) || (iVar1 = _strcmp(&DAT_00696488,_Str2), iVar1 != 0)) {
    FUN_0061e950(&DAT_00696488,_Str2);
    DAT_00696484 = FUN_005ee8e0(param_2,s_dynamical_00672c98);
    DAT_00696480 = param_2;
  }
  return DAT_00696484;
}


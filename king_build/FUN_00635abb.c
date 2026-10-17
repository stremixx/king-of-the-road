
undefined4 * __thiscall FUN_00635abb(undefined4 *param_1,LPCSTR param_2)

{
  int iVar1;
  
  *param_1 = PTR_DAT_00684f18;
  if (param_2 != (LPCSTR)0x0) {
    if ((short)((uint)param_2 >> 0x10) == 0) {
      FUN_00635c2d((uint)param_2 & 0xffff);
    }
    else {
      iVar1 = lstrlenA(param_2);
      if (iVar1 != 0) {
        FUN_006358fe(iVar1);
        FUN_0061f900(*param_1,param_2,iVar1);
      }
    }
  }
  return param_1;
}


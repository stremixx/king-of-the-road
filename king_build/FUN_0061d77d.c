
undefined4 * __thiscall FUN_0061d77d(undefined4 *param_1,undefined4 *param_2)

{
  size_t sVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00653758;
  sVar1 = _strlen((char *)*param_2);
  iVar2 = FUN_00631d33(sVar1 + 1);
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    FUN_0061e950(iVar2,*param_2);
  }
  param_1[2] = 1;
  return param_1;
}


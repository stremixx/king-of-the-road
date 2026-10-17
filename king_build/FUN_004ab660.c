
void FUN_004ab660(int *param_1)

{
  int iVar1;
  
  if (((param_1[2] & 0x10000U) == 0) && (iVar1 = *param_1, iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    param_1 = (int *)*param_1;
    if ((param_1[1] == 0) && (param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0xc))(1);
    }
  }
  return;
}


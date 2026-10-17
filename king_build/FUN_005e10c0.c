
void FUN_005e10c0(int *param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (param_1[4] == 0x12)) && (-1 < param_2)) {
    iVar1 = (**(code **)(*param_1 + 0x3c))();
    if (param_2 < iVar1) {
      param_1[0xe] = param_2;
    }
  }
  return;
}


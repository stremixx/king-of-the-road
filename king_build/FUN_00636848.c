
bool __thiscall FUN_00636848(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    FUN_006367c1(1);
    *(int *)(param_1 + 4) = param_2;
    piVar1 = (int *)FUN_00631c15(param_2);
    *piVar1 = param_1;
  }
  return param_2 != 0;
}


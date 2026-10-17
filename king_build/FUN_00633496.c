
bool __thiscall FUN_00633496(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_006333df(1);
    *(int *)(param_1 + 0x1c) = param_2;
    piVar2 = (int *)FUN_00631c15(param_2);
    *piVar2 = param_1;
    FUN_00632eff(uVar1);
  }
  return param_2 != 0;
}


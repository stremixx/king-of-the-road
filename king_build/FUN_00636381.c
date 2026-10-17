
bool __thiscall FUN_00636381(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    FUN_006362fa(1);
    param_1[1] = param_2;
    puVar1 = (undefined4 *)FUN_00631c15(param_2);
    *puVar1 = param_1;
    (**(code **)(*param_1 + 0xc))(param_1[1]);
  }
  return param_2 != 0;
}


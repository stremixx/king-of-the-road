
void __thiscall FUN_00548fc0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[6] = param_2;
  param_1[5] = 0;
  if (param_2 != 0) {
    param_1[5] = param_2 + 0x27b4;
    *(undefined4 *)(param_2 + 0x27c0) = 0;
  }
  iVar1 = param_1[4];
  param_1[7] = 0x3e4ccccd;
  if (iVar1 != 0) {
    FUN_00549a20();
    FUN_00631d5c(iVar1);
  }
  param_1[4] = 0;
  return;
}


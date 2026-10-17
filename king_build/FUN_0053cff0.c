
void __thiscall FUN_0053cff0(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    *param_3 = *(int *)(param_1 + 0x560) + -0x50;
    uVar1 = __ftol();
    *param_4 = uVar1;
    return;
  case 1:
  case 2:
    uVar1 = __ftol();
    *param_4 = uVar1;
    *param_3 = *(int *)(param_1 + 0x558) + -0x50;
    return;
  case 0xfffffffe:
  case 0xffffffff:
    uVar1 = __ftol();
    *param_4 = uVar1;
    *param_3 = *(int *)(param_1 + 0x558) + -0x50;
  }
  return;
}


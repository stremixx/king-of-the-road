
void __thiscall FUN_00602850(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  FUN_00602c20(iVar2,iVar2,iVar1);
  param_1[2] = param_1[2] + (iVar1 - iVar2);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0046e460(param_1[2],param_2,param_2 + param_3);
  uVar3 = (**(code **)*param_1)();
  param_1[4] = uVar3;
  uVar3 = *(undefined4 *)(param_1[1] + 4);
  param_1[6] = 8;
  param_1[4] = uVar3;
  return;
}


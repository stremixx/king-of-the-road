
void FUN_004e409c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_68 [100];
  
  if (param_1 == (int *)0x0) {
    FUN_004e3e9b(0,s_SetCaseSwitch_00672a4c);
  }
  iVar1 = FUN_004ea9e0();
  if (iVar1 != 0x12) {
    FUN_004e3e9b(param_1,s_SetCaseSwitch__n_>getType____ntC_00672a5c);
  }
  if (-1 < param_2) {
    iVar1 = (**(code **)(*param_1 + 0x3c))();
    if (param_2 < iVar1) goto LAB_004e411e;
  }
  uVar2 = (**(code **)(*param_1 + 0x3c))();
  FUN_0061c369(local_68,s_SetCaseSwitch__i___d__i<0__i>__d_00672a84,param_2,uVar2);
  FUN_004e3e9b(param_1,local_68);
LAB_004e411e:
  FUN_005e10c0(param_1,param_2);
  return;
}



undefined4 __thiscall FUN_005fc210(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_005eee30(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    (**(code **)(*param_3 + 4))(*(int *)(param_1 + 0x38));
  }
  iVar1 = param_3[0x875];
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x11c) <= iVar1)) {
    param_3[0x86e] = 0;
  }
  else {
    iVar1 = *(int *)(param_3[0x811] + 0x4c + *(int *)(param_1 + 0x114 + iVar1 * 4) * 0x7c);
    param_3[0x870] = param_3[0x872];
    param_3[0x86e] = iVar1;
    param_3[0x871] = param_3[0x873];
    param_3[0x878] = (int)(float)*(double *)(param_1 + 0x120);
    param_3[0x879] = (int)(float)*(double *)(param_1 + 0x128);
    param_3[0x87a] = (int)(float)*(double *)(param_1 + 0x130);
    param_3[0x87b] = (int)(float)*(double *)(param_1 + 0x138);
  }
  FUN_005f16f0(0,param_2,param_3);
  return 1;
}


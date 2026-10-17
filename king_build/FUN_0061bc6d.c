
undefined4 FUN_0061bc6d(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0061bb95();
  if (iVar1 == 0) {
    if (((param_2 & 3) == 0) &&
       ((((param_1[2] < 1 || (param_1[3] < 1)) || (iVar1 = GetSystemMetrics(0), iVar1 <= *param_1))
        || (iVar1 = GetSystemMetrics(1), iVar1 <= param_1[1])))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x12340042;
    }
    return uVar2;
  }
  uVar2 = (*DAT_0072ca00)(param_1,param_2);
  return uVar2;
}


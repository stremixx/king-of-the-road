
undefined4 __thiscall FUN_00630cc9(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((uint)param_1[9] < (uint)param_1[10]) {
    uVar1 = FUN_0062ffc5(param_2);
  }
  else {
    uVar1 = 1;
    iVar2 = (**(code **)(*param_1 + 0xc))(0xffffffff,1);
    if (iVar2 == -1) {
      uVar1 = 0xffffffff;
    }
    else if ((param_1[2] == 0) && (param_1[0xb] != 0)) {
      iVar2 = param_1[10];
      FUN_0061c980(iVar2 + 1,iVar2,(param_1[0xb] - iVar2) + -1);
      *(char *)param_1[10] = (char)uVar1;
    }
  }
  return uVar1;
}


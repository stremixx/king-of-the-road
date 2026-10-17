
undefined4 FUN_00635cd8(undefined4 param_1,LPCSTR param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == (LPCSTR)0x0) {
LAB_00635d2c:
    uVar2 = 0;
  }
  else {
    if (param_3 != 0) {
      do {
        param_3 = param_3 + -1;
        iVar1 = FUN_0061fc35(param_2,(int)param_4);
        if (iVar1 == 0) {
          FUN_00635a1c();
          goto LAB_00635d2c;
        }
        param_2 = (LPCSTR)(iVar1 + 1);
      } while (param_3 != 0);
    }
    iVar1 = FUN_0061fc35(param_2,(int)param_4);
    if (iVar1 == 0) {
      iVar1 = lstrlenA(param_2);
    }
    else {
      iVar1 = iVar1 - (int)param_2;
    }
    uVar2 = FUN_00635bd8(iVar1);
    FUN_0061f900(uVar2,param_2,iVar1);
    uVar2 = 1;
  }
  return uVar2;
}


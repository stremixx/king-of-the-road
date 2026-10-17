
undefined4 __thiscall FUN_005f3ef0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_005eee30(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_005b4620(param_1 + 0x38);
  if (uVar2 == (param_2 & 1)) {
    FUN_005f16f0(2,param_2,param_3);
    uVar3 = 0;
  }
  else {
    FUN_005f16f0(0,param_2,param_3);
    uVar3 = 2;
  }
  FUN_005f16f0(uVar3,param_2,param_3);
  FUN_005f16f0(1,param_2,param_3);
  return 1;
}


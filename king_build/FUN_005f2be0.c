
undefined4 __thiscall FUN_005f2be0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005eee30(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_005b4670(param_1 + 0x14);
    if ((iVar1 != 0) && (*(code **)(param_1 + 0x30) != (code *)0x0)) {
      uVar2 = (**(code **)(param_1 + 0x30))(param_2,param_3,param_1);
      return uVar2;
    }
  }
  return 0;
}


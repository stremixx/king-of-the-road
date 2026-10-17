
undefined4 FUN_005e4a30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_54 [84];
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_005e3ec0(param_2);
  }
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_005e44d0(param_1);
  if (iVar1 == 0) {
    FUN_005e4570(param_1);
    iVar1 = FUN_005e44d0(param_1);
    if (iVar1 == 0) {
      FUN_0061c369(local_54,s_Can_not_to_create_vrStateMod_for_00682320,param_1);
      FUN_005d2520(local_54,0);
    }
  }
  uVar2 = FUN_005e3e80(param_2);
  return uVar2;
}



undefined4 FUN_005e8ab0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005e6410(param_2,&DAT_0066f3e8);
  if (iVar1 == 0) {
    DAT_0072081c = 1;
    return 0;
  }
  uVar2 = FUN_005e8cc0(param_1,iVar1,0);
  FUN_0061c25a(iVar1);
  return uVar2;
}


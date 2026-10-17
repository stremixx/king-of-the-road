
undefined4 __thiscall FUN_005e3cb0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EDI;
  undefined4 uStack_14;
  undefined4 **ppuStack_10;
  undefined4 *local_4;
  
  piVar1 = param_2;
  ppuStack_10 = &local_4;
  uStack_14 = 4;
  local_4 = param_1;
  (**(code **)(*param_2 + 0xc))(param_2,&param_2);
  param_1[5] = unaff_EDI;
  if (unaff_EDI != 0) {
    uVar2 = FUN_00631d33(unaff_EDI);
    param_1[6] = uVar2;
    (**(code **)(*piVar1 + 0xc))(piVar1,uVar2,unaff_EDI,&uStack_14);
    *param_1 = 2;
    return 0;
  }
  param_1[6] = 0;
  *param_1 = 2;
  return 0;
}


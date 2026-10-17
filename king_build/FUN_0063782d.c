
int * FUN_0063782d(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_00635dd5();
  if (piVar1 != (int *)0x0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    iVar2 = (**(code **)(*piVar1 + 0x54))(0,0,0x50800000,&local_18,local_8,param_2,param_1);
    if (iVar2 != 0) {
      if (DAT_0072d034 == 0) {
        return piVar1;
      }
      uVar3 = FUN_00632db4();
      if ((uVar3 & 0x200) == 0) {
        return piVar1;
      }
      FUN_00632dce(0x200,0,0x20);
      return piVar1;
    }
  }
  return (int *)0x0;
}


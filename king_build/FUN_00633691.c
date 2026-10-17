
undefined4 FUN_00633691(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0063a4df(&LAB_006396f3);
  if (((*(int *)(iVar1 + 4) != 0) &&
      ((((param_2 == 0x135 || (param_2 == 0x136)) || (param_2 == 0x138)) ||
       ((param_2 == 0x137 || (param_2 == 0x134)))))) &&
     (iVar2 = FUN_00635243(param_3,param_4,param_2 + -0x132,*(int *)(iVar1 + 4),
                           *(undefined4 *)(iVar1 + 8)), iVar2 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  uVar3 = FUN_00633532(param_1,param_2,param_3,param_4);
  return uVar3;
}


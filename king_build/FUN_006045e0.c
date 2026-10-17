
undefined4
FUN_006045e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_1 < (int)(DAT_007230c8 & 0xffff)) && (param_2 != -1)) &&
     (*(int *)(DAT_007230c4 + param_1 * 0x18) != 0)) {
    piVar1 = (int *)FUN_006039a0(param_2);
    if (piVar1 == (int *)0x0) {
LAB_00604644:
      iVar2 = FUN_00631d33(0x48);
      if (iVar2 != 0) {
        piVar1 = (int *)FUN_006048c0(param_1,param_2,param_3,param_4,param_5,param_6);
        uVar3 = (**(code **)(*piVar1 + 4))();
        return uVar3;
      }
      uVar3 = (**(code **)(iRam00000000 + 4))();
      return uVar3;
    }
    iVar2 = (**(code **)(*piVar1 + 0x1c))();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 0x18))();
      if (piVar1[10] == 0) {
        FUN_006038f0();
        goto LAB_00604644;
      }
    }
  }
  FUN_00604870();
  return 0;
}


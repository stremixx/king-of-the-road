
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00527070(int *param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (((*param_2 == 0x200) &&
      (uVar4 = (int)((int)param_2[1] - 400U) >> 0x1f,
      iVar3 = ((int)param_2[1] - 400U ^ uVar4) - uVar4,
      uVar4 = (int)((int)param_2[2] - 0x147U) >> 0x1f,
      iVar1 = ((int)param_2[2] - 0x147U ^ uVar4) - uVar4,
      SQRT((double)(iVar1 * iVar1 + iVar3 * iVar3)) < _DAT_0064ce90)) &&
     ((int *)param_1[0x5d] != (int *)0x0)) {
    uVar2 = (**(code **)(*(int *)param_1[0x5d] + 0x34))(param_2);
    return uVar2;
  }
  iVar1 = FUN_005d8260(param_2);
  if (iVar1 == 0) {
    if (((DAT_006957a8 == param_1) && ((int *)param_1[0x5d] != (int *)0x0)) && (*param_2 != 0x200))
    {
      uVar2 = (**(code **)(*(int *)param_1[0x5d] + 0x34))(param_2);
      return uVar2;
    }
  }
  else if ((DAT_006957a8 != param_1) && (*param_2 == 0x201)) {
    (**(code **)(*param_1 + 0x24))();
  }
  return 1;
}


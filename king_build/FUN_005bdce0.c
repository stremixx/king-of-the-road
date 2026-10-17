
undefined4 __thiscall FUN_005bdce0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return 0;
  }
  param_3 = param_3 - *(int *)(param_1 + 0x30);
  param_2 = param_2 - *(int *)(param_1 + 0x2c);
  piVar1 = *(int **)(param_1 + 0x120);
  while (piVar1 != (int *)0x0) {
    if (piVar1[9] != 0) {
      uVar3 = (**(code **)(*piVar1 + 0x24))(param_2,param_3);
      return uVar3;
    }
    piVar1 = (int *)FUN_005d2730();
  }
  piVar1 = (int *)FUN_005bdc50(param_2,param_3);
  if (piVar1 != (int *)0x0) {
    if (((DAT_0067e318 != 0) && (DAT_00701e84 == 0)) && ((piVar1[8] & 0x40000000U) == 0)) {
      FUN_005bd250(piVar1);
    }
    if (((DAT_00701e9c != piVar1) && (DAT_00701e84 == 0)) &&
       ((iVar2 = (**(code **)(*piVar1 + 0x2c))(), iVar2 == 0 &&
        (DAT_00701e9c = piVar1, DAT_00701eac != (code *)0x0)))) {
      (*DAT_00701eac)(param_1,piVar1);
    }
    uVar3 = (**(code **)(*piVar1 + 0x24))(param_2,param_3);
    return uVar3;
  }
  return 0;
}



undefined4 __thiscall FUN_005c2dc0(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 1) {
    FUN_005f1800(param_2,0);
    return 1;
  }
  if (iVar1 == 0) {
    iVar1 = *param_2;
    iVar2 = (**(code **)(*piVar5 + 0x3c))();
    if ((iVar1 < iVar2) && (-1 < iVar1)) {
      piVar5[0xe] = iVar1;
      return 1;
    }
  }
  else {
    if (iVar1 == 3) {
      *piVar5 = *param_2;
      return 1;
    }
    if (iVar1 == 4) {
      *(undefined8 *)piVar5 = *(undefined8 *)param_2;
      return 1;
    }
    if (iVar1 == 2) {
      (**(code **)(*piVar5 + 0x1c))(0);
      *(undefined4 *)(param_1 + 0x14) = 0;
      return 1;
    }
    if (iVar1 == 5) {
      (**(code **)(param_1 + 0x1c))(piVar5,param_2,*(undefined4 *)(param_1 + 0x18));
      return 1;
    }
    if (iVar1 == 6) {
      uVar4 = *(uint *)(param_1 + 0x18);
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        uVar4 = param_3;
      }
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar5 = *param_2;
        param_2 = param_2 + 1;
        piVar5 = piVar5 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)piVar5 = (char)*param_2;
        param_2 = (int *)((int)param_2 + 1);
        piVar5 = (int *)((int)piVar5 + 1);
      }
    }
  }
  return 1;
}


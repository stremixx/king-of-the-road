
uint FUN_00598810(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  piVar2 = (int *)(param_3 + 0xdb4);
  do {
    iVar1 = *piVar2;
    if (iVar1 == 0) break;
    if ((iVar1 != param_4) &&
       (uVar5 = (**(code **)(*(int *)(iVar1 + 0x100) + 0x34))(6,param_2), uVar5 != 0)) {
      return uVar5;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 6);
  piVar2 = (int *)FUN_004e565e(param_1);
  if (piVar2 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar2 + 0x34))(6,param_2);
  }
  if (uVar5 != 0) {
    return uVar5;
  }
  piVar2 = (int *)FUN_004e5507(param_1);
  if (((piVar2 == (int *)0x0) || (uVar5 = (**(code **)(*piVar2 + 0x34))(6,param_2), uVar5 == 0)) &&
     (uVar5 = (**(code **)(*param_1 + 0x34))(0,param_2), (uVar5 & 2) != 0)) {
    piVar2 = (int *)FUN_004e565e(*(undefined4 *)(param_2 + 0x68));
    if ((piVar2 != (int *)0x0) && (uVar3 = (**(code **)(*piVar2 + 0x34))(6,param_2), uVar3 != 0)) {
      return uVar3 | uVar5;
    }
    piVar2 = (int *)FUN_004e5507(*(undefined4 *)(param_2 + 0x68));
    if ((piVar2 != (int *)0x0) && (uVar3 = (**(code **)(*piVar2 + 0x34))(6,param_2), uVar3 != 0)) {
      return uVar3 | uVar5;
    }
  }
  return uVar5;
}


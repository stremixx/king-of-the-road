
int FUN_0055ebf0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_30 [48];
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 != 1) {
    return 2;
  }
  if (param_1[0x1518] == 0) {
    return 3;
  }
  if (param_1[0x155e] != 0) {
    return 4;
  }
  if (DAT_006ee158 == 0) {
    return 8;
  }
  piVar4 = (int *)(DAT_006ee158 + -4);
  piVar3 = (int *)0x0;
  FUN_0057d570(auStack_30);
  iVar1 = 1;
  if (piVar4 != (int *)0x0) {
    do {
      iVar2 = (**(code **)(*piVar4 + 4))();
      if (iVar2 == 2) {
        iVar1 = FUN_0055e710(param_1,piVar4);
        piVar3 = piVar4;
        if (iVar1 == 0) goto LAB_0055ecc0;
      }
    } while ((piVar4[2] != 0) && (piVar4 = (int *)(piVar4[2] + -4), piVar4 != (int *)0x0));
    if (iVar1 == 0) {
LAB_0055ecc0:
      if (*(int *)(piVar3[0x1518] + 0x3344) != 0) {
        FUN_004f0a00();
        (*(code *)**(undefined4 **)piVar3[0x1518])();
        FUN_00556150();
      }
      FUN_0055ed00(param_1,piVar3,param_2);
      return 0;
    }
  }
  return iVar1;
}


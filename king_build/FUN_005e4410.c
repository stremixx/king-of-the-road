
void __fastcall FUN_005e4410(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 400;
  piVar3 = param_1;
  do {
    if (*piVar3 != 0) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(*piVar3 + iVar5);
        if ((iVar1 != 0) && (iVar1 != 0)) {
          FUN_005e3d60();
          FUN_00631d5c(iVar1);
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < 2000);
      FUN_00631d5c(*piVar3);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 100;
  param_1 = param_1 + 400;
  do {
    if (*param_1 != 0) {
      while (puVar2 = *(undefined4 **)(*param_1 + 8), puVar2 != (undefined4 *)0x0) {
        FUN_005d1860();
        (**(code **)*puVar2)(1);
      }
      if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*param_1)(1);
      }
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


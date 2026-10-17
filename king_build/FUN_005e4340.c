
void __fastcall FUN_005e4340(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  DAT_00720704 = 0;
  iVar4 = 400;
  piVar3 = param_1;
  do {
    if (*piVar3 != 0) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(*piVar3 + iVar5);
        if (iVar1 != 0) {
          if (iVar1 != 0) {
            FUN_005e3d60();
            FUN_00631d5c(iVar1);
          }
          *(undefined4 *)(*piVar3 + iVar5) = 0;
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
  piVar3 = param_1 + 400;
  do {
    puVar6 = (undefined4 *)*piVar3;
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      do {
        puVar2 = (undefined4 *)puVar6[2];
        FUN_005e3f00();
        FUN_005d1860();
        if (puVar6 != (undefined4 *)0x0) {
          (**(code **)*puVar6)(1);
        }
        puVar6 = puVar2;
      } while (puVar2 != (undefined4 *)0x0);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  return;
}


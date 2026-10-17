
void __fastcall FUN_005d1a20(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_0071d7a4 != 0) {
    iVar4 = 0;
    if (0 < param_1[1]) {
      do {
        iVar2 = *(int *)(param_1[2] + iVar4 * 4);
        piVar1 = (int *)(param_1[2] + iVar4 * 4);
        if (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 8);
          while (iVar2 != 0) {
            puVar3 = *(undefined4 **)(*piVar1 + 8);
            FUN_005d1860();
            if (puVar3 != (undefined4 *)0x0) {
              (**(code **)*puVar3)(1);
            }
            piVar1 = (int *)(param_1[2] + iVar4 * 4);
            iVar2 = *(int *)(*(int *)(param_1[2] + iVar4 * 4) + 8);
          }
          puVar3 = *(undefined4 **)(param_1[2] + iVar4 * 4);
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 *)(param_1[2] + iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1[1]);
    }
    iVar4 = *param_1;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 8);
      while (iVar2 != 0) {
        puVar3 = *(undefined4 **)(iVar4 + 8);
        FUN_005d1860();
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        iVar4 = *param_1;
        iVar2 = *(int *)(iVar4 + 8);
      }
      if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*param_1)(1);
      }
      *param_1 = 0;
    }
  }
  return;
}


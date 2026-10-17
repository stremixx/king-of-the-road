
void __thiscall FUN_005d1ae0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_0071d7a4 != 0) {
    iVar3 = 0;
    if (0 < param_1[1]) {
      do {
        puVar1 = *(undefined4 **)(param_1[2] + iVar3 * 4);
        while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar2[2];
          if (puVar2[5] == param_2) {
            if (puVar2 == *(undefined4 **)(param_1[2] + iVar3 * 4)) {
              *(undefined4 **)(param_1[2] + iVar3 * 4) = puVar1;
            }
            FUN_005d1860();
            if (puVar2 != (undefined4 *)0x0) {
              (**(code **)*puVar2)(1);
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[1]);
    }
    if (*param_1 != 0) {
      puVar1 = *(undefined4 **)(*param_1 + 8);
      while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[2];
        if ((puVar2[5] == param_2) && (FUN_005d1860(), puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      if (*(int *)(*param_1 + 0x14) == param_2) {
        iVar3 = *(int *)(*param_1 + 8);
        FUN_005d1860();
        if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*param_1)(1);
        }
        *param_1 = iVar3;
      }
    }
  }
  return;
}


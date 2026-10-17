
void __thiscall FUN_005f1190(int param_1,code *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = param_3;
  iVar3 = (*param_2)(param_1,param_3);
  if (iVar3 < 0) {
    param_3 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 0x30) + param_3 * 4);
        while (piVar1 = piVar4, piVar1 != (int *)0x0) {
          piVar4 = (int *)piVar1[2];
          (**(code **)(*piVar1 + 0x20))(param_2,uVar2);
          if (((*(byte *)(piVar1 + 10) & 4) != 0) &&
             ((**(code **)(*piVar1 + 0x24))(), piVar1 != (int *)0x0)) {
            (**(code **)*piVar1)(1);
          }
        }
        param_3 = param_3 + 1;
      } while (param_3 < *(int *)(param_1 + 0x34));
    }
  }
  else {
    piVar4 = *(int **)(*(int *)(param_1 + 0x30) + iVar3 * 4);
    if (piVar4 != (int *)0x0) {
      do {
        piVar1 = (int *)piVar4[2];
        (**(code **)(*piVar4 + 0x20))(param_2,param_3);
        if (((*(byte *)(piVar4 + 10) & 4) != 0) &&
           ((**(code **)(*piVar4 + 0x24))(), piVar4 != (int *)0x0)) {
          (**(code **)*piVar4)(1);
        }
        piVar4 = piVar1;
      } while (piVar1 != (int *)0x0);
      return;
    }
  }
  return;
}


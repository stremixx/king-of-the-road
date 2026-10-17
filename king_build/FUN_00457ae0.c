
uint * FUN_00457ae0(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = (param_2 - param_1) / 0xc;
  if (0 < iVar3) {
    puVar4 = (uint *)(param_1 + 8);
    param_1 = (int)param_3 - param_1;
    do {
      uVar1 = *param_3;
      if ((uVar1 != 0) && ((*(uint *)(param_1 + (int)puVar4) & 0x10000) == 0)) {
        *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + -1;
        piVar2 = (int *)*param_3;
        if (((piVar2[1] == 0) &&
            (((piVar2 != (int *)puVar4[-2] || (*(uint *)(param_1 + (int)puVar4) != *puVar4)) ||
             (param_3[1] != puVar4[-1])))) && (piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 0xc))(1);
        }
      }
      if ((*puVar4 & 0x10000) == 0) {
        param_3[1] = 0;
        uVar1 = puVar4[-2];
        if (uVar1 == 0) {
          *param_3 = 0;
          *(undefined4 *)(param_1 + (int)puVar4) = 0;
        }
        else {
          *param_3 = uVar1;
          *(uint *)(param_1 + (int)puVar4) = *puVar4;
          *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
        }
      }
      else {
        *(uint *)(param_1 + (int)puVar4) = *puVar4;
        *param_3 = puVar4[-2];
        param_3[1] = puVar4[-1];
      }
      param_3 = param_3 + 3;
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return param_3;
  }
  return param_3;
}


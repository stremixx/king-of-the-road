
undefined4 __thiscall FUN_00605830(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((((param_2[2] != 0) && (*param_2 != 0)) && (param_2[1] != 0)) &&
     ((*(int *)(param_2[1] + 0xc) != 0 && (*(int *)(*param_2 + 0xc) != 0)))) {
    *(int **)(param_1 + 8) = param_2;
    iVar1 = *param_2;
    if (*(int *)(*(int *)(iVar1 + 0xc) + 0x30) != *(int *)(param_2[1] + 0xc)) {
      *param_2 = param_2[1];
      *(int *)(*(int *)(param_1 + 8) + 4) = iVar1;
    }
    piVar2 = *(int **)(param_1 + 8);
    FUN_0061b870(*(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x18),
                 *(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x10),
                 *(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x10),piVar2);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (param_3 == (int *)0x0) {
      return 1;
    }
    if (((param_3[2] != 0) && (*param_3 != 0)) &&
       ((param_3[1] != 0 && ((*(int *)(*param_3 + 0xc) != 0 && (*(int *)(param_3[1] + 0xc) != 0)))))
       ) {
      *(int **)(param_1 + 0xc) = param_3;
      iVar1 = *param_3;
      if (*(int *)(*(int *)(iVar1 + 0xc) + 0x30) != *(int *)(param_3[1] + 0xc)) {
        *param_3 = param_3[1];
        *(int *)(*(int *)(param_1 + 0xc) + 4) = iVar1;
      }
      piVar2 = *(int **)(param_1 + 0xc);
      FUN_0061b870(*(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x10),
                   *(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x18),
                   *(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x18),piVar2);
      if (*(float *)(param_1 + 0x3c) < *(float *)(param_1 + 0x48)) {
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x3c);
      return 1;
    }
  }
  return 0;
}



void __thiscall FUN_00543330(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x254c) != 5) {
    if ((((param_2 != *(int *)(param_1 + 0x4fac)) && (-1 < param_2)) && (param_2 < 6)) &&
       (iVar1 = *(int *)(param_1 + 0x28b4) * 0x174, (&DAT_006d1428)[iVar1 + param_2] != 0)) {
      iVar1 = iVar1 + *(int *)(param_1 + 0x4fac);
      *(int *)(&DAT_006d1440 + iVar1 * 4) = *(int *)(&DAT_006d1440 + iVar1 * 4) + -1;
      iVar1 = *(int *)(param_1 + 0x4fac) + *(int *)(param_1 + 0x28b4) * 0x174;
      if (*(int *)(&DAT_006d1440 + iVar1 * 4) == 0) {
        (**(code **)(*(int *)(&DAT_006d1428)[iVar1] + 0x24))();
      }
      *(int *)(param_1 + 0x4fac) = param_2;
      if (*(int *)(param_1 + 0x184) == 0) {
        FUN_005453f0(2);
      }
      iVar1 = *(int *)(param_1 + 0x4fac) + *(int *)(param_1 + 0x28b4) * 0x174;
      if (*(int *)(&DAT_006d1440 + iVar1 * 4) == 0) {
        (**(code **)(*(int *)(&DAT_006d1428)[iVar1] + 0x28))();
      }
      *(int *)(&DAT_006d1440 + (*(int *)(param_1 + 0x4fac) + *(int *)(param_1 + 0x28b4) * 0x174) * 4
              ) = *(int *)(&DAT_006d1440 +
                          (*(int *)(param_1 + 0x4fac) + *(int *)(param_1 + 0x28b4) * 0x174) * 4) + 1
      ;
    }
  }
  return;
}


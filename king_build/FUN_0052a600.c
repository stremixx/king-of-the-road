
void __thiscall FUN_0052a600(int *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 != *param_1) && (-1 < param_2)) && (param_2 < 5)) &&
     ((&DAT_006cdcf8)[param_1[1] * 0xb + param_2] != 0)) {
    iVar1 = param_1[1] * 0xb + *param_1;
    (&DAT_006cdd0c)[iVar1] = (&DAT_006cdd0c)[iVar1] + -1;
    iVar1 = param_1[1] * 0xb + *param_1;
    if ((&DAT_006cdd0c)[iVar1] == 0) {
      (**(code **)(*(int *)(&DAT_006cdcf8)[iVar1] + 0x24))();
    }
    *param_1 = param_2;
    if (param_1[2] == 0) {
      FUN_0052a770(1);
    }
    iVar1 = param_1[1] * 0xb + *param_1;
    if ((&DAT_006cdd0c)[iVar1] == 0) {
      (**(code **)(*(int *)(&DAT_006cdcf8)[iVar1] + 0x28))();
    }
    iVar1 = param_1[1] * 0xb + *param_1;
    (&DAT_006cdd0c)[iVar1] = (&DAT_006cdd0c)[iVar1] + 1;
  }
  return;
}


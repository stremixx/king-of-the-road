
void __thiscall FUN_0048ece0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_1 + 0xc0) * 8 - param_3) + param_1 >> 3;
  if (0 < iVar2) {
    puVar1 = param_2;
    do {
      *puVar1 = *(undefined4 *)((param_3 - (int)param_2) + (int)puVar1);
      puVar1[1] = *(undefined4 *)((param_3 - (int)param_2) + 4 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) - (param_3 - (int)param_2 >> 3);
  return;
}


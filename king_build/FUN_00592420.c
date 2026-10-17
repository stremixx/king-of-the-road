
void __thiscall FUN_00592420(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    puVar1 = (undefined4 *)(param_1 + 4);
    FUN_00592540();
    if ((int *)*param_2 != (int *)0x0) {
      iVar2 = *(int *)*param_2;
      if (iVar2 != 0) {
        *(undefined4 **)(iVar2 + 4) = puVar1;
      }
      *puVar1 = *(undefined4 *)*param_2;
      *(undefined4 **)*param_2 = puVar1;
      *(int *)(param_1 + 8) = *param_2;
    }
    *param_2 = (int)puVar1;
    *(int **)(param_1 + 0xc) = param_2;
  }
  return;
}


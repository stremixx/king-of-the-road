
void __thiscall FUN_00592520(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    *param_2 = param_1;
    puVar1 = *(undefined4 **)(param_1 + 4);
    param_2[1] = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_2;
    }
    *(int **)(param_1 + 4) = param_2;
  }
  return;
}


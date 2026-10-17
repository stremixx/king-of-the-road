
void __thiscall FUN_00471c20(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  *param_2 = *param_2 + 8;
  return;
}


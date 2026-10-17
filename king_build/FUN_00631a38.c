
void FUN_00631a38(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00631d33(param_2 * param_3 + 4);
  *puVar1 = *param_1;
  *param_1 = puVar1;
  return;
}



void __thiscall FUN_00471d40(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[6] = *(undefined4 *)*param_2;
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  param_1[1] = *(undefined4 *)(iVar1 + 4);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  *param_1 = *(undefined4 *)(iVar1 + 4);
  iVar1 = *param_2;
  puVar2 = (undefined4 *)(iVar1 + 4);
  *param_2 = (int)puVar2;
  param_1[2] = *puVar2;
  param_1[3] = *(undefined4 *)(iVar1 + 8);
  iVar1 = *param_2;
  *param_2 = iVar1 + 8;
  param_1[4] = *(undefined4 *)(iVar1 + 8);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  param_1[5] = *(undefined4 *)(iVar1 + 4);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  param_1[7] = *(undefined4 *)(iVar1 + 4);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  param_1[8] = *(undefined4 *)(iVar1 + 4);
  *param_2 = *param_2 + 4;
  return;
}



void FUN_004746a0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  iVar1 = *param_1;
  puVar2 = (undefined4 *)(iVar1 + 8);
  *param_1 = (int)puVar2;
  param_2[2] = *puVar2;
  param_2[3] = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *param_1;
  puVar2 = (undefined4 *)(iVar1 + 8);
  *param_1 = (int)puVar2;
  param_2[4] = *puVar2;
  param_2[5] = *(undefined4 *)(iVar1 + 0xc);
  *param_1 = *param_1 + 8;
  return;
}


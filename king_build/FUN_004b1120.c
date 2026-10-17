
void __thiscall FUN_004b1120(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_0064aec0;
  iVar1 = *(int *)(param_2 + 0x10);
  param_1[3] = iVar1;
  param_1[4] = param_2 + 4;
  *(undefined4 **)(iVar1 + 0x10) = param_1;
  *(undefined4 **)(param_1[4] + 0xc) = param_1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_0064b044;
  return;
}



void __thiscall FUN_004b11a0(undefined4 *param_1,int param_2,int *param_3,int *param_4)

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
  if ((param_3[2] & 0x10000U) == 0) {
    param_1[6] = 0;
    if (*param_3 == 0) {
      param_1[5] = 0;
      param_1[7] = 0;
    }
    else {
      param_1[5] = *param_3;
      param_1[7] = param_3[2];
      *(int *)(param_1[5] + 4) = *(int *)(param_1[5] + 4) + 1;
    }
  }
  else {
    param_1[7] = param_3[2];
    param_1[5] = *param_3;
    param_1[6] = param_3[1];
  }
  if ((param_4[2] & 0x10000U) != 0) {
    param_1[10] = param_4[2];
    param_1[8] = *param_4;
    param_1[9] = param_4[1];
    *param_1 = &PTR_LAB_0064b044;
    return;
  }
  param_1[9] = 0;
  if (*param_4 != 0) {
    param_1[8] = *param_4;
    param_1[10] = param_4[2];
    *(int *)(param_1[8] + 4) = *(int *)(param_1[8] + 4) + 1;
    *param_1 = &PTR_LAB_0064b044;
    return;
  }
  param_1[8] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_0064b044;
  return;
}



undefined4 FUN_004ccdf0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004ccbc0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004ccbf0(param_1);
  if ((*(int *)(param_1 + 0x4c) != 3) && (*(int *)(param_1 + 0x4c) != 4)) {
    return 0;
  }
  *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * *(float *)(param_1 + 0x40);
  *(float *)(param_2 + 8) = *(float *)(param_1 + 0x40) * *(float *)(param_2 + 8);
  *(float *)(param_2 + 0xc) = *(float *)(param_1 + 0x40) * *(float *)(param_2 + 0xc);
  *(float *)(param_2 + 0x14) = *(float *)(param_1 + 0x40) * *(float *)(param_2 + 0x14);
  *(float *)(param_2 + 0x18) = *(float *)(param_1 + 0x40) * *(float *)(param_2 + 0x18);
  *(float *)(param_2 + 0x1c) = *(float *)(param_1 + 0x40) * *(float *)(param_2 + 0x1c);
  *(float *)(param_2 + 0x24) = *(float *)(param_1 + 0x40) * *(float *)(param_2 + 0x24);
  *(float *)(param_2 + 0x28) = *(float *)(param_1 + 0x40) * *(float *)(param_2 + 0x28);
  *(float *)(param_2 + 0x2c) = *(float *)(param_1 + 0x40) * *(float *)(param_2 + 0x2c);
  return 1;
}


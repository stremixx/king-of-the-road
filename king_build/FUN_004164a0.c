
uint FUN_004164a0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x5c) == 1) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = FUN_004164e0(param_1);
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                  *(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x4c));
}


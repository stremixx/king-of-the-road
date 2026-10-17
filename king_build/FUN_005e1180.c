
void FUN_005e1180(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x2c); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x2c)) {
    }
    return;
  }
  return;
}


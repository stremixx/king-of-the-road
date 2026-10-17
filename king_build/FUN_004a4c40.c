
void FUN_004a4c40(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    FUN_004a4c40(*(undefined4 *)(param_1 + 0xc));
    iVar1 = *(int *)(param_1 + 8);
    FUN_004a3870();
    FUN_0044b440(param_1,0x2c);
    param_1 = iVar1;
  }
  return;
}


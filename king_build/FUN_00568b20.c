
void FUN_00568b20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005e4980(param_1 + 1000);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
    *(undefined4 *)(*(int *)(iVar1 + 0x18) + 4) = param_2;
    if (*(int *)(iVar1 + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x198) = param_2;
    }
  }
  return;
}


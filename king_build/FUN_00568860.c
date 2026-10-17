
void FUN_00568860(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e4980(param_1 + 4000);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x18) + 4) = 0;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 != 0) {
      FUN_00568710(*(undefined4 *)(iVar1 + 0x158),*(undefined4 *)(iVar1 + 0x1a0));
      *(undefined4 *)(iVar1 + 0x1a0) = 0;
      FUN_00568710(*(undefined4 *)(iVar1 + 0x158),0);
    }
  }
  return;
}


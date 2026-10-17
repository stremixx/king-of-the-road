
void FUN_00568a20(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005e4980(param_1 + 2000);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      *(uint *)(*(int *)(iVar1 + 0x18) + 4) = param_2;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x198) = param_2;
      FUN_00568960(*(undefined4 *)(iVar1 + 0x158),param_2 ^ 1);
      FUN_00568960(*(undefined4 *)(iVar1 + 0x158),param_2);
    }
  }
  return;
}


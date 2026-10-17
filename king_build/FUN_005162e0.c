
void __thiscall FUN_005162e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x15c) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x13c) + 0x28) = 1;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x13c) + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x15c) < *(int *)(param_1 + 0x144)) {
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28) = 1;
  }
  FUN_005bf6e0(param_2);
  iVar1 = FUN_005e9710(&DAT_006cd790);
  FUN_005e97a0(*(undefined4 *)(param_1 + -0x34),(0xff - iVar1) / 2 + 0x149,0x101,DAT_006cdc88,
               &DAT_006cd790,4,0);
  return;
}


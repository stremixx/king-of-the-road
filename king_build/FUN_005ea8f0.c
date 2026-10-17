
void __thiscall FUN_005ea8f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 0x2048) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 0x790) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x2044) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0x794) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_2 + 0x204c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_2 + 0x798) = uVar1;
  *(int *)(param_2 + 0x21b0) = param_1;
  return;
}


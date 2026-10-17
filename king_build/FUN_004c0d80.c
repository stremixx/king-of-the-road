
void __thiscall FUN_004c0d80(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_005f2d40(param_2,param_3);
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x58) = 0x3f800000;
  *(uint *)(*(int *)(param_1 + 0x48) + 0x20) = *(uint *)(*(int *)(param_1 + 0x48) + 0x20) | 0x40000;
  *(uint *)(*(int *)(param_1 + 0x48) + 0x20) = *(uint *)(*(int *)(param_1 + 0x48) + 0x20) | 2;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


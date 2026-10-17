
void __thiscall FUN_004ea4a3(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x1c); local_8 = local_8 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 8) + local_8 * 4) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + local_8 * 4) = param_3;
  }
  return;
}


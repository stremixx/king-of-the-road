
void FUN_004a7670(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x70) + -0x1c);
  if ((puVar1[2] & 0x10000) != 0) {
    FUN_004a5be0(param_1,0x1d,s_<IMMEDIATE>_00670104);
    return;
  }
  uVar2 = (**(code **)(*(int *)*puVar1 + 4))();
  FUN_004a5be0(param_1,0x1d,uVar2);
  return;
}


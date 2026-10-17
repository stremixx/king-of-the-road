
undefined4 __fastcall FUN_004fc130(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2638) == 2) {
    uVar1 = FUN_004f7ae0(0);
    return uVar1;
  }
  if (*(int *)(param_1 + 0x2638) != 3) {
    return 0;
  }
  uVar1 = FUN_004f7ae0(1);
  return uVar1;
}


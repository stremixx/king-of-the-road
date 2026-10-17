
void __fastcall FUN_00558040(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5460);
  *(undefined4 *)(param_1 + 0x5578) = 0;
  *(undefined4 *)(param_1 + 0x51c8) = 1;
  *(undefined4 *)(iVar1 + 0x2804) = DAT_007015b0;
  *(undefined4 *)(iVar1 + 0x2808) = DAT_007015b4;
  *(undefined4 *)(iVar1 + 0x280c) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x2538) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x5460) + 0x2770) = 0;
  FUN_004ee4a0();
  return;
}


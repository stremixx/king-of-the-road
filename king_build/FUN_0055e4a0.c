
void __fastcall FUN_0055e4a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5460);
  *(undefined4 *)(param_1 + 0x51c8) = 1;
  *(undefined4 *)(param_1 + 0x2538) = 0;
  *(undefined4 *)(iVar1 + 0x2804) = DAT_007015b0;
  *(undefined4 *)(iVar1 + 0x2808) = DAT_007015b4;
  *(undefined4 *)(iVar1 + 0x280c) = DAT_007015b8;
  *(undefined4 *)(*(int *)(param_1 + 0x5460) + 10000) = 0x3f800000;
  *(undefined2 *)(*(int *)(param_1 + 0x5460) + 0x2716) = 1;
  FUN_004ee4a0();
  *(undefined4 *)(param_1 + 0x5578) = 0;
  if (*(int *)(&DAT_006d1158 + *(int *)(param_1 + 0x28b4) * 0x5d0) != 0) {
    FUN_004e409c(*(int *)(&DAT_006d1158 + *(int *)(param_1 + 0x28b4) * 0x5d0),0);
  }
  return;
}


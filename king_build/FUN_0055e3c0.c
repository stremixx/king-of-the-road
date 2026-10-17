
void __thiscall FUN_0055e3c0(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x5578) = param_2;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x10;
  }
  *(int *)(param_1 + 0x2538) = param_2;
  iVar1 = *(int *)(param_1 + 0x5460);
  *(undefined4 *)(param_1 + 0x51c8) = 0;
  *(undefined4 *)(iVar1 + 0x2804) = DAT_007015b0;
  *(undefined4 *)(iVar1 + 0x2808) = DAT_007015b4;
  *(undefined4 *)(iVar1 + 0x280c) = DAT_007015b8;
  *(undefined4 *)(*(int *)(param_1 + 0x5460) + 0x2770) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x5460) + 0x2774) = 0;
  FUN_004ee180();
  *(undefined4 *)(*(int *)(param_1 + 0x5460) + 10000) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x5460) + 0x2716) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x5460) + 0x2718) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x5460) + 0x271a) = 0;
  *(undefined4 *)(param_1 + 0x557c) = 0;
  if (*(int *)(&DAT_006d1158 + *(int *)(param_1 + 0x28b4) * 0x5d0) != 0) {
    FUN_004e409c(*(int *)(&DAT_006d1158 + *(int *)(param_1 + 0x28b4) * 0x5d0),0);
  }
  return;
}


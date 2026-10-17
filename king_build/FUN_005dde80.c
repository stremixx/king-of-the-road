
void __fastcall FUN_005dde80(int param_1)

{
  undefined4 uVar1;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(int *)(param_1 + 0xc14) != 0) {
    FUN_005b9a80();
    FUN_005b5b90();
    *(undefined4 *)(param_1 + 0xc14) = 0;
  }
  FUN_005ae160();
  if (*(int *)(DAT_007206b0 + 0x158) != 0) {
    FUN_005fc7d0();
  }
  if (DAT_007206c4 != 0) {
    FUN_005ddc60();
    uVar1 = FUN_0061c356(s_view_key_00681e90,&DAT_0067eac0);
    FUN_0061d86c(uVar1,&DAT_00681e8c,*(undefined4 *)(param_1 + 0xb98),
                 *(undefined4 *)(param_1 + 0xb9c));
    FUN_005db380();
    FUN_0061d86c(uVar1,s__f__f__f_00681e80,(double)local_38,(double)local_34,(double)local_30);
    FUN_0061d86c(uVar1,s__f__f__f_00681e80,(double)local_2c,(double)local_28,(double)local_24);
    FUN_0061d86c(uVar1,s__f__f__f_00681e80,(double)local_20,(double)local_1c,(double)local_18);
    FUN_0061d86c(uVar1,s__f__f__f_00681e80,(double)local_14,(double)local_10,(double)local_c);
    FUN_0061c25a(uVar1);
    FUN_005ddc80();
  }
  return;
}


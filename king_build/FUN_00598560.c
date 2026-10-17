
void __fastcall FUN_00598560(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005eec70();
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  FUN_005a36c0(param_1);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x6c) = 0x40270000;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar1 = FUN_00599720(param_1,0,0);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  return;
}



undefined4 __fastcall FUN_00581360(int param_1)

{
  *(undefined4 *)(param_1 + 0xd88) = 0;
  *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x37c);
  *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) & 0xfffffffa;
  return 1;
}


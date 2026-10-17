
void __fastcall FUN_005fc9c0(int param_1)

{
  if ((DAT_00722a88 != 0) && ((*(uint *)(param_1 + 0x18) & 2) != 0)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  }
  return;
}


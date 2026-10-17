
void __fastcall FUN_005d8100(int param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffc;
  if (DAT_00701eac != (code *)0x0) {
    (*DAT_00701eac)(0,0);
  }
  return;
}


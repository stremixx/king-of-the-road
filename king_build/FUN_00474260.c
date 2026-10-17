
int __fastcall FUN_00474260(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3d8);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if ((uint)((DAT_006898bc - DAT_006898b8) / 0x38) <= uVar1) {
    return 0;
  }
  return DAT_006898b8 + uVar1 * 0x38;
}


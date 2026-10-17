
uint FUN_0061dce4(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_00687ea4) {
    uVar1 = FUN_00624e08(param_1,0x107);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_00687c98 + param_1 * 2) & 0x107;
}


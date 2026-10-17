
void FUN_004eaac0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00696568;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00696518;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_006965b8 = 0;
  DAT_006965bc = 0;
  DAT_006965c0 = 0;
  return;
}


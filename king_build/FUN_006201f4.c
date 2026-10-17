
void FUN_006201f4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0077d940;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_0077d810 = 0;
  DAT_0077d82c = 0;
  DAT_0077da44 = 0;
  DAT_0077d820 = 0;
  DAT_0077d824 = 0;
  DAT_0077d828 = 0;
  return;
}


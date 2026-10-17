
void FUN_0062e160(void)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &DAT_0077bfec;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar3 = uVar3 + uVar1;
  } while ((int)puVar2 < 0x77c008);
  puVar2 = &DAT_0077c008;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar4 = uVar4 + uVar1;
  } while ((int)puVar2 < 0x77c1ec);
  puVar2 = &DAT_0077c1ec;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar3 = uVar3 + uVar1;
  } while ((int)puVar2 < 0x77c3ec);
  *DAT_0077d24c = (ushort)(uVar3 <= uVar4 >> 2);
  return;
}


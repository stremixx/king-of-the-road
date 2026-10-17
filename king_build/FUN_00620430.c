
void FUN_00620430(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_006204ac();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_006856f8;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_006204a3();
      *puVar2 = *(undefined4 *)(iVar3 * 8 + 0x6856fc);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar1 < 0x685860);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_006204a3();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_006204a3();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_006204a3();
  *puVar2 = 0x16;
  return;
}


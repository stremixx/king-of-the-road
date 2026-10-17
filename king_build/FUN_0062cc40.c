
void FUN_0062cc40(void)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = DAT_0077a454;
  iVar5 = (DAT_00689300 - DAT_0077a42c) - DAT_0077a454;
  uVar6 = DAT_0077a42c;
  if (iVar5 == -1) {
    iVar5 = -2;
  }
  else if (0xfef9 < DAT_0077a42c) {
    puVar7 = &DAT_00761df0;
    puVar8 = &DAT_00759df0;
    for (iVar4 = 0x2000; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    DAT_0077a44c = DAT_0077a44c + -0x8000;
    uVar6 = DAT_0077a42c - 0x8000;
    DAT_0077a450 = DAT_0077a450 + -0x8000;
    puVar1 = &DAT_00749df0;
    DAT_0077a42c = uVar6;
    do {
      if (*puVar1 < 0x8000) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar1 + 0x8000;
      }
      *puVar1 = uVar3;
      puVar1 = puVar1 + 1;
    } while (puVar1 < &DAT_00759df0);
    puVar1 = (ushort *)&DAT_00739df0;
    do {
      if (*puVar1 < 0x8000) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar1 + 0x8000;
      }
      *puVar1 = uVar3;
      puVar1 = puVar1 + 1;
    } while (puVar1 < &DAT_00749df0);
    iVar5 = iVar5 + 0x8000;
  }
  if (DAT_0077a438 == 0) {
    iVar2 = (*DAT_0077d350)((int)&DAT_00759df0 + iVar2 + uVar6,iVar5);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      DAT_0077a454 = DAT_0077a454 + iVar2;
      return;
    }
    DAT_0077a438 = 1;
  }
  return;
}


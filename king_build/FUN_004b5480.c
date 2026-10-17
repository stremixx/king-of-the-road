
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5480(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar3 = 0x9a4ec86;
  uVar5 = 0;
  puVar7 = &DAT_006936a8;
  for (iVar1 = 0x37; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  _DAT_00693780 = 0x9a4ec86;
  iVar1 = 1;
  do {
    iVar4 = iVar3 - iVar1;
    uVar2 = uVar5 % 0x37;
    uVar5 = uVar5 + 0x15;
    (&DAT_006936a8)[uVar2] = iVar1;
    iVar3 = (&DAT_006936a8)[uVar2];
    iVar1 = iVar4;
  } while (uVar5 < 0x46e);
  iVar3 = 4;
  do {
    uVar5 = 0;
    piVar6 = &DAT_006936a8;
    do {
      uVar2 = uVar5 + 0x1f;
      uVar5 = uVar5 + 1;
      *piVar6 = *piVar6 - (&DAT_006936a8)[uVar2 % 0x37];
      piVar6 = piVar6 + 1;
    } while (uVar5 < 0x37);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _DAT_00693784 = 0;
  _DAT_00693788 = 0x1f;
  return;
}


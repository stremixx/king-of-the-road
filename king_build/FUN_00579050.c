
void FUN_00579050(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = 0x28;
  puVar2 = &DAT_006f441c;
  do {
    FUN_004011e0(puVar2,0xc,4,FUN_004042a0);
    iVar3 = iVar3 + -1;
    puVar4 = &DAT_00701550;
    puVar5 = puVar2;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = puVar2 + 0xd;
  } while (iVar3 != 0);
  return;
}


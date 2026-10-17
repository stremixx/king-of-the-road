
void FUN_00579090(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 1;
  psVar3 = &DAT_006f3b42;
  do {
    uVar4 = 1;
    psVar2 = psVar3;
    do {
      sVar1 = (short)uVar5 * 6 + (short)uVar4;
      uVar4 = uVar4 + 1;
      psVar2[-1] = sVar1 + -7;
      *psVar2 = sVar1;
      psVar2[1] = sVar1 + -6;
      psVar2[2] = sVar1 + -7;
      psVar2[3] = sVar1 + -1;
      psVar2[4] = sVar1;
      psVar2 = psVar2 + 6;
    } while (uVar4 < 6);
    uVar5 = uVar5 + 1;
    psVar3 = psVar3 + 0x1e;
  } while (uVar5 < 0x24);
  return;
}


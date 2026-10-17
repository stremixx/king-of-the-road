
void FUN_004c5740(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_006951a8 != 0) {
    uVar3 = 0;
    do {
      iVar1 = uVar3 + 0x28;
      iVar2 = uVar3 + 0x28;
      uVar3 = uVar3 + 0x74;
      *(byte *)(iVar2 + DAT_006951a8) = *(byte *)(iVar1 + DAT_006951a8) | 1;
    } while (uVar3 < 0x2d50);
  }
  return;
}


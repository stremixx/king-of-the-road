
void __fastcall FUN_005bd420(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 & 0x10) == 0) {
    if ((uVar2 & 0x24) == 0) {
      if ((uVar2 & 0x48) != 0) {
        iVar5 = *(int *)(param_1 + 100);
        if (iVar5 != 0) {
          *(uint *)(param_1 + 0x34) = (*(ushort *)(iVar5 + 4) - 1) + *(int *)(param_1 + 0x2c);
          *(uint *)(param_1 + 0x38) = (*(ushort *)(iVar5 + 6) - 1) + *(int *)(param_1 + 0x30);
          goto LAB_005bd515;
        }
        iVar5 = *(int *)(param_1 + 0x88);
        if (iVar5 == 0) goto LAB_005bd515;
        *(uint *)(param_1 + 0x34) = (*(ushort *)(iVar5 + 4) - 1) + *(int *)(param_1 + 0x2c);
        uVar1 = *(ushort *)(iVar5 + 6);
        goto LAB_005bd50b;
      }
      iVar5 = FUN_005e9710(*(undefined4 *)(param_1 + 0xc));
      *(int *)(param_1 + 0x34) = iVar5 + 4 + *(int *)(param_1 + 0x2c);
      iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x14) + 4 + *(int *)(param_1 + 0x30);
      goto LAB_005bd512;
    }
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x84);
      if (iVar5 == 0) goto LAB_005bd515;
      goto LAB_005bd4f5;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 != 0) {
LAB_005bd4f5:
      *(uint *)(param_1 + 0x34) = (*(ushort *)(iVar5 + 0x14) - 1) + *(int *)(param_1 + 0x2c);
      uVar1 = *(ushort *)(iVar5 + 0x16);
LAB_005bd50b:
      iVar5 = (uVar1 - 1) + *(int *)(param_1 + 0x30);
LAB_005bd512:
      *(int *)(param_1 + 0x38) = iVar5;
      goto LAB_005bd515;
    }
    iVar5 = *(int *)(param_1 + 0x84);
    if (iVar5 == 0) goto LAB_005bd515;
  }
  *(uint *)(param_1 + 0x34) = (*(ushort *)(iVar5 + 0x14) - 1) + *(int *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x38) = (*(ushort *)(iVar5 + 0x16) - 1) + *(int *)(param_1 + 0x30);
LAB_005bd515:
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
  }
  iVar5 = *(int *)(param_1 + 0x120);
  while (iVar5 != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x30);
    *(int *)(iVar5 + 0x2c) = *(int *)(iVar5 + 0x2c) + -iVar3;
    *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + -iVar3;
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + -iVar4;
    *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + -iVar4;
    iVar5 = FUN_005d2730();
  }
  if ((*(uint *)(param_1 + 0x20) & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  return;
}


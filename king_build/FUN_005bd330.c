
void __fastcall FUN_005bd330(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((uVar2 & 0x10) == 0) {
    if ((uVar2 & 0x24) != 0) {
      iVar3 = *(int *)(param_1 + 0x60);
      goto joined_r0x005bd39d;
    }
    if ((uVar2 & 0x48) == 0) {
      iVar3 = FUN_005e9710(*(undefined4 *)(param_1 + 0xc));
      *(int *)(param_1 + 0x34) = iVar3 + 4 + *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x38) =
           *(int *)(*(int *)(param_1 + 0x10) + 0x14) + 4 + *(int *)(param_1 + 0x30);
      goto LAB_005bd3b3;
    }
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 == 0) goto LAB_005bd3b3;
    *(uint *)(param_1 + 0x34) = *(ushort *)(iVar3 + 4) - 1;
    uVar1 = *(ushort *)(iVar3 + 6);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x60);
joined_r0x005bd39d:
    if (iVar3 == 0) goto LAB_005bd3b3;
    *(uint *)(param_1 + 0x34) = *(ushort *)(iVar3 + 0x14) - 1;
    uVar1 = *(ushort *)(iVar3 + 0x16);
  }
  *(uint *)(param_1 + 0x38) = uVar1 - 1;
LAB_005bd3b3:
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
  }
  iVar3 = *(int *)(param_1 + 0x120);
  while (iVar3 != 0) {
    if (iVar5 < *(int *)(iVar3 + 0x34)) {
      iVar5 = *(int *)(iVar3 + 0x34);
    }
    if (iVar4 < *(int *)(iVar3 + 0x38)) {
      iVar4 = *(int *)(iVar3 + 0x38);
    }
    iVar3 = FUN_005d2730();
  }
  if (*(int *)(param_1 + 0x34) < iVar5) {
    *(int *)(param_1 + 0x34) = iVar5;
  }
  if (*(int *)(param_1 + 0x38) < iVar4) {
    *(int *)(param_1 + 0x38) = iVar4;
  }
  if ((*(uint *)(param_1 + 0x20) & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  return;
}


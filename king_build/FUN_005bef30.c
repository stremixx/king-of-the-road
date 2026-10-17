
void __fastcall FUN_005bef30(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 & 0x10) == 0) {
    if ((uVar2 & 0x24) != 0) {
      iVar3 = *(int *)(param_1 + 0x60);
      goto joined_r0x005befa7;
    }
    if ((uVar2 & 0x48) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      iVar3 = FUN_005e9710(*(undefined4 *)(param_1 + 0xc));
      *(int *)(param_1 + 0x34) = iVar3 + 4 + *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x38) =
           *(int *)(*(int *)(param_1 + 0x10) + 0x14) + 4 + *(int *)(param_1 + 0x30);
      goto LAB_005befc3;
    }
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(uint *)(param_1 + 0x34) = *(ushort *)(iVar3 + 4) - 1;
    uVar1 = *(ushort *)(iVar3 + 6);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x60);
joined_r0x005befa7:
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(uint *)(param_1 + 0x34) = *(ushort *)(iVar3 + 0x14) - 1;
    uVar1 = *(ushort *)(iVar3 + 0x16);
  }
  *(uint *)(param_1 + 0x38) = uVar1 - 1;
LAB_005befc3:
  if ((*(uint *)(param_1 + 0x20) & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
  }
  return;
}


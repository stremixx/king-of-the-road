
void __fastcall FUN_005bf9a0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((uVar2 & 0x10) == 0) {
    if ((uVar2 & 0x24) != 0) {
      iVar3 = *(int *)(param_1 + 0x60);
      goto joined_r0x005bf9df;
    }
    if ((uVar2 & 0x48) == 0) goto LAB_005bf9f5;
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x34) = *(ushort *)(iVar3 + 4) - 1;
    uVar1 = *(ushort *)(iVar3 + 6);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x60);
joined_r0x005bf9df:
    if (iVar3 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x34) = *(ushort *)(iVar3 + 0x14) - 1;
    uVar1 = *(ushort *)(iVar3 + 0x16);
  }
  *(uint *)(param_1 + 0x38) = uVar1 - 1;
LAB_005bf9f5:
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x38) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


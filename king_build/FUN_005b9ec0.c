
undefined4 __fastcall FUN_005b9ec0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if (((uVar1 & 4) != 0) &&
     (*(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1, (uVar1 & 1) == 0)) {
    if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 4) != 0)) {
      FUN_005e7500(param_1,*(int *)(param_1 + 4));
    }
    else if (((uVar1 & 0x200) == 0) &&
            ((*(ushort *)(param_1 + 0x18) == 1 || ((uVar1 & 0x400) == 0)))) {
      uVar2 = FUN_00631d33((uint)*(ushort *)(param_1 + 0x16) * (uint)*(ushort *)(param_1 + 0x14) *
                           (uint)*(ushort *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 8) = uVar2;
      FUN_005e7790(param_1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x20));
    }
    uVar1 = *(uint *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = uVar1 | 1;
    if (((DAT_0071f86c != 0) && (1 < *(ushort *)(param_1 + 0x18))) && ((uVar1 & 0x800) == 0)) {
      FUN_005ba4e0((uVar1 & 0x400) >> 10);
    }
  }
  return 0;
}


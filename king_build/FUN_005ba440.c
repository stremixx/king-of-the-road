
undefined4 __thiscall FUN_005ba440(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x34) & 4) != 0) {
    *(int *)(param_1 + 8) = param_2;
    return 1;
  }
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != param_2)) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  uVar2 = FUN_0062a170(param_2,(uint)*(ushort *)(param_1 + 0x14) * (uint)*(ushort *)(param_1 + 0x18)
                               * (uint)*(ushort *)(param_1 + 0x16));
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((uVar1 & 0x10) != 0) {
    if (param_3 == 0) {
      param_3 = (uint)*(ushort *)(param_1 + 0x14) * (uint)*(ushort *)(param_1 + 0x18) *
                (uint)*(ushort *)(param_1 + 0x16) + param_2;
    }
    *(int *)(param_1 + 0xc) = param_3;
  }
  *(uint *)(param_1 + 0x34) = uVar1 | 4;
  if (param_4 != 0) {
    *(uint *)(param_1 + 0x34) = CONCAT31((int3)(uVar1 >> 8),(char)(uVar1 | 4)) | 1;
  }
  return 1;
}


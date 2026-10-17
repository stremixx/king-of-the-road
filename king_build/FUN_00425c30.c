
uint FUN_00425c30(uint param_1)

{
  int iVar1;
  uint3 uVar2;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    return param_1 & 0xffffff00;
  }
  uVar2 = (uint3)(param_1 >> 8);
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    return (uint)uVar2 << 8;
  }
  if (*(int *)(param_1 + 0x54) != 2) {
    return (uint)uVar2 << 8;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0x100) {
    return (uint)uVar2 << 8;
  }
  if (iVar1 == 0x101) {
    return (uint)uVar2 << 8;
  }
  if (iVar1 == 5) {
    return (uint)uVar2 << 8;
  }
  if (*(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x1fc) + 4) * 4) + 0x20) == 2) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31((uint3)(*(uint *)(param_1 + 0x58) >> 10),~(byte)(*(uint *)(param_1 + 0x58) >> 2))
         & 0xffffff01;
}


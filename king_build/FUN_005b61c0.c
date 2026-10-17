
uint __fastcall FUN_005b61c0(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 6);
  if ((uVar2 & 0x20) == 0) {
    if ((uVar2 & 0x200) != 0) {
      if ((uVar2 & 1) == 0) {
        FUN_005d3b40(0);
        uVar2 = FUN_005b62a0();
        return uVar2;
      }
      if ((uVar2 & 0x100) != 0) {
        if (*(int *)(param_1 + 0x3c) != 0) {
          FUN_005d3b40((uint)param_1[2] * (uint)param_1[1] * (uint)*param_1 * *(int *)(param_1 + 8))
          ;
          uVar2 = *(uint *)(param_1 + 0x3c);
          *(uint *)(param_1 + 0x3c) = uVar2 ^ 1;
          *(uint *)(param_1 + 8) = (*(int *)(param_1 + 8) + 4U) % 3;
          return uVar2 ^ 1;
        }
        iVar1 = *(int *)(param_1 + 8);
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) ^ 1;
        *(uint *)(param_1 + 8) = (iVar1 + 3U) % 6;
        return (iVar1 + 3U) / 6;
      }
      FUN_005d3b40((uint)param_1[2] * (uint)param_1[1] * (uint)*param_1 * *(int *)(param_1 + 8));
      iVar1 = *(int *)(param_1 + 8);
      *(uint *)(param_1 + 8) = (iVar1 + 1U) % 3;
      return (iVar1 + 1U) / 3;
    }
    uVar2 = FUN_005d31f0(*(undefined4 *)(param_1 + 0xc));
  }
  return uVar2;
}


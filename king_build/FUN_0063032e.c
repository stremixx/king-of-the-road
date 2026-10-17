
uint __fastcall FUN_0063032e(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x28);
  if (*(byte **)(param_1 + 0x2c) <= pbVar2) {
    if (*(byte **)(param_1 + 0x2c) < *(byte **)(param_1 + 0x1c)) {
      iVar1 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x10);
      *(byte **)(param_1 + 0x2c) = *(byte **)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      *(byte **)(param_1 + 0x28) = pbVar2 + (*(int *)(param_1 + 0x10) - iVar1);
    }
    pbVar2 = *(byte **)(param_1 + 0x28);
    if (*(byte **)(param_1 + 0x2c) <= pbVar2) {
      return 0xffffffff;
    }
  }
  return (uint)*pbVar2;
}


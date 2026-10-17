
uint __fastcall FUN_00630860(uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar3 = FUN_0062fec4();
  if (iVar3 != 0) {
    return (uint)**(byte **)(param_1 + 0x28);
  }
  iVar3 = FUN_00630c36();
  if ((iVar3 != -1) && (iVar3 = FUN_00630934(), iVar3 != -1)) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if (uVar1 < *(uint *)(param_1 + 0x14)) {
        iVar3 = *(uint *)(param_1 + 0x14) - uVar1;
      }
      else {
        iVar3 = 0;
      }
      iVar3 = FUN_00624902(*(undefined4 *)(param_1 + 0x4c),uVar1,iVar3);
      if (0 < iVar3) {
        pbVar2 = *(byte **)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
        *(byte **)(param_1 + 0x24) = pbVar2;
        *(byte **)(param_1 + 0x28) = pbVar2;
        *(byte **)(param_1 + 0x2c) = pbVar2 + iVar3;
        return (uint)*pbVar2;
      }
    }
    else {
      iVar3 = FUN_00624902(*(undefined4 *)(param_1 + 0x4c),(int)&uStack_8 + 3,1);
      if (0 < iVar3) {
        return uStack_8 >> 0x18;
      }
    }
  }
  return 0xffffffff;
}


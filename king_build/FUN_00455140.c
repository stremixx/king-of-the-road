
int __fastcall FUN_00455140(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar6 & 0xfffffff3;
  if ((uVar6 & 4) != 0) {
    *(uint *)(param_1 + 8) = uVar6 & 0xfffffff3 | 8;
  }
  if ((uVar6 & 8) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  }
  uVar6 = *(uint *)(param_1 + 0x3c);
  uVar4 = *(uint *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x38) < uVar6) {
    do {
      uVar6 = uVar6 - 0x638;
      uVar5 = uVar4 + 0x638;
      FUN_004698e0(uVar4,uVar6,0);
      uVar4 = uVar5;
    } while (uVar5 < uVar6);
  }
  iVar2 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
  iVar3 = iVar2 >> 0x1f;
  uVar6 = 0;
  iVar1 = -iVar3;
  if (iVar2 / 0x638 + iVar3 != iVar3) {
    do {
      FUN_0048e240();
      iVar3 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
      iVar1 = iVar3 * 0x5254e78f;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(iVar3 / 0x638));
  }
  return iVar1;
}


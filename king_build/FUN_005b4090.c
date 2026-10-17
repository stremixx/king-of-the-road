
void __thiscall
FUN_005b4090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  FUN_005ab040(*(int *)(param_1 + 0x2020) * 0x30 + 0x8c0 + param_1);
  *(undefined4 *)(param_1 + 0x4c8) = param_2;
  *(undefined4 *)(param_1 + 0x6dc) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = param_3;
  *(undefined4 *)(param_1 + 0x4d0) = param_4;
  FUN_005ab040(*(int *)(param_1 + 0x2020) * 0x30 + 0x8c0 + param_1);
  *(undefined4 *)(param_1 + 0x6e0) = 1;
  iVar6 = 2;
  *(int *)(param_1 + 0x4d4) = param_5;
  *(undefined4 *)(param_1 + 0x78c) = 2;
  *(undefined4 *)(param_1 + 0x4d8) = param_6;
  *(undefined4 *)(param_1 + 0x4dc) = param_7;
  uVar2 = *(uint *)(param_1 + 0x2050) | 0x1f;
  *(uint *)(param_1 + 0x2050) = uVar2;
  if (uVar2 != 0) {
    bVar7 = (uVar2 & 1) != 0;
    if (bVar7) {
      iVar6 = FUN_005ae580(0,2,param_1 + 0x734,(undefined4 *)(param_1 + 0x6dc),1);
    }
    uVar4 = (uint)bVar7;
    uVar2 = uVar4;
    if ((*(byte *)(param_1 + 0x2050) & 4) != 0) {
      uVar2 = uVar4 ^ 1;
      iVar6 = FUN_005ae580(0,iVar6,param_1 + 0x6dc + uVar2 * 0x58,param_1 + 0x6dc + uVar4 * 0x58,4);
    }
    uVar4 = uVar2;
    if ((*(byte *)(param_1 + 0x2050) & 0x10) != 0) {
      uVar4 = uVar2 ^ 1;
      iVar6 = FUN_005ae580(0,iVar6,param_1 + 0x6dc + uVar4 * 0x58,param_1 + 0x6dc + uVar2 * 0x58,
                           0x10);
    }
    uVar2 = uVar4;
    if ((*(byte *)(param_1 + 0x2050) & 8) != 0) {
      uVar2 = uVar4 ^ 1;
      iVar6 = FUN_005ae580(0,iVar6,param_1 + 0x6dc + uVar2 * 0x58,param_1 + 0x6dc + uVar4 * 0x58,8);
    }
    if ((*(byte *)(param_1 + 0x2050) & 2) != 0) {
      iVar6 = FUN_005ae580(0,iVar6,param_1 + 0x6dc + (uVar2 ^ 1) * 0x58,
                           param_1 + 0x6dc + uVar2 * 0x58,2);
    }
    if (iVar6 == 0) {
      return;
    }
  }
  if (0 < iVar6) {
    puVar3 = (undefined4 *)(param_1 + 0x18);
    param_5 = iVar6;
    do {
      uVar1 = __ftol();
      puVar3[-1] = uVar1;
      uVar1 = __ftol();
      *puVar3 = uVar1;
      puVar3 = puVar3 + 0xb;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if (1 < iVar6) {
    iVar5 = 1;
    puVar3 = (undefined4 *)(param_1 + 0x40);
    do {
      FUN_005b6a50(*(undefined4 *)(param_1 + 0x79c),puVar3[-0xb],puVar3[-10],*puVar3,puVar3[1],
                   param_8,0);
      puVar3 = puVar3 + 0xb;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  return;
}


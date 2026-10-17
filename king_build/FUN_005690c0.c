
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005690c0(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  
  uVar5 = 0xffffffff;
  pbVar8 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0);
  if ((~uVar5 - 1 < 0x80) &&
     (iVar3 = *(int *)(param_1 + 0x4b0), *(char *)(iVar3 * 0x80 + 0x2c + param_1) == '\0')) {
    iVar2 = iVar3 + -1;
    if (iVar2 < 0) {
      iVar2 = iVar3 + 3;
    }
    pbVar8 = (byte *)(iVar2 * 0x80 + 0x2c + param_1);
    pbVar7 = param_2;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00569132:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00569137;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00569132;
      pbVar7 = pbVar7 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00569137:
    if ((iVar3 == 0) &&
       (fVar10 = (float10)thunk_FUN_00603580(),
       fVar10 - (float10)*(int *)(param_1 + 0x4f8) < (float10)_DAT_0064a5e0)) {
      return;
    }
    thunk_FUN_00603580();
    uVar4 = __ftol();
    *(undefined4 *)(param_1 + 0x4f8) = uVar4;
    iVar3 = *(int *)(param_1 + 0x4b0);
    uVar5 = 0xffffffff;
    *(int *)(param_1 + 0x4b0) = iVar3 + 1;
    do {
      pbVar8 = param_2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar8 = param_2 + 1;
      bVar1 = *param_2;
      param_2 = pbVar8;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
    pbVar8 = pbVar8 + -uVar5;
    pbVar7 = (byte *)(iVar3 * 0x80 + 0x2c + param_1);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar7 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    }
    uVar5 = *(uint *)(param_1 + 0x4b0) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(param_1 + 0x4b0) = uVar5;
  }
  return;
}


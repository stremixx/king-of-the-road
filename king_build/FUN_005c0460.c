
void __thiscall FUN_005c0460(int param_1,byte *param_2)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  puVar9 = *(undefined4 **)(param_1 + 0x128);
  if (puVar9 != (undefined4 *)0x0) {
LAB_005c0473:
    pbVar5 = (byte *)puVar9[3];
    pbVar8 = param_2;
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_005c049e:
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005c04a3;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_005c049e;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_005c04a3:
    if (iVar6 != 0) {
      puVar9 = (undefined4 *)puVar9[2];
      if ((puVar9 == (undefined4 *)0x0) || (puVar9 == (undefined4 *)0x0)) goto LAB_005c055f;
      goto LAB_005c0473;
    }
    puVar4 = *(undefined4 **)(param_1 + 300);
    if (puVar9 == puVar4) {
      if (puVar4[2] == 0) {
        uVar7 = puVar4[1];
      }
      else {
        uVar7 = puVar4[2];
      }
      *(undefined4 *)(param_1 + 300) = uVar7;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x150);
    if (puVar9 == puVar4) {
      if (puVar4[2] == 0) {
        uVar7 = puVar4[1];
      }
      else {
        uVar7 = puVar4[2];
      }
      *(undefined4 *)(param_1 + 0x150) = uVar7;
    }
    if (puVar9 == *(undefined4 **)(param_1 + 0x128)) {
      iVar6 = puVar9[2];
      *(int *)(param_1 + 0x128) = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 4) = 0;
      }
    }
    else {
      FUN_005d1860();
    }
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)(1);
    }
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    psVar1 = (short *)(*(int *)(param_1 + 0x154) + 0x128);
    *psVar1 = *psVar1 + -1;
    if (*(short *)(*(int *)(param_1 + 0x154) + 0x128) < 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x154) + 0x128) = 0;
    }
LAB_005c055f:
    sVar3 = *(short *)(*(int *)(param_1 + 0x154) + 0x128);
    if (sVar3 < *(short *)(param_1 + 0x14c)) {
      *(short *)(param_1 + 0x14c) = sVar3;
    }
  }
  return;
}


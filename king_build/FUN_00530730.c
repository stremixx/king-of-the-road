
undefined4 FUN_00530730(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  if ((param_1 < 0) || (DAT_006d0fdc <= param_1)) {
    return 1;
  }
  puVar2 = &DAT_006d08a9;
  puVar3 = &DAT_006ce438 + param_1 * 0xae;
  puVar8 = (undefined4 *)&DAT_006d0d18;
  for (iVar6 = 0xae; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
  }
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
  } while ((int)puVar2 < 0x6d0af7);
  puVar3 = &DAT_006d0b00;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
  } while ((int)puVar3 < 0x6d0b78);
  FUN_0052f780();
  iVar6 = 0;
  do {
    if (*(int *)((int)&DAT_006d0b70 + iVar6) != 0) {
      if (*(int *)((int)&DAT_006d0e20 + iVar6) != 0) {
        *(undefined1 *)(*(int *)((int)&DAT_006d0e20 + iVar6) + 1) = 1;
      }
      if (*(int *)((int)&DAT_006d0edc + iVar6) != 0) {
        *(undefined1 *)(*(int *)((int)&DAT_006d0edc + iVar6) + 1) = 1;
      }
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0xbc);
  piVar4 = &DAT_006d0f98;
  do {
    if (piVar4[6] != 0) {
      if (*piVar4 != 0) {
        *(undefined4 *)(*piVar4 + 8) = 1;
      }
      if (piVar4[3] != 0) {
        *(undefined4 *)(piVar4[3] + 8) = 1;
      }
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0x6d0fa4);
  pbVar5 = &DAT_006d0d18;
  pbVar7 = PTR_s_ACT_LABS_Force_RS___SHIFTER_006776c4;
  do {
    bVar1 = *pbVar5;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_0053082b:
      iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00530830;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_0053082b;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_00530830:
  if (iVar6 == 0) {
    DAT_006d0fcc = 1;
    DAT_006d0fc4 = 4;
    if (*(int *)(&DAT_006ce618 + DAT_006d0fdc * 0x2b8) != 0) {
      *(undefined1 *)(*(int *)(&DAT_006ce618 + DAT_006d0fdc * 0x2b8) + 1) = 1;
    }
    if (*(int *)(&DAT_006ce61c + DAT_006d0fdc * 0x2b8) != 0) {
      *(undefined1 *)(*(int *)(&DAT_006ce61c + DAT_006d0fdc * 0x2b8) + 1) = 1;
    }
    if (*(int *)(&DAT_006ce620 + DAT_006d0fdc * 0x2b8) != 0) {
      *(undefined1 *)(*(int *)(&DAT_006ce620 + DAT_006d0fdc * 0x2b8) + 1) = 1;
    }
    if (*(int *)(&DAT_006ce624 + DAT_006d0fdc * 0x2b8) != 0) {
      *(undefined1 *)(*(int *)(&DAT_006ce624 + DAT_006d0fdc * 0x2b8) + 1) = 1;
    }
    if (*(int *)(&DAT_006ce628 + DAT_006d0fdc * 0x2b8) != 0) {
      *(undefined1 *)(*(int *)(&DAT_006ce628 + DAT_006d0fdc * 0x2b8) + 1) = 1;
    }
    if (*(int *)(&DAT_006ce62c + DAT_006d0fdc * 0x2b8) != 0) {
      *(undefined1 *)(*(int *)(&DAT_006ce62c + DAT_006d0fdc * 0x2b8) + 1) = 1;
    }
    if (*(int *)(&DAT_006ce630 + DAT_006d0fdc * 0x2b8) != 0) {
      *(undefined1 *)(*(int *)(&DAT_006ce630 + DAT_006d0fdc * 0x2b8) + 1) = 1;
    }
    if (*(int *)(&DAT_006ce634 + DAT_006d0fdc * 0x2b8) != 0) {
      *(undefined1 *)(*(int *)(&DAT_006ce634 + DAT_006d0fdc * 0x2b8) + 1) = 1;
    }
  }
  FUN_005777d0(0);
  FUN_00577690(0);
  FUN_00578420(DAT_006d0e1c);
  if (DAT_00695bd4 == 0) {
    if ((DAT_00695c04 == 0) || (DAT_006f3ae0 != 1)) goto LAB_005309a5;
  }
  else {
    DAT_00695c04 = 1;
    DAT_006f3ae0 = 1;
  }
  FUN_00577690(1);
LAB_005309a5:
  FUN_005777d0(1);
  return 0;
}


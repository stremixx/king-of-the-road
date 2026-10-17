
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056efe0(undefined4 param_1,undefined4 param_2,byte *param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  bool bVar15;
  
  DAT_006f2410 = 0;
  if ((param_3 != (byte *)0x0) && (*param_3 == 0)) {
    param_3 = (byte *)0x0;
  }
  if ((param_4 != (char *)0x0) && (*param_4 == '\0')) {
    param_4 = (char *)0x0;
  }
  iVar5 = FUN_005e4980(param_1);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x1c) == 0)) {
    if (*(int *)(*(int *)(DAT_00695c00 + 0x1e4) + 0x14) != 0) {
      iVar5 = *(int *)(*(int *)(DAT_00695c00 + 0x1e4) + 0x10);
      while (iVar5 == 0) {
        Sleep(10);
        iVar5 = *(int *)(*(int *)(DAT_00695c00 + 0x1e4) + 0x10);
      }
      FUN_005e3ac0();
    }
    _DAT_00674cb4 = param_1;
    DAT_00674cb0 = *(undefined4 *)(DAT_00695c00 + 0xbb0);
    puVar10 = (undefined4 *)&stack0x00000014;
    puVar12 = (undefined4 *)(DAT_00695c00 + 0x28c);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar11 = param_4;
    do {
      pcVar13 = pcVar11;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar11 = pcVar13 + -uVar7;
    pcVar13 = (char *)(*(int *)(DAT_00695c00 + 0x1e8) + 0x2c);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar7 = 0xffffffff;
    pbVar9 = param_3;
    do {
      pbVar14 = pbVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pbVar14 = pbVar9 + 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar14;
    } while (bVar2 != 0);
    uVar7 = ~uVar7;
    pbVar9 = pbVar14 + -uVar7;
    pbVar14 = (byte *)(*(int *)(DAT_00695c00 + 0x1e8) + 0xc);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar14 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar14 = pbVar14 + 1;
    }
    FUN_00596c60(0);
    FUN_005d8d70(param_3,param_4);
  }
  else if (*(int *)(DAT_006d0fd8 + 0x268) != 0) {
    if (param_3 != (byte *)0x0) {
      iVar3 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x134);
      pbVar9 = *(byte **)(iVar3 + 0x3c);
      do {
        bVar2 = *param_3;
        bVar15 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_0056f082:
          iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_0056f087;
        }
        if (bVar2 == 0) break;
        bVar2 = param_3[1];
        bVar15 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_0056f082;
        param_3 = param_3 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_0056f087:
      if (iVar6 != 0) {
        DAT_006f2410 = FUN_005d8940(*(undefined4 *)(iVar3 + 0x3c));
      }
    }
    uVar4 = *(undefined4 *)(iVar5 + 0x1c);
    FUN_005313f0(uVar4);
    FUN_00596c60(uVar4);
    return;
  }
  return;
}


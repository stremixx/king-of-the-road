
int **** FUN_00512aa0(int ****param_1)

{
  byte bVar1;
  int ***pppiVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  bool bVar11;
  int ****ppppiVar12;
  int *piVar13;
  undefined1 **ppuStack_158;
  int ***pppiStack_154;
  int ***pppiStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  int ***pppiStack_140;
  undefined4 *puStack_13c;
  undefined4 local_128 [2];
  undefined1 local_120 [8];
  byte abStack_118 [264];
  byte *pbStack_10;
  int iStack_c;
  
  ppuVar8 = (undefined1 **)0x0;
  puStack_13c = (undefined4 *)0x0;
  puStack_144 = local_120;
  pppiStack_140 = (int ***)s__dev__03d_006758e4;
  local_128[0] = 0;
  uStack_148 = 0x512ac0;
  FUN_0061c369();
  puStack_13c = local_128;
  puStack_14c = local_120;
  pppiVar2 = *param_1;
  pppiStack_140 = (int ***)0x0;
  puStack_144 = (undefined1 *)0x10;
  uStack_148 = 0;
  pppiStack_150 = (int ***)0x512adf;
  puStack_14c = (undefined1 *)FUN_0050b500();
  pppiStack_150 = (int ***)param_1;
  pppiStack_154 = (int ***)0x512ae7;
  (*(code *)pppiVar2[4])();
  while ((int ****)pppiStack_140 != (int ****)0x0) {
    pppiStack_154 = (int ***)&puStack_13c;
    ppuStack_158 = (undefined1 **)0x100;
    (*(code *)(*pppiStack_140)[3])(pppiStack_140,abStack_118);
    pbVar3 = abStack_118;
    pbVar9 = pbStack_10;
    do {
      bVar1 = *pbVar3;
      bVar11 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_00512b39:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00512b3e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar11 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_00512b39;
      pbVar3 = pbVar3 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00512b3e:
    if (iVar4 == 0) break;
    pppiStack_154 = pppiStack_140;
    ppuStack_158 = (undefined1 **)0x512b4c;
    (*(code *)(*pppiStack_140)[2])();
    ppuVar8 = (undefined1 **)((int)ppuVar8 + 1);
    ppuStack_158 = ppuVar8;
    FUN_0061c369(&puStack_13c,s__dev__03d_006758e4);
    pppiVar2 = *param_1;
    ppuStack_158 = &puStack_144;
    uVar5 = FUN_0050b500(&puStack_13c,0,0x10,0);
    (*(code *)pppiVar2[4])(param_1,uVar5);
  }
  pppiStack_154 = pppiStack_140;
  if (iStack_c != 0) {
    if ((iStack_c == 2) && ((int ****)pppiStack_140 != (int ****)0x0)) {
      ppuStack_158 = (undefined1 **)0x512c62;
      (*(code *)(*pppiStack_140)[2])();
      pppiVar2 = *param_1;
      ppuStack_158 = &puStack_144;
      piVar13 = (int *)0x0;
      uVar5 = FUN_0050b500(&puStack_13c,0,0x11);
      (*(code *)pppiVar2[4])(param_1,uVar5);
      puVar10 = (undefined4 *)&stack0xfffffecc;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      uVar6 = 0xffffffff;
      do {
        pbVar3 = pbStack_10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar3 = pbStack_10 + 1;
        bVar1 = *pbStack_10;
        pbStack_10 = pbVar3;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      pbVar3 = pbVar3 + -uVar6;
      pbVar9 = &stack0xfffffecc;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar9 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar9 = pbVar9 + 1;
      }
      ppppiVar12 = param_1;
      (**(code **)(*piVar13 + 0x10))(piVar13,&stack0xfffffecc,0x100,&ppuStack_158);
      pppiStack_140 = (int ***)ppppiVar12;
    }
    return (int ****)pppiStack_140;
  }
  if ((int ****)pppiStack_140 == (int ****)0x0) {
    pppiVar2 = *param_1;
    pppiStack_154 = (int ***)&pppiStack_140;
    ppuStack_158 = (undefined1 **)0x0;
    piVar13 = (int *)0x0;
    uVar5 = FUN_0050b500(&stack0xfffffec8,0x1011);
    ppppiVar12 = (int ****)0x512be7;
    (*(code *)pppiVar2[3])(param_1,uVar5);
  }
  else {
    ppuStack_158 = (undefined1 **)0x512ba4;
    (*(code *)(*pppiStack_140)[2])();
    pppiVar2 = *param_1;
    ppuStack_158 = &puStack_144;
    piVar13 = (int *)0x0;
    uVar5 = FUN_0050b500(&puStack_13c,0,0x11);
    (*(code *)pppiVar2[4])(param_1,uVar5);
    ppppiVar12 = param_1;
  }
  if (piVar13 == (int *)0x0) {
    FUN_005d2520(s_can_t_create_IStream_006758cc,pbStack_10);
  }
  puVar10 = (undefined4 *)&stack0xfffffecc;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  uVar6 = 0xffffffff;
  do {
    pbVar3 = pbStack_10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pbVar3 = pbStack_10 + 1;
    bVar1 = *pbStack_10;
    pbStack_10 = pbVar3;
  } while (bVar1 != 0);
  uVar6 = ~uVar6;
  pbVar3 = pbVar3 + -uVar6;
  pbVar9 = &stack0xfffffecc;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pbVar9 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar9 = pbVar9 + 1;
  }
  (**(code **)(*piVar13 + 0x10))(piVar13,&stack0xfffffecc,0x100,&ppuStack_158);
  return ppppiVar12;
}


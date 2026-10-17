
void FUN_004d9020(void)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined1 *puVar18;
  undefined1 local_1b4 [36];
  undefined1 local_190 [12];
  undefined4 local_184 [12];
  undefined1 local_154 [48];
  undefined1 local_124 [48];
  undefined1 local_f4 [48];
  undefined1 local_c4 [196];
  
  for (iVar4 = FUN_005410a0(); iVar9 = DAT_006f549c, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8) + -4) {
    iVar5 = FUN_00541090();
    iVar6 = FUN_005e4980(*(undefined4 *)(iVar5 + 0x168));
    iVar9 = *(int *)(iVar5 + 0x168) / 1000;
    if ((iVar9 == 100) || (iVar9 == 0x65)) {
      puVar14 = (undefined4 *)(iVar5 + 0x2c4);
      puVar16 = local_184;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      iVar9 = *(int *)(iVar5 + 0x28b4);
      uVar7 = FUN_0057d570(local_f4);
      uVar7 = FUN_005ab130(local_154,&DAT_006967c8 + iVar9 * 0x25c,local_184,uVar7);
      FUN_005ab130(local_1b4,uVar7);
      puVar18 = local_190;
      iVar9 = FUN_0057d570(local_124);
      uVar7 = FUN_0057d5d0(iVar9 + 0x24,puVar18);
      iVar9 = FUN_004e5437(uVar7);
      uVar7 = *(undefined4 *)(iVar9 + 0xc);
      FUN_00546140(local_c4);
      if (iVar5 == *(int *)(DAT_006d0fd8 + 0x268)) {
        pbVar3 = *(byte **)(*(int *)(iVar9 + 0x24) + 0x3c);
        pbVar12 = *(byte **)(*(int *)(iVar6 + 0xc) + 0xfb0);
        pbVar8 = pbVar3;
        do {
          bVar2 = *pbVar8;
          bVar17 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_004d917a:
            iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_004d917f;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar17 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_004d917a;
          pbVar8 = pbVar8 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_004d917f:
        if (iVar9 != 0) {
          FUN_005e4ad0(pbVar3,iVar6,0);
        }
        FUN_004d7590(iVar6,uVar7,local_1b4,local_c4);
      }
      else if (*(int *)(iVar5 + 0x168) / 1000 == 0x65) {
        FUN_004d7590(iVar6,uVar7,local_1b4,local_c4);
      }
      else {
        FUN_004d75e0(iVar6,local_1b4,local_c4);
      }
    }
    iVar9 = DAT_006f549c;
    if (*(int *)(iVar4 + 8) == 0) break;
  }
  do {
    if ((iVar9 == 0) || (iVar9 == 4)) {
      return;
    }
    if (((*(int *)(iVar9 + 0xc) == 2) && (*(int *)(iVar9 + 0xc74) == 1)) &&
       (iVar4 = FUN_005e4980(*(undefined4 *)(iVar9 + -0x24)), iVar4 != 0)) {
      iVar5 = FUN_0057d5d0();
      pcVar13 = *(char **)(iVar5 + 0xc);
      FUN_0057d570(local_184);
      iVar4 = *(int *)(iVar4 + 0x18);
      if (iVar4 != 0) {
        uVar10 = 0xffffffff;
        do {
          pcVar15 = pcVar13;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar15 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar15;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar13 = pcVar15 + -uVar10;
        pcVar15 = (char *)(iVar4 + 0x5c);
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        puVar14 = local_184;
        puVar16 = (undefined4 *)(iVar4 + 0x2c);
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
      }
    }
    iVar9 = *(int *)(iVar9 + 4);
  } while( true );
}



undefined4 FUN_0061ffca(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_006238a4(0x19);
  CodePage = FUN_00620177(param_1);
  if (CodePage != DAT_0077d810) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_00685608;
LAB_00620007:
      if (*pUVar5 != CodePage) goto code_r0x0062000b;
      local_8 = 0;
      puVar15 = &DAT_0077d940;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x685618);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_00685600)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_0077d940 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_0077d82c = 1;
      DAT_0077d810 = CodePage;
      DAT_0077da44 = FUN_006201c1(CodePage);
      DAT_0077d820 = *(undefined4 *)(iVar12 + 0x68560c);
      DAT_0077d824 = *(undefined4 *)(iVar12 + 0x685610);
      DAT_0077d828 = *(undefined4 *)(iVar12 + 0x685614);
      goto LAB_0062015b;
    }
    goto LAB_00620156;
  }
  goto LAB_0061fff1;
code_r0x0062000b:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x6856f7 < (int)pUVar5) goto code_r0x00620016;
  goto LAB_00620007;
code_r0x00620016:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_0077da44 = 0;
    puVar15 = &DAT_0077d940;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_0077d82c = 0;
      DAT_0077d810 = CodePage;
    }
    else {
      DAT_0077d810 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_0077d940 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_0077d940 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_0077da44 = FUN_006201c1(CodePage);
      DAT_0077d82c = 1;
    }
    DAT_0077d820 = 0;
    DAT_0077d824 = 0;
    DAT_0077d828 = 0;
  }
  else {
    if (DAT_0072d100 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_00620168;
    }
LAB_00620156:
    FUN_006201f4();
  }
LAB_0062015b:
  FUN_0062021d();
LAB_0061fff1:
  uVar14 = 0;
LAB_00620168:
  FUN_00623905(0x19);
  return uVar14;
}


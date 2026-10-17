
void __fastcall FUN_00553e20(int param_1)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char *pcVar14;
  float10 fVar15;
  
  fVar15 = (float10)FUN_004e2035();
  if (fVar15 - (float10)*(float *)(param_1 + 0x2ab4) <= (float10)*(float *)(param_1 + 0x2ab0)) {
    return;
  }
  fVar15 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x2ab4) = (float)fVar15;
  iVar10 = (*(int *)(param_1 + 0x2ab8) + 1) % 0x32;
  *(int *)(param_1 + 0x2ab8) = iVar10;
  *(float *)(param_1 + 0x2b84 + iVar10 * 4) = (float)fVar15;
  *(undefined4 *)(param_1 + 0x2abc + *(int *)(param_1 + 0x2ab8) * 4) =
       *(undefined4 *)(param_1 + 0x20);
  puVar4 = (undefined4 *)(param_1 + 0x204);
  puVar11 = puVar4;
  puVar13 = (undefined4 *)(*(int *)(param_1 + 0x2ab8) * 0x30 + 0x31c4 + param_1);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar10 = *(int *)(param_1 + 0x5460);
  if (iVar10 != 0) {
    puVar11 = (undefined4 *)(param_1 + 0x4484 + *(int *)(param_1 + 0x2ab8) * 0xc);
    *puVar11 = *(undefined4 *)(iVar10 + 0x2b40);
    puVar11[1] = *(undefined4 *)(iVar10 + 0x2b44);
    puVar11[2] = *(undefined4 *)(iVar10 + 0x2b48);
  }
  puVar11 = (undefined4 *)(param_1 + 0x50a0);
  puVar13 = (undefined4 *)(*(int *)(param_1 + 0x2ab8) * 0x30 + 0x3b24 + param_1);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(param_1 + 0x46dc + *(int *)(param_1 + 0x2ab8) * 4) =
       *(undefined4 *)(param_1 + 0x2aac);
  *(undefined4 *)(param_1 + 0x47a4 + *(int *)(param_1 + 0x2ab8) * 4) =
       *(undefined4 *)(param_1 + 0x330);
  uVar6 = 0xffffffff;
  pcVar12 = *(char **)(*(int *)(param_1 + 0x330) + 0xc);
  do {
    pcVar14 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar14 = pcVar12 + 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar14 + -uVar6;
  pcVar14 = (char *)(*(int *)(param_1 + 0x2ab8) * 0x21 + 0x486c + param_1);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar14 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pfVar1 = (float *)(param_1 + 0x2d14 + *(int *)(param_1 + 0x2ab8) * 0xc);
  *pfVar1 = *(float *)(param_1 + 0x1b0);
  pfVar1[1] = *(float *)(param_1 + 0x1b4);
  pfVar1[2] = *(float *)(param_1 + 0x1b8);
  puVar11 = (undefined4 *)(param_1 + 0x2f6c + *(int *)(param_1 + 0x2ab8) * 0xc);
  *puVar11 = *(undefined4 *)(param_1 + 0x1bc);
  puVar11[1] = *(undefined4 *)(param_1 + 0x1c0);
  puVar11[2] = *(undefined4 *)(param_1 + 0x1c4);
  bVar3 = true;
  *(float *)(param_1 + 0x2c4c + *(int *)(param_1 + 0x2ab8) * 4) =
       *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x1b0) +
       *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x274) +
       *(float *)(param_1 + 0x280) * *(float *)(param_1 + 0x1b8);
  iVar10 = *(int *)(param_1 + 0x2aac);
  if (iVar10 != 1) {
    if (iVar10 == 2) {
      *(undefined4 *)(param_1 + 0x4ee0) = 0;
      *(undefined4 *)(param_1 + 0x4ee4) = 0;
      *(undefined4 *)(param_1 + 0x4ee8) = 0;
      *(undefined4 *)(param_1 + 0x4eec) = 0;
      *(undefined4 *)(param_1 + 0x4ef0) = 0;
      puVar11 = (undefined4 *)(param_1 + 0x4ef4);
      for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar12 = *(char **)(*(int *)(param_1 + 0x330) + 0xc);
      do {
        pcVar14 = pcVar12;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar14 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar12 = pcVar14 + -uVar6;
      pcVar14 = (char *)(param_1 + 0x4f24);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar14 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar14 = pcVar14 + 1;
      }
      return;
    }
    if (iVar10 != 5) {
      *(undefined4 *)(param_1 + 0x4ee0) = 0;
      *(undefined4 *)(param_1 + 0x4ee4) = 0;
      *(undefined4 *)(param_1 + 0x4ee8) = 0;
      *(undefined4 *)(param_1 + 0x4eec) = 0;
      *(undefined4 *)(param_1 + 0x4ef0) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x4ee0) = 0;
    *(undefined4 *)(param_1 + 0x4ee4) = 0;
    *(undefined4 *)(param_1 + 0x4ee8) = 0;
    *(undefined4 *)(param_1 + 0x4eec) = 0;
    *(undefined4 *)(param_1 + 0x4ef0) = 0;
    puVar11 = (undefined4 *)(param_1 + 0x4ef4);
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    pcVar12 = *(char **)(*(int *)(param_1 + 0x330) + 0xc);
    goto LAB_00554170;
  }
  puVar4 = (undefined4 *)(param_1 + 0x4ef0);
  iVar10 = 4;
  do {
    *puVar4 = puVar4[-1];
    puVar4 = puVar4 + -1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = *(int *)(param_1 + 0x5460);
  piVar9 = (int *)(param_1 + 0x4ee0);
  *piVar9 = 0;
  if (*(int *)(iVar10 + 0x3344) != 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x28bc);
  if (iVar8 < 1) {
LAB_005540f7:
    if (*(int *)(iVar10 + 0x3468) == 0) {
      *piVar9 = 1;
    }
  }
  else {
    psVar5 = (short *)(iVar10 + 0x2b68);
    do {
      if (*psVar5 == 0) {
        bVar3 = false;
      }
      psVar5 = psVar5 + 0x7c;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (bVar3) goto LAB_005540f7;
  }
  bVar3 = true;
  iVar10 = 5;
  do {
    if ((*piVar9 == 0) || (!bVar3)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    piVar9 = piVar9 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (!bVar3) {
    return;
  }
  iVar8 = (*(int *)(param_1 + 0x2ab8) + 0x2d) % 0x32;
  puVar4 = (undefined4 *)(iVar8 * 0x30 + 0x31c4 + param_1);
  puVar11 = (undefined4 *)(param_1 + 0x4ef4);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar11 = puVar11 + 1;
  }
  pcVar12 = (char *)(iVar8 * 0x21 + 0x486c + param_1);
LAB_00554170:
  uVar6 = 0xffffffff;
  do {
    pcVar14 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar14 = pcVar12 + 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar14 + -uVar6;
  pcVar14 = (char *)(param_1 + 0x4f24);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar14 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar14 = pcVar14 + 1;
  }
  return;
}


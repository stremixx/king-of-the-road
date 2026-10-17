
void __fastcall FUN_00513230(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  double *pdVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  FUN_005d7cc0();
  uVar2 = *(undefined4 *)(param_1 + 0x500);
  puVar8 = (undefined4 *)(param_1 + 0x210);
  puVar10 = (undefined4 *)(param_1 + 0x388);
  for (iVar6 = 0x5e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  pfVar3 = (float *)&DAT_006d0b10;
  pdVar7 = (double *)(param_1 + 0x1b0);
  do {
    if (0x6d0b33 < (int)pfVar3) break;
    fVar1 = *pfVar3;
    pfVar3 = pfVar3 + 3;
    pdVar7[-8] = (double)fVar1;
    *pdVar7 = (double)fVar1;
    pdVar7 = pdVar7 + 1;
  } while ((int)pfVar3 < 0x6d0b70);
  bVar5 = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  pcVar9 = &DAT_006d0aae;
  do {
    if (0x6d0ac5 < (int)pcVar9) break;
    if (*pcVar9 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 1 << (bVar5 & 0x1f);
    }
    pcVar9 = pcVar9 + 2;
    uVar4 = *(uint *)(param_1 + 500) | uVar4;
    *(uint *)(param_1 + 500) = uVar4;
    bVar5 = bVar5 + 1;
    *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) | uVar4;
  } while ((int)pcVar9 < 0x6d0aee);
  bVar5 = 0;
  pcVar9 = &DAT_006d0aee;
  do {
    if (*pcVar9 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 1 << (bVar5 & 0x1f);
    }
    pcVar9 = pcVar9 + 2;
    uVar4 = *(uint *)(param_1 + 0x200) | uVar4;
    *(uint *)(param_1 + 0x200) = uVar4;
    bVar5 = bVar5 + 1;
    *(uint *)(param_1 + 0x1fc) = *(uint *)(param_1 + 0x1fc) | uVar4;
  } while ((int)pcVar9 < 0x6d0af6);
  return;
}


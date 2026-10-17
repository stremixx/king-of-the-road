
void __thiscall FUN_00545620(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  undefined4 *puVar24;
  undefined1 local_30 [48];
  
  *(undefined4 *)(param_1 + 0x19c) = *param_2;
  pfVar1 = (float *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x1a4) = param_2[1];
  *(undefined4 *)(param_1 + 0x1a8) = param_2[2];
  *(undefined4 *)(param_1 + 0x1ac) = param_2[3];
  pfVar21 = (float *)(param_2 + 4);
  pfVar23 = pfVar1;
  for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
    *pfVar23 = *pfVar21;
    pfVar21 = pfVar21 + 1;
    pfVar23 = pfVar23 + 1;
  }
  puVar17 = (undefined4 *)FUN_005aba00(local_30,pfVar1);
  uVar16 = *(undefined4 *)(param_1 + 0x1a4);
  puVar24 = (undefined4 *)(param_1 + 0x2f4);
  for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar24 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar24 = puVar24 + 1;
  }
  *(undefined4 *)(param_1 + 0xcd4) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0xce8) = uVar16;
  iVar22 = 0;
  *(undefined4 *)(param_1 + 0xcec) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0xcf0) = *(undefined4 *)(param_1 + 0x1ac);
  iVar19 = *(int *)(param_1 + 0x28b4);
  if (0 < (int)(&DAT_00696d3c)[iVar19 * 0x25c]) {
    iVar20 = 0;
    pfVar21 = (float *)(param_1 + 0xf08);
    do {
      iVar19 = iVar19 * 0x970;
      pfVar23 = (float *)(&DAT_00696d44 + iVar19 + iVar20);
      iVar22 = iVar22 + 1;
      fVar2 = *(float *)(&DAT_00696d48 + iVar19 + iVar20);
      fVar3 = *(float *)(param_1 + 0x2e0);
      fVar4 = *pfVar23;
      fVar5 = *(float *)(param_1 + 0x2d4);
      fVar6 = *(float *)(param_1 + 0x2c8);
      fVar7 = *(float *)(&DAT_00696d40 + iVar19 + iVar20);
      fVar8 = *(float *)(param_1 + 0x2ec);
      fVar9 = *(float *)(&DAT_00696d48 + iVar19 + iVar20);
      fVar10 = *(float *)(param_1 + 0x2e4);
      fVar11 = *(float *)(param_1 + 0x2cc);
      fVar12 = *(float *)(&DAT_00696d40 + iVar19 + iVar20);
      fVar13 = *pfVar23;
      fVar14 = *(float *)(param_1 + 0x2d8);
      fVar15 = *(float *)(param_1 + 0x2f0);
      *pfVar21 = *pfVar23 * *(float *)(param_1 + 0x2d0) +
                 *(float *)(&DAT_00696d40 + iVar19 + iVar20) * *pfVar1 +
                 *(float *)(&DAT_00696d48 + iVar19 + iVar20) * *(float *)(param_1 + 0x2dc) +
                 *(float *)(param_1 + 0x2e8);
      pfVar21[1] = fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8;
      pfVar21[2] = fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10 + fVar15;
      iVar19 = *(int *)(param_1 + 0x28b4);
      iVar20 = iVar20 + 0xc;
      pfVar21 = pfVar21 + 3;
    } while (iVar22 < (int)(&DAT_00696d3c)[iVar19 * 0x25c]);
  }
  iVar19 = *(int *)(param_1 + 0x28b4);
  iVar22 = 0;
  if (0 < (int)(&DAT_00696b30)[iVar19 * 0x25c]) {
    iVar20 = 0;
    pfVar21 = (float *)(param_1 + 0xe18);
    do {
      iVar19 = iVar19 * 0x970;
      iVar22 = iVar22 + 1;
      fVar2 = *(float *)((int)&DAT_00696b40 + iVar19 + iVar20);
      fVar3 = *(float *)(param_1 + 0x2e0);
      fVar4 = *(float *)((int)&DAT_00696b3c + iVar19 + iVar20);
      fVar5 = *(float *)(param_1 + 0x2d4);
      fVar6 = *(float *)(param_1 + 0x2c8);
      fVar7 = *(float *)((int)&DAT_00696b38 + iVar19 + iVar20);
      fVar8 = *(float *)(param_1 + 0x2ec);
      fVar9 = *(float *)(param_1 + 0x2e4);
      fVar10 = *(float *)((int)&DAT_00696b40 + iVar19 + iVar20);
      fVar11 = *(float *)(param_1 + 0x2d8);
      fVar12 = *(float *)((int)&DAT_00696b3c + iVar19 + iVar20);
      fVar13 = *(float *)(param_1 + 0x2cc);
      fVar14 = *(float *)((int)&DAT_00696b38 + iVar19 + iVar20);
      fVar15 = *(float *)(param_1 + 0x2f0);
      *pfVar21 = *(float *)((int)&DAT_00696b40 + iVar19 + iVar20) * *(float *)(param_1 + 0x2dc) +
                 *(float *)((int)&DAT_00696b3c + iVar19 + iVar20) * *(float *)(param_1 + 0x2d0) +
                 *pfVar1 * *(float *)((int)&DAT_00696b38 + iVar19 + iVar20) +
                 *(float *)(param_1 + 0x2e8);
      pfVar21[1] = fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8;
      pfVar21[2] = fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10 + fVar15;
      iVar19 = *(int *)(param_1 + 0x28b4);
      iVar20 = iVar20 + 0xc;
      pfVar21 = pfVar21 + 3;
    } while (iVar22 < (int)(&DAT_00696b30)[iVar19 * 0x25c]);
  }
  iVar19 = *(int *)(param_1 + 0x28b4);
  iVar22 = 0;
  if (0 < (int)(&DAT_00696b34)[iVar19 * 0x25c]) {
    iVar20 = 0;
    do {
      iVar18 = iVar19 * 0x970;
      fVar2 = *(float *)(&DAT_00696c28 + iVar18 + iVar20);
      fVar3 = *(float *)(param_1 + 0x2c8);
      fVar4 = *(float *)(&DAT_00696c30 + iVar18 + iVar20);
      fVar5 = *(float *)(param_1 + 0x2e0);
      fVar6 = *(float *)(&DAT_00696c2c + iVar18 + iVar20);
      fVar7 = *(float *)(param_1 + 0x2d4);
      fVar8 = *(float *)(param_1 + 0x2ec);
      fVar9 = *(float *)(&DAT_00696c30 + iVar18 + iVar20);
      fVar10 = *(float *)(param_1 + 0x2e4);
      fVar11 = *(float *)(&DAT_00696c2c + iVar18 + iVar20);
      fVar12 = *(float *)(param_1 + 0x2d8);
      fVar13 = *(float *)(&DAT_00696c28 + iVar18 + iVar20);
      fVar14 = *(float *)(param_1 + 0x2cc);
      iVar19 = (&DAT_00696b30)[iVar19 * 0x25c] + iVar22;
      iVar22 = iVar22 + 1;
      fVar15 = *(float *)(param_1 + 0x2f0);
      pfVar21 = (float *)(param_1 + 0xe18 + iVar19 * 0xc);
      *pfVar21 = *(float *)(&DAT_00696c28 + iVar18 + iVar20) * *pfVar1 +
                 *(float *)(&DAT_00696c2c + iVar18 + iVar20) * *(float *)(param_1 + 0x2d0) +
                 *(float *)(&DAT_00696c30 + iVar18 + iVar20) * *(float *)(param_1 + 0x2dc) +
                 *(float *)(param_1 + 0x2e8);
      pfVar21[1] = fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8;
      pfVar21[2] = fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10 + fVar15;
      iVar19 = *(int *)(param_1 + 0x28b4);
      iVar20 = iVar20 + 0xc;
    } while (iVar22 < (int)(&DAT_00696b34)[iVar19 * 0x25c]);
  }
  FUN_0058c9b0();
  return;
}


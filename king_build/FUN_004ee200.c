
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ee200(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  float fVar16;
  float fVar17;
  int iVar18;
  float *pfVar19;
  
  if (*(int *)(param_1 + 0x2778) == 2) {
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x1ea4 + *(int *)(param_1 + 0xdd4) * 0xc) =
           *(undefined4 *)(param_1 + 0x1cc4);
      *(undefined4 *)(param_1 + 0x1cb8 + *(int *)(param_1 + 0xdd4) * 0xc) =
           *(undefined4 *)(param_1 + 0x1cc4);
      return;
    }
    iVar18 = *(int *)(param_1 + 0x8cc);
    pfVar19 = (float *)(&DAT_00696fa4 + iVar18 * 0x25c);
    fVar4 = *(float *)(param_1 + 0x27ac);
    fVar5 = (float)(&DAT_00696fac)[iVar18 * 0x25c];
    fVar6 = *(float *)(param_1 + 0x2794);
    fVar7 = *pfVar19;
    fVar8 = *(float *)(param_1 + 0x27a0);
    fVar9 = (float)(&DAT_00696fa8)[iVar18 * 0x25c];
    fVar10 = *(float *)(param_1 + 0x27b8);
    fVar11 = *(float *)(param_1 + 0x27b0);
    fVar12 = (float)(&DAT_00696fac)[iVar18 * 0x25c];
    fVar13 = *(float *)(param_1 + 0x2798);
    fVar14 = *pfVar19;
    fVar15 = *(float *)(param_1 + 0x27a4);
    fVar16 = (float)(&DAT_00696fa8)[iVar18 * 0x25c];
    fVar17 = *(float *)(param_1 + 0x27bc);
    pfVar1 = (float *)(param_1 + (*(int *)(param_1 + 0xdd4) + 0x28d) * 0xc);
    *pfVar1 = *pfVar19 * *(float *)(param_1 + 0x2790) +
              *(float *)(param_1 + 0x279c) * (float)(&DAT_00696fa8)[iVar18 * 0x25c] +
              *(float *)(param_1 + 0x27a8) * (float)(&DAT_00696fac)[iVar18 * 0x25c] +
              *(float *)(param_1 + 0x27b4);
    pfVar1[1] = fVar8 * fVar9 + fVar6 * fVar7 + fVar4 * fVar5 + fVar10;
    pfVar1[2] = fVar15 * fVar16 + fVar13 * fVar14 + fVar11 * fVar12 + fVar17;
    *(float *)(param_1 + 0x1ea4 + *(int *)(param_1 + 0xdd4) * 0xc) =
         *(float *)(param_1 + 0x1cc4) + (float)_DAT_0064b948;
    puVar2 = (undefined4 *)(param_1 + (*(int *)(param_1 + 0xdd4) * 3 + 0x7a7) * 4);
    puVar3 = (undefined4 *)(param_1 + (*(int *)(param_1 + 0xdd4) * 3 + 0x72c) * 4);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
  }
  return;
}


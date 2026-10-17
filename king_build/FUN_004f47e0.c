
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f47e0(int param_1,int param_2)

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
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  float10 fVar20;
  float10 fVar21;
  float *local_17c;
  int local_178;
  int local_174;
  float *local_170;
  float local_124;
  float local_120;
  float local_11c;
  float local_118 [8];
  float local_f8 [8];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  float local_c0 [24];
  float local_60 [24];
  
  iVar19 = *(int *)(param_1 + 0xdd4);
  if (0 < iVar19) {
    pfVar15 = local_f8;
    do {
      *pfVar15 = ABS(*(float *)((param_2 - (int)local_f8) + (int)pfVar15));
      pfVar15 = pfVar15 + 1;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  *(undefined4 *)(param_1 + 0x19f4) = 1;
  *(undefined4 *)(param_1 + 0x19f8) = 1;
  pfVar15 = local_118;
  local_118[0] = 0.0;
  for (iVar19 = 7; pfVar15 = pfVar15 + 1, iVar19 != 0; iVar19 = iVar19 + -1) {
    *pfVar15 = 0.0;
  }
  pfVar15 = local_c0 + 2;
  iVar19 = 8;
  do {
    pfVar15[-2] = 0.0;
    pfVar15[-1] = 0.0;
    *pfVar15 = 0.0;
    pfVar15 = pfVar15 + 3;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  pfVar15 = local_60 + 2;
  iVar19 = 8;
  do {
    pfVar15[-2] = 0.0;
    pfVar15[-1] = 0.0;
    *pfVar15 = 0.0;
    pfVar15 = pfVar15 + 3;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  pfVar15 = local_c0 + 2;
  iVar19 = 8;
  do {
    pfVar15[-2] = 0.0;
    pfVar15[-1] = 0.0;
    *pfVar15 = 0.0;
    pfVar15 = pfVar15 + 3;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar15 = local_f8;
    pfVar16 = (float *)(param_1 + 0xd00);
    do {
      fVar2 = *pfVar15;
      iVar19 = iVar19 + 1;
      pfVar15 = pfVar15 + 1;
      *pfVar16 = pfVar16[0x65c] * fVar2;
      pfVar16 = pfVar16 + 1;
    } while (iVar19 < *(int *)(param_1 + 0xdd4));
  }
  local_174 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    local_17c = local_c0;
    local_170 = (float *)(param_1 + 0x19a4);
    pfVar17 = local_118;
    pfVar15 = (float *)(param_1 + 0x1964);
    pfVar16 = (float *)(param_1 + 0x20fc);
    do {
      if (*(short *)local_170 == 0) {
        fVar20 = (float10)FUN_004f45e0(7,ABS(pfVar15[0x33]),ABS(*(float *)(param_1 + 0xdcc)));
        fVar2 = pfVar15[-0x319];
        iVar19 = *(int *)(param_1 + 0x2768);
        *pfVar17 = (float)(fVar20 * (float10)fVar2);
        if (iVar19 == 0) {
          *pfVar17 = (float)(fVar20 * (float10)fVar2 * (float10)_DAT_0067337c);
        }
        if (*pfVar15 < _DAT_0064b240) {
          *pfVar17 = *pfVar17 * *pfVar15;
        }
      }
      else {
        *pfVar17 = 0.0;
      }
      fVar2 = *pfVar17;
      pfVar1 = pfVar16 + -2;
      *pfVar1 = fVar2 * pfVar16[-0x57e];
      pfVar16[-1] = fVar2 * pfVar16[-0x57d];
      *pfVar16 = fVar2 * pfVar16[-0x57c];
      fVar2 = *(float *)(param_1 + 0x91c);
      fVar3 = *pfVar16;
      fVar4 = *pfVar1;
      fVar5 = *(float *)(param_1 + 0x904);
      fVar6 = pfVar16[-1];
      fVar7 = *(float *)(param_1 + 0x910);
      fVar8 = pfVar16[-1];
      fVar9 = *(float *)(param_1 + 0x914);
      fVar10 = *(float *)(param_1 + 0x920);
      fVar11 = *pfVar16;
      fVar12 = *(float *)(param_1 + 0x908);
      fVar13 = *pfVar1;
      *local_17c = *pfVar16 * *(float *)(param_1 + 0x918) +
                   pfVar16[-1] * *(float *)(param_1 + 0x90c) + *(float *)(param_1 + 0x900) * *pfVar1
      ;
      fVar14 = pfVar15[0x3e];
      local_17c[1] = fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3;
      local_17c[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9;
      if ((ABS(fVar14) <= (float)_DAT_0064c9e0) || (*pfVar15 <= (float)_DAT_0064a6d0)) {
        *(undefined1 *)(local_174 + 0x19c4 + param_1) = 0;
      }
      else {
        *(undefined1 *)(local_174 + 0x19c4 + param_1) = 1;
      }
      local_170 = (float *)((int)local_170 + 2);
      local_174 = local_174 + 1;
      pfVar17 = pfVar17 + 1;
      pfVar15 = pfVar15 + 1;
      pfVar16 = pfVar16 + 3;
      local_17c = local_17c + 3;
    } while (local_174 < *(int *)(param_1 + 0xdd4));
  }
  FUN_004f1d10();
  if (*(char *)(param_1 + 0x19c2) != '\0') {
    *(undefined4 *)(param_1 + 0x19f4) = 0;
  }
  iVar19 = *(int *)(param_1 + 0xdd4);
  *(float *)(param_1 + 0xc78) = DAT_007015b0;
  *(float *)(param_1 + 0xc7c) = DAT_007015b4;
  *(float *)(param_1 + 0xc80) = DAT_007015b8;
  *(float *)(param_1 + 0xc24) = DAT_007015b0;
  *(float *)(param_1 + 0xc28) = DAT_007015b4;
  *(float *)(param_1 + 0xc2c) = DAT_007015b8;
  *(float *)(param_1 + 0xccc) = DAT_007015b0;
  *(float *)(param_1 + 0xcd0) = DAT_007015b4;
  *(float *)(param_1 + 0xcd4) = DAT_007015b8;
  if (ABS(*(float *)(param_1 + 0x1a50)) <= (float)_DAT_0064a590) {
    fVar2 = *(float *)(param_1 + 0x1f78) / *(float *)(param_1 + 0x1f60);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1a54) / *(float *)(param_1 + 0x1a50);
  }
  fVar3 = fVar2 * ((*(float *)(param_1 + 0xdcc) * *(float *)(param_1 + 0xdcc) *
                    *(float *)(param_1 + 0x1a54) * *(float *)(param_1 + 0x2640)) /
                  *(float *)(param_1 + 0x1f78));
  fVar2 = fVar2 * ((*(float *)(param_1 + 0x1a58) * *(float *)(param_1 + 0xdd0) *
                    *(float *)(param_1 + 0xdd0) * *(float *)(param_1 + 0x2640)) /
                  *(float *)(param_1 + 0x1f78));
  if (iVar19 == 6) {
    fVar2 = fVar2 * _DAT_0064b248;
  }
  if (iVar19 == 8) {
    fVar3 = fVar3 * _DAT_0064b248;
  }
  iVar18 = 0;
  if (0 < iVar19) {
    local_17c = (float *)(param_1 + 0x19a4);
    pfVar15 = (float *)(param_1 + 0xd00);
    do {
      if (*(short *)local_17c == 0) {
        pfVar16 = local_118 + iVar18;
        if (pfVar15[0x3b5] == 0.0) {
          *pfVar16 = fVar2;
        }
        else {
          *pfVar16 = fVar3;
        }
        fVar4 = *pfVar15;
        local_f8[iVar18] = 1.0;
        if (fVar4 < ABS(*pfVar16)) {
          local_f8[iVar18] = *pfVar15 / ABS(*pfVar16);
          fVar4 = *pfVar15;
          if (*pfVar16 <= _DAT_0064b254) {
            fVar4 = -fVar4;
          }
          *pfVar16 = fVar4;
        }
      }
      iVar18 = iVar18 + 1;
      local_17c = (float *)((int)local_17c + 2);
      pfVar15 = pfVar15 + 1;
    } while (iVar18 < iVar19);
  }
  local_174 = 0;
  if (0 < iVar19) {
    local_170 = local_118;
    pfVar15 = (float *)(param_1 + 0x1a30);
    local_17c = (float *)(param_1 + 0x19a4);
    pfVar16 = (float *)(param_1 + 0xb6c);
    local_178 = 0;
    do {
      pfVar17 = pfVar16 + 0x57a;
      *pfVar17 = DAT_007015b0;
      pfVar16[0x57b] = DAT_007015b4;
      pfVar16[0x57c] = DAT_007015b8;
      if ((*(short *)local_17c == 0) && (pfVar15[-0x17] == 0.0)) {
        fVar2 = *local_170;
        *pfVar17 = fVar2 * pfVar16[-2];
        pfVar16[0x57b] = fVar2 * pfVar16[-1];
        pfVar16[0x57c] = fVar2 * *pfVar16;
        if (pfVar16[0x562] * *pfVar17 +
            pfVar16[0x57b] * pfVar16[0x563] + pfVar16[0x57c] * pfVar16[0x564] <=
            (float)_DAT_0064a668) {
          *pfVar17 = DAT_007015b0;
          pfVar16[0x57b] = DAT_007015b4;
          pfVar16[0x57c] = DAT_007015b8;
        }
        else {
          fVar2 = pfVar16[0x562] * pfVar16[-2] +
                  pfVar16[0x563] * pfVar16[-1] + *pfVar16 * pfVar16[0x564];
          fVar20 = (float10)FUN_004f45e0(7,ABS(*pfVar15),ABS(*(float *)(param_1 + 0xdcc)));
          fVar20 = ((float10)pfVar16[-2] * (float10)*pfVar17 +
                   (float10)pfVar16[0x57b] * (float10)pfVar16[-1] +
                   (float10)*pfVar16 * (float10)pfVar16[0x57c]) * fVar20;
          fVar21 = fVar20 - (float10)fVar2;
          if ((*(char *)(local_174 + 0x19c4 + param_1) != '\0') || (ABS((float)fVar20) < ABS(fVar2))
             ) {
            fVar21 = (float10)_DAT_0064b254;
          }
          *pfVar17 = (float)(fVar21 * (float10)pfVar16[-2]);
          pfVar16[0x57b] = (float)(fVar21 * (float10)pfVar16[-1]);
          pfVar16[0x57c] = (float)(fVar21 * (float10)*pfVar16);
        }
      }
      pfVar1 = pfVar16 + 0x562;
      fVar2 = *(float *)(param_1 + 0x91c);
      fVar3 = pfVar16[0x57c];
      fVar4 = *(float *)(param_1 + 0x910);
      fVar5 = pfVar16[0x57b];
      *(float *)((int)local_c0 + local_178) =
           *(float *)(param_1 + 0x900) * *pfVar17 +
           *(float *)(param_1 + 0x90c) * pfVar16[0x57b] +
           *(float *)(param_1 + 0x918) * pfVar16[0x57c];
      fVar6 = *(float *)(param_1 + 0x920);
      fVar7 = pfVar16[0x57c];
      fVar8 = *(float *)(param_1 + 0x914);
      fVar9 = pfVar16[0x57b];
      *(float *)((int)local_c0 + local_178 + 4) =
           *(float *)(param_1 + 0x904) * *pfVar17 + fVar4 * fVar5 + fVar2 * fVar3;
      fVar2 = *(float *)(param_1 + 0x918);
      fVar3 = pfVar16[0x564];
      fVar4 = *(float *)(param_1 + 0x90c);
      fVar5 = pfVar16[0x563];
      *(float *)((int)local_c0 + local_178 + 8) =
           *(float *)(param_1 + 0x908) * *pfVar17 + fVar8 * fVar9 + fVar6 * fVar7;
      fVar6 = *(float *)(param_1 + 0x91c);
      fVar7 = pfVar16[0x564];
      fVar8 = *(float *)(param_1 + 0x910);
      fVar9 = pfVar16[0x563];
      *(float *)((int)local_60 + local_178) =
           *(float *)(param_1 + 0x900) * *pfVar1 + fVar4 * fVar5 + fVar2 * fVar3;
      fVar2 = *(float *)(param_1 + 0x920);
      fVar3 = pfVar16[0x564];
      fVar4 = *(float *)(param_1 + 0x914);
      fVar5 = pfVar16[0x563];
      *(float *)((int)local_60 + local_178 + 4) =
           *(float *)(param_1 + 0x904) * *pfVar1 + fVar8 * fVar9 + fVar6 * fVar7;
      *(float *)((int)local_60 + local_178 + 8) =
           *(float *)(param_1 + 0x908) * *pfVar1 + fVar4 * fVar5 + fVar2 * fVar3;
      FUN_005aae00(local_cc,pfVar17);
      fVar2 = *pfVar17 * *(float *)(param_1 + 0x900) +
              *(float *)(param_1 + 0x90c) * pfVar16[0x57b] +
              *(float *)(param_1 + 0x918) * pfVar16[0x57c];
      fVar4 = *(float *)(param_1 + 0x910) * pfVar16[0x57b] +
              *(float *)(param_1 + 0x91c) * pfVar16[0x57c] + *(float *)(param_1 + 0x904) * *pfVar17;
      fVar3 = *(float *)(param_1 + 0x914) * pfVar16[0x57b] +
              *(float *)(param_1 + 0x920) * pfVar16[0x57c] + *(float *)(param_1 + 0x908) * *pfVar17;
      local_124 = fVar3 * pfVar16[0x337] - fVar4 * pfVar16[0x338];
      local_120 = fVar2 * pfVar16[0x338] - fVar3 * pfVar16[0x336];
      local_11c = fVar4 * pfVar16[0x336] - fVar2 * pfVar16[0x337];
      FUN_005aae00(local_d8,&local_124);
      FUN_004e20b1(pfVar1,s_make_frs_2_00673714,*(float *)(param_1 + 0x2640) * _DAT_0064c7a8);
      local_174 = local_174 + 1;
      local_17c = (float *)((int)local_17c + 2);
      local_170 = local_170 + 1;
      pfVar15 = pfVar15 + 1;
      pfVar16 = pfVar16 + 3;
      local_178 = local_178 + 0xc;
    } while (local_174 < *(int *)(param_1 + 0xdd4));
  }
  FUN_004f1d10();
  return;
}


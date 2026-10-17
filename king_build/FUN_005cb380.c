
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005cb380(float *param_1,int param_2,uint param_3,float param_4)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  
  if (((param_3 * 4 < 0x18c) && (param_2 != 0)) && (param_3 < 100)) {
    if (param_4 <= _DAT_0064b240) {
      if (param_4 < _DAT_0064b254) {
        param_4 = 0.0;
      }
    }
    else {
      param_4 = 1.0;
    }
    fVar46 = _DAT_0064b254 * param_4;
    fVar47 = _DAT_0064b254 * param_4;
    fVar55 = _DAT_0064b254 * param_4;
    fVar48 = param_1[0xc] * _DAT_0064b868 * param_4;
    fVar49 = param_4 * 0.0;
    fVar56 = param_1[0xc] * _DAT_0064b248 * param_4;
    fVar51 = _DAT_0064b254 * param_4;
    fVar52 = _DAT_0064b254 * param_4;
    fVar50 = param_1[0xc] * param_4;
    fVar53 = param_1[0xc] * _DAT_0064b248 * param_4;
    fVar54 = param_4 * 0.0;
    param_4 = param_1[0xc] * _DAT_0064b248 * param_4;
    fVar2 = param_1[4];
    fVar3 = param_1[7];
    fVar4 = param_1[1];
    fVar5 = param_1[10];
    fVar6 = param_1[8];
    fVar7 = param_1[5];
    fVar8 = param_1[2];
    fVar9 = param_1[0xb];
    fVar10 = param_1[6];
    fVar11 = param_1[3];
    fVar12 = *param_1;
    fVar13 = param_1[9];
    fVar14 = param_1[4];
    fVar15 = param_1[7];
    fVar16 = param_1[1];
    fVar17 = param_1[10];
    fVar18 = param_1[8];
    fVar19 = param_1[5];
    fVar20 = param_1[2];
    fVar21 = param_1[0xb];
    fVar22 = param_1[6];
    fVar23 = param_1[3];
    fVar24 = *param_1;
    fVar25 = param_1[9];
    fVar26 = param_1[4];
    fVar27 = param_1[7];
    fVar28 = param_1[1];
    fVar29 = param_1[10];
    fVar30 = param_1[8];
    fVar31 = param_1[5];
    fVar32 = param_1[2];
    fVar33 = param_1[0xb];
    fVar34 = param_1[6];
    fVar35 = param_1[3];
    fVar36 = *param_1;
    fVar37 = param_1[9];
    fVar38 = param_1[4];
    fVar39 = param_1[7];
    fVar40 = param_1[1];
    fVar41 = param_1[10];
    fVar42 = param_1[8];
    fVar43 = param_1[5];
    fVar44 = param_1[2];
    fVar45 = param_1[0xb];
    pfVar1 = (float *)(param_2 + param_3 * 0x60);
    *pfVar1 = fVar46 * *param_1 + fVar47 * param_1[3] + fVar55 * param_1[6] + param_1[9];
    pfVar1[1] = fVar46 * fVar4 + fVar55 * fVar3 + fVar47 * fVar2 + fVar5;
    pfVar1[2] = fVar46 * fVar8 + fVar47 * fVar7 + fVar55 * fVar6 + fVar9;
    uVar57 = __ftol();
    uVar58 = __ftol();
    uVar59 = __ftol();
    pfVar1[3] = (float)(((uVar57 | 0xffffff00) << 8 | uVar58) << 8 | uVar59);
    pfVar1[4] = 1.0;
    pfVar1[5] = 0.0;
    *(float *)(param_2 + (param_3 * 0xc + 3) * 8) =
         fVar48 * fVar12 + fVar49 * fVar11 + fVar56 * fVar10 + fVar13;
    pfVar1[7] = fVar48 * fVar16 + fVar56 * fVar15 + fVar49 * fVar14 + fVar17;
    pfVar1[8] = fVar48 * fVar20 + fVar49 * fVar19 + fVar56 * fVar18 + fVar21;
    uVar57 = __ftol();
    uVar58 = __ftol();
    uVar59 = __ftol();
    pfVar1[9] = (float)(((uVar57 | 0xffffff00) << 8 | uVar58) << 8 | uVar59);
    pfVar1[10] = 0.0;
    pfVar1[0xb] = 0.0;
    *(float *)(param_2 + (param_3 * 0xc + 6) * 8) =
         fVar51 * fVar24 + fVar52 * fVar23 + fVar50 * fVar22 + fVar25;
    pfVar1[0xd] = fVar51 * fVar28 + fVar50 * fVar27 + fVar52 * fVar26 + fVar29;
    pfVar1[0xe] = fVar51 * fVar32 + fVar52 * fVar31 + fVar50 * fVar30 + fVar33;
    uVar57 = __ftol();
    uVar58 = __ftol();
    uVar59 = __ftol();
    pfVar1[0xf] = (float)(((uVar57 | 0xffffff00) << 8 | uVar58) << 8 | uVar59);
    pfVar1[0x10] = 0.0;
    pfVar1[0x11] = 1.0;
    *(float *)(param_2 + (param_3 * 0xc + 9) * 8) =
         fVar53 * fVar36 + fVar54 * fVar35 + param_4 * fVar34 + fVar37;
    pfVar1[0x13] = fVar53 * fVar40 + param_4 * fVar39 + fVar54 * fVar38 + fVar41;
    pfVar1[0x14] = fVar53 * fVar44 + fVar54 * fVar43 + param_4 * fVar42 + fVar45;
    uVar57 = __ftol();
    uVar58 = __ftol();
    uVar59 = __ftol();
    pfVar1[0x15] = (float)(((uVar57 | 0xffffff00) << 8 | uVar58) << 8 | uVar59);
    pfVar1[0x16] = 1.0;
    pfVar1[0x17] = 1.0;
    return param_3 + 1;
  }
  return 0;
}


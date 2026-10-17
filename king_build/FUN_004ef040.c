
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ef040(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  int iVar12;
  float10 fVar13;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x2638) == 0) {
    *(undefined4 *)(param_1 + 0x58) = DAT_007015b0;
    *(undefined4 *)(param_1 + 0x5c) = DAT_007015b4;
    *(float *)(param_1 + 0x60) = DAT_007015b8;
    *(undefined4 *)(param_1 + 0x4c) = DAT_007015b0;
    *(undefined4 *)(param_1 + 0x50) = DAT_007015b4;
    fVar11 = DAT_007015b8;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
    pfVar8 = (float *)FUN_004e2984(&local_c,param_1 + 0x58,param_1 + 0x1f48);
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    fVar4 = *pfVar8;
    fVar11 = *(float *)(param_1 + 0x18) * *pfVar8 +
             *(float *)(param_1 + 0x30) * pfVar8[2] + *(float *)(param_1 + 0x24) * pfVar8[1];
    *(float *)(param_1 + 0x4c) =
         *pfVar8 * *(float *)(param_1 + 0x10) +
         *(float *)(param_1 + 0x28) * pfVar8[2] + *(float *)(param_1 + 0x1c) * pfVar8[1];
    *(float *)(param_1 + 0x50) =
         *(float *)(param_1 + 0x14) * fVar4 +
         *(float *)(param_1 + 0x2c) * fVar3 + *(float *)(param_1 + 0x20) * fVar2;
  }
  *(float *)(param_1 + 0x54) = fVar11;
  *(undefined4 *)(param_1 + 0xc3c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc40) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc44) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc24) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xc28) = DAT_007015b4;
  *(float *)(param_1 + 0xc2c) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xe8) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xec) = DAT_007015b4;
  *(float *)(param_1 + 0xf0) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xd64) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xd68) = DAT_007015b4;
  *(float *)(param_1 + 0xd6c) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xcd8) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xcdc) = DAT_007015b4;
  *(float *)(param_1 + 0xce0) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xcc0) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xcc4) = DAT_007015b4;
  *(float *)(param_1 + 0xcc8) = DAT_007015b8;
  puVar10 = &DAT_00701550;
  puVar9 = (undefined4 *)(param_1 + 0x960);
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
  }
  fVar11 = DAT_00701580 * *(float *)(param_1 + 0x10) +
           DAT_00701584 * *(float *)(param_1 + 0x1c) + DAT_00701588 * *(float *)(param_1 + 0x28);
  pfVar8 = (float *)(param_1 + 0xa2c);
  fVar2 = DAT_00701588 * *(float *)(param_1 + 0x2c);
  fVar4 = DAT_00701584 * *(float *)(param_1 + 0x20);
  fVar3 = DAT_00701580 * *(float *)(param_1 + 0x14);
  fVar5 = DAT_00701588 * *(float *)(param_1 + 0x30);
  fVar7 = DAT_00701584 * *(float *)(param_1 + 0x24);
  fVar6 = DAT_00701580 * *(float *)(param_1 + 0x18);
  *pfVar8 = fVar11;
  *(float *)(param_1 + 0xa30) = fVar3 + fVar4 + fVar2;
  *(float *)(param_1 + 0xa34) = fVar6 + fVar7 + fVar5;
  fVar2 = *(float *)(param_1 + 0xa34) * *(float *)(param_1 + 0xd4) -
          *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xa30);
  fVar3 = *(float *)(param_1 + 0xd8) * *pfVar8 -
          *(float *)(param_1 + 0xa34) * *(float *)(param_1 + 0xd0);
  fVar4 = *(float *)(param_1 + 0xa30) * *(float *)(param_1 + 0xd0) -
          *pfVar8 * *(float *)(param_1 + 0xd4);
  FUN_0041ce10(fVar3 * *(float *)(param_1 + 0xd8) - fVar4 * *(float *)(param_1 + 0xd4),
               fVar4 * *(float *)(param_1 + 0xd0) - fVar2 * *(float *)(param_1 + 0xd8),
               fVar2 * *(float *)(param_1 + 0xd4) - fVar3 * *(float *)(param_1 + 0xd0));
  pfVar1 = (float *)(param_1 + 0xa38);
  *pfVar1 = fVar11;
  *(float *)(param_1 + 0xa3c) = fVar3;
  *(float *)(param_1 + 0xa40) = fVar4;
  FUN_005aab70();
  pfVar8 = (float *)(param_1 + 0x40);
  fVar13 = (float10)FUN_005aabc0(pfVar8);
  *(float *)(param_1 + 0xdc0) = (float)fVar13;
  FUN_0041ce10(*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0xd8) -
               *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0x48),
               *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0x48) -
               *(float *)(param_1 + 0xd8) * *pfVar8,
               *(float *)(param_1 + 0xd4) * *pfVar8 -
               *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0x44));
  FUN_0041ce10(fVar4 * *(float *)(param_1 + 0xd4) - fVar3 * *(float *)(param_1 + 0xd8),
               fVar11 * *(float *)(param_1 + 0xd8) - fVar4 * *(float *)(param_1 + 0xd0),
               fVar3 * *(float *)(param_1 + 0xd0) - fVar11 * *(float *)(param_1 + 0xd4));
  puVar10 = (undefined4 *)(param_1 + 0x9f0);
  *puVar10 = local_c;
  *(undefined4 *)(param_1 + 0x9f4) = local_8;
  *(undefined4 *)(param_1 + 0x9f8) = local_4;
  fVar13 = (float10)FUN_005aabc0(puVar10);
  *(float *)(param_1 + 0xdc4) = (float)fVar13;
  if (fVar13 <= (float10)_DAT_0064a590) {
    *(float *)(param_1 + 0x9fc) = *pfVar1;
    *(undefined4 *)(param_1 + 0xa00) = *(undefined4 *)(param_1 + 0xa3c);
    *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(param_1 + 0xa40);
  }
  else {
    puVar9 = (undefined4 *)FUN_004e1030(&local_c,puVar10,(float)fVar13);
    *(undefined4 *)(param_1 + 0x9fc) = *puVar9;
    *(undefined4 *)(param_1 + 0xa00) = puVar9[1];
    *(undefined4 *)(param_1 + 0xa04) = puVar9[2];
  }
  fVar13 = (float10)FUN_004e1080(puVar10,pfVar1);
  *(float *)(param_1 + 0xdc8) = (float)fVar13;
  puVar10 = (undefined4 *)FUN_004bdd80(&local_c,pfVar1,(float)fVar13);
  *(undefined4 *)(param_1 + 0xa20) = *puVar10;
  *(undefined4 *)(param_1 + 0xa24) = puVar10[1];
  *(undefined4 *)(param_1 + 0xa28) = puVar10[2];
  return;
}


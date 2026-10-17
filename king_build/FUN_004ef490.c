
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ef490(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(param_1 + 0x40);
  pfVar2 = (float *)(param_1 + 0xd0);
  fVar4 = *pfVar1 * *pfVar2 +
          *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0xd4) +
          *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0xd8);
  *pfVar1 = fVar4 * *pfVar2;
  *(float *)(param_1 + 0x44) = fVar4 * *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0x48) = fVar4 * *(float *)(param_1 + 0xd8);
  fVar4 = *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0xd4) -
          *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0x50);
  fVar6 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0x4c) -
          *(float *)(param_1 + 0x54) * *pfVar2;
  fVar5 = *(float *)(param_1 + 0x50) * *pfVar2 -
          *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0xd4);
  local_24 = fVar6 * *(float *)(param_1 + 0xd8) - fVar5 * *(float *)(param_1 + 0xd4);
  local_20 = fVar5 * *pfVar2 - fVar4 * *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0x4c) = local_24;
  *(float *)(param_1 + 0x50) = local_20;
  local_1c = fVar4 * *(float *)(param_1 + 0xd4) - fVar6 * *pfVar2;
  *(float *)(param_1 + 0x54) = local_1c;
  *(undefined4 *)(param_1 + 0xc24) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xc28) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xc2c) = DAT_007015b8;
  fVar10 = (float10)FUN_005aabc0(pfVar1);
  *(float *)(param_1 + 0xdc0) = (float)fVar10;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0xdc4) = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar9 = (undefined4 *)(param_1 + 0x19d4);
    do {
      *(undefined1 *)(param_1 + 0x19c4 + iVar7) = 0;
      *puVar9 = 0;
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar7 < *(int *)(param_1 + 0xdd4));
  }
  FUN_004f1d10();
  *(undefined1 *)(param_1 + 0x19b4) = 0;
  *(undefined1 *)(param_1 + 0x19b5) = 0;
  *(undefined1 *)(param_1 + 0x19b7) = 0;
  puVar9 = &DAT_00701550;
  puVar8 = (undefined4 *)(param_1 + 0x960);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0xd7c) = 0x41200000;
  FUN_0041ce10(DAT_00701580 * *(float *)(param_1 + 0x10) +
               DAT_00701584 * *(float *)(param_1 + 0x1c) + DAT_00701588 * *(float *)(param_1 + 0x28)
               ,DAT_00701580 * *(float *)(param_1 + 0x14) +
                DAT_00701584 * *(float *)(param_1 + 0x20) +
                DAT_00701588 * *(float *)(param_1 + 0x2c),
               DAT_00701580 * *(float *)(param_1 + 0x18) +
               DAT_00701584 * *(float *)(param_1 + 0x24) + DAT_00701588 * *(float *)(param_1 + 0x30)
              );
  pfVar1 = (float *)(param_1 + 0xa2c);
  *pfVar1 = local_24;
  *(float *)(param_1 + 0xa30) = local_20;
  *(float *)(param_1 + 0xa34) = local_1c;
  FUN_0041ce10(*(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xa34) -
               *(float *)(param_1 + 0xa30) * *(float *)(param_1 + 0xd8),
               *pfVar1 * *(float *)(param_1 + 0xd8) - *pfVar2 * *(float *)(param_1 + 0xa34),
               *(float *)(param_1 + 0xa30) * *pfVar2 - *(float *)(param_1 + 0xd4) * *pfVar1);
  FUN_0041ce10(local_20 * *(float *)(param_1 + 0xd8) - local_1c * *(float *)(param_1 + 0xd4),
               local_1c * *pfVar2 - local_24 * *(float *)(param_1 + 0xd8),
               local_24 * *(float *)(param_1 + 0xd4) - local_20 * *pfVar2);
  pfVar3 = (float *)(param_1 + 0xa38);
  *pfVar3 = local_18;
  *(undefined4 *)(param_1 + 0xa3c) = local_14;
  *(undefined4 *)(param_1 + 0xa40) = local_10;
  FUN_005aab70();
  pfVar1 = (float *)(param_1 + 0x40);
  fVar10 = (float10)FUN_005aabc0(pfVar1);
  *(float *)(param_1 + 0xdc0) = (float)fVar10;
  FUN_0041ce10(*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0xd8) -
               *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0xd4),
               *(float *)(param_1 + 0x48) * *pfVar2 - *(float *)(param_1 + 0xd8) * *pfVar1,
               *pfVar1 * *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0x44) * *pfVar2);
  local_24 = local_18;
  local_20 = (float)local_14;
  local_1c = (float)local_10;
  puVar9 = (undefined4 *)(param_1 + 0x9f0);
  puVar8 = (undefined4 *)FUN_004bde70(local_c,pfVar2,&local_24);
  *puVar9 = *puVar8;
  *(undefined4 *)(param_1 + 0x9f4) = puVar8[1];
  *(undefined4 *)(param_1 + 0x9f8) = puVar8[2];
  fVar10 = (float10)FUN_005aabc0(puVar9);
  *(float *)(param_1 + 0xdc4) = (float)fVar10;
  if (fVar10 <= (float10)_DAT_0064a590) {
    *(float *)(param_1 + 0x9fc) = *pfVar3;
    *(undefined4 *)(param_1 + 0xa00) = *(undefined4 *)(param_1 + 0xa3c);
    *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(param_1 + 0xa40);
  }
  else {
    puVar8 = (undefined4 *)FUN_004e1030(local_c,puVar9,(float)fVar10);
    *(undefined4 *)(param_1 + 0x9fc) = *puVar8;
    *(undefined4 *)(param_1 + 0xa00) = puVar8[1];
    *(undefined4 *)(param_1 + 0xa04) = puVar8[2];
  }
  fVar10 = (float10)FUN_004e1080(puVar9,pfVar3);
  *(float *)(param_1 + 0xdc8) = (float)fVar10;
  puVar9 = (undefined4 *)FUN_004bdd80(local_c,pfVar3,(float)fVar10);
  *(undefined4 *)(param_1 + 0xa20) = *puVar9;
  *(undefined4 *)(param_1 + 0xa24) = puVar9[1];
  *(undefined4 *)(param_1 + 0xa28) = puVar9[2];
  *(undefined4 *)(param_1 + 0xd58) = *(undefined4 *)(param_1 + 0xd40);
  *(undefined4 *)(param_1 + 0xd5c) = *(undefined4 *)(param_1 + 0xd44);
  *(undefined4 *)(param_1 + 0xd60) = *(undefined4 *)(param_1 + 0xd48);
  return;
}


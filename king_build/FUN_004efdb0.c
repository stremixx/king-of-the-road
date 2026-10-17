
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004efdb0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  pfVar1 = (float *)(param_1 + 0x40);
  fVar6 = (float10)FUN_005aabc0(pfVar1);
  if (((float10)_DAT_0064a6c0 < ABS((float10)*(float *)(param_1 + 0xdc0) - fVar6)) ||
     (fVar6 < (float10)_DAT_0064b240)) {
    *(undefined4 *)(param_1 + 0xc90) = DAT_007015b0;
    *(undefined4 *)(param_1 + 0xc94) = DAT_007015b4;
    *(undefined4 *)(param_1 + 0xc98) = DAT_007015b8;
    *(undefined4 *)(param_1 + 0xcd8) = DAT_007015b0;
    *(undefined4 *)(param_1 + 0xcdc) = DAT_007015b4;
    *(undefined4 *)(param_1 + 0xce0) = DAT_007015b8;
  }
  *(float *)(param_1 + 0xdc0) = (float)fVar6;
  fVar3 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0xd8) -
          *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0xd4);
  fVar5 = *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0x48) -
          *(float *)(param_1 + 0xd8) * *pfVar1;
  pfVar2 = (float *)(param_1 + 0x9f0);
  fVar4 = *(float *)(param_1 + 0xd4) * *pfVar1 -
          *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0x44);
  *pfVar2 = fVar4 * *(float *)(param_1 + 0xd4) - fVar5 * *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0x9f4) =
       fVar3 * *(float *)(param_1 + 0xd8) - fVar4 * *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0x9f8) =
       fVar5 * *(float *)(param_1 + 0xd0) - fVar3 * *(float *)(param_1 + 0xd4);
  fVar7 = (float10)FUN_005aabc0(pfVar2);
  *(float *)(param_1 + 0xdc4) = (float)fVar7;
  pfVar1 = (float *)(param_1 + 0xa38);
  fVar3 = *pfVar2 * *pfVar1 +
          *(float *)(param_1 + 0x9f4) * *(float *)(param_1 + 0xa3c) +
          *(float *)(param_1 + 0x9f8) * *(float *)(param_1 + 0xa40);
  *(float *)(param_1 + 0xdc8) = fVar3;
  *(float *)(param_1 + 0xa20) = fVar3 * *pfVar1;
  *(float *)(param_1 + 0xa24) = fVar3 * *(float *)(param_1 + 0xa3c);
  fVar6 = (float10)_DAT_0064a648;
  *(float *)(param_1 + 0xa28) = fVar3 * *(float *)(param_1 + 0xa40);
  if (fVar6 < fVar7) {
    *(float *)(param_1 + 0x9fc) = (float)((float10)*pfVar2 / fVar7);
    *(float *)(param_1 + 0xa00) = (float)((float10)*(float *)(param_1 + 0x9f4) / fVar7);
    *(float *)(param_1 + 0xa04) = (float)((float10)*(float *)(param_1 + 0x9f8) / fVar7);
    return;
  }
  *(float *)(param_1 + 0x9fc) = *pfVar1;
  *(undefined4 *)(param_1 + 0xa00) = *(undefined4 *)(param_1 + 0xa3c);
  *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(param_1 + 0xa40);
  return;
}


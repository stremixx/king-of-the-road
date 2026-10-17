
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004efa30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float10 fVar10;
  float10 fVar11;
  float local_50;
  undefined1 local_30 [48];
  
  fVar10 = (float10)fcos((float10)*(float *)(param_1 + 0x1a24));
  fVar11 = (float10)fcos((float10)*(float *)(param_1 + 0x1a20));
  if ((float)fVar10 <= (float)_DAT_0064a648) {
    fVar10 = (float10)_DAT_0064a720;
    fVar1 = (float)_DAT_0064a720;
  }
  else {
    fVar10 = (float10)_DAT_0064b240 / (float10)(float)fVar10;
    fVar1 = (float)fVar10;
  }
  fVar1 = fVar1 * (*(float *)(param_1 + 0x18bc) * *(float *)(param_1 + 0xabc) +
                  *(float *)(param_1 + 0x18c0) * *(float *)(param_1 + 0xac0) +
                  *(float *)(param_1 + 0x18c4) * *(float *)(param_1 + 0xac4));
  fVar10 = fVar10 * ((float10)*(float *)(param_1 + 0x18a4) * (float10)*(float *)(param_1 + 0xaa4) +
                    (float10)*(float *)(param_1 + 0x18a8) * (float10)*(float *)(param_1 + 0xaa8) +
                    (float10)*(float *)(param_1 + 0x18ac) * (float10)*(float *)(param_1 + 0xaac)) *
                    fVar11;
  local_50 = fVar1;
  if (ABS(fVar10) < ABS((float10)fVar1)) {
    local_50 = (float)fVar10;
  }
  *(float *)(param_1 + 0xdcc) = (float)fVar10;
  *(float *)(param_1 + 0xdd0) = fVar1;
  pfVar9 = (float *)FUN_005ab7d0(local_30,*(float *)(param_1 + 0x1a24));
  fVar1 = pfVar9[1];
  fVar2 = pfVar9[7];
  fVar3 = pfVar9[4];
  fVar4 = pfVar9[10];
  fVar5 = pfVar9[2];
  fVar6 = pfVar9[8];
  fVar7 = pfVar9[5];
  fVar8 = pfVar9[0xb];
  *(float *)(param_1 + 0xdc) =
       (*(float *)(param_1 + 0xa38) * *pfVar9 +
        pfVar9[3] * *(float *)(param_1 + 0xa3c) + pfVar9[6] * *(float *)(param_1 + 0xa40) +
       pfVar9[9]) * local_50;
  *(float *)(param_1 + 0xe0) =
       (fVar3 * *(float *)(param_1 + 0xa3c) +
        fVar2 * *(float *)(param_1 + 0xa40) + fVar1 * *(float *)(param_1 + 0xa38) + fVar4) *
       local_50;
  fVar10 = (float10)fsin((float10)*(float *)(param_1 + 0x1a20));
  *(float *)(param_1 + 0xe4) =
       (fVar7 * *(float *)(param_1 + 0xa3c) +
        fVar6 * *(float *)(param_1 + 0xa40) + fVar5 * *(float *)(param_1 + 0xa38) + fVar8) *
       local_50;
  fVar10 = ((float10)local_50 / (float10)*(float *)(param_1 + 0x1f60)) * fVar10;
  fVar1 = (float)(fVar10 * (float10)*(float *)(param_1 + 0xd0));
  fVar2 = (float)(fVar10 * (float10)*(float *)(param_1 + 0xd4));
  fVar10 = fVar10 * (float10)*(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xe8) =
       (float)((float10)fVar1 * (float10)*(float *)(param_1 + 0x900) +
              (float10)fVar2 * (float10)*(float *)(param_1 + 0x90c) +
              fVar10 * (float10)*(float *)(param_1 + 0x918));
  *(float *)(param_1 + 0xec) =
       (float)((float10)fVar1 * (float10)*(float *)(param_1 + 0x904) +
              (float10)fVar2 * (float10)*(float *)(param_1 + 0x910) +
              fVar10 * (float10)*(float *)(param_1 + 0x91c));
  *(float *)(param_1 + 0xf0) =
       (float)((float10)fVar1 * (float10)*(float *)(param_1 + 0x908) +
              (float10)fVar2 * (float10)*(float *)(param_1 + 0x914) +
              fVar10 * (float10)*(float *)(param_1 + 0x920));
  return;
}



undefined4 __fastcall FUN_0058ea20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  undefined1 local_30 [48];
  
  fVar1 = *(float *)(param_1 + 0x218);
  fVar2 = *(float *)(param_1 + 0x21c);
  fVar3 = *(float *)(param_1 + 0x220);
  FUN_004e1fd9();
  iVar9 = 0;
  piVar10 = (int *)(param_1 + 0xdb4);
  while( true ) {
    iVar4 = *piVar10;
    if (iVar4 == 0) {
      return 0;
    }
    pfVar8 = (float *)FUN_0057d570(local_30);
    fVar5 = (*(float *)(iVar4 + 0xd6c) * *pfVar8 +
             pfVar8[3] * *(float *)(iVar4 + 0xd70) + pfVar8[6] * *(float *)(iVar4 + 0xd74) +
            pfVar8[9]) - fVar1;
    fVar6 = (pfVar8[4] * *(float *)(iVar4 + 0xd70) +
             pfVar8[7] * *(float *)(iVar4 + 0xd74) + pfVar8[1] * *(float *)(iVar4 + 0xd6c) +
            pfVar8[10]) - fVar2;
    fVar7 = (pfVar8[5] * *(float *)(iVar4 + 0xd70) +
             pfVar8[8] * *(float *)(iVar4 + 0xd74) + pfVar8[2] * *(float *)(iVar4 + 0xd6c) +
            pfVar8[0xb]) - fVar3;
    fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
    fVar6 = *(float *)(*piVar10 + 0xcc8) + *(float *)(param_1 + 0xcd0);
    fVar7 = *(float *)(*piVar10 + 0xcd0) + *(float *)(param_1 + 0xcc8);
    if ((fVar5 <= fVar6 * fVar6) || (fVar5 < fVar7 * fVar7)) break;
    iVar9 = iVar9 + 1;
    piVar10 = piVar10 + 1;
    if (5 < iVar9) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + 0xdb4 + iVar9 * 4);
}


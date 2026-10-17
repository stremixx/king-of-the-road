
void FUN_004cef80(int param_1,int param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 local_30 [48];
  
  FUN_0054c170(2);
  FUN_0058e930(1);
  FUN_0058e990(0);
  puVar9 = (undefined4 *)FUN_0057d570(local_30);
  puVar13 = (undefined4 *)(param_1 + 0x50a0);
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  pfVar10 = (float *)FUN_0057d570(local_30);
  fVar1 = pfVar10[4];
  fVar2 = pfVar10[1];
  fVar3 = pfVar10[7];
  fVar4 = pfVar10[10];
  fVar5 = pfVar10[5];
  fVar6 = pfVar10[2];
  fVar7 = pfVar10[8];
  fVar8 = pfVar10[0xb];
  *(float *)(param_1 + 0x50c4) =
       *(float *)(param_1 + 0x5230) * *pfVar10 +
       pfVar10[6] * *(float *)(param_1 + 0x5238) + pfVar10[3] * *(float *)(param_1 + 0x5234) +
       pfVar10[9];
  *(float *)(param_1 + 0x50c8) =
       fVar3 * *(float *)(param_1 + 0x5238) +
       fVar2 * *(float *)(param_1 + 0x5230) + fVar1 * *(float *)(param_1 + 0x5234) + fVar4;
  *(float *)(param_1 + 0x50cc) =
       fVar7 * *(float *)(param_1 + 0x5238) +
       fVar6 * *(float *)(param_1 + 0x5230) + fVar5 * *(float *)(param_1 + 0x5234) + fVar8;
  uVar12 = *param_3 & 0xfffffffe;
  *param_3 = uVar12;
  if (param_2 != DAT_0068a8f0) {
    iVar11 = DAT_0068a8f0;
    FUN_0041d3f0(&param_2);
    FUN_0043f770(iVar11,uVar12);
  }
  return;
}


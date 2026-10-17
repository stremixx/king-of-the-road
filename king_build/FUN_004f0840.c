
void __thiscall FUN_004f0840(int param_1,undefined4 param_2,float *param_3)

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
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  pfVar1 = (float *)(param_1 + 0x10);
  pfVar11 = pfVar1;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar11 = *param_3;
    param_3 = param_3 + 1;
    pfVar11 = pfVar11 + 1;
  }
  puVar10 = (undefined4 *)FUN_005aba00(local_30,pfVar1);
  puVar13 = (undefined4 *)(param_1 + 0x900);
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  local_48 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x900) +
             *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0x50) +
             *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0x54);
  local_44 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x50) +
             *(float *)(param_1 + 0x904) * *(float *)(param_1 + 0x4c) +
             *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0x54);
  local_40 = *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0x50) +
             *(float *)(param_1 + 0x908) * *(float *)(param_1 + 0x4c) +
             *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0x54);
  puVar10 = (undefined4 *)FUN_004e29c2(local_3c,&local_48,param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x58) = *puVar10;
  *(undefined4 *)(param_1 + 0x5c) = puVar10[1];
  iVar12 = 0;
  *(undefined4 *)(param_1 + 0x60) = puVar10[2];
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar11 = (float *)(param_1 + 0x1848);
    puVar10 = (undefined4 *)(param_1 + 0xf68);
    do {
      iVar12 = iVar12 + 1;
      fVar2 = *(float *)(param_1 + 0x20);
      fVar3 = *(float *)(param_1 + 0x14);
      fVar4 = *(float *)(param_1 + 0x2c);
      fVar5 = *(float *)(param_1 + 0x38);
      fVar6 = *(float *)(param_1 + 0x30);
      fVar7 = *(float *)(param_1 + 0x24);
      fVar8 = *(float *)(param_1 + 0x18);
      fVar9 = *(float *)(param_1 + 0x3c);
      pfVar11[-0x5f9] =
           pfVar11[-1] * *pfVar1 +
           pfVar11[1] * *(float *)(param_1 + 0x28) + *pfVar11 * *(float *)(param_1 + 0x1c) +
           *(float *)(param_1 + 0x34);
      pfVar11[-0x5f8] = pfVar11[1] * fVar4 + fVar3 * pfVar11[-1] + *pfVar11 * fVar2 + fVar5;
      pfVar11[-0x5f7] = pfVar11[-1] * fVar8 + *pfVar11 * fVar7 + pfVar11[1] * fVar6 + fVar9;
      pfVar11[-0x250] = DAT_007015b0;
      pfVar11[-0x24f] = DAT_007015b4;
      pfVar11[-0x24e] = DAT_007015b8;
      puVar10[-0x20] = 0;
      *puVar10 = 0;
      puVar10[0x5ca] = 0x3c23d70a;
      puVar10[0x5c2] = 0x3f000000;
      pfVar11 = pfVar11 + 3;
      puVar10 = puVar10 + 1;
    } while (iVar12 < *(int *)(param_1 + 0xdd4));
  }
  return;
}


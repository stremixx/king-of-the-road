
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bf510(int param_1)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [48];
  
  fVar3 = (float10)FUN_005eaac0();
  fVar4 = (float10)_DAT_0064b2f8;
  *(float *)(param_1 + 0x30) = (float)(fVar3 * fVar4);
  pfVar2 = (float *)FUN_005ab7d0(local_30,(float)(fVar3 * fVar4));
  local_3c = DAT_00701580 * *pfVar2 + DAT_00701584 * pfVar2[3] + DAT_00701588 * pfVar2[6] +
             pfVar2[9];
  local_38 = DAT_00701580 * pfVar2[1] + DAT_00701584 * pfVar2[4] + DAT_00701588 * pfVar2[7] +
             pfVar2[10];
  local_34 = DAT_00701580 * pfVar2[2] + DAT_00701584 * pfVar2[5] + DAT_00701588 * pfVar2[8] +
             pfVar2[0xb];
  *(float *)(param_1 + 0x44) = local_3c;
  *(float *)(param_1 + 0x48) = local_38;
  *(float *)(param_1 + 0x4c) = local_34;
  pfVar2 = (float *)FUN_005ab7d0(local_30,-*(float *)(param_1 + 0x30));
  local_3c = DAT_00701580 * *pfVar2 + DAT_00701584 * pfVar2[3] + DAT_00701588 * pfVar2[6] +
             pfVar2[9];
  local_38 = DAT_00701580 * pfVar2[1] + DAT_00701584 * pfVar2[4] + DAT_00701588 * pfVar2[7] +
             pfVar2[10];
  local_34 = DAT_00701580 * pfVar2[2] + DAT_00701584 * pfVar2[5] + DAT_00701588 * pfVar2[8] +
             pfVar2[0xb];
  fVar4 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
  *(float *)(param_1 + 0x50) = local_3c;
  *(float *)(param_1 + 0x54) = local_38;
  *(float *)(param_1 + 0x58) = local_34;
  fVar1 = (float)((float10)*(float *)(param_1 + 0x3c) / fVar4);
  FUN_005aad10(&local_3c,fVar1);
  FUN_005aad10(&local_3c,fVar1);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x40) / *(float *)(param_1 + 0x3c);
  return;
}


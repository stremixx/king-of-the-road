
void __fastcall FUN_004f0080(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  puVar8 = (undefined4 *)FUN_005aba00(local_30,(float *)(param_1 + 0x10));
  puVar10 = (undefined4 *)(param_1 + 0x900);
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  local_48 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x900) +
             *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0x54) +
             *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0x50);
  local_44 = *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0x54) +
             *(float *)(param_1 + 0x904) * *(float *)(param_1 + 0x4c) +
             *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x50);
  local_40 = *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0x54) +
             *(float *)(param_1 + 0x908) * *(float *)(param_1 + 0x4c) +
             *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0x50);
  puVar8 = (undefined4 *)FUN_004e29c2(local_3c,&local_48,param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x58) = *puVar8;
  *(undefined4 *)(param_1 + 0x5c) = puVar8[1];
  *(undefined4 *)(param_1 + 0x60) = puVar8[2];
  fVar2 = DAT_00701588 * *(float *)(param_1 + 0x2c);
  fVar4 = DAT_00701584 * *(float *)(param_1 + 0x20);
  fVar3 = DAT_00701580 * *(float *)(param_1 + 0x14);
  fVar5 = DAT_00701588 * *(float *)(param_1 + 0x30);
  fVar7 = DAT_00701584 * *(float *)(param_1 + 0x24);
  pfVar1 = (float *)(param_1 + 0xa2c);
  fVar6 = DAT_00701580 * *(float *)(param_1 + 0x18);
  *pfVar1 = DAT_00701580 * *(float *)(param_1 + 0x10) +
            DAT_00701584 * *(float *)(param_1 + 0x1c) + DAT_00701588 * *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0xa30) = fVar3 + fVar4 + fVar2;
  *(float *)(param_1 + 0xa34) = fVar6 + fVar7 + fVar5;
  fVar2 = *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xa34) -
          *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xa30);
  fVar4 = *pfVar1 * *(float *)(param_1 + 0xd8) -
          *(float *)(param_1 + 0xa34) * *(float *)(param_1 + 0xd0);
  fVar3 = *(float *)(param_1 + 0xa30) * *(float *)(param_1 + 0xd0) -
          *pfVar1 * *(float *)(param_1 + 0xd4);
  local_48 = fVar4 * *(float *)(param_1 + 0xd8) - fVar3 * *(float *)(param_1 + 0xd4);
  local_44 = fVar3 * *(float *)(param_1 + 0xd0) - fVar2 * *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xa38) = local_48;
  local_40 = fVar2 * *(float *)(param_1 + 0xd4) - fVar4 * *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0xa3c) = local_44;
  *(float *)(param_1 + 0xa40) = local_40;
  FUN_005aab70();
  return;
}


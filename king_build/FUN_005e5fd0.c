
undefined4 __thiscall FUN_005e5fd0(int param_1,undefined4 param_2)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  float local_10;
  float local_c;
  float local_8;
  
  uVar3 = FUN_005aa810(param_2);
  *(ushort *)(param_1 + 2) = uVar3;
  uVar4 = (uint)uVar3;
  iVar5 = FUN_00631d33(uVar4 * 0xc);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else if (-1 < (int)(uVar4 - 1)) {
    puVar8 = (undefined4 *)(iVar5 + 8);
    do {
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      puVar8 = puVar8 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar9 = 0;
  *(int *)(param_1 + 4) = iVar5;
  if (*(short *)(param_1 + 2) != 0) {
    do {
      FUN_005aae80(param_2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 2));
  }
  iVar5 = 0;
  puVar8 = *(undefined4 **)(param_1 + 4);
  uVar6 = FUN_005abdf0(*puVar8,puVar8[1],puVar8[2],puVar8[3],puVar8[4],puVar8[5],puVar8[6],puVar8[7]
                       ,puVar8[8]);
  FUN_005cd110(uVar6);
  pfVar1 = (float *)(param_1 + 8);
  *pfVar1 = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xc) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x10) = DAT_007015b8;
  if (*(short *)(param_1 + 2) != 0) {
    iVar9 = 0;
    do {
      FUN_005aae00(&local_10,iVar9 + *(int *)(param_1 + 4));
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 2));
  }
  iVar5 = 0;
  iVar9 = 0;
  fVar2 = (float)*(ushort *)(param_1 + 2);
  *pfVar1 = *pfVar1 / fVar2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) / fVar2;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / fVar2;
  if (*(ushort *)(param_1 + 2) != 0) {
    do {
      local_10 = *pfVar1 - *(float *)(iVar5 + *(int *)(param_1 + 4));
      iVar7 = iVar5 + *(int *)(param_1 + 4);
      local_c = *(float *)(param_1 + 0xc) - *(float *)(iVar7 + 4);
      local_8 = *(float *)(param_1 + 0x10) - *(float *)(iVar7 + 8);
      fVar10 = (float10)FUN_005aabc0(&local_10);
      if ((float10)*(double *)(param_1 + 0x18) < fVar10) {
        *(double *)(param_1 + 0x18) = (double)fVar10;
      }
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 2));
  }
  return 1;
}


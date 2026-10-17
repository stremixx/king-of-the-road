
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005c7c70(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064832b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar6 = (undefined4 *)FUN_00631d33(0x4c);
  local_4 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_005eed00(s_sharpTerrainTree_0067e8c0,9);
    puVar6[0xf] = 0;
    puVar6[0x10] = 7;
    *puVar6 = &PTR_FUN_00650c90;
  }
  local_4 = 0xffffffff;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0x32;
  puVar6[0xe] = 3;
  puVar7 = (undefined4 *)FUN_00631d33(0xc);
  puVar6[0xf] = puVar7;
  *puVar7 = 0x40a00000;
  *(undefined2 *)(puVar6[0xf] + 4) = 2;
  *(undefined2 *)(puVar6[0xf] + 6) = 2;
  *(undefined4 *)(puVar6[0xf] + 8) = param_1;
  puVar6[0x11] = 2;
  pfVar8 = (float *)FUN_00631d33(0x18);
  if (pfVar8 == (float *)0x0) {
    pfVar8 = (float *)0x0;
  }
  else {
    pfVar10 = pfVar8 + 2;
    iVar11 = 2;
    do {
      pfVar10[-2] = 0.0;
      pfVar10[-1] = 0.0;
      *pfVar10 = 0.0;
      pfVar10 = pfVar10 + 3;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  puVar6[0x12] = pfVar8;
  fVar3 = DAT_00701594 * _DAT_0064b320;
  fVar4 = DAT_00701598 * _DAT_0064b320;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *pfVar8 = DAT_00701590 * _DAT_0064b320 + *param_2;
  pfVar8[1] = fVar3 + fVar1;
  pfVar8[2] = fVar4 + fVar2;
  pvVar5 = (void *)(DAT_00701594 * _DAT_0064b340);
  fVar3 = DAT_00701598 * _DAT_0064b340;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  iVar11 = puVar6[0x12];
  *(float *)(iVar11 + 0xc) = DAT_00701590 * _DAT_0064b340 + *param_2;
  *(float *)(iVar11 + 0x10) = (float)pvVar5 + fVar1;
  *(float *)(iVar11 + 0x14) = fVar3 + fVar2;
  piVar9 = (int *)FUN_005eec70();
  (**(code **)(*piVar9 + 0x14))(0,puVar6);
  *(byte *)(puVar6 + 10) = *(byte *)(puVar6 + 10) & 0xfe;
  ExceptionList = pvVar5;
  return puVar6;
}


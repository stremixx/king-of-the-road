
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00599e70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,float param_7,float param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  void *unaff_EBX;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064744e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005789e0();
  local_4 = 0;
  FUN_005f9d80(s_motionTexture_0067d33c);
  param_1[0x16] = param_2;
  param_1[0x18] = param_11;
  param_1[0x17] = param_3;
  param_1[0x19] = param_12;
  param_1[0x1e] = param_9;
  param_1[0x13] = param_4;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_0064fbc0;
  param_1[0x14] = param_5;
  param_1[5] = &PTR_LAB_0064fb74;
  param_1[0x20] = 0;
  param_1[0x15] = param_6;
  puVar3 = (undefined4 *)FUN_00631d33(0x2c);
  local_4._0_1_ = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar3 + 1;
    *puVar3 = 1;
    FUN_0061d173(puVar5,0x28,1,&LAB_004c5060,FUN_004c4870);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined2 *)puVar5 = 2;
  *(undefined2 *)(puVar5 + 1) = 4;
  puVar3 = (undefined4 *)FUN_00631d33(0x10);
  puVar5[2] = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(puVar5[2] + 4) = 0x3f800000;
  *(undefined4 *)(puVar5[2] + 8) = 0x3f800000;
  *(undefined4 *)(puVar5[2] + 0xc) = 0;
  puVar3 = (undefined4 *)FUN_00631d33(0x10);
  puVar5[3] = puVar3;
  *puVar3 = 0x3f800000;
  *(undefined4 *)(puVar5[3] + 4) = 0x3f800000;
  *(undefined4 *)(puVar5[3] + 8) = 0;
  *(undefined4 *)(puVar5[3] + 0xc) = 0;
  pfVar4 = (float *)FUN_00631d33(0x10);
  fVar2 = param_7 * _DAT_0064b868;
  puVar5[4] = pfVar4;
  *pfVar4 = fVar2;
  param_7 = param_7 * _DAT_0064b248;
  *(float *)(puVar5[4] + 4) = param_7;
  *(float *)(puVar5[4] + 8) = param_7;
  *(float *)(puVar5[4] + 0xc) = fVar2;
  puVar5[6] = 0;
  pfVar4 = (float *)FUN_00631d33(0x10);
  fVar2 = param_8 * _DAT_0064b868;
  puVar5[5] = pfVar4;
  *pfVar4 = fVar2;
  *(float *)(puVar5[5] + 4) = fVar2;
  fVar2 = param_8 * _DAT_0064b248;
  *(float *)(puVar5[5] + 8) = fVar2;
  *(float *)(puVar5[5] + 0xc) = fVar2;
  *(undefined2 *)((int)puVar5 + 0x22) = 0xfff;
  uVar1 = *(undefined4 *)param_1[0x1e];
  *(byte *)((int)puVar5 + 1) = *(byte *)((int)puVar5 + 1) | 1;
  puVar5[9] = uVar1;
  FUN_005f9b80(puVar5,1);
  FUN_005f9c80();
  (**(code **)(*(int *)param_1[0x17] + 0x14))
            (0,-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 5));
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_8;
  param_1[0x1f] = 0;
  ExceptionList = unaff_EBX;
  return param_1;
}


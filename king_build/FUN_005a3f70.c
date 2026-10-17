
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005a3f70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,float param_7,float param_8,undefined4 param_9,
            undefined4 param_10,int param_11,int param_12,float param_13,float param_14,
            undefined4 param_15,int param_16)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  int *piVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  int local_20;
  int *local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00647b7e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_005d2890(param_15,s_motion_0067d878);
  local_c = 0;
  FUN_005f9d30();
  *(double *)(param_1 + 0x20) = (double)param_13;
  param_1[8] = &PTR_LAB_006503a0;
  *(double *)(param_1 + 0x22) = (double)param_14;
  param_1[0x19] = param_2;
  param_1[0x1a] = param_3;
  dVar3 = _DAT_0064a660 / (double)param_11;
  local_c._0_1_ = 1;
  *param_1 = &PTR_FUN_00650380;
  param_1[0x2b] = 0;
  param_1[0x1b] = param_10;
  param_1[0x1c] = param_11;
  param_1[0x1d] = param_12;
  param_1[0x1f] = param_16;
  *(double *)(param_1 + 0x26) = dVar3;
  *(double *)(param_1 + 0x28) = _DAT_0064a660 / (double)param_12;
  if (1 < param_16) {
    param_8 = param_8 * (float)_DAT_0064a658;
  }
  param_7 = param_7 * _DAT_0064b248;
  fVar4 = (float)_DAT_0064c8f0 / (float)param_16;
  piVar5 = (int *)FUN_00631d33(param_16 * 0x28 + 4);
  local_c._0_1_ = 2;
  if (piVar5 == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = piVar5 + 1;
    *piVar5 = param_16;
    FUN_0061d173(local_1c,0x28,param_16,&LAB_004c5060,FUN_004c4870);
  }
  local_c = CONCAT31(local_c._1_3_,1);
  param_1[0x16] = param_4;
  param_1[0x17] = param_5;
  param_1[0x18] = param_6;
  uVar6 = FUN_005eea00(param_9);
  param_1[0x2a] = uVar6;
  local_20 = 0;
  if (0 < param_16) {
    piVar5 = local_1c + 4;
    do {
      *(undefined2 *)(piVar5 + -4) = 2;
      *(undefined2 *)(piVar5 + -3) = 4;
      pfVar7 = (float *)FUN_00631d33(0x10);
      piVar5[-2] = (int)pfVar7;
      iVar9 = local_20 + 1;
      *pfVar7 = ((float)*(double *)(param_1 + 0x26) / (float)(int)param_1[0x1f]) * (float)local_20;
      *(float *)(piVar5[-2] + 4) =
           ((float)*(double *)(param_1 + 0x26) / (float)(int)param_1[0x1f]) * (float)iVar9;
      *(float *)(piVar5[-2] + 0xc) =
           ((float)*(double *)(param_1 + 0x26) / (float)(int)param_1[0x1f]) * (float)local_20;
      *(float *)(piVar5[-2] + 8) =
           ((float)*(double *)(param_1 + 0x26) / (float)(int)param_1[0x1f]) * (float)iVar9;
      pfVar7 = (float *)FUN_00631d33(0x10);
      piVar5[-1] = (int)pfVar7;
      *pfVar7 = (float)*(double *)(param_1 + 0x28);
      *(float *)(piVar5[-1] + 4) = (float)*(double *)(param_1 + 0x28);
      *(undefined4 *)(piVar5[-1] + 8) = 0;
      *(undefined4 *)(piVar5[-1] + 0xc) = 0;
      pfVar7 = (float *)FUN_00631d33(0x10);
      *piVar5 = (int)pfVar7;
      fVar2 = (float)local_20 * fVar4;
      fVar10 = -(float10)param_7;
      if ((int)param_1[0x1f] < 2) {
        fVar1 = (float)fVar10;
        fVar10 = (float10)fcos((float10)fVar2);
        *pfVar7 = (float)(fVar10 * (float10)fVar1);
        fVar10 = (float10)fcos((float10)iVar9 * (float10)fVar4);
        *(float *)(*piVar5 + 4) = (float)(fVar10 * (float10)fVar1);
        *(undefined4 *)(*piVar5 + 8) = *(undefined4 *)(*piVar5 + 4);
        ((undefined4 *)*piVar5)[3] = *(undefined4 *)*piVar5;
        pfVar7 = (float *)FUN_00631d33(0x10);
        fVar10 = (float10)fsin((float10)fVar2);
        piVar5[2] = (int)pfVar7;
        *pfVar7 = (float)(fVar10 * (float10)fVar1);
        fVar10 = (float10)fsin((float10)(float)((float10)iVar9 * (float10)fVar4));
        *(float *)(piVar5[2] + 4) = (float)(fVar10 * (float10)fVar1);
        *(undefined4 *)(piVar5[2] + 8) = *(undefined4 *)(piVar5[2] + 4);
        ((undefined4 *)piVar5[2])[3] = *(undefined4 *)piVar5[2];
      }
      else {
        fVar11 = (float10)fcos((float10)fVar2);
        *pfVar7 = (float)(fVar10 * fVar11);
        fVar11 = (float10)fcos((float10)iVar9 * (float10)fVar4);
        *(float *)(*piVar5 + 4) = (float)(fVar10 * fVar11);
        *(float *)(*piVar5 + 8) = *(float *)(*piVar5 + 4) * (float)_DAT_0064a658;
        ((float *)*piVar5)[3] = *(float *)*piVar5 * (float)_DAT_0064a658;
        pfVar7 = (float *)FUN_00631d33(0x10);
        fVar10 = (float10)fsin((float10)fVar2);
        piVar5[2] = (int)pfVar7;
        *pfVar7 = (float)(fVar10 * (float10)param_7 * (float10)_DAT_00650378);
        fVar10 = (float10)fsin((float10)(float)((float10)iVar9 * (float10)fVar4));
        *(float *)(piVar5[2] + 4) = (float)(fVar10 * (float10)param_7 * (float10)_DAT_00650378);
        *(float *)(piVar5[2] + 8) = *(float *)(piVar5[2] + 4) * (float)_DAT_0064a658;
        ((float *)piVar5[2])[3] = *(float *)piVar5[2] * (float)_DAT_0064a658;
      }
      puVar8 = (undefined4 *)FUN_00631d33(0x10);
      piVar5[1] = (int)puVar8;
      *puVar8 = 0;
      *(undefined4 *)(piVar5[1] + 4) = 0;
      *(float *)(piVar5[1] + 8) = param_8;
      *(float *)(piVar5[1] + 0xc) = param_8;
      *(undefined2 *)((int)piVar5 + 0x12) = 0xfff;
      piVar5[5] = param_1[0x2a];
      piVar5 = piVar5 + 10;
      local_20 = iVar9;
    } while (iVar9 < param_16);
  }
  FUN_005f9b80(local_1c,param_1[0x1f]);
  FUN_005f9c80();
  piVar5 = (int *)param_1[0x1a];
  if (piVar5 == *(int **)(param_2 + 0x20c)) {
    (**(code **)(*piVar5 + 0x14))(0,-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 8));
  }
  else {
    (**(code **)(*piVar5 + 0x1c))(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 8));
  }
  FUN_005d2c20(param_1);
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 1;
  param_1[0x25] = 0;
  param_1[0x1e] = 0;
  ExceptionList = local_1c;
  return param_1;
}


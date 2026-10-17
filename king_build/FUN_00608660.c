
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00608660(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  
  iVar11 = FUN_00631d33(0x9c);
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  else {
    *(int *)(iVar11 + 4) = iVar11;
    *(int *)iVar11 = iVar11;
    FUN_00608110();
    FUN_00608110();
    FUN_00608110();
  }
  if ((((param_2[2] == 0) || (*param_2 == 0)) || (param_2[1] == 0)) ||
     ((*(int *)(param_2[1] + 0xc) == 0 || (*(int *)(*param_2 + 0xc) == 0)))) {
LAB_00608bfc:
    if (iVar11 != 0) {
      FUN_00609040();
      FUN_00631d5c(iVar11);
    }
    return 0;
  }
  *(int **)(iVar11 + 8) = param_2;
  iVar15 = *param_2;
  if (*(int *)(*(int *)(iVar15 + 0xc) + 0x40) != *(int *)(param_2[1] + 0xc)) {
    *param_2 = param_2[1];
    *(int *)(*(int *)(iVar11 + 8) + 4) = iVar15;
  }
  piVar2 = *(int **)(iVar11 + 8);
  FUN_0061b8c0(*(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x18),
               *(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x10),
               *(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x10),piVar2);
  *(undefined4 *)(iVar11 + 0x68) = *(undefined4 *)(iVar11 + 0x20);
  *(undefined4 *)(iVar11 + 0xc) = 0;
  if (param_3 != (int *)0x0) {
    if (((param_3[2] == 0) || (*param_3 == 0)) ||
       ((param_3[1] == 0 || ((*(int *)(*param_3 + 0xc) == 0 || (*(int *)(param_3[1] + 0xc) == 0)))))
       ) goto LAB_00608bfc;
    *(int **)(iVar11 + 0xc) = param_3;
    iVar15 = *param_3;
    if (*(int *)(*(int *)(iVar15 + 0xc) + 0x40) != *(int *)(param_3[1] + 0xc)) {
      *param_3 = param_3[1];
      *(int *)(*(int *)(iVar11 + 0xc) + 4) = iVar15;
    }
    piVar2 = *(int **)(iVar11 + 0xc);
    FUN_0061b8c0(*(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x10),
                 *(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x18),
                 *(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x18),piVar2);
    if (*(float *)(iVar11 + 0x68) <= *(float *)(iVar11 + 0x4c)) {
      uVar1 = *(undefined4 *)(iVar11 + 0x4c);
    }
    else {
      uVar1 = *(undefined4 *)(iVar11 + 0x68);
    }
    *(undefined4 *)(iVar11 + 0x68) = uVar1;
  }
  if (param_2 != (int *)0x0) {
    *(int *)(*(int *)(*param_2 + 0xc) + 0x48) = iVar11;
    *(int *)(*(int *)(param_2[1] + 0xc) + 0x48) = iVar11;
  }
  if (param_3 != (int *)0x0) {
    *(int *)(*(int *)(*param_3 + 0xc) + 0x48) = iVar11;
    *(int *)(*(int *)(param_3[1] + 0xc) + 0x48) = iVar11;
  }
  iVar15 = *(int *)(param_1 + 0xc);
  iVar13 = (uint)**(ushort **)(iVar11 + 0x14) * 0x10 + iVar15;
  iVar14 = (uint)**(ushort **)(iVar11 + 0x18) * 0x10 + iVar15;
  iVar15 = (uint)**(ushort **)(iVar11 + 0x1c) * 0x10 + iVar15;
  iVar12 = *(int *)(param_1 + 4);
  fVar7 = (float)*(uint *)(iVar13 + 8) * *(float *)(iVar12 + 0x9cd8) + *(float *)(iVar12 + 0x9cc8);
  fVar9 = (float)*(uint *)(iVar13 + 0xc) * *(float *)(iVar12 + 0x9cdc) + *(float *)(iVar12 + 0x9cd4)
  ;
  fVar3 = (float)*(uint *)(iVar14 + 8) * *(float *)(iVar12 + 0x9cd8) + *(float *)(iVar12 + 0x9cc8);
  fVar4 = (float)*(uint *)(iVar14 + 0xc) * *(float *)(iVar12 + 0x9cdc) + *(float *)(iVar12 + 0x9cd4)
  ;
  fVar5 = (float)*(uint *)(iVar15 + 8) * *(float *)(iVar12 + 0x9cd8) + *(float *)(iVar12 + 0x9cc8);
  fVar6 = (float)*(uint *)(iVar15 + 0xc) * *(float *)(iVar12 + 0x9cdc) + *(float *)(iVar12 + 0x9cd4)
  ;
  fVar8 = (fVar5 + fVar3 + fVar7) * _DAT_0064b8f4;
  fVar10 = (fVar6 + fVar4 + fVar9) * _DAT_0064b8f4;
  fVar9 = fVar9 - fVar10;
  fVar7 = fVar7 - fVar8;
  fVar7 = fVar9 * fVar9 + fVar7 * fVar7;
  fVar4 = fVar4 - fVar10;
  fVar3 = fVar3 - fVar8;
  fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar7 <= fVar3) {
    fVar7 = fVar3;
  }
  fVar6 = fVar6 - fVar10;
  fVar5 = fVar5 - fVar8;
  fVar3 = fVar6 * fVar6 + fVar5 * fVar5;
  if (fVar7 <= fVar3) {
    fVar7 = fVar3;
  }
  *(float *)(iVar11 + 0x30) = fVar8;
  *(float *)(iVar11 + 0x34) = fVar10;
  *(float *)(iVar11 + 0x38) = SQRT(fVar7);
  if (*(int *)(iVar11 + 0xc) == 0) {
    iVar15 = *(int *)(param_1 + 4);
    fVar3 = *(float *)(iVar11 + 0x34) - *(float *)(iVar15 + 8);
    fVar4 = *(float *)(iVar11 + 0x30) - *(float *)(iVar15 + 4);
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) - *(float *)(iVar11 + 0x38);
    param_3 = (int *)_DAT_0064c7a8;
    if (fVar3 <= _DAT_0064b254) goto LAB_00608e69;
    if (_DAT_00651eec < fVar3) {
LAB_00608e4a:
      param_3 = (int *)(_DAT_0064f3d0 / fVar3);
    }
    else {
      if (fVar3 < _DAT_0064b438) goto LAB_00608e69;
      fVar4 = *(float *)(iVar11 + 0x30) - *(float *)(iVar15 + 4);
      fVar5 = *(float *)(iVar11 + 0x34) - *(float *)(iVar15 + 8);
      fVar6 = -*(float *)(iVar11 + 0x38);
      if ((fVar5 * *(float *)(iVar15 + 0x3c) - fVar4 * *(float *)(iVar15 + 0x40) < fVar6) ||
         (fVar5 * *(float *)(iVar15 + 0x44) - fVar4 * *(float *)(iVar15 + 0x48) < fVar6))
      goto LAB_00608e4a;
      if (*(uint *)(iVar11 + 0x28) < 8) {
        param_3 = (int *)(_DAT_0064b440 / (fVar3 + _DAT_0064b240));
      }
      else if ((fVar3 < _DAT_00651ee8) ||
              (iVar15 = FUN_00607b20(*(float *)(iVar15 + 4),*(float *)(iVar15 + 8),
                                     *(undefined4 *)(iVar15 + 0x4c),*(undefined4 *)(iVar15 + 0x50),
                                     *(undefined4 *)(iVar15 + 0x54),*(undefined4 *)(iVar15 + 0x58)),
              iVar15 != 0)) {
        param_3 = (int *)(*(float *)(iVar11 + 0x24) / fVar3 + _DAT_0064b738);
      }
      else {
        param_3 = (int *)((*(float *)(iVar11 + 0x24) / fVar3 + _DAT_0064b738) * _DAT_0064b248);
      }
    }
    if ((float)param_3 <= _DAT_0064b254) {
      param_3 = (int *)_DAT_0064b254;
    }
    goto LAB_00608e69;
  }
  iVar15 = *(int *)(param_1 + 0xc);
  iVar13 = (uint)**(ushort **)(iVar11 + 0x40) * 0x10 + iVar15;
  iVar14 = (uint)**(ushort **)(iVar11 + 0x44) * 0x10 + iVar15;
  iVar15 = (uint)**(ushort **)(iVar11 + 0x48) * 0x10 + iVar15;
  iVar12 = *(int *)(param_1 + 4);
  fVar7 = (float)*(uint *)(iVar13 + 8) * *(float *)(iVar12 + 0x9cd8) + *(float *)(iVar12 + 0x9cc8);
  fVar9 = (float)*(uint *)(iVar13 + 0xc) * *(float *)(iVar12 + 0x9cdc) + *(float *)(iVar12 + 0x9cd4)
  ;
  fVar3 = (float)*(uint *)(iVar14 + 8) * *(float *)(iVar12 + 0x9cd8) + *(float *)(iVar12 + 0x9cc8);
  fVar4 = (float)*(uint *)(iVar14 + 0xc) * *(float *)(iVar12 + 0x9cdc) + *(float *)(iVar12 + 0x9cd4)
  ;
  fVar5 = (float)*(uint *)(iVar15 + 8) * *(float *)(iVar12 + 0x9cd8) + *(float *)(iVar12 + 0x9cc8);
  fVar6 = (float)*(uint *)(iVar15 + 0xc) * *(float *)(iVar12 + 0x9cdc) + *(float *)(iVar12 + 0x9cd4)
  ;
  fVar8 = (fVar5 + fVar3 + fVar7) * _DAT_0064b8f4;
  fVar10 = (fVar6 + fVar4 + fVar9) * _DAT_0064b8f4;
  fVar9 = fVar9 - fVar10;
  fVar7 = fVar7 - fVar8;
  fVar7 = fVar9 * fVar9 + fVar7 * fVar7;
  fVar4 = fVar4 - fVar10;
  fVar3 = fVar3 - fVar8;
  fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
  if (fVar7 <= fVar3) {
    fVar7 = fVar3;
  }
  fVar6 = fVar6 - fVar10;
  fVar5 = fVar5 - fVar8;
  fVar3 = fVar6 * fVar6 + fVar5 * fVar5;
  if (fVar7 <= fVar3) {
    fVar7 = fVar3;
  }
  *(float *)(iVar11 + 0x5c) = fVar8;
  param_3 = (int *)0x0;
  *(float *)(iVar11 + 0x60) = fVar10;
  *(float *)(iVar11 + 100) = SQRT(fVar7);
  iVar15 = *(int *)(param_1 + 4);
  fVar3 = *(float *)(iVar11 + 0x34) - *(float *)(iVar15 + 8);
  fVar4 = *(float *)(iVar11 + 0x30) - *(float *)(iVar15 + 4);
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) - *(float *)(iVar11 + 0x38);
  if (fVar3 <= _DAT_0064b254) {
LAB_00608bef:
    param_2 = (int *)0x447a0000;
  }
  else if (_DAT_00651eec < fVar3) {
LAB_00608cb3:
    param_2 = (int *)(_DAT_0064f3d0 / fVar3);
  }
  else {
    if (fVar3 < _DAT_0064b438) goto LAB_00608bef;
    iVar12 = FUN_00607b20(*(float *)(iVar15 + 4),*(float *)(iVar15 + 8),
                          *(undefined4 *)(iVar15 + 0x3c),*(undefined4 *)(iVar15 + 0x40),
                          *(undefined4 *)(iVar15 + 0x44),*(undefined4 *)(iVar15 + 0x48));
    if (iVar12 == 0) goto LAB_00608cb3;
    if (*(uint *)(iVar11 + 0x28) < 8) {
      param_2 = (int *)(_DAT_0064b440 / (fVar3 + _DAT_0064b240));
    }
    else if ((fVar3 < _DAT_00651ee8) ||
            (iVar15 = FUN_00607b20(*(undefined4 *)(iVar15 + 4),*(undefined4 *)(iVar15 + 8),
                                   *(undefined4 *)(iVar15 + 0x4c),*(undefined4 *)(iVar15 + 0x50),
                                   *(undefined4 *)(iVar15 + 0x54),*(undefined4 *)(iVar15 + 0x58)),
            iVar15 != 0)) {
      param_2 = (int *)(*(float *)(iVar11 + 0x24) / fVar3 + _DAT_0064b738);
    }
    else {
      param_2 = (int *)((*(float *)(iVar11 + 0x24) / fVar3 + _DAT_0064b738) * _DAT_0064b248);
    }
  }
  if (iVar11 + 0x3c != 0) {
    fVar16 = (float10)FUN_00608e90(iVar11 + 0x3c);
    param_3 = (int *)(float)fVar16;
  }
  if ((float)param_3 < (float)param_2) {
    param_3 = param_2;
  }
LAB_00608e69:
  *(int **)(iVar11 + 0x68) = param_3;
  FUN_00612ce0(iVar11);
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
  return iVar11;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004db800(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  int local_124;
  float afStack_120 [4];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d4 [4];
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 auStack_a4 [48];
  undefined1 local_74 [48];
  undefined1 auStack_44 [44];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0064518a;
  pvStack_14 = ExceptionList;
  local_134 = 1.96182e-44;
  piVar8 = param_1 + 0x4e;
  pfVar10 = (float *)(param_1 + 0x25);
  ExceptionList = &pvStack_14;
  param_1[0xa8] = (int)((float)*(double *)(param_1[0xa9] + 0xb90) + (float)param_1[0xa8]);
  do {
    if ((float)piVar8[-0x38] < (float)param_1[0xa8]) {
      if (piVar8[-0x46] == 0) {
        piVar8[-0x46] = 1;
        pfVar5 = (float *)(param_1[0xaa] + 0x2c4);
        pfVar11 = local_d4;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar11 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar11 = pfVar11 + 1;
        }
        pfVar5 = (float *)FUN_0057d570(local_74);
        fVar1 = *pfVar5 * pfVar10[-1] + pfVar5[3] * *pfVar10 + pfVar5[6] * pfVar10[1] + pfVar5[9];
        fVar2 = pfVar5[4] * *pfVar10 + pfVar5[1] * pfVar10[-1] + pfVar5[7] * pfVar10[1] + pfVar5[10]
        ;
        fVar3 = pfVar5[5] * *pfVar10 + pfVar5[2] * pfVar10[-1] + pfVar5[8] * pfVar10[1] +
                pfVar5[0xb];
        local_130 = local_d4[0] * fVar1 + local_d4[3] * fVar2 + local_bc * fVar3 + local_b0;
        local_12c = local_d4[1] * fVar1 + local_c4 * fVar2 + local_b8 * fVar3 + local_ac;
        local_128 = local_d4[2] * fVar1 + local_c0 * fVar2 + local_b4 * fVar3 + local_a8;
        local_124 = FUN_00631d33(0x60);
        local_c = 0;
        if (local_124 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_004da440(param_1[0xa9],&local_130);
        }
        local_c = 0xffffffff;
        (**(code **)(*piVar6 + 0x18))(1);
        uVar7 = FUN_005db380(auStack_a4);
        FUN_005aba00(afStack_120,uVar7);
        iVar9 = _rand();
        if ((&DAT_00695664)[_DAT_0064b248 < (float)iVar9 * _DAT_0064b244] != 0) {
          fStack_f0 = local_130 * afStack_120[0] +
                      afStack_120[3] * local_12c + fStack_108 * local_128 + fStack_fc;
          fStack_ec = afStack_120[1] * local_130 + fStack_110 * local_12c + fStack_104 * local_128 +
                      fStack_f8;
          fStack_e8 = afStack_120[2] * local_130 + fStack_10c * local_12c + fStack_100 * local_128 +
                      fStack_f4;
          FUN_004dd880(fStack_f0,fStack_ec,fStack_e8,0,0x40490000,0,0x3ff00000);
        }
      }
      else {
        if ((*piVar8 == 3) && ((code *)param_1[0xab] != (code *)0x0)) {
          (*(code *)param_1[0xab])(pfVar10 + -1,0,param_1[0xaa]);
        }
        *piVar8 = *piVar8 + 1;
      }
    }
    pfVar10 = pfVar10 + 3;
    piVar8 = piVar8 + 1;
    local_134 = (float)((int)local_134 + -1);
  } while (local_134 != 0.0);
  if (((float)param_1[0xa4] < (float)param_1[0xa8]) && ((float)param_1[0xa5] == _DAT_0064b254)) {
    param_1[0xa5] = 0x3f800000;
    local_134 = 0.0;
    pfVar10 = (float *)(param_1 + 0x5d);
    local_13c = 0xc;
    do {
      iVar9 = _rand();
      fVar1 = (float)iVar9 * _DAT_0064b614 + _DAT_0064c4d8;
      if (local_134 < fVar1) {
        local_134 = fVar1;
      }
      local_124 = FUN_00631d33(0x6c);
      local_c = 1;
      if (local_124 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        pfVar5 = (float *)(param_1[0xaa] + 0x2c4);
        pfVar11 = afStack_120;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar11 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar11 = pfVar11 + 1;
        }
        pfVar5 = (float *)FUN_0057d570(auStack_44);
        fVar2 = pfVar10[-1] * *pfVar5 + pfVar5[6] * pfVar10[1] + pfVar5[3] * *pfVar10 + pfVar5[9];
        fVar3 = pfVar5[1] * pfVar10[-1] + pfVar5[7] * pfVar10[1] + pfVar5[4] * *pfVar10 + pfVar5[10]
        ;
        fVar4 = pfVar5[2] * pfVar10[-1] + pfVar5[8] * pfVar10[1] + pfVar5[5] * *pfVar10 +
                pfVar5[0xb];
        fStack_e0 = afStack_120[0] * fVar2 + fStack_108 * fVar4 + afStack_120[3] * fVar3 + fStack_fc
        ;
        fStack_e4 = fStack_104 * fVar4 + afStack_120[1] * fVar2 + fStack_110 * fVar3 + fStack_f8;
        fStack_d8 = fStack_100 * fVar4 + afStack_120[2] * fVar2 + fStack_10c * fVar3 + fStack_f4;
        fStack_dc = fStack_e4;
        piVar8 = (int *)FUN_004d9a50(param_1[0xa9],&fStack_e0,pfVar10 + 0x23,fVar1);
      }
      local_c = 0xffffffff;
      (**(code **)(*piVar8 + 0x18))(1);
      pfVar10 = pfVar10 + 3;
      local_13c = local_13c + -1;
    } while (local_13c != 0);
    local_124 = FUN_00631d33(0x34);
    local_c = 2;
    if (local_124 != 0) {
      FUN_004dbdc0(param_1[0xa9],param_1[0xab],param_1[0xaa],local_134);
    }
    local_c = 0xffffffff;
  }
  if ((float)param_1[0xa7] < (float)param_1[0xa8]) {
    (**(code **)(*param_1 + 0x1c))(1);
    ExceptionList = pvStack_18;
    return;
  }
  FUN_005d29a0(1);
  ExceptionList = pvStack_14;
  return;
}


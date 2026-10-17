
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486900(undefined4 param_1,int param_2,double *param_3,double param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,int param_9,double *param_10,
                 double param_11,int param_12,int param_13,undefined4 param_14,undefined4 param_15,
                 double *param_16)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  int *piVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  double *pdVar9;
  float10 fVar10;
  undefined4 auStack_e0 [8];
  char *apcStack_c0 [5];
  double *pdStack_ac;
  double *pdStack_a8;
  double *pdStack_a4;
  double **ppdStack_a0;
  double *local_90;
  double *local_8c;
  uint local_88;
  uint local_84;
  double local_80;
  int local_74 [3];
  undefined1 local_68 [8];
  int local_60;
  double local_5c;
  undefined8 uStack_50;
  double local_48 [2];
  int local_38;
  void *local_34;
  double *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006405a0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_2 == -1) {
    ExceptionList = &local_14;
    if (param_3 == (double *)0xffffffff) {
      ExceptionList = &local_14;
      if ((((param_4 != _DAT_0064a668) || (ExceptionList = &local_14, param_5 != 0)) ||
          (ExceptionList = &local_14, param_6 != 0)) || (ExceptionList = &local_14, param_7 != 0))
      goto LAB_004869c7;
      ppdStack_a0 = (double **)&DAT_0068c120;
      pdStack_a4 = (double *)&DAT_0068c120;
      pdStack_a8 = (double *)s_Internal_error_435_0066f26c;
      pdStack_ac = (double *)0x2e8;
      apcStack_c0[4] = s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8;
      apcStack_c0[3] = s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0;
      apcStack_c0[2] = (char *)0x200;
      apcStack_c0[1] = (char *)0x0;
      apcStack_c0[0] = (char *)0x486980;
      ExceptionList = &local_14;
      FUN_00401010();
      goto LAB_0048698a;
    }
  }
  else {
LAB_0048698a:
    if (param_3 == (double *)0xffffffff) goto LAB_004869c7;
  }
  if (param_10 != (double *)0xffffffff) {
    ppdStack_a0 = (double **)param_16;
    pdStack_a4 = param_10;
    pdStack_a8 = param_3;
    pdStack_ac = (double *)param_1;
    apcStack_c0[4] = (char *)0x4869ad;
    FUN_00485780();
    ExceptionList = local_14;
    return;
  }
LAB_004869c7:
  pdVar9 = param_16;
  *(undefined4 *)param_16 = 0;
  *(undefined4 *)((int)param_16 + 4) = 0;
  if (((param_3 == (double *)0xffffffff) || (param_3 != param_10)) &&
     ((((param_2 != param_9 || ((param_3 != param_10 || (param_4 != param_11)))) ||
       (param_5 != param_12)) || (param_6 != param_13)))) {
    local_60 = 0;
    local_74[2] = 0;
    uStack_50._4_4_ = 0;
    local_38 = 0;
    local_c = 3;
    if (param_3 == (double *)0xffffffff) {
      local_90 = *(double **)(*(int *)(*(int *)(DAT_0068be98 + param_2 * 4) + 0x70) + 0x10);
      ppdStack_a0 = &local_90;
      local_8c = *(double **)(*(int *)(*(int *)(DAT_0068be98 + param_2 * 4) + 0x74) + 0x10);
      pdStack_a4 = (double *)local_68;
      pdStack_a8 = (double *)0x486aac;
      FUN_00460970();
      local_60 = local_60 + 1;
      local_34 = (void *)0xffffffff;
      local_30 = local_90;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0xffffffff;
      auStack_e0[0] = *(undefined4 *)(DAT_0068be98 + param_2 * 4);
      local_2c = 0;
      local_28 = 0;
      ppvVar4 = &local_34;
      ppcVar7 = apcStack_c0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar7 = *ppvVar4;
        ppvVar4 = ppvVar4 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      puVar5 = &param_2;
      puVar8 = auStack_e0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      fVar10 = (float10)FUN_00409a00(param_1);
      local_80 = (double)fVar10;
      FUN_00460900(&local_5c + uStack_50._4_4_,&local_80);
      pdVar9 = local_90;
      uStack_50._4_4_ = uStack_50._4_4_ + 1;
      if (*(double *)(local_68 + uStack_50._4_4_ * 8 + 4) < _DAT_0064a5a8) {
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        ppdStack_a0 = (double **)param_16;
        local_34 = (void *)0xffffffff;
        local_18 = 0xffffffff;
        puVar5 = &param_9;
        ppcVar7 = apcStack_c0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppcVar7 = (char *)*puVar5;
          puVar5 = puVar5 + 1;
          ppcVar7 = ppcVar7 + 1;
        }
        local_30 = pdVar9;
        local_2c = 0;
        local_28 = 0;
        ppvVar4 = &local_34;
        puVar5 = auStack_e0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *ppvVar4;
          ppvVar4 = ppvVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00486900(param_1);
        ExceptionList = local_14;
        return;
      }
      ppdStack_a0 = &local_8c;
      pdStack_a4 = (double *)(local_68 + local_60 * 4);
      pdStack_a8 = (double *)0x486c0b;
      FUN_00460970();
      local_60 = local_60 + 1;
      local_34 = (void *)0xffffffff;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0xffffffff;
      auStack_e0[0] = *(undefined4 *)(DAT_0068be98 + param_2 * 4);
      local_30 = local_8c;
      local_2c = 0;
      local_28 = 0;
      ppvVar4 = &local_34;
      ppcVar7 = apcStack_c0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar7 = *ppvVar4;
        ppvVar4 = ppvVar4 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      puVar5 = &param_2;
      puVar8 = auStack_e0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      fVar10 = (float10)FUN_00409a00(param_1);
      local_80 = (double)fVar10;
      FUN_00460900(&local_5c + uStack_50._4_4_,&local_80);
      pdVar2 = local_8c;
      uStack_50._4_4_ = uStack_50._4_4_ + 1;
      pdVar9 = param_16;
      if (*(double *)(local_68 + uStack_50._4_4_ * 8 + 4) < _DAT_0064a5a8) {
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        ppdStack_a0 = (double **)param_16;
        local_34 = (void *)0xffffffff;
        local_18 = 0xffffffff;
        puVar5 = &param_9;
        ppcVar7 = apcStack_c0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppcVar7 = (char *)*puVar5;
          puVar5 = puVar5 + 1;
          ppcVar7 = ppcVar7 + 1;
        }
        local_30 = pdVar2;
        local_2c = 0;
        local_28 = 0;
        ppvVar4 = &local_34;
        puVar5 = auStack_e0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *ppvVar4;
          ppvVar4 = ppvVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00486900(param_1);
        ExceptionList = local_14;
        return;
      }
    }
    else {
      ppdStack_a0 = &param_3;
      pdStack_a4 = (double *)local_68;
      pdStack_a8 = (double *)0x486a41;
      FUN_00460970();
      local_60 = local_60 + 1;
      pdStack_a8 = &local_80;
      pdStack_ac = &local_5c + uStack_50._4_4_;
      local_80 = 0.0;
      apcStack_c0[4] = (char *)0x486a6d;
      FUN_00460900();
      uStack_50._4_4_ = uStack_50._4_4_ + 1;
    }
    if (param_10 == (double *)0xffffffff) {
      local_8c = *(double **)(*(int *)(*(int *)(DAT_0068be98 + param_9 * 4) + 0x70) + 0x10);
      ppdStack_a0 = &local_8c;
      local_90 = *(double **)(*(int *)(*(int *)(DAT_0068be98 + param_9 * 4) + 0x74) + 0x10);
      pdStack_a4 = (double *)(local_74 + local_74[2]);
      pdStack_a8 = (double *)0x486de6;
      FUN_00460970();
      local_74[2] = local_74[2] + 1;
      local_34 = (void *)0xffffffff;
      local_30 = local_8c;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0xffffffff;
      auStack_e0[0] = *(undefined4 *)(DAT_0068be98 + param_9 * 4);
      puVar5 = &param_9;
      ppcVar7 = apcStack_c0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar7 = (char *)*puVar5;
        puVar5 = puVar5 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      local_2c = 0;
      local_28 = 0;
      ppvVar4 = &local_34;
      puVar5 = auStack_e0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *ppvVar4;
        ppvVar4 = ppvVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      fVar10 = (float10)FUN_00409a00(param_1);
      local_80 = (double)fVar10;
      FUN_00460900(local_48 + local_38,&local_80);
      local_38 = local_38 + 1;
      if ((double)(&uStack_50)[local_38] < _DAT_0064a5a8) {
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        ppdStack_a0 = (double **)param_16;
        local_34 = (void *)0xffffffff;
        local_18 = 0xffffffff;
        local_30 = local_8c;
        local_2c = 0;
        local_28 = 0;
        ppvVar4 = &local_34;
        ppcVar7 = apcStack_c0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppcVar7 = *ppvVar4;
          ppvVar4 = ppvVar4 + 1;
          ppcVar7 = ppcVar7 + 1;
        }
        puVar5 = &param_2;
        puVar8 = auStack_e0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_00486900(param_1);
        ExceptionList = local_14;
        return;
      }
      ppdStack_a0 = &local_90;
      pdStack_a4 = (double *)(local_74 + local_74[2]);
      pdStack_a8 = (double *)0x486f45;
      FUN_00460970();
      local_30 = local_90;
      local_34 = (void *)0xffffffff;
      local_74[2] = local_74[2] + 1;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0xffffffff;
      auStack_e0[0] = *(undefined4 *)(DAT_0068be98 + param_9 * 4);
      puVar5 = &param_9;
      ppcVar7 = apcStack_c0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar7 = (char *)*puVar5;
        puVar5 = puVar5 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      local_2c = 0;
      local_28 = 0;
      ppvVar4 = &local_34;
      puVar5 = auStack_e0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *ppvVar4;
        ppvVar4 = ppvVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      fVar10 = (float10)FUN_00409a00(param_1);
      local_80 = (double)fVar10;
      FUN_00460900(local_48 + local_38,&local_80);
      local_38 = local_38 + 1;
      pdVar9 = param_16;
      if ((double)(&uStack_50)[local_38] < _DAT_0064a5a8) {
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        ppdStack_a0 = (double **)param_16;
        local_34 = (void *)0xffffffff;
        local_18 = 0xffffffff;
        local_30 = local_90;
        local_2c = 0;
        local_28 = 0;
        ppvVar4 = &local_34;
        ppcVar7 = apcStack_c0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppcVar7 = *ppvVar4;
          ppvVar4 = ppvVar4 + 1;
          ppcVar7 = ppcVar7 + 1;
        }
        puVar5 = &param_2;
        puVar8 = auStack_e0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_00486900(param_1);
        ExceptionList = local_14;
        return;
      }
    }
    else {
      ppdStack_a0 = &param_10;
      pdStack_a4 = (double *)(local_74 + local_74[2]);
      pdStack_a8 = (double *)0x486d74;
      FUN_00460970();
      local_74[2] = local_74[2] + 1;
      pdStack_a8 = &local_80;
      pdStack_ac = local_48 + local_38;
      local_80 = 0.0;
      apcStack_c0[4] = (char *)0x486da0;
      FUN_00460900();
      local_38 = local_38 + 1;
    }
    *(undefined4 *)pdVar9 = 0xffffffff;
    *(undefined4 *)((int)pdVar9 + 4) = 0x7fefffff;
    if (param_2 == param_9) {
      auStack_e0[0] = *(undefined4 *)(DAT_0068be98 + param_2 * 4);
      puVar5 = &param_9;
      ppcVar7 = apcStack_c0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar7 = (char *)*puVar5;
        puVar5 = puVar5 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      puVar5 = &param_2;
      puVar8 = auStack_e0 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      fVar10 = (float10)FUN_00409a00(param_1);
      *param_16 = (double)fVar10;
    }
    local_84 = 0;
    if (local_60 * 4 >> 2 != 0) {
      local_90 = &local_5c;
      local_8c = (double *)local_68;
      iVar3 = local_74[2];
      do {
        local_88 = 0;
        if (iVar3 * 4 >> 2 != 0) {
          pdVar9 = local_48;
          piVar6 = local_74;
          do {
            pdStack_a4 = (double *)*piVar6;
            ppdStack_a0 = (double **)&local_80;
            pdStack_a8 = *(double **)local_8c;
            pdStack_ac = (double *)param_1;
            local_80 = 0.0;
            apcStack_c0[4] = (char *)0x48714e;
            FUN_00485780();
            dVar1 = local_80 + *local_90 + *pdVar9;
            if (dVar1 < *param_16) {
              *param_16 = dVar1;
            }
            local_88 = local_88 + 1;
            piVar6 = piVar6 + 1;
            pdVar9 = pdVar9 + 1;
            iVar3 = local_74[2];
          } while (local_88 < (uint)(local_74[2] * 4 >> 2));
        }
        local_90 = local_90 + 1;
        local_84 = local_84 + 1;
        local_8c = (double *)((int)local_8c + 4);
      } while (local_84 < (uint)((local_60 << 2) >> 2));
    }
  }
  ExceptionList = local_14;
  return;
}


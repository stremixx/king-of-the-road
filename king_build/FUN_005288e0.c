
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005288e0(int *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float **ppfVar10;
  float *apfStack_f0 [7];
  undefined4 uStack_d4;
  int *piStack_d0;
  uint *puStack_cc;
  int local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  uint local_84 [2];
  undefined4 local_7c;
  undefined4 local_78;
  char *local_74;
  char *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54 [8];
  float local_34 [3];
  undefined1 local_28 [36];
  
  puStack_cc = (uint *)*param_1;
  if (puStack_cc != (uint *)0x0) {
    piStack_d0 = (int *)0x528900;
    FUN_00631d5c();
    *param_1 = 0;
  }
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[3] = 0x40f86a00;
  param_1[7] = 0x40f86a00;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[5] = -0x3f079600;
  param_1[9] = -0x3f079600;
  puStack_cc = (uint *)&local_b4;
  piStack_d0 = (int *)0x528931;
  FUN_004362c0();
  if (local_b4 != -1) {
    do {
      piStack_d0 = local_54;
      uStack_d4 = 0x528953;
      puStack_cc = (uint *)local_b4;
      FUN_00480040();
      puStack_cc = local_84;
      local_60 = 0xffffffff;
      local_5c = 0xffffffff;
      local_84[0] = 0;
      puVar3 = local_54;
      ppfVar10 = apfStack_f0 + 1;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppfVar10 = (float *)*puVar3;
        puVar3 = puVar3 + 1;
        ppfVar10 = ppfVar10 + 1;
      }
      local_7c = 0;
      local_78 = 0;
      local_74 = s_UNDEFINED_MODULE_0066c638;
      local_70 = s_UNDEFINED_ROOM_0066c628;
      local_6c = 0;
      local_68 = 0;
      apfStack_f0[0] = (float *)0x5289b5;
      FUN_00438e50();
      do {
        piStack_d0 = &local_a0;
        puStack_cc = (uint *)0x0;
        local_a0 = 0;
        puVar3 = local_54;
        ppfVar10 = apfStack_f0;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppfVar10 = (float *)*puVar3;
          puVar3 = puVar3 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        uStack_9c = 0x40590000;
        puVar3 = (undefined4 *)FUN_00435e40(local_28);
        puVar8 = puVar3;
        puVar9 = local_54;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        apfStack_f0[1] = &local_b0;
        ppfVar10 = apfStack_f0 + 2;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppfVar10 = (float *)*puVar3;
          puVar3 = puVar3 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        apfStack_f0[0] = (float *)0x528a16;
        FUN_00439660();
        local_ac = -local_ac;
        if (local_b0 < (float)*(double *)(param_1 + 2)) {
          *(double *)(param_1 + 2) = (double)local_b0;
        }
        if ((float)*(double *)(param_1 + 4) < local_b0) {
          *(double *)(param_1 + 4) = (double)local_b0;
        }
        if (local_ac < (float)*(double *)(param_1 + 6)) {
          *(double *)(param_1 + 6) = (double)local_ac;
        }
        if ((float)*(double *)(param_1 + 8) < local_ac) {
          *(double *)(param_1 + 8) = (double)local_ac;
        }
      } while ((double)CONCAT44(uStack_9c,local_a0) <= _DAT_0064a660);
      piStack_d0 = &local_a4;
      puStack_cc = (uint *)local_b4;
      uStack_d4 = 0x528a9b;
      piVar4 = (int *)FUN_004362f0();
      local_b4 = *piVar4;
    } while (local_b4 != -1);
    local_b4 = -1;
  }
  iVar6 = 0x14;
  do {
    puStack_cc = (uint *)0x528ab9;
    FUN_0050fec0();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_cc = (uint *)&local_a4;
  param_1[1] = 0;
  local_90 = ABS(*(double *)(param_1 + 8) - *(double *)(param_1 + 6)) * _DAT_0064cdf8;
  piStack_d0 = (int *)0x528adb;
  piVar4 = (int *)FUN_004362c0();
  puStack_cc = (uint *)*piVar4;
  local_b4 = (int)puStack_cc;
  if (puStack_cc != (uint *)0xffffffff) {
    do {
      piStack_d0 = local_54;
      uStack_d4 = 0x528afc;
      local_b4 = (int)puStack_cc;
      FUN_00480040();
      puStack_cc = local_84;
      local_60 = 0xffffffff;
      local_5c = 0xffffffff;
      local_84[0] = 0;
      puVar3 = local_54;
      ppfVar10 = apfStack_f0 + 1;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppfVar10 = (float *)*puVar3;
        puVar3 = puVar3 + 1;
        ppfVar10 = ppfVar10 + 1;
      }
      local_7c = 0;
      local_78 = 0;
      local_74 = s_UNDEFINED_MODULE_0066c638;
      local_70 = s_UNDEFINED_ROOM_0066c628;
      local_6c = 0;
      local_68 = 0;
      apfStack_f0[0] = (float *)0x528b5e;
      FUN_00438e50();
      uStack_94 = local_90._4_4_;
      piStack_d0 = &local_98;
      puStack_cc = (uint *)0x0;
      local_98 = (undefined4)local_90;
      puVar3 = local_54;
      ppfVar10 = apfStack_f0;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppfVar10 = (float *)*puVar3;
        puVar3 = puVar3 + 1;
        ppfVar10 = ppfVar10 + 1;
      }
      puVar3 = (undefined4 *)FUN_00435e40(local_28);
      dVar1 = _DAT_0064a5a8;
      iVar6 = param_1[1];
      puVar8 = local_54;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar8 = puVar8 + 1;
      }
      param_1[1] = iVar6 + 1;
      if ((double)CONCAT44(uStack_94,local_98) <= dVar1) {
        do {
          piStack_d0 = &local_98;
          puStack_cc = (uint *)0x0;
          local_98 = (undefined4)local_90;
          uStack_94 = local_90._4_4_;
          puVar3 = local_54;
          ppfVar10 = apfStack_f0;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *ppfVar10 = (float *)*puVar3;
            puVar3 = puVar3 + 1;
            ppfVar10 = ppfVar10 + 1;
          }
          puVar3 = (undefined4 *)FUN_00435e40(local_28);
          dVar1 = _DAT_0064a5a8;
          iVar6 = param_1[1];
          puVar8 = local_54;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar8 = puVar8 + 1;
          }
          param_1[1] = iVar6 + 1;
        } while ((double)CONCAT44(uStack_94,local_98) <= dVar1);
      }
      piStack_d0 = &local_a4;
      puStack_cc = (uint *)local_b4;
      uStack_d4 = 0x528c2c;
      piVar4 = (int *)FUN_004362f0();
      puStack_cc = (uint *)*piVar4;
    } while (puStack_cc != (uint *)0xffffffff);
    local_b4 = -1;
  }
  iVar6 = param_1[1];
  puStack_cc = (uint *)(iVar6 * 0x28);
  piStack_d0 = (int *)0x528c4f;
  iVar7 = FUN_00631d33();
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else if (-1 < iVar6 + -1) {
    puVar3 = (undefined4 *)(iVar7 + 0x20);
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *param_1 = iVar7;
  local_a4 = 0;
  iVar6 = 0x14;
  do {
    puStack_cc = (uint *)0x528c7d;
    FUN_0050fec0();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_cc = &local_98;
  piStack_d0 = (undefined4 *)0x528c8a;
  piVar4 = (int *)FUN_004362c0();
  puStack_cc = (uint *)*piVar4;
  iVar6 = 0;
  do {
    if (puStack_cc == (uint *)0xffffffff) {
      iVar6 = 0x14;
      local_b4 = -1;
      do {
        puStack_cc = (uint *)0x528f76;
        FUN_0050fec0();
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
    piStack_d0 = local_54;
    uStack_d4 = 0x528cb2;
    local_b4 = (int)puStack_cc;
    FUN_00480040();
    puStack_cc = local_84;
    local_60 = 0xffffffff;
    local_5c = 0xffffffff;
    local_84[0] = 0;
    puVar3 = local_54;
    ppfVar10 = apfStack_f0 + 1;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppfVar10 = (float *)*puVar3;
      puVar3 = puVar3 + 1;
      ppfVar10 = ppfVar10 + 1;
    }
    local_7c = 0;
    local_78 = 0;
    local_74 = s_UNDEFINED_MODULE_0066c638;
    local_70 = s_UNDEFINED_ROOM_0066c628;
    local_6c = 0;
    local_68 = 0;
    apfStack_f0[0] = (float *)0x528d18;
    FUN_00438e50();
    uStack_9c = local_90._4_4_;
    local_a0 = (undefined4)local_90;
    apfStack_f0[1] = &local_b0;
    puVar3 = local_54;
    ppfVar10 = apfStack_f0 + 2;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppfVar10 = (float *)*puVar3;
      puVar3 = puVar3 + 1;
      ppfVar10 = ppfVar10 + 1;
    }
    apfStack_f0[0] = (float *)0x528d45;
    FUN_00439660();
    local_ac = -local_ac;
    iVar6 = iVar6 * 0x28;
    piStack_d0 = &local_a0;
    puStack_cc = (uint *)0x0;
    *(double *)(iVar6 + *param_1) = (double)local_b0;
    *(double *)(*param_1 + 8 + iVar6) = (double)local_ac;
    puVar3 = local_54;
    ppfVar10 = apfStack_f0;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppfVar10 = (float *)*puVar3;
      puVar3 = puVar3 + 1;
      ppfVar10 = ppfVar10 + 1;
    }
    puVar3 = (undefined4 *)FUN_00435e40(local_28);
    puVar8 = puVar3;
    puVar9 = local_54;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    apfStack_f0[1] = local_34;
    ppfVar10 = apfStack_f0 + 2;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppfVar10 = (float *)*puVar3;
      puVar3 = puVar3 + 1;
      ppfVar10 = ppfVar10 + 1;
    }
    apfStack_f0[0] = (float *)0x528dc1;
    pfVar5 = (float *)FUN_00439660();
    local_b0 = *pfVar5;
    local_a8 = pfVar5[2];
    local_ac = -pfVar5[1];
    *(double *)(*param_1 + 0x10 + iVar6) = (double)local_b0;
    *(double *)(*param_1 + 0x18 + iVar6) = (double)local_ac;
    *(int *)(*param_1 + 0x20 + iVar6) = local_b4;
    *(ushort *)(*param_1 + 0x24 + iVar6) = (byte)~(byte)(local_84[0] >> 5) & 1;
    local_a4 = local_a4 + 1;
    if (local_a4 < param_1[1]) {
      iVar6 = local_a4 * 0x28;
      do {
        if (_DAT_0064a5a8 < (double)CONCAT44(uStack_9c,local_a0)) break;
        uVar2 = local_90._4_4_;
        local_a0 = (undefined4)local_90;
        apfStack_f0[1] = &local_b0;
        puVar3 = local_54;
        ppfVar10 = apfStack_f0 + 2;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *ppfVar10 = (float *)*puVar3;
          puVar3 = puVar3 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        uStack_9c = uVar2;
        apfStack_f0[0] = (float *)0x528e70;
        FUN_00439660();
        local_ac = -local_ac;
        piStack_d0 = &local_a0;
        *(double *)(iVar6 + *param_1) = (double)local_b0;
        puStack_cc = (uint *)0x0;
        *(double *)(*param_1 + 8 + iVar6) = (double)local_ac;
        puVar3 = local_54;
        ppfVar10 = apfStack_f0;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *ppfVar10 = (float *)*puVar3;
          puVar3 = puVar3 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        puVar3 = (undefined4 *)FUN_00435e40(local_28);
        puVar8 = puVar3;
        puVar9 = local_54;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        apfStack_f0[1] = local_34;
        ppfVar10 = apfStack_f0 + 2;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *ppfVar10 = (float *)*puVar3;
          puVar3 = puVar3 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        apfStack_f0[0] = (float *)0x528ee2;
        pfVar5 = (float *)FUN_00439660();
        local_b0 = *pfVar5;
        iVar6 = iVar6 + 0x28;
        local_a8 = pfVar5[2];
        local_ac = -pfVar5[1];
        *(double *)(*param_1 + -0x18 + iVar6) = (double)local_b0;
        *(double *)(*param_1 + -0x10 + iVar6) = (double)local_ac;
        *(int *)(*param_1 + -8 + iVar6) = local_b4;
        *(ushort *)(*param_1 + -4 + iVar6) = (byte)~(byte)(local_84[0] >> 5) & 1;
        local_a4 = local_a4 + 1;
      } while (local_a4 < param_1[1]);
    }
    piStack_d0 = &local_98;
    puStack_cc = (uint *)local_b4;
    uStack_d4 = 0x528f5a;
    piVar4 = (int *)FUN_004362f0();
    puStack_cc = (uint *)*piVar4;
    iVar6 = local_a4;
  } while( true );
}


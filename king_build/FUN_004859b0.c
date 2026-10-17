
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_004859b0(undefined4 *param_1,double *param_2,int *param_3,int *param_4,double param_5,
            int param_6,int param_7,int param_8,undefined4 param_9,int *param_10,int *param_11,
            double param_12,int param_13,int param_14,undefined4 param_15,undefined4 param_16,
            double *param_17)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  double *pdVar7;
  float10 fVar8;
  int aiStack_140 [7];
  undefined4 uStack_124;
  int *piStack_120;
  int *local_11c [2];
  char *local_114;
  int **local_110;
  double *local_10c;
  int *local_108;
  int *local_104;
  int **local_100;
  int *local_ec;
  int *local_e8;
  int *local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_d9;
  int *local_d8;
  undefined1 local_d1;
  undefined8 local_d0;
  int local_c8;
  int *local_bc [8];
  undefined1 local_9c [4];
  undefined8 *local_98;
  undefined8 *local_94;
  int *local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 *local_70;
  int local_6c [6];
  double *local_54;
  undefined1 local_4d;
  double local_4c;
  undefined8 uStack_40;
  double local_38 [2];
  int local_28;
  uint local_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640573;
  local_14 = ExceptionList;
  local_8c = 0;
  ExceptionList = &local_14;
  if (param_3 == (int *)0xffffffff) {
    ExceptionList = &local_14;
    if (param_4 != (int *)0xffffffff) goto LAB_00485a3d;
    ExceptionList = &local_14;
    if ((((param_5 == _DAT_0064a668) && (ExceptionList = &local_14, param_6 == 0)) &&
        (ExceptionList = &local_14, param_7 == 0)) && (ExceptionList = &local_14, param_8 == 0)) {
      local_100 = (int **)&DAT_0068c120;
      local_104 = (int *)&DAT_0068c120;
      local_108 = (int *)s_Internal_error_435_0066f26c;
      local_10c = (double *)0x255;
      local_110 = (int **)s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8;
      local_114 = s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0;
      local_11c[1] = (int *)0x200;
      local_11c[0] = (int *)0x0;
      piStack_120 = (int *)0x485a33;
      ExceptionList = &local_14;
      FUN_00401010();
      goto LAB_00485a36;
    }
  }
  else {
LAB_00485a36:
    if (param_4 != (int *)0xffffffff) {
LAB_00485a3d:
      if (param_11 != (int *)0xffffffff) {
        local_100 = (int **)param_17;
        local_104 = param_11;
        local_108 = param_4;
        local_10c = param_2;
        local_110 = (int **)param_1;
        local_114 = (char *)0x485a57;
        FUN_00484d80();
        ExceptionList = local_14;
        return param_1;
      }
    }
  }
  *(undefined4 *)param_17 = 0;
  *(undefined4 *)((int)param_17 + 4) = 0;
  if ((param_4 != (int *)0xffffffff) && (param_4 == param_11)) {
    local_100 = (int **)&local_d9;
    local_104 = (int *)0x485a98;
    FUN_00478a20();
    local_c = 1;
    local_e8 = param_4;
    local_e4 = (int *)0x0;
    local_e0 = 0;
    local_de = 0xff;
    if (local_d0._4_4_ == local_c8) {
      local_100 = &local_e8;
      local_104 = (int *)local_d0._4_4_;
      local_108 = (int *)0x485aef;
      FUN_0047b880();
      iVar1 = local_d0._4_4_;
    }
    else {
      local_100 = &local_e8;
      local_104 = (int *)local_d0._4_4_;
      local_108 = (int *)0x485ad0;
      FUN_00487db0();
      iVar1 = local_d0._4_4_ + 0xc;
      local_d0 = (double)CONCAT44(iVar1,(int)local_d0);
    }
    local_100 = (int **)&local_d1;
    local_d1 = local_d9;
    local_104 = (int *)((iVar1 - (int)local_d0) / 0xc);
    local_108 = (int *)0x485b23;
    FUN_004abe00();
    local_104 = (int *)*param_1;
    local_100 = (int **)local_70;
    local_108 = (int *)local_d0._4_4_;
    local_10c = (double *)(int)local_d0;
    local_c._0_1_ = 2;
    local_110 = (int **)0x485b45;
    uVar2 = FUN_0046f490();
    param_1[1] = uVar2;
    local_8c = 1;
    local_c = (uint)local_c._1_3_ << 8;
    local_100 = (int **)0x485b5f;
    FUN_0044a4e0();
    ExceptionList = local_14;
    return param_1;
  }
  if (((param_3 == param_10) && (param_4 == param_11)) &&
     ((param_5 == param_12 && ((param_6 == param_13 && (param_7 == param_14)))))) {
    local_100 = (int **)&local_d9;
    local_104 = (int *)0x485bb5;
    FUN_00478a20();
    ExceptionList = local_14;
    return param_1;
  }
  local_6c[2] = 0;
  local_6c[5] = 0;
  uStack_40._4_4_ = 0;
  local_28 = 0;
  local_100 = (int **)&local_d9;
  local_c._0_1_ = 6;
  local_c._1_3_ = 0;
  local_104 = (int *)0x485c09;
  FUN_00478a20();
  local_100 = (int **)&local_d1;
  local_c._0_1_ = 7;
  local_104 = (int *)0x485c22;
  FUN_00478a20();
  local_c = CONCAT31(local_c._1_3_,8);
  if (param_4 == (int *)0xffffffff) {
    local_ec = *(int **)(*(int *)(*(int *)(DAT_0068be98 + (int)param_3 * 4) + 0x70) + 0x10);
    local_100 = &local_ec;
    local_d8 = *(int **)(*(int *)(*(int *)(DAT_0068be98 + (int)param_3 * 4) + 0x74) + 0x10);
    local_104 = local_6c + local_6c[2];
    local_108 = (int *)0x485cd3;
    FUN_00460970();
    local_6c[2] = local_6c[2] + 1;
    local_bc[1] = local_ec;
    aiStack_140[0] = *(int *)(DAT_0068be98 + (int)param_3 * 4);
    local_bc[0] = (int *)0xffffffff;
    local_bc[7] = (int *)0xffffffff;
    local_bc[2] = (int *)0x0;
    local_bc[3] = (int *)0x0;
    local_bc[4] = (int *)0x0;
    local_bc[5] = (int *)0x0;
    local_bc[6] = (int *)0x0;
    ppiVar4 = local_bc;
    ppiVar6 = local_11c;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppiVar6 = *ppiVar4;
      ppiVar4 = ppiVar4 + 1;
      ppiVar6 = ppiVar6 + 1;
    }
    puVar3 = &param_3;
    piVar5 = aiStack_140 + 1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    fVar8 = (float10)FUN_00409a00(param_2);
    local_d0 = (double)fVar8;
    FUN_00460900(&local_4c + uStack_40._4_4_,&local_d0);
    uStack_40._4_4_ = uStack_40._4_4_ + 1;
    if (*(double *)(&local_54 + uStack_40._4_4_ * 2) < _DAT_0064a5a8) {
      local_100 = (int **)param_17;
      local_bc[1] = local_ec;
      puVar3 = &param_10;
      ppiVar4 = &piStack_120;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *ppiVar4 = (int *)*puVar3;
        puVar3 = puVar3 + 1;
        ppiVar4 = ppiVar4 + 1;
      }
      local_bc[0] = (int *)0xffffffff;
      local_bc[7] = (int *)0xffffffff;
      local_bc[2] = (int *)0x0;
      local_bc[3] = (int *)0x0;
      local_bc[4] = (int *)0x0;
      local_bc[5] = (int *)0x0;
      local_bc[6] = (int *)0x0;
      ppiVar4 = local_bc;
      piVar5 = aiStack_140;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = (int)*ppiVar4;
        ppiVar4 = ppiVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      goto LAB_00486339;
    }
    local_e4 = *(int **)(DAT_0068be98 + (int)param_3 * 4);
    local_e8 = local_d8;
    local_e0 = 0;
    local_de = 0xff;
    if (local_84 == local_80) {
      local_100 = &local_e8;
      local_104 = (int *)local_84;
      local_108 = (int *)0x485e54;
      FUN_0047b880();
    }
    else {
      local_100 = &local_e8;
      local_104 = (int *)local_84;
      local_108 = (int *)0x485e32;
      FUN_00487db0();
      local_84 = local_84 + 0xc;
    }
    local_100 = &local_d8;
    local_104 = local_6c + local_6c[2];
    local_108 = (int *)0x485e6d;
    FUN_00460970();
    local_6c[2] = local_6c[2] + 1;
    local_bc[0] = (int *)0xffffffff;
    local_bc[7] = (int *)0xffffffff;
    aiStack_140[0] = *(int *)(DAT_0068be98 + (int)param_3 * 4);
    local_bc[1] = local_d8;
    local_bc[2] = (int *)0x0;
    local_bc[3] = (int *)0x0;
    local_bc[4] = (int *)0x0;
    local_bc[5] = (int *)0x0;
    local_bc[6] = (int *)0x0;
    ppiVar4 = local_bc;
    ppiVar6 = local_11c;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppiVar6 = *ppiVar4;
      ppiVar4 = ppiVar4 + 1;
      ppiVar6 = ppiVar6 + 1;
    }
    puVar3 = &param_3;
    piVar5 = aiStack_140 + 1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    fVar8 = (float10)FUN_00409a00(param_2);
    local_d0 = (double)fVar8;
    FUN_00460900(&local_4c + uStack_40._4_4_,&local_d0);
    uStack_40._4_4_ = uStack_40._4_4_ + 1;
    if (_DAT_0064a5a8 <= *(double *)(&local_54 + uStack_40._4_4_ * 2)) {
      local_e4 = *(int **)(DAT_0068be98 + (int)param_3 * 4);
      local_e8 = local_ec;
      local_e0 = 0;
      local_de = 0xff;
      if (local_84 == local_80) {
        local_100 = &local_e8;
        local_104 = (int *)local_84;
        local_108 = (int *)0x485fd3;
        FUN_0047b880();
      }
      else {
        local_100 = &local_e8;
        local_104 = (int *)local_84;
        local_108 = (int *)0x485fb1;
        FUN_00487db0();
        local_84 = local_84 + 0xc;
      }
      goto LAB_00485fd6;
    }
    local_bc[0] = (int *)0xffffffff;
    local_bc[7] = (int *)0xffffffff;
    local_100 = (int **)param_17;
    local_bc[1] = local_d8;
    local_bc[2] = (int *)0x0;
    puVar3 = &param_10;
    ppiVar4 = &piStack_120;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppiVar4 = (int *)*puVar3;
      puVar3 = puVar3 + 1;
      ppiVar4 = ppiVar4 + 1;
    }
    local_bc[3] = (int *)0x0;
    local_bc[4] = (int *)0x0;
    local_bc[5] = (int *)0x0;
    local_bc[6] = (int *)0x0;
    ppiVar4 = local_bc;
  }
  else {
    local_100 = &param_4;
    local_104 = local_6c + local_6c[2];
    local_108 = (int *)0x485c49;
    FUN_00460970();
    local_6c[2] = local_6c[2] + 1;
    local_108 = (int *)&local_d0;
    local_10c = &local_4c + uStack_40._4_4_;
    local_d0 = 0.0;
    local_110 = (int **)0x485c81;
    FUN_00460900();
    uStack_40._4_4_ = uStack_40._4_4_ + 1;
LAB_00485fd6:
    if (param_11 != (int *)0xffffffff) {
      local_100 = &param_11;
      local_104 = local_6c + local_6c[5] + 3;
      local_108 = (int *)0x485ff3;
      FUN_00460970();
      local_6c[5] = local_6c[5] + 1;
      local_108 = (int *)&local_d0;
      local_10c = local_38 + local_28;
      local_d0 = 0.0;
      local_110 = (int **)0x48602b;
      FUN_00460900();
      local_28 = local_28 + 1;
LAB_004863e7:
      *(undefined4 *)param_17 = 0xffffffff;
      *(undefined4 *)((int)param_17 + 4) = 0x7fefffff;
      local_100 = (int **)&local_4d;
      local_104 = (int *)0x486404;
      FUN_00478a20();
      local_c = CONCAT31(local_c._1_3_,9);
      if (param_3 == param_10) {
        aiStack_140[0] = *(int *)(DAT_0068be98 + (int)param_3 * 4);
        local_90 = *(int **)(*(int *)(aiStack_140[0] + 0x70) + 0x10);
        local_ec = *(int **)(*(int *)(aiStack_140[0] + 0x74) + 0x10);
        puVar3 = &param_10;
        ppiVar4 = local_11c;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppiVar4 = (int *)*puVar3;
          puVar3 = puVar3 + 1;
          ppiVar4 = ppiVar4 + 1;
        }
        puVar3 = &param_3;
        piVar5 = aiStack_140 + 1;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          piVar5 = piVar5 + 1;
        }
        fVar8 = (float10)FUN_00409a00(param_2);
        *param_17 = (double)fVar8;
        local_70 = (undefined1 *)local_11c;
        local_11c[1] = local_ec;
        local_114 = (char *)0x0;
        local_11c[0] = (int *)0xffffffff;
        local_110 = (int **)0x0;
        local_10c = (double *)0x0;
        local_108 = (int *)0x0;
        local_104 = (int *)0x0;
        local_100 = (int **)0xffffffff;
        puVar3 = &param_3;
        piVar5 = aiStack_140 + 1;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          piVar5 = piVar5 + 1;
        }
        aiStack_140[0] = 0x4864ad;
        aiStack_140[0] = FUN_00424000();
        fVar8 = (float10)FUN_004095c0();
        local_70 = (undefined1 *)local_11c;
        local_d0 = (double)fVar8;
        piStack_120 = local_ec;
        uStack_124 = 0x4864cd;
        FUN_0040a430();
        puVar3 = &param_10;
        piVar5 = aiStack_140 + 1;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          piVar5 = piVar5 + 1;
        }
        aiStack_140[0] = 0x4864e4;
        aiStack_140[0] = FUN_00424000();
        fVar8 = (float10)FUN_004095c0();
        if ((float10)local_d0 <= fVar8) {
          local_e4 = *(int **)(DAT_0068be98 + (int)param_3 * 4);
          local_100 = &local_e8;
          local_e8 = local_ec;
          local_e0 = 0;
          local_de = 0xff;
          local_104 = (int *)0x4865d1;
          FUN_0047ace0();
          local_100 = &local_e8;
          local_e8 = local_90;
          local_e4 = (int *)0x0;
          local_e0 = 0;
          local_de = 0xff;
          local_104 = (int *)0x4865f5;
          FUN_0047ace0();
        }
        else {
          local_e4 = *(int **)(DAT_0068be98 + (int)param_3 * 4);
          local_e8 = local_90;
          local_e0 = 0;
          local_de = 0xff;
          if (local_98 == local_94) {
            local_100 = &local_e8;
            local_104 = (int *)local_98;
            local_108 = (int *)0x486554;
            FUN_0047b880();
          }
          else {
            local_100 = &local_e8;
            local_104 = (int *)local_98;
            local_108 = (int *)0x486535;
            FUN_00487db0();
            local_98 = (undefined8 *)((int)local_98 + 0xc);
          }
          local_e4 = (int *)0x0;
          local_e8 = local_ec;
          local_e0 = 0;
          local_de = 0xff;
          local_104 = (int *)local_98;
          if (local_98 == local_94) {
            local_100 = &local_e8;
            local_108 = (int *)0x4865a0;
            FUN_0047b880();
          }
          else {
            local_100 = &local_e8;
            local_108 = (int *)0x486581;
            FUN_00487db0();
            local_98 = (undefined8 *)((int)local_98 + 0xc);
          }
        }
      }
      local_70 = (undefined1 *)0x0;
      if (local_6c[2] * 4 >> 2 != 0) {
        local_ec = local_6c;
        local_90 = (int *)0x0;
        local_54 = &local_4c;
        iVar1 = local_6c[5];
        do {
          local_24 = 0;
          if (iVar1 * 4 >> 2 != 0) {
            local_d8 = (int *)0x0;
            pdVar7 = local_38;
            piVar5 = local_6c + 3;
            do {
              local_104 = (int *)*piVar5;
              local_100 = (int **)&local_d0;
              local_108 = (int *)*local_ec;
              local_110 = &local_e8;
              local_10c = param_2;
              local_d0 = 0.0;
              local_114 = (char *)0x48668d;
              FUN_00484d80();
              local_c._0_1_ = 10;
              local_d0 = local_d0 + *local_54 + *pdVar7;
              if (local_d0 < *param_17) {
                local_100 = (int **)0x4866c4;
                FUN_00447d40();
                *(int *)param_17 = (int)local_d0;
                *(int *)((int)param_17 + 4) = local_d0._4_4_;
                iVar1 = local_84 - local_88 >> 0x1f;
                if ((local_84 - local_88) / 0xc + iVar1 != iVar1) {
                  local_100 = (int **)((int)local_90 + local_88);
                  local_104 = (int *)0x486704;
                  FUN_0047ace0();
                }
                if (local_e8 == local_e4) {
                  local_100 = (int **)0x0;
                  local_104 = (int *)*local_ec;
                  local_108 = (int *)0x486724;
                  local_100 = (int **)FUN_004868e0();
                  local_104 = (int *)0x48672e;
                  FUN_0047ace0();
                }
                else {
                  local_100 = (int **)local_e4;
                  local_104 = local_e8;
                  local_108 = (int *)local_98;
                  local_10c = (double *)0x486740;
                  FUN_004879a0();
                }
                iVar1 = local_78 - local_7c >> 0x1f;
                if ((local_78 - local_7c) / 0xc + iVar1 != iVar1) {
                  *(undefined4 *)(local_98 + -1) = *(undefined4 *)(DAT_0068be98 + (int)param_10 * 4)
                  ;
                  local_100 = (int **)((int)local_d8 + local_7c);
                  local_104 = (int *)0x48678c;
                  FUN_0047ace0();
                }
              }
              local_c = CONCAT31(local_c._1_3_,9);
              local_100 = (int **)0x48679d;
              FUN_0046e090();
              local_d8 = local_d8 + 3;
              local_24 = local_24 + 1;
              piVar5 = piVar5 + 1;
              pdVar7 = pdVar7 + 1;
              iVar1 = local_6c[5];
            } while (local_24 < (uint)(local_6c[5] * 4 >> 2));
          }
          local_ec = local_ec + 1;
          local_70 = (undefined1 *)((int)local_70 + 1);
          local_54 = local_54 + 1;
          local_90 = local_90 + 3;
        } while (local_70 < (uint)((local_6c[2] << 2) >> 2));
      }
      local_100 = (int **)local_9c;
      local_104 = (int *)0x486830;
      FUN_004876f0();
      local_8c = 1;
      local_c._0_1_ = 8;
      local_100 = (int **)0x486849;
      FUN_0046e090();
      local_c._0_1_ = 7;
      local_100 = (int **)0x48685d;
      FUN_0046e090();
      local_c._0_1_ = 6;
      local_100 = (int **)0x48686e;
      FUN_0046e090();
      local_c._0_1_ = 5;
      local_100 = (int **)0x486882;
      FUN_004030a0();
      local_c._0_1_ = 4;
      local_100 = (int **)0x486896;
      FUN_004030a0();
      local_c._0_1_ = 3;
      local_100 = (int **)0x4868aa;
      FUN_004030a0();
      local_c = (uint)local_c._1_3_ << 8;
      local_100 = (int **)0x4868bd;
      FUN_004030a0();
      ExceptionList = local_14;
      return param_1;
    }
    local_d8 = *(int **)(*(int *)(*(int *)(DAT_0068be98 + (int)param_10 * 4) + 0x70) + 0x10);
    local_100 = &local_d8;
    local_ec = *(int **)(*(int *)(*(int *)(DAT_0068be98 + (int)param_10 * 4) + 0x74) + 0x10);
    local_104 = local_6c + local_6c[5] + 3;
    local_108 = (int *)0x48607d;
    FUN_00460970();
    local_6c[5] = local_6c[5] + 1;
    local_bc[1] = local_d8;
    aiStack_140[0] = *(int *)(DAT_0068be98 + (int)param_10 * 4);
    local_bc[0] = (int *)0xffffffff;
    local_bc[7] = (int *)0xffffffff;
    puVar3 = &param_10;
    ppiVar4 = local_11c;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppiVar4 = (int *)*puVar3;
      puVar3 = puVar3 + 1;
      ppiVar4 = ppiVar4 + 1;
    }
    local_bc[2] = (int *)0x0;
    local_bc[3] = (int *)0x0;
    local_bc[4] = (int *)0x0;
    local_bc[5] = (int *)0x0;
    local_bc[6] = (int *)0x0;
    ppiVar4 = local_bc;
    piVar5 = aiStack_140 + 1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (int)*ppiVar4;
      ppiVar4 = ppiVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    fVar8 = (float10)FUN_00409a00(param_2);
    local_d0 = (double)fVar8;
    FUN_00460900(local_38 + local_28,&local_d0);
    local_28 = local_28 + 1;
    if ((double)(&uStack_40)[local_28] < _DAT_0064a5a8) {
      local_100 = (int **)param_17;
      local_bc[1] = local_d8;
      local_bc[0] = (int *)0xffffffff;
      local_bc[2] = (int *)0x0;
      local_bc[3] = (int *)0x0;
      local_bc[4] = (int *)0x0;
      local_bc[5] = (int *)0x0;
      local_bc[6] = (int *)0x0;
      local_bc[7] = (int *)0xffffffff;
      ppiVar4 = local_bc;
      ppiVar6 = &piStack_120;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *ppiVar6 = *ppiVar4;
        ppiVar4 = ppiVar4 + 1;
        ppiVar6 = ppiVar6 + 1;
      }
      puVar3 = &param_3;
      piVar5 = aiStack_140;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        piVar5 = piVar5 + 1;
      }
      goto LAB_00486339;
    }
    local_e8 = local_ec;
    local_e4 = (int *)0x0;
    local_e0 = 0;
    local_de = 0xff;
    if (local_78 == local_74) {
      local_100 = &local_e8;
      local_104 = (int *)local_78;
      local_108 = (int *)0x4861fb;
      FUN_0047b880();
    }
    else {
      local_100 = &local_e8;
      local_104 = (int *)local_78;
      local_108 = (int *)0x4861d3;
      FUN_00487db0();
      local_78 = local_78 + 0xc;
    }
    local_100 = &local_ec;
    local_104 = local_6c + local_6c[5] + 3;
    local_108 = (int *)0x486214;
    FUN_00460970();
    local_bc[1] = local_ec;
    local_6c[5] = local_6c[5] + 1;
    local_bc[0] = (int *)0xffffffff;
    local_bc[7] = (int *)0xffffffff;
    aiStack_140[0] = *(int *)(DAT_0068be98 + (int)param_10 * 4);
    puVar3 = &param_10;
    ppiVar4 = local_11c;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppiVar4 = (int *)*puVar3;
      puVar3 = puVar3 + 1;
      ppiVar4 = ppiVar4 + 1;
    }
    local_bc[2] = (int *)0x0;
    local_bc[3] = (int *)0x0;
    local_bc[4] = (int *)0x0;
    local_bc[5] = (int *)0x0;
    local_bc[6] = (int *)0x0;
    ppiVar4 = local_bc;
    piVar5 = aiStack_140 + 1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (int)*ppiVar4;
      ppiVar4 = ppiVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    fVar8 = (float10)FUN_00409a00(param_2);
    local_d0 = (double)fVar8;
    FUN_00460900(local_38 + local_28,&local_d0);
    local_28 = local_28 + 1;
    if (_DAT_0064a5a8 <= (double)(&uStack_40)[local_28]) {
      local_e8 = local_d8;
      local_e4 = (int *)0x0;
      local_e0 = 0;
      local_de = 0xff;
      if (local_78 == local_74) {
        local_100 = &local_e8;
        local_104 = (int *)local_78;
        local_108 = (int *)0x4863e4;
        FUN_0047b880();
      }
      else {
        local_100 = &local_e8;
        local_104 = (int *)local_78;
        local_108 = (int *)0x4863bc;
        FUN_00487db0();
        local_78 = local_78 + 0xc;
      }
      goto LAB_004863e7;
    }
    local_bc[0] = (int *)0xffffffff;
    local_bc[7] = (int *)0xffffffff;
    local_100 = (int **)param_17;
    local_bc[1] = local_ec;
    local_bc[2] = (int *)0x0;
    local_bc[3] = (int *)0x0;
    local_bc[4] = (int *)0x0;
    local_bc[5] = (int *)0x0;
    local_bc[6] = (int *)0x0;
    ppiVar4 = local_bc;
    ppiVar6 = &piStack_120;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppiVar6 = *ppiVar4;
      ppiVar4 = ppiVar4 + 1;
      ppiVar6 = ppiVar6 + 1;
    }
    ppiVar4 = &param_3;
  }
  piVar5 = aiStack_140;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = (int)*ppiVar4;
    ppiVar4 = ppiVar4 + 1;
    piVar5 = piVar5 + 1;
  }
LAB_00486339:
  FUN_004859b0(param_1,param_2);
  local_8c = 1;
  local_c._0_1_ = 7;
  local_100 = (int **)0x486361;
  FUN_0044a4e0();
  local_c = CONCAT31(local_c._1_3_,6);
  local_100 = (int **)0x486372;
  FUN_0044a4e0();
  ExceptionList = local_14;
  return param_1;
}


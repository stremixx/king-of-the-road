
undefined4
FUN_0043c3b0(undefined4 *****param_1,undefined4 *****param_2,int *param_3,undefined4 *param_4,
            int param_5,int param_6,undefined4 *****param_7,undefined4 *****param_8,
            undefined4 *****param_9,undefined4 *****param_10,int param_11,int param_12,int param_13,
            int param_14,undefined4 *****param_15,undefined4 *****param_16,undefined4 *****param_17,
            undefined4 *****param_18,int param_19,int param_20)

{
  undefined4 ****ppppuVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *****unaff_EBX;
  undefined4 *****pppppuVar8;
  undefined4 *****unaff_ESI;
  int *piVar9;
  undefined4 *****pppppuVar10;
  undefined4 ****appppuStack_e4 [4];
  undefined4 ****ppppuStack_d4;
  undefined4 ****ppppuStack_d0;
  undefined4 ****ppppuStack_cc;
  undefined4 ****ppppuStack_c8;
  undefined4 ****appppuStack_c4 [5];
  undefined4 ****ppppuStack_b0;
  undefined4 ****ppppuStack_ac;
  undefined4 ****ppppuStack_a8;
  undefined4 ****local_98;
  undefined4 ****local_94;
  undefined4 ***local_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  undefined4 ****local_80 [2];
  undefined8 local_78;
  undefined4 ****local_70;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  char *local_5c;
  undefined *local_58;
  undefined1 local_54 [32];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063db08;
  local_14 = ExceptionList;
  ppppuStack_a8 = (undefined4 ****)0x8;
  ppppuStack_ac = (undefined4 ****)s_START__0066b830;
  local_5c = s_findClosest_dvector3_const___v__d_0066d914;
  local_58 = &DAT_0071d768;
  ppppuStack_b0 = (undefined4 *****)0x43c3f5;
  ExceptionList = &local_14;
  FUN_00401870();
  ppppuStack_a8 = (undefined4 ****)s_findClosest_dvector3_const___v__d_0066d914;
  ppppuStack_ac = (undefined4 ****)0x43c404;
  FUN_004018b0();
  pppppuVar8 = param_10;
  pppppuVar10 = param_9;
  local_c = 0;
  if (((((param_5 == param_13) && (param_6 == param_14)) &&
       ((double)CONCAT44(param_8,param_7) == (double)CONCAT44(param_16,param_15))) &&
      ((param_9 == param_17 && (param_10 == param_18)))) && (param_11 == param_19)) {
LAB_0043c514:
    ppppuStack_a8 = (undefined4 ****)0x8;
    puVar3 = &param_5;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_4 = *puVar3;
      puVar3 = puVar3 + 1;
      param_4 = param_4 + 1;
    }
    ppppuStack_ac = (undefined4 ****)s_COMPL__0066b7ec;
    ppppuStack_b0 = (undefined4 *****)0x43c532;
    FUN_00401870();
  }
  else {
    if (param_20 < param_12) {
      puVar3 = &param_5;
      pppppuVar8 = appppuStack_c4;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pppppuVar8 = (undefined4 ****)*puVar3;
        puVar3 = puVar3 + 1;
        pppppuVar8 = pppppuVar8 + 1;
      }
      puVar3 = &param_13;
      pppppuVar8 = appppuStack_e4;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pppppuVar8 = (undefined4 ****)*puVar3;
        puVar3 = puVar3 + 1;
        pppppuVar8 = pppppuVar8 + 1;
      }
      uVar2 = FUN_0043c3b0(param_1,param_2,param_3,param_4);
      ppppuStack_a8 = (undefined4 ****)0x8;
      ppppuStack_ac = (undefined4 ****)s_COMPL__0066b7ec;
      ppppuStack_b0 = (undefined4 ****)0x43c4af;
      FUN_00401870();
      ppppuStack_a8 = (undefined4 ****)s_findClosest_dvector3_const___v__d_0066d914;
      ppppuStack_ac = (undefined4 ****)0x43c4be;
      FUN_004018b0();
      ExceptionList = local_14;
      return uVar2;
    }
    local_90 = (undefined4 ****)0x0;
    uStack_8c = 0;
    local_94 = (undefined4 *****)0x0;
    local_98 = (undefined4 *****)0x0;
    if (param_12 == param_20) {
      local_84 = param_12 * 0xc;
      iVar4 = *(int *)(local_84 + 4 + *param_3);
      if (iVar4 == 0) goto LAB_0043c514;
      piVar9 = (int *)(iVar4 + 0x78);
      if ((int)param_18 < (int)param_10) {
LAB_0043c57f:
        ppppuStack_a8 = param_10;
        ppppuStack_ac = param_9;
        ppppuStack_b0 = param_8;
        appppuStack_c4[4] = param_7;
        appppuStack_c4[3] = param_18;
        appppuStack_c4[2] = param_17;
        appppuStack_c4[1] = param_16;
        ppppuStack_c8 = &local_98;
        appppuStack_c4[0] = param_15;
        ppppuStack_cc = &local_94;
        ppppuStack_d0 = &local_90;
        ppppuStack_d4 = param_2;
        appppuStack_e4[3] = param_1;
        appppuStack_e4[2] = (undefined4 ****)0x43c5a6;
        FUN_004500f0();
      }
      else if (param_18 == param_10) {
        if (((int)param_17 < (int)param_9) ||
           ((param_17 == param_9 &&
            ((double)CONCAT44(param_16,param_15) < (double)CONCAT44(param_8,param_7)))))
        goto LAB_0043c57f;
        ppppuStack_a8 = param_17;
        ppppuStack_ac = param_16;
        ppppuStack_b0 = param_15;
        appppuStack_c4[4] = param_9;
        appppuStack_c4[3] = param_8;
        appppuStack_c4[2] = param_7;
        appppuStack_c4[1] = &local_94;
        appppuStack_c4[0] = &local_90;
        ppppuStack_c8 = param_2;
        ppppuStack_cc = param_1;
        ppppuStack_d0 = (undefined4 *****)0x43c5db;
        iVar4 = (**(code **)(**(int **)(*piVar9 + (int)param_10 * 4) + 8))();
        if (iVar4 != 0) {
          local_98 = pppppuVar8;
        }
      }
      else {
        ppppuStack_a8 = (undefined4 ****)0x43c5f6;
        iVar4 = (**(code **)(**(int **)(*piVar9 + (int)param_10 * 4) + 0x18))();
        ppppuStack_a8 = (undefined4 ****)(iVar4 + -1);
        ppppuStack_ac = (undefined4 ****)0x3ff00000;
        ppppuStack_b0 = (undefined4 *****)0x0;
        appppuStack_c4[4] = pppppuVar10;
        appppuStack_c4[3] = param_8;
        appppuStack_c4[2] = param_7;
        appppuStack_c4[1] = &local_94;
        appppuStack_c4[0] = &local_90;
        ppppuStack_c8 = param_2;
        ppppuStack_cc = param_1;
        ppppuStack_d0 = (undefined4 ****)0x43c624;
        iVar4 = (**(code **)(**(int **)(*piVar9 + (int)pppppuVar8 * 4) + 8))();
        if (iVar4 != 0) {
          appppuStack_c4[1] = pppppuVar8;
        }
        pppppuVar8 = (undefined4 *****)((int)pppppuVar8 + 1);
        if ((int)pppppuVar8 < (int)param_18) {
          do {
            ppppuStack_d0 = appppuStack_c4 + 2;
            ppppuStack_d4 = appppuStack_c4 + 3;
            appppuStack_e4[3] = param_2;
            appppuStack_e4[2] = param_1;
            appppuStack_e4[1] = (undefined4 ****)0x43c64d;
            iVar4 = (**(code **)(**(int **)(*piVar9 + (int)pppppuVar8 * 4) + 0xc))();
            if (iVar4 != 0) {
              appppuStack_c4[1] = pppppuVar8;
            }
            pppppuVar8 = (undefined4 *****)((int)pppppuVar8 + 1);
          } while ((int)pppppuVar8 < (int)param_18);
        }
        ppppuStack_d0 = param_17;
        ppppuStack_d4 = param_16;
        appppuStack_e4[3] = param_15;
        appppuStack_e4[2] = (undefined4 ****)0x0;
        appppuStack_e4[1] = (undefined4 ****)0x0;
        appppuStack_e4[0] = (undefined4 ****)0x0;
        iVar4 = (**(code **)(**(int **)(*piVar9 + (int)param_18 * 4) + 8))
                          (param_1,param_2,appppuStack_c4 + 3,appppuStack_c4 + 2);
        if (iVar4 != 0) {
          local_98 = param_18;
        }
      }
      local_78 = (double)CONCAT44(uStack_8c,local_90);
      local_80[0] = *(undefined4 *****)(*(int *)(local_84 + 4 + *param_3) + 0xc);
      local_80[1] = (undefined4 ****)0xffffffff;
      local_64 = 0xffffffff;
      local_6c = local_98;
      local_70 = local_94;
      local_68 = 0;
      pppppuVar8 = local_80;
      puVar3 = param_4;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *pppppuVar8;
        pppppuVar8 = pppppuVar8 + 1;
        puVar3 = puVar3 + 1;
      }
      param_4[7] = param_12;
    }
    else {
      local_84 = param_12 * 0xc;
      iVar4 = *param_3;
      if (*(int *)(iVar4 + 4 + local_84) != 0) {
        if ((*(byte *)(iVar4 + 8 + local_84) & 1) == 0) {
          ppppuStack_a8 = *(undefined4 *****)(local_84 + 4 + iVar4);
          ppppuStack_ac = (undefined4 ****)local_34;
          ppppuStack_b0 = (undefined4 ****)0x43c732;
          puVar3 = (undefined4 *)FUN_0047ff40();
        }
        else {
          ppppuStack_a8 = *(undefined4 *****)(local_84 + 4 + iVar4);
          ppppuStack_ac = (undefined4 ****)local_54;
          ppppuStack_b0 = (undefined4 ****)0x43c721;
          puVar3 = (undefined4 *)FUN_0047fe10();
        }
        iVar4 = *param_3;
        pppppuVar10 = local_80;
        for (iVar5 = 8; ppppuVar1 = local_6c, iVar5 != 0; iVar5 = iVar5 + -1) {
          *pppppuVar10 = (undefined4 ****)*puVar3;
          puVar3 = puVar3 + 1;
          pppppuVar10 = pppppuVar10 + 1;
        }
        piVar9 = (int *)(*(int *)(local_84 + 4 + iVar4) + 0x78);
        if ((int)local_6c < (int)pppppuVar8) {
          ppppuStack_a8 = pppppuVar8;
          ppppuStack_ac = param_9;
          ppppuStack_b0 = param_8;
          appppuStack_c4[4] = param_7;
          appppuStack_c4[3] = local_6c;
          appppuStack_c4[2] = local_70;
          appppuStack_c4[1] = local_78._4_4_;
          ppppuStack_c8 = &local_98;
          appppuStack_c4[0] = (undefined4 *****)local_78;
          ppppuStack_cc = &local_94;
          ppppuStack_d0 = &local_90;
          ppppuStack_d4 = param_2;
          appppuStack_e4[3] = param_1;
          appppuStack_e4[2] = (undefined4 ****)0x43c795;
          iVar4 = FUN_004500f0();
        }
        else if ((undefined4 *****)local_6c == pppppuVar8) {
          if ((int)local_70 < (int)param_9) {
            ppppuStack_a8 = pppppuVar8;
            ppppuStack_ac = param_9;
            ppppuStack_b0 = param_8;
            appppuStack_c4[4] = param_7;
            appppuStack_c4[3] = local_6c;
            appppuStack_c4[2] = local_70;
            appppuStack_c4[1] = local_78._4_4_;
            ppppuStack_c8 = &local_98;
            appppuStack_c4[0] = (undefined4 *****)local_78;
            ppppuStack_cc = &local_94;
            ppppuStack_d0 = &local_90;
            ppppuStack_d4 = param_2;
            appppuStack_e4[3] = param_1;
            appppuStack_e4[2] = (undefined4 ****)0x43c7df;
            iVar4 = FUN_004500f0();
          }
          else {
            if (((undefined4 *****)local_70 != param_9) ||
               ((double)CONCAT44(param_8,param_7) <= local_78)) goto LAB_0043c834;
            ppppuStack_a8 = pppppuVar8;
            ppppuStack_ac = param_9;
            ppppuStack_b0 = param_8;
            appppuStack_c4[4] = param_7;
            appppuStack_c4[3] = local_6c;
            appppuStack_c4[2] = local_70;
            appppuStack_c4[1] = local_78._4_4_;
            ppppuStack_c8 = &local_98;
            appppuStack_c4[0] = (undefined4 *****)local_78;
            ppppuStack_cc = &local_94;
            ppppuStack_d0 = &local_90;
            ppppuStack_d4 = param_2;
            appppuStack_e4[3] = param_1;
            appppuStack_e4[2] = (undefined4 ****)0x43c828;
            iVar4 = FUN_004500f0();
          }
        }
        else {
LAB_0043c834:
          local_88 = 0;
          if (pppppuVar8 == (undefined4 *****)local_6c) {
            ppppuStack_a8 = local_70;
            ppppuStack_ac = local_78._4_4_;
            ppppuStack_b0 = (undefined4 *****)local_78;
            appppuStack_c4[4] = param_9;
            appppuStack_c4[3] = param_8;
            appppuStack_c4[2] = param_7;
            appppuStack_c4[1] = &local_94;
            appppuStack_c4[0] = &local_90;
            ppppuStack_c8 = param_2;
            ppppuStack_cc = param_1;
            ppppuStack_d0 = (undefined4 *****)0x43c872;
            iVar5 = (**(code **)(**(int **)(*piVar9 + (int)pppppuVar8 * 4) + 8))();
            iVar4 = local_88;
            if (iVar5 != 0) {
              local_88 = 1;
              local_98 = pppppuVar8;
              iVar4 = local_88;
            }
          }
          else {
            ppppuStack_a8 = (undefined4 ****)0x43c893;
            iVar4 = (**(code **)(**(int **)(*piVar9 + (int)pppppuVar8 * 4) + 0x18))();
            ppppuStack_a8 = (undefined4 ****)(iVar4 + -1);
            ppppuStack_ac = (undefined4 ****)0x3ff00000;
            ppppuStack_b0 = (undefined4 *****)0x0;
            appppuStack_c4[4] = param_9;
            appppuStack_c4[3] = param_8;
            appppuStack_c4[2] = param_7;
            appppuStack_c4[1] = &local_94;
            appppuStack_c4[0] = &local_90;
            ppppuStack_c8 = param_2;
            ppppuStack_cc = param_1;
            ppppuStack_d0 = (undefined4 ****)0x43c8c4;
            iVar4 = (**(code **)(**(int **)(*piVar9 + (int)pppppuVar8 * 4) + 8))();
            if (iVar4 != 0) {
              ppppuStack_b0 = (undefined4 *****)0x1;
              appppuStack_c4[1] = pppppuVar8;
            }
            while (pppppuVar8 = (undefined4 *****)((int)pppppuVar8 + 1),
                  (int)pppppuVar8 < (int)ppppuVar1) {
              ppppuStack_d0 = appppuStack_c4 + 2;
              ppppuStack_d4 = appppuStack_c4 + 3;
              appppuStack_e4[3] = param_2;
              appppuStack_e4[2] = param_1;
              appppuStack_e4[1] = (undefined4 ****)0x43c8f5;
              iVar4 = (**(code **)(**(int **)(*piVar9 + (int)pppppuVar8 * 4) + 0xc))();
              if (iVar4 != 0) {
                ppppuStack_b0 = (undefined4 *****)0x1;
                appppuStack_c4[1] = pppppuVar8;
              }
            }
            appppuStack_e4[2] = (undefined4 ****)0x0;
            appppuStack_e4[1] = (undefined4 ****)0x0;
            appppuStack_e4[0] = (undefined4 ****)0x0;
            appppuStack_e4[3] = unaff_ESI;
            ppppuStack_d4 = unaff_EBX;
            ppppuStack_d0 = local_98;
            iVar5 = (**(code **)(**(int **)(*piVar9 + (int)ppppuVar1 * 4) + 8))
                              (param_1,param_2,appppuStack_c4 + 3,appppuStack_c4 + 2);
            iVar4 = local_88;
            if (iVar5 != 0) {
              local_88 = 1;
              local_98 = ppppuVar1;
              iVar4 = local_88;
            }
          }
        }
        if (iVar4 != 0) {
          local_78 = (double)CONCAT44(uStack_8c,local_90);
          local_80[0] = *(undefined4 *****)(*(int *)(local_84 + 4 + *param_3) + 0xc);
          local_6c = local_98;
          local_80[1] = (undefined4 ****)0xffffffff;
          local_70 = local_94;
          local_68 = 0;
          local_64 = 0xffffffff;
          pppppuVar8 = local_80;
          puVar3 = param_4;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = *pppppuVar8;
            pppppuVar8 = pppppuVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          param_4[7] = param_12;
        }
      }
      local_84 = param_12 + 1;
      if (local_84 < param_20) {
        local_88 = local_84 * 0xc;
        do {
          pppppuVar8 = (undefined4 *****)0x0;
          local_60 = 0;
          iVar4 = *(int *)(local_88 + 4 + *param_3);
          iVar5 = *(int *)(iVar4 + 0x78);
          if (*(int *)(iVar4 + 0x7c) - iVar5 >> 2 != 0) {
            do {
              ppppuStack_a8 = &local_94;
              ppppuStack_ac = &local_90;
              ppppuStack_b0 = param_2;
              appppuStack_c4[4] = param_1;
              appppuStack_c4[3] = (undefined4 *****)0x43ca11;
              iVar5 = (**(code **)(**(int **)(iVar5 + (int)pppppuVar8 * 4) + 0xc))();
              if (iVar5 != 0) {
                local_60 = 1;
                local_98 = pppppuVar8;
              }
              iVar5 = *(int *)(iVar4 + 0x78);
              pppppuVar8 = (undefined4 *****)((int)pppppuVar8 + 1);
            } while (pppppuVar8 < (undefined4 *****)(*(int *)(iVar4 + 0x7c) - iVar5 >> 2));
            if (local_60 != 0) {
              local_70 = local_94;
              local_78 = (double)CONCAT44(uStack_8c,local_90);
              local_80[0] = *(undefined4 *****)(*(int *)(local_88 + 4 + *param_3) + 0xc);
              local_80[1] = (undefined4 ****)0xffffffff;
              local_64 = 0xffffffff;
              local_6c = local_98;
              local_68 = 0;
              pppppuVar8 = local_80;
              puVar3 = param_4;
              for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar3 = *pppppuVar8;
                pppppuVar8 = pppppuVar8 + 1;
                puVar3 = puVar3 + 1;
              }
              param_4[7] = local_84;
            }
          }
          local_84 = local_84 + 1;
          local_88 = local_88 + 0xc;
        } while (local_84 < param_20);
      }
      iVar5 = param_20 * 0xc;
      iVar4 = *param_3;
      if (*(int *)(iVar4 + 4 + iVar5) != 0) {
        if ((*(byte *)(iVar4 + 8 + iVar5) & 1) == 0) {
          ppppuStack_a8 = *(undefined4 *****)(iVar4 + 4 + iVar5);
          ppppuStack_ac = (undefined4 ****)local_54;
          ppppuStack_b0 = (undefined4 ****)0x43caea;
          puVar3 = (undefined4 *)FUN_0047fe10();
        }
        else {
          ppppuStack_a8 = *(undefined4 *****)(iVar4 + 4 + iVar5);
          ppppuStack_ac = (undefined4 ****)local_34;
          ppppuStack_b0 = (undefined4 ****)0x43cad9;
          puVar3 = (undefined4 *)FUN_0047ff40();
        }
        pppppuVar8 = local_80;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pppppuVar8 = (undefined4 ****)*puVar3;
          puVar3 = puVar3 + 1;
          pppppuVar8 = pppppuVar8 + 1;
        }
        ppppuStack_a8 = local_6c;
        ppppuStack_ac = local_70;
        ppppuStack_b0 = local_78._4_4_;
        appppuStack_c4[4] = (undefined4 *****)local_78;
        appppuStack_c4[3] = param_18;
        appppuStack_c4[2] = param_17;
        appppuStack_c4[1] = param_16;
        ppppuStack_c8 = &local_98;
        appppuStack_c4[0] = param_15;
        ppppuStack_cc = &local_94;
        ppppuStack_d0 = &local_90;
        ppppuStack_d4 = param_2;
        appppuStack_e4[3] = param_1;
        appppuStack_e4[2] = (undefined4 ****)0x43cb46;
        iVar4 = FUN_004500f0();
        if (iVar4 != 0) {
          local_70 = local_94;
          local_78 = (double)CONCAT44(uStack_8c,local_90);
          local_80[0] = *(undefined4 *****)(*(int *)(*param_3 + 4 + iVar5) + 0xc);
          local_6c = local_98;
          local_80[1] = (undefined4 ****)0xffffffff;
          local_64 = 0xffffffff;
          local_68 = 0;
          pppppuVar8 = local_80;
          puVar3 = param_4;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = *pppppuVar8;
            pppppuVar8 = pppppuVar8 + 1;
            puVar3 = puVar3 + 1;
          }
          param_4[7] = param_20;
        }
      }
    }
    if ((*(byte *)(*param_3 + 8 + param_4[7] * 0xc) & 1) == 0) {
      uVar6 = param_4[6] & 0xfffffffe;
    }
    else {
      uVar6 = param_4[6] | 1;
    }
    param_4[6] = uVar6;
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
  }
  ppppuStack_a8 = (undefined4 ****)s_findClosest_dvector3_const___v__d_0066d914;
  ppppuStack_ac = (undefined4 ****)0x43cc0a;
  FUN_004018b0();
  ExceptionList = local_14;
  return 0;
}


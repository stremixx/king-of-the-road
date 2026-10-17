
uint FUN_004928d0(int *param_1,int param_2,uint param_3,int *param_4,int param_5,uint param_6,
                 undefined4 *param_7)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  int **ppiStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  char *pcStack_54;
  int *local_3c [2];
  uint uStack_34;
  int *local_30 [2];
  uint local_28;
  undefined4 local_24;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00640f80;
  local_c = ExceptionList;
  local_4 = 1;
  if (((param_1 == param_4) && (param_3 == param_6)) && (param_2 == param_5)) {
    local_4 = 0;
    ExceptionList = &local_c;
    if ((((param_3 & 0x10000) == 0) && (ExceptionList = &local_c, param_1 != (int *)0x0)) &&
       ((ExceptionList = &local_c, param_1[1] = param_1[1] + -1, param_1[1] == 0 &&
        (param_1 != (int *)0x0)))) {
      pcStack_54 = (char *)0x1;
      uStack_58 = 0x49294b;
      (**(code **)(*param_1 + 0xc))();
    }
    local_4 = 0xffffffff;
    if ((((param_6 & 0x10000) == 0) && (param_4 != (int *)0x0)) &&
       ((param_4[1] = param_4[1] + -1, param_4[1] == 0 && (param_4 != (int *)0x0)))) {
      pcStack_54 = (char *)0x1;
      uStack_58 = 0x492980;
      (**(code **)(*param_4 + 0xc))();
    }
    ExceptionList = local_c;
    return 0xffffffff;
  }
  if (((param_1 == (int *)0x0) && (param_3 == 0)) && (ExceptionList = &local_c, param_2 == 0))
  goto LAB_00492a2d;
  if (((param_4 == (int *)0x0) && (param_6 == 0)) && (param_5 == 0)) {
    ExceptionList = &local_c;
    if (((param_3 & 0x10000) != 0) || (ExceptionList = &local_c, param_1 == (int *)0x0))
    goto LAB_00492a2d;
    ExceptionList = &local_c;
    param_1[1] = param_1[1] + -1;
    iVar4 = param_1[1];
  }
  else {
    if ((char)param_6 == (char)param_3) {
      uVar3 = param_3 & 0xff;
      if (uVar3 != 7) {
        if (uVar3 == 9) {
          pcStack_54 = (char *)0x492b66;
          ExceptionList = &local_c;
          FUN_004042a0();
          local_4._0_1_ = 3;
          if (param_1 == (int *)0x0) {
            local_30[0] = (int *)0x0;
            local_28 = 0;
          }
          else {
            pcStack_54 = (char *)0x492b77;
            iVar4 = (**(code **)*param_1)();
            if (iVar4 == 9) {
              local_30[0] = param_1;
              local_28 = param_3;
              param_1[1] = param_1[1] + 1;
            }
            else {
              pcStack_54 = s_Identifier_0066be4c;
              uStack_58 = 0x492b8a;
              uStack_58 = (**(code **)(*param_1 + 4))();
              uStack_5c = 1;
              uStack_60 = 2;
              ppiStack_64 = (int **)0x492b94;
              FUN_004a5670();
            }
          }
          local_4._0_1_ = 4;
          pcStack_54 = (char *)0x492bc8;
          FUN_004042a0();
          local_4._0_1_ = 5;
          if (param_4 == (int *)0x0) {
            local_3c[0] = (int *)0x0;
            uStack_34 = 0;
          }
          else {
            pcStack_54 = (char *)0x492bd9;
            iVar4 = (**(code **)*param_4)();
            if (iVar4 == 9) {
              local_3c[0] = param_4;
              uStack_34 = param_6;
              param_4[1] = param_4[1] + 1;
            }
            else {
              pcStack_54 = s_Identifier_0066be4c;
              uStack_58 = 0x492bec;
              uStack_58 = (**(code **)(*param_4 + 4))();
              uStack_5c = 1;
              uStack_60 = 2;
              ppiStack_64 = (int **)0x492bf6;
              FUN_004a5670();
            }
          }
          local_4 = CONCAT31(local_4._1_3_,6);
          if (local_3c[0] == (int *)0x0) {
            pcStack_54 = (char *)0x1;
            uStack_58 = 0;
            uStack_5c = 0x492c2d;
            FUN_004a5470();
          }
          if ((uStack_34 & 0x10000) != 0) {
            pcStack_54 = (char *)0x1;
            uStack_58 = 4;
            uStack_5c = 0x492c45;
            FUN_004a5470();
          }
          iVar4 = local_3c[0][3];
          if (local_30[0] == (int *)0x0) {
            pcStack_54 = (char *)0x1;
            uStack_58 = 0;
            uStack_5c = 0x492c5f;
            FUN_004a5470();
          }
          if ((local_28 & 0x10000) != 0) {
            pcStack_54 = (char *)0x1;
            uStack_58 = 4;
            uStack_5c = 0x492c70;
            FUN_004a5470();
          }
          uStack_58 = local_30[0][3];
          uStack_5c = 0x492c81;
          pcStack_54 = (char *)iVar4;
          iVar4 = FUN_0061d520();
          local_4._0_1_ = 4;
          pcStack_54 = (char *)0x492c98;
          FUN_00492340();
          local_4._0_1_ = 1;
          pcStack_54 = (char *)0x492ca6;
          FUN_00492340();
          local_4 = (uint)local_4._1_3_ << 8;
          if ((((param_3 & 0x10000) == 0) && (param_1 != (int *)0x0)) &&
             ((param_1[1] = param_1[1] + -1, param_1[1] == 0 && (param_1 != (int *)0x0)))) {
            pcStack_54 = (char *)0x1;
            uStack_58 = 0x492cd6;
            (**(code **)(*param_1 + 0xc))();
          }
          local_4 = 0xffffffff;
          if (((((param_6 & 0x10000) == 0) && (param_4 != (int *)0x0)) &&
              (param_4[1] = param_4[1] + -1, param_4[1] == 0)) && (param_4 != (int *)0x0)) {
            pcStack_54 = (char *)0x1;
            uStack_58 = 0x492d09;
            (**(code **)(*param_4 + 0xc))();
          }
          ExceptionList = local_c;
          return (uint)(iVar4 == 0);
        }
        if (uVar3 == 3) {
          pcStack_54 = (char *)0x492d30;
          ExceptionList = &local_c;
          FUN_004042a0();
          local_4._0_1_ = 7;
          if (param_1 == (int *)0x0) {
            local_30[0] = (int *)0x0;
            local_28 = 0;
          }
          else {
            pcStack_54 = (char *)0x492d41;
            iVar4 = (**(code **)*param_1)();
            if (iVar4 == 3) {
              local_30[0] = param_1;
              local_28 = param_3;
              param_1[1] = param_1[1] + 1;
            }
            else {
              pcStack_54 = s_String_0066ba58;
              uStack_58 = 0x492d54;
              uStack_58 = (**(code **)(*param_1 + 4))();
              uStack_5c = 1;
              uStack_60 = 2;
              ppiStack_64 = (int **)0x492d5e;
              FUN_004a5670();
            }
          }
          pcStack_54 = (char *)&param_4;
          local_4._0_1_ = 8;
          uStack_58 = 0x492d94;
          FUN_004556d0();
          local_4._0_1_ = 9;
          pcStack_54 = (char *)0x492da2;
          iVar4 = FUN_004b8250();
          pbVar9 = *(byte **)(iVar4 + 0xc);
          pcStack_54 = (char *)0x492dae;
          iVar4 = FUN_004b8250();
          pbVar5 = *(byte **)(iVar4 + 0xc);
          do {
            bVar1 = *pbVar5;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_00492dd5:
              iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00492dda;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_00492dd5;
            pbVar5 = pbVar5 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00492dda:
          local_4._0_1_ = 8;
          pcStack_54 = (char *)0x492df0;
          FUN_00492340();
          local_4._0_1_ = 1;
          pcStack_54 = (char *)0x492dfe;
          FUN_00492340();
          local_4 = (uint)local_4._1_3_ << 8;
          pcStack_54 = (char *)0x492e0c;
          FUN_00492340();
          local_4 = 0xffffffff;
          pcStack_54 = (char *)0x492e1d;
          FUN_00492340();
          ExceptionList = local_c;
          return (uint)(iVar4 == 0);
        }
        if (uVar3 == 8) {
          pcStack_54 = (char *)&param_1;
          uStack_58 = 0x492e45;
          ExceptionList = &local_c;
          FUN_004922a0();
          pcStack_54 = (char *)&param_4;
          local_4._0_1_ = 10;
          uStack_58 = 0x492e58;
          FUN_004922a0();
          pcStack_54 = (char *)0x492e72;
          FUN_00492340();
          local_4._0_1_ = 1;
          pcStack_54 = (char *)0x492e80;
          FUN_00492340();
          local_4 = (uint)local_4._1_3_ << 8;
          pcStack_54 = (char *)0x492e8e;
          FUN_00492340();
          local_4 = 0xffffffff;
          pcStack_54 = (char *)0x492e9f;
          FUN_00492340();
          ExceptionList = local_c;
          return (uint)(local_3c[0] == local_30[0]);
        }
        ExceptionList = &local_c;
        if ((uVar3 == 4) || (ExceptionList = &local_c, uVar3 == 5)) {
LAB_00492f65:
          local_4 = local_4 & 0xffffff00;
          pcStack_54 = (char *)0x492f73;
          FUN_00492340();
          local_4 = 0xffffffff;
          pcStack_54 = (char *)0x492f84;
          FUN_00492340();
          ExceptionList = local_c;
          return 0;
        }
        if (uVar3 == 10) {
          pcStack_54 = (char *)&param_1;
          uStack_58 = 0x492edd;
          ExceptionList = &local_c;
          FUN_004a1ea0();
          pcStack_54 = (char *)&param_4;
          local_4._0_1_ = 0xb;
          uStack_58 = 0x492ef0;
          FUN_004a1ea0();
          local_4._0_1_ = 0xc;
          uVar3 = 1;
          pcStack_54 = (char *)0x492f04;
          iVar6 = FUN_004b8250();
          iVar4 = *(int *)(iVar6 + 0x18);
          iVar6 = *(int *)(iVar6 + 0x14);
          pcStack_54 = (char *)0x492f16;
          iVar7 = FUN_004b8250();
          puVar2 = (undefined1 *)param_7;
          if ((iVar4 - iVar6) / 0xc == (*(int *)(iVar7 + 0x18) - *(int *)(iVar7 + 0x14)) / 0xc) {
            uVar10 = 0;
            do {
              pcStack_54 = (char *)0x492fa8;
              iVar4 = FUN_004b8250();
              if ((uint)((*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14)) / 0xc) <= uVar10) break;
              pcStack_54 = puVar2;
              uStack_5c = 0x492fd2;
              uStack_58 = uVar10;
              FUN_004b8250();
              uStack_5c = 0x492fdc;
              ppiStack_64 = (int **)FUN_004a17c0();
              param_7 = &uStack_60;
              puStack_68 = (undefined1 *)0x492feb;
              FUN_00455dc0();
              local_4._0_1_ = 0xd;
              puStack_68 = (undefined1 *)0x492ffa;
              ppiStack_64 = (int **)uVar10;
              FUN_004b8250();
              puStack_68 = (undefined1 *)0x493004;
              uVar8 = FUN_004a17c0();
              FUN_00455dc0(uVar8);
              local_4._0_1_ = 0xc;
              uVar3 = FUN_004928d0();
              uVar10 = uVar10 + 1;
            } while (uVar3 != 0);
            local_4._0_1_ = 0xb;
            pcStack_54 = (char *)0x493038;
            FUN_00492340();
            local_4._0_1_ = 1;
            pcStack_54 = (char *)0x493046;
            FUN_00492340();
            local_4 = (uint)local_4._1_3_ << 8;
            pcStack_54 = (char *)0x493054;
            FUN_00492340();
            local_4 = 0xffffffff;
            pcStack_54 = (char *)0x493065;
            FUN_00492340();
            ExceptionList = local_c;
            return uVar3;
          }
          local_4._0_1_ = 0xb;
          pcStack_54 = (char *)0x492f57;
          FUN_00492340();
          local_4 = CONCAT31(local_4._1_3_,1);
          pcStack_54 = (char *)0x492f65;
          FUN_00492340();
          goto LAB_00492f65;
        }
        if (uVar3 != 2) {
          ExceptionList = &local_c;
          if (uVar3 == 6) {
            pcStack_54 = (char *)&param_1;
            uStack_58 = 0x49319c;
            ExceptionList = &local_c;
            FUN_00455640();
            pcStack_54 = (char *)&param_4;
            local_4._0_1_ = 0x12;
            uStack_58 = 0x4931b0;
            FUN_00455640();
            pcStack_54 = (char *)local_24;
            uStack_58 = local_18;
            local_4._0_1_ = 0x13;
            uStack_5c = 0x4931c4;
            uVar3 = FUN_004b1040();
            local_4._0_1_ = 0x12;
            pcStack_54 = (char *)0x4931db;
            FUN_00492340();
            local_4._0_1_ = 1;
            pcStack_54 = (char *)0x4931e9;
            FUN_00492340();
            local_4 = (uint)local_4._1_3_ << 8;
            pcStack_54 = (char *)0x4931f7;
            FUN_00492340();
            local_4 = 0xffffffff;
            pcStack_54 = (char *)0x493208;
            FUN_00492340();
            ExceptionList = local_c;
            return uVar3 & 0xff;
          }
          goto LAB_00492f65;
        }
        pcStack_54 = (char *)&param_1;
        uStack_58 = 0x493091;
        ExceptionList = &local_c;
        FUN_0044ca50();
        pcStack_54 = (char *)&param_4;
        local_4._0_1_ = 0xe;
        uStack_58 = 0x4930a4;
        FUN_0044ca50();
        puVar2 = (undefined1 *)param_7;
        ppiStack_64 = local_30;
        pcStack_54 = (char *)param_7;
        param_7 = &uStack_60;
        puStack_68 = (undefined1 *)&uStack_60;
        local_4._0_1_ = 0xf;
        uStack_6c = 0x4930c3;
        FUN_00407ec0();
        local_4._0_1_ = 0x10;
        FUN_00407ec0(&uStack_6c,local_3c);
        local_4._0_1_ = 0xf;
        iVar4 = FUN_004928d0();
        if (iVar4 != 0) {
          pcStack_54 = puVar2;
          ppiStack_64 = local_30;
          param_7 = &uStack_60;
          puStack_68 = (undefined1 *)&uStack_60;
          uStack_6c = 0x493102;
          FUN_00407f50();
          local_4._0_1_ = 0x11;
          FUN_00407f50(&uStack_6c,local_3c);
          local_4._0_1_ = 0xf;
          iVar4 = FUN_004928d0();
          if (iVar4 != 0) {
            uVar3 = 1;
            goto LAB_00493135;
          }
        }
        uVar3 = 0;
LAB_00493135:
        local_4._0_1_ = 0xe;
        pcStack_54 = (char *)0x493143;
        FUN_00492340();
        local_4._0_1_ = 1;
        pcStack_54 = (char *)0x493151;
        FUN_00492340();
        local_4 = (uint)local_4._1_3_ << 8;
        pcStack_54 = (char *)0x49315f;
        FUN_00492340();
        local_4 = 0xffffffff;
        pcStack_54 = (char *)0x493170;
        FUN_00492340();
        ExceptionList = local_c;
        return uVar3;
      }
      pcStack_54 = (char *)&param_1;
      uStack_58 = 0x492a81;
      ExceptionList = &local_c;
      FUN_004a1a40();
      pcStack_54 = (char *)&param_4;
      local_4._0_1_ = 2;
      uStack_58 = 0x492a94;
      FUN_004a1a40();
      if (local_3c[0] == (int *)0x0) {
        if (local_30[0] == (int *)0x0) goto LAB_00492b4a;
      }
      else if (local_30[0] != (int *)0x0) {
LAB_00492b4a:
        uVar3 = 1;
        goto LAB_00492aae;
      }
      uVar3 = 0;
LAB_00492aae:
      pcStack_54 = (char *)0x492ab7;
      FUN_00492340();
      local_4._0_1_ = 1;
      pcStack_54 = (char *)0x492ac5;
      FUN_00492340();
      local_4 = (uint)local_4._1_3_ << 8;
      if ((((param_3 & 0x10000) == 0) && (param_1 != (int *)0x0)) &&
         ((param_1[1] = param_1[1] + -1, param_1[1] == 0 && (param_1 != (int *)0x0)))) {
        pcStack_54 = (char *)0x1;
        uStack_58 = 0x492afa;
        (**(code **)(*param_1 + 0xc))();
      }
      local_4 = 0xffffffff;
      if (((((param_6 & 0x10000) == 0) && (param_4 != (int *)0x0)) &&
          (param_4[1] = param_4[1] + -1, param_4[1] == 0)) && (param_4 != (int *)0x0)) {
        pcStack_54 = (char *)0x1;
        uStack_58 = 0x492b2d;
        (**(code **)(*param_4 + 0xc))();
      }
      ExceptionList = local_c;
      return uVar3;
    }
    ExceptionList = &local_c;
    if (((param_3 & 0x10000) != 0) || (ExceptionList = &local_c, param_1 == (int *)0x0))
    goto LAB_00492a2d;
    ExceptionList = &local_c;
    param_1[1] = param_1[1] + -1;
    iVar4 = param_1[1];
  }
  if ((iVar4 == 0) && (param_1 != (int *)0x0)) {
    local_4 = 0;
    pcStack_54 = (char *)0x1;
    uStack_58 = 0x492a1b;
    (**(code **)(*param_1 + 0xc))();
  }
LAB_00492a2d:
  local_4 = 0xffffffff;
  if (((((param_6 & 0x10000) == 0) && (param_4 != (int *)0x0)) &&
      (param_4[1] = param_4[1] + -1, param_4[1] == 0)) && (param_4 != (int *)0x0)) {
    pcStack_54 = (char *)0x1;
    uStack_58 = 0x492a5e;
    (**(code **)(*param_4 + 0xc))();
  }
  ExceptionList = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438310(undefined4 param_1,double param_2,double param_3,double param_4,double param_5,
                 undefined4 param_6,undefined4 param_7,double param_8,undefined4 param_9,
                 int param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                 undefined4 param_22,int param_23,int param_24,uint param_25,undefined4 param_26,
                 int param_27,int param_28,char *param_29,undefined *param_30)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  double *pdVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 unaff_EBP;
  double *pdVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  char **ppcVar18;
  uint *puVar19;
  double in_stack_000000b0;
  double in_stack_000000b8;
  double in_stack_000000c0;
  double in_stack_000000c8;
  double in_stack_000000d0;
  double in_stack_000000d8;
  double in_stack_000000e0;
  double in_stack_000000e8;
  double in_stack_000000f0;
  int iVar20;
  int iVar21;
  void *in_stack_00007924;
  char *pcStack_54;
  char *pcStack_50;
  char *apcStack_4c [4];
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  double *local_14;
  undefined1 *local_10;
  uint local_c;
  int *local_8;
  undefined4 uVar22;
  
  local_c = 0xffffffff;
  local_10 = &LAB_0063d952;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0061d4f0();
  local_2c = 1.69792922906944e-313;
  param_29 = s_reUncontradict___0066d5f0;
  param_30 = &DAT_0071d768;
  local_34 = (double)CONCAT44(0x438360,(undefined4)local_34);
  FUN_00401870();
  local_2c = 1.0162220873961634e-306;
  FUN_004018b0();
  local_2c = (double)CONCAT44(&param_9,0x438382);
  FUN_00477c00();
  _local_8 = (double)CONCAT44(unaff_EBP,(int)&local_2c + 4);
  local_2c = (double)CONCAT44(param_9,&stack0x00000090);
  local_34 = (double)CONCAT44(0x43839b,(undefined4)local_34);
  puVar4 = (undefined4 *)FUN_00437600();
  apcStack_4c[1] = (char *)&stack0x000000e0;
  ppcVar18 = apcStack_4c + 2;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppcVar18 = (char *)*puVar4;
    puVar4 = puVar4 + 1;
    ppcVar18 = ppcVar18 + 1;
  }
  apcStack_4c[0] = (char *)0x4383b6;
  FUN_00435cd0();
  iVar20 = 0;
  iVar10 = 0;
  iVar21 = 0;
  piVar12 = (int *)*DAT_0068a8f0;
  if (piVar12 != DAT_0068a8f0) {
    do {
      local_2c = (double)CONCAT44(piVar12,0x4383f3);
      iVar5 = FUN_0040a950();
      if (iVar5 != 0) {
        local_2c = (double)CONCAT44(piVar12,0x43840c);
        iVar5 = FUN_0040a950();
        uVar22 = (undefined4)((ulonglong)_local_8 >> 0x20);
        _local_8 = (double)CONCAT44(uVar22,iVar5);
        puVar4 = (undefined4 *)(iVar5 + 0x20);
        puVar15 = (undefined4 *)&stack0x00000090;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar15 = puVar15 + 1;
        }
        puVar4 = (undefined4 *)(iVar5 + 0x20);
        ppcVar18 = apcStack_4c + 2;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *ppcVar18 = (char *)*puVar4;
          puVar4 = puVar4 + 1;
          ppcVar18 = ppcVar18 + 1;
        }
        apcStack_4c[1] = (char *)&param_2;
        apcStack_4c[0] = (char *)0x43843b;
        FUN_00435cd0();
        local_2c = param_4 - in_stack_000000f0;
        local_34 = param_3 - in_stack_000000e8;
        local_3c = param_2 - in_stack_000000e0;
        apcStack_4c[3] = (char *)0x438479;
        FUN_00405ea0();
        if (SQRT((double)CONCAT44(param_18,param_17) * (double)CONCAT44(param_18,param_17) +
                 (double)CONCAT44(param_16,param_15) * (double)CONCAT44(param_16,param_15) +
                 (double)CONCAT44(param_14,param_13) * (double)CONCAT44(param_14,param_13)) <
            _DAT_0066b7a0) {
          local_2c = (double)CONCAT44(&local_8,&stack0x00000118 + iVar20 * 4);
          local_34 = (double)CONCAT44(0x4384c5,(undefined4)local_34);
          FUN_00460970();
          iVar20 = iVar20 + 1;
          local_34 = (double)CONCAT44(&param_2,&stack0x0000091c + iVar10 * 0x18);
          local_3c = (double)CONCAT44(0x4384f0,(undefined4)local_3c);
          FUN_00461690();
          iVar10 = iVar10 + 1;
          local_3c = (double)CONCAT44(&stack0x00000090,&stack0x00003920 + iVar21 * 0x20);
          apcStack_4c[3] = (char *)0x43851e;
          FUN_004616b0();
          iVar21 = iVar21 + 1;
        }
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != DAT_0068a8f0);
  }
  if ((uint)(iVar20 * 4 >> 2) < 2) {
    local_2c = 1.6979292257098e-313;
    local_34 = (double)CONCAT44(0x438566,(undefined4)local_34);
    FUN_00401870();
    local_2c = 1.0162220873962453e-306;
    FUN_004018b0();
    ExceptionList = in_stack_00007924;
    return;
  }
  param_1 = 0;
  do {
    if (0xff < param_1) break;
    param_13 = 0;
    iVar10 = iVar20 * 4 >> 2;
    local_2c = (double)CONCAT44((undefined1 *)((int)register0x00000010 + 0x2f),iVar10);
    param_14 = 0;
    param_15 = 0;
    param_16 = 0;
    param_17 = 0;
    param_18 = 0;
    local_34 = (double)CONCAT44(0x4385f6,(undefined4)local_34);
    FUN_0044a470();
    local_2c = (double)CONCAT44(param_9,&param_13);
    local_34 = (double)CONCAT44(iVar10,param_10);
    local_3c = (double)CONCAT44(0x438613,(undefined4)local_3c);
    param_11 = FUN_00466170();
    _local_8 = (double)((ulonglong)_local_8 & 0xffffffff00000000);
    local_c = 0;
    if (iVar20 * 4 >> 2 != 0) {
      pdVar6 = (double *)&stack0x00000924;
      iVar10 = 0;
      do {
        if (0 < iVar10) {
          iVar21 = 0;
          pdVar14 = (double *)&stack0x00000924;
          local_14 = pdVar6;
          local_10 = (undefined1 *)local_c;
          do {
            local_2c = pdVar6[1] - pdVar14[1];
            param_27 = *(int *)pdVar6;
            param_28 = *(int *)((int)pdVar6 + 4);
            param_21 = *(undefined4 *)pdVar14;
            param_22 = *(undefined4 *)((int)pdVar14 + 4);
            param_23 = *(int *)(pdVar6 + -1);
            param_24 = *(int *)((int)pdVar6 + -4);
            param_19 = *(undefined4 *)(pdVar14 + -1);
            local_34 = *pdVar6 - *pdVar14;
            param_20 = *(undefined4 *)((int)pdVar14 + -4);
            local_3c = pdVar6[-1] - pdVar14[-1];
            apcStack_4c[3] = (char *)0x4386f7;
            FUN_00405ea0();
            param_8 = SQRT(param_4 * param_4 + param_3 * param_3 + param_2 * param_2);
            if (param_8 < _DAT_0066b760) {
              if (_DAT_0064a6c8 < param_8) {
                param_8 = _DAT_0064a660 / param_8;
                param_2 = param_8 * param_2;
                param_3 = param_3 * param_8;
                param_4 = param_4 * param_8;
              }
              param_26 = 0;
              DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
              DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
              (&DAT_0068a928)[DAT_0068aa04] =
                   (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
              DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
              DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
              (&DAT_0068a928)[DAT_0068aa04] =
                   (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
              DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
              DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
              (&DAT_0068a928)[DAT_0068aa04] =
                   (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
              param_25 = (uint)(&DAT_0068a928)[DAT_0068aa04] % 100;
              _local_8 = (double)param_25;
              param_8 = (double)param_25;
              local_2c = (double)param_25 * _DAT_0064a920;
              local_34 = param_8 * _DAT_0064a920;
              local_3c = _local_8 * _DAT_0064a920;
              apcStack_4c[3] = (char *)0x4388b1;
              FUN_00405ea0();
              param_2 = in_stack_000000b0 + param_2;
              param_3 = in_stack_000000b8 + param_3;
              param_4 = in_stack_000000c0 + param_4;
              pdVar6 = (double *)(iVar10 + param_10);
              uVar22 = (undefined4)((ulonglong)_local_8 >> 0x20);
              _local_8 = (double)CONCAT44(uVar22,1);
              *pdVar6 = param_2 + *pdVar6;
              pdVar6[1] = param_3 + pdVar6[1];
              pdVar6[2] = param_4 + pdVar6[2];
              pdVar6 = (double *)(param_10 + iVar21);
              *pdVar6 = *pdVar6 - param_2;
              pdVar6[1] = pdVar6[1] - param_3;
              pdVar6[2] = pdVar6[2] - param_4;
              pdVar6 = local_14;
            }
            iVar21 = iVar21 + 0x18;
            pdVar14 = pdVar14 + 3;
            local_10 = (undefined1 *)((int)local_10 - 1);
          } while (local_10 != (undefined1 *)0x0);
          local_10 = (undefined1 *)0x0;
        }
        local_c = local_c + 1;
        iVar10 = iVar10 + 0x18;
        pdVar6 = pdVar6 + 3;
      } while (local_c < (uint)(iVar20 * 4 >> 2));
      local_14 = pdVar6;
      if ((local_8 != (int *)0x0) && (local_c = 0, iVar20 * 4 >> 2 != 0)) {
        local_14 = (double *)&stack0x00000118;
        local_10 = (undefined1 *)0x0;
        puVar4 = (undefined4 *)&stack0x00003920;
        puVar15 = (undefined4 *)&stack0x0000092c;
        do {
          if (((*(uint *)(*(int *)local_14 + 0x58) & 1) == 0) &&
             ((*(uint *)(*(int *)local_14 + 0x58) >> 2 & 1) == 0)) {
            puVar7 = puVar4;
            ppcVar18 = apcStack_4c + 2;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *ppcVar18 = (char *)*puVar7;
              puVar7 = puVar7 + 1;
              ppcVar18 = ppcVar18 + 1;
            }
            apcStack_4c[1] = (char *)&stack0x000000c8;
            apcStack_4c[0] = (char *)0x4389ec;
            FUN_00439180();
            pdVar6 = local_14;
            param_5 = in_stack_000000c8 * *(double *)(local_10 + param_10) +
                      in_stack_000000d0 * *(double *)(local_10 + param_10 + 8) +
                      in_stack_000000d8 * *(double *)(local_10 + param_10 + 0x10);
            if (_DAT_0064a668 <= param_5) {
              if (param_5 <= _DAT_0064a668) {
                if (param_5 == _DAT_0064a668) goto LAB_00438b21;
              }
              else {
                param_5 = 2.0;
              }
            }
            else {
              param_5 = -2.0;
            }
            local_2c = (double)ZEXT48(&param_5);
            puVar7 = puVar4;
            ppcVar18 = apcStack_4c;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *ppcVar18 = (char *)*puVar7;
              puVar7 = puVar7 + 1;
              ppcVar18 = ppcVar18 + 1;
            }
            pcStack_54 = *(char **)pdVar6;
            param_8 = (double)CONCAT44(param_8._4_4_,&pcStack_54);
            pcStack_50 = pcStack_54;
            FUN_0041ec60();
            puVar7 = (undefined4 *)FUN_0043b650();
            local_2c = (double)CONCAT44(local_c,0x438ad7);
            puVar8 = (undefined4 *)FUN_0044a410();
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            puVar7 = puVar4;
            ppcVar18 = apcStack_4c + 2;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *ppcVar18 = (char *)*puVar7;
              puVar7 = puVar7 + 1;
              ppcVar18 = ppcVar18 + 1;
            }
            apcStack_4c[1] = &stack0x00000090;
            apcStack_4c[0] = (char *)0x438afb;
            puVar7 = (undefined4 *)FUN_00435cd0();
            uVar2 = puVar7[1];
            puVar15[-4] = *puVar7;
            puVar15[-3] = uVar2;
            uVar2 = puVar7[3];
            puVar15[-2] = puVar7[2];
            puVar15[-1] = uVar2;
            uVar2 = puVar7[5];
            *puVar15 = puVar7[4];
            puVar15[1] = uVar2;
          }
LAB_00438b21:
          local_10 = local_10 + 0x18;
          local_c = local_c + 1;
          local_14 = (double *)((int)local_14 + 4);
          puVar4 = puVar4 + 8;
          puVar15 = puVar15 + 6;
        } while (local_c < (uint)(iVar20 * 4 >> 2));
      }
    }
    local_2c = (double)CONCAT44(0x438b72,(undefined4)local_2c);
    FUN_0044a4b0();
    param_1 = param_1 + 1;
  } while (local_8 != (int *)0x0);
  uVar13 = 0;
  if (iVar20 * 4 >> 2 != 0) {
    puVar16 = (uint *)&stack0x00003920;
    uVar22 = (undefined4)((ulonglong)_local_8 >> 0x20);
    _local_8 = (double)CONCAT44(uVar22,&stack0x00000118);
    do {
      puVar17 = puVar16;
      puVar19 = (uint *)&stack0x00000090;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      }
      local_2c = (double)CONCAT44(0x438bce,(undefined4)local_2c);
      iVar10 = FUN_0040a460();
      if (iVar10 == 0) {
        local_2c = *(double *)(puVar16 + 5);
        local_34 = *(double *)(puVar16 + 3);
        local_3c = (double)CONCAT44(puVar16[2],*puVar16);
        apcStack_4c[3] = s___d__g__d__d__x__0066bc0c;
        apcStack_4c[2] = &DAT_0077d640;
        apcStack_4c[1] = (char *)0x438bf9;
        FUN_0061c369();
        apcStack_4c[1] = &DAT_0077d640;
        apcStack_4c[0] = s_PositionId_0066bc00;
        pcStack_50 = s_Invalid_id_0066bbf4;
        pcStack_54 = (char *)0x3b85;
        FUN_00401010();
      }
      uVar3 = *puVar16;
      if ((-1 < (int)uVar3) && (uVar3 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
        iVar10 = *(int *)(DAT_0068be98 + uVar3 * 4);
        iVar21 = *(int *)(iVar10 + 0x78);
        if ((int)puVar16[5] < *(int *)(iVar10 + 0x7c) - iVar21 >> 2) {
          local_2c = (double)CONCAT44(0x438c5e,(undefined4)local_2c);
          iVar10 = (**(code **)(**(int **)(iVar21 + puVar16[5] * 4) + 0x18))();
          if ((int)puVar16[4] < iVar10) goto LAB_00438c8d;
        }
        local_2c = 1.1016071241785525e-306;
        local_34 = 1.0116915408055026e-306;
        local_3c = 1.0105561892393835e-306;
        apcStack_4c[3] = (char *)0x64;
        apcStack_4c[2] = (undefined1 *)0x21;
        apcStack_4c[1] = (char *)0x438c8a;
        FUN_00401010();
      }
LAB_00438c8d:
      if (((*(uint *)(*local_8 + 0x58) & 1) == 0) && ((*(uint *)(*local_8 + 0x58) >> 2 & 1) == 0)) {
        local_2c = (double)CONCAT44(puVar16,0x438ca7);
        FUN_004742e0();
      }
      uVar13 = uVar13 + 1;
      uVar22 = (undefined4)((ulonglong)_local_8 >> 0x20);
      _local_8 = (double)CONCAT44(uVar22,local_8 + 1);
      puVar16 = puVar16 + 8;
    } while (uVar13 < (uint)(iVar20 * 4 >> 2));
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar9 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar9 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar9 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar9 = s_reUncontradict___0066d5f0;
  cVar1 = s_reUncontradict___0066d5f0[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar9;
    }
  }
  ExceptionList = in_stack_00007924;
  return;
}


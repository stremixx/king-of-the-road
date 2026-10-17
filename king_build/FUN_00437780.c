
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00437780(double param_1,double param_2,double param_3,double param_4,double param_5,
                   undefined4 param_6,undefined4 param_7,double param_8,undefined4 param_9,
                   int param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                   undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                   undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                   undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
                   undefined4 param_26,uint param_27,undefined4 param_28,char *param_29,
                   undefined *param_30,double param_31,double param_32,double param_33)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint *puVar15;
  uint *puVar16;
  char **ppcVar17;
  uint *puVar18;
  double in_stack_000000cc;
  double in_stack_000000d4;
  double in_stack_000000dc;
  double in_stack_000000e4;
  double in_stack_000000ec;
  double in_stack_000000f4;
  int iVar19;
  int iVar20;
  int iVar21;
  void *in_stack_00007948;
  int *piStack_50;
  char *pcStack_4c;
  char *apcStack_48 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int *local_14;
  double *local_10;
  int *local_c;
  double *local_8;
  
  local_c = (int *)0xffffffff;
  local_10 = (double *)&LAB_0063d902;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0061d4f0();
  local_28 = 1.69792922906944e-313;
  param_29 = s_getNoncontradictoryPositionLong__0066d5bc;
  param_30 = &DAT_0071d768;
  local_30 = (double)CONCAT44(0x4377cf,(undefined4)local_30);
  FUN_00401870();
  local_28 = 1.0161867773857336e-306;
  FUN_004018b0();
  iVar9 = param_1._4_4_;
  local_28 = (double)CONCAT44(param_1._4_4_,0x4377f8);
  iVar4 = FUN_00456670();
  if (iVar4 != 0) {
    local_28 = 1.0132587632561158e-306;
    local_30 = (double)CONCAT44(0x43780e,(undefined4)local_30);
    FUN_0061c369();
    local_30 = 2.1213819421525027e-306;
    local_38 = 1.0117051215785362e-306;
    apcStack_48[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_48[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_48[1] = (char *)0x64;
    apcStack_48[0] = (char *)0x21;
    pcStack_4c = (char *)0x437835;
    FUN_00401010();
  }
  local_28 = (double)CONCAT44(iVar9,&stack0x000000ac);
  local_30 = (double)CONCAT44(0x43784e,(undefined4)local_30);
  FUN_00437600();
  if ((*(int *)(iVar9 + 0x5c) != 1) && ((*(byte *)(iVar9 + 0x60) & 1) == 0)) {
    puVar13 = (undefined4 *)&stack0x000000ac;
    ppcVar17 = apcStack_48 + 2;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *ppcVar17 = (char *)*puVar13;
      puVar13 = puVar13 + 1;
      ppcVar17 = ppcVar17 + 1;
    }
    apcStack_48[1] = (char *)&param_31;
    apcStack_48[0] = (char *)0x437887;
    FUN_00435cd0();
    iVar19 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar4 = -1;
    piVar14 = (int *)*DAT_0068a8f0;
    iVar9 = 0;
    local_14 = piVar14;
    if (piVar14 != DAT_0068a8f0) {
      do {
        local_28 = (double)CONCAT44(piVar14,0x4378d6);
        local_14 = piVar14;
        iVar5 = FUN_0040a950();
        iVar12 = iVar9;
        if (iVar5 != 0) {
          local_28 = (double)CONCAT44(piVar14,0x4378ef);
          iVar5 = FUN_0040a950();
          param_4 = (double)CONCAT44(param_4._4_4_,iVar5);
          if (param_1._4_4_ + 8 == iVar5) {
            local_28 = (double)CONCAT44(&param_4,&stack0x0000013c + iVar19 * 4);
            local_30 = (double)CONCAT44(0x437ab9,(undefined4)local_30);
            FUN_00460970();
            iVar19 = iVar19 + 1;
            local_30 = (double)CONCAT44(&param_31,&stack0x00000940 + iVar20 * 0x18);
            local_38 = (double)CONCAT44(0x437ae7,(undefined4)local_38);
            FUN_00461690();
            iVar20 = iVar20 + 1;
            local_38 = (double)CONCAT44(&stack0x000000ac,&stack0x00003944 + iVar21 * 0x20);
            apcStack_48[3] = (char *)0x437b15;
            FUN_004616b0();
            iVar21 = iVar21 + 1;
            iVar12 = iVar9 + 1;
            iVar4 = iVar9;
          }
          else {
            puVar13 = (undefined4 *)(iVar5 + 0x20);
            puVar7 = (undefined4 *)&stack0x000000fc;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar7 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar7 = puVar7 + 1;
            }
            apcStack_48[1] = (char *)&param_1;
            puVar13 = (undefined4 *)(iVar5 + 0x20);
            ppcVar17 = apcStack_48 + 2;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *ppcVar17 = (char *)*puVar13;
              puVar13 = puVar13 + 1;
              ppcVar17 = ppcVar17 + 1;
            }
            apcStack_48[0] = (char *)0x43792f;
            FUN_00435cd0();
            local_28 = param_3 - param_33;
            local_30 = param_2 - param_32;
            local_38 = param_1 - param_31;
            apcStack_48[3] = (char *)0x43796d;
            FUN_00405ea0();
            piVar14 = local_14;
            if (SQRT((double)CONCAT44(param_18,param_17) * (double)CONCAT44(param_18,param_17) +
                     (double)CONCAT44(param_16,param_15) * (double)CONCAT44(param_16,param_15) +
                     (double)CONCAT44(param_14,param_13) * (double)CONCAT44(param_14,param_13)) <
                _DAT_0066b7a0) {
              local_28 = (double)CONCAT44(&param_4,&stack0x0000013c + iVar19 * 4);
              local_30 = (double)CONCAT44(0x4379b9,(undefined4)local_30);
              FUN_00460970();
              iVar19 = iVar19 + 1;
              local_30 = (double)CONCAT44(&param_1,&stack0x00000940 + iVar20 * 0x18);
              local_38 = (double)CONCAT44(0x4379e4,(undefined4)local_38);
              FUN_00461690();
              iVar20 = iVar20 + 1;
              local_38 = (double)CONCAT44(&stack0x000000fc,&stack0x00003944 + iVar21 * 0x20);
              apcStack_48[3] = (char *)0x437a12;
              FUN_004616b0();
              iVar21 = iVar21 + 1;
              iVar12 = iVar9 + 1;
              piVar14 = local_14;
            }
          }
        }
        piVar14 = (int *)*piVar14;
        iVar9 = iVar12;
        local_14 = piVar14;
      } while (piVar14 != DAT_0068a8f0);
    }
    if (1 < (uint)(iVar19 * 4 >> 2)) {
      if (iVar4 == -1) {
        local_28 = 1.1016071241785525e-306;
        local_30 = 1.0161650474521637e-306;
        local_38 = 1.0105561892393835e-306;
        apcStack_48[3] = (char *)0x1;
        apcStack_48[2] = (char *)0x0;
        apcStack_48[1] = (char *)0x437b5f;
        FUN_00401010();
      }
      iVar9 = 0;
      do {
        iVar20 = 0;
        if (0xff < iVar9) break;
        param_13 = 0;
        iVar21 = iVar19 * 4 >> 2;
        local_28 = (double)CONCAT44((undefined1 *)((int)register0x00000010 + 0x33),iVar21);
        param_14 = 0;
        param_15 = 0;
        param_16 = 0;
        param_17 = 0;
        param_18 = 0;
        local_30 = (double)CONCAT44(0x437bcf,(undefined4)local_30);
        FUN_0044a470();
        local_28 = (double)CONCAT44(iVar4,&param_13);
        local_30 = (double)CONCAT44(iVar21,param_10);
        local_38 = (double)CONCAT44(0x437bec,(undefined4)local_38);
        param_11 = FUN_00466170();
        param_4 = (double)((ulonglong)param_4 & 0xffffffff00000000);
        local_14 = (int *)0x0;
        if (iVar19 * 4 >> 2 != 0) {
          local_10 = (double *)&stack0x00000948;
          do {
            if (0 < iVar20) {
              pdVar6 = (double *)&stack0x00000948;
              iVar21 = 0;
              local_c = local_14;
              do {
                local_28 = local_10[1] - pdVar6[1];
                param_25 = *(undefined4 *)local_10;
                param_26 = *(undefined4 *)((int)local_10 + 4);
                param_23 = *(undefined4 *)pdVar6;
                param_24 = *(undefined4 *)((int)pdVar6 + 4);
                param_21 = *(undefined4 *)(local_10 + -1);
                param_22 = *(undefined4 *)((int)local_10 + -4);
                param_19 = *(undefined4 *)(pdVar6 + -1);
                local_30 = *local_10 - *pdVar6;
                param_20 = *(undefined4 *)((int)pdVar6 + -4);
                local_38 = local_10[-1] - pdVar6[-1];
                apcStack_48[3] = (char *)0x437cd1;
                local_8 = pdVar6;
                FUN_00405ea0();
                param_8 = SQRT(param_3 * param_3 + param_2 * param_2 + param_1 * param_1);
                if (param_8 < _DAT_0066b760) {
                  if (_DAT_0064a6c8 < param_8) {
                    param_8 = _DAT_0064a660 / param_8;
                    param_1 = param_8 * param_1;
                    param_2 = param_2 * param_8;
                    param_3 = param_3 * param_8;
                  }
                  param_28 = 0;
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
                  param_27 = (uint)(&DAT_0068a928)[DAT_0068aa04] % 100;
                  param_4 = (double)param_27;
                  param_8 = (double)param_27;
                  local_28 = (double)param_27 * _DAT_0064a920;
                  local_30 = param_8 * _DAT_0064a920;
                  local_38 = param_4 * _DAT_0064a920;
                  apcStack_48[3] = (char *)0x437e8b;
                  FUN_00405ea0();
                  param_1 = in_stack_000000cc + param_1;
                  param_2 = in_stack_000000d4 + param_2;
                  param_3 = in_stack_000000dc + param_3;
                  pdVar6 = (double *)(iVar20 + param_10);
                  param_4 = (double)CONCAT44(param_4._4_4_,1);
                  *pdVar6 = param_1 + *pdVar6;
                  pdVar6[1] = param_2 + pdVar6[1];
                  pdVar6[2] = param_3 + pdVar6[2];
                  pdVar6 = (double *)(param_10 + iVar21);
                  *pdVar6 = *pdVar6 - param_1;
                  pdVar6[1] = pdVar6[1] - param_2;
                  pdVar6[2] = pdVar6[2] - param_3;
                  pdVar6 = local_8;
                }
                iVar21 = iVar21 + 0x18;
                pdVar6 = pdVar6 + 3;
                local_c = (int *)((int)local_c + -1);
              } while (local_c != (int *)0x0);
              local_c = (int *)0x0;
              local_8 = pdVar6;
            }
            local_14 = (int *)((int)local_14 + 1);
            iVar20 = iVar20 + 0x18;
            local_10 = local_10 + 3;
          } while (local_14 < (int *)(iVar19 * 4 >> 2));
          if ((param_4._0_4_ != 0) && (local_c = (int *)0x0, iVar19 * 4 >> 2 != 0)) {
            local_10 = (double *)&stack0x00003944;
            local_14 = (int *)&stack0x0000013c;
            local_8 = (double *)0x0;
            puVar13 = (undefined4 *)&stack0x00000950;
            do {
              if (((*(uint *)(*local_14 + 0x58) & 1) == 0) &&
                 ((*(uint *)(*local_14 + 0x58) >> 2 & 1) == 0)) {
                apcStack_48[1] = (char *)&stack0x000000e4;
                pdVar6 = local_10;
                ppcVar17 = apcStack_48 + 2;
                for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
                  *ppcVar17 = (char *)*(undefined4 *)pdVar6;
                  pdVar6 = (double *)((int)pdVar6 + 4);
                  ppcVar17 = ppcVar17 + 1;
                }
                apcStack_48[0] = (char *)0x437fd0;
                FUN_00439180();
                param_5 = in_stack_000000e4 * *(double *)((int)local_8 + param_10) +
                          in_stack_000000ec * *(double *)((int)local_8 + param_10 + 8) +
                          in_stack_000000f4 * *(double *)((int)local_8 + param_10 + 0x10);
                if (_DAT_0064a668 <= param_5) {
                  if (param_5 <= _DAT_0064a668) {
                    if (param_5 == _DAT_0064a668) goto LAB_00438108;
                  }
                  else {
                    param_5 = 2.0;
                  }
                }
                else {
                  param_5 = -2.0;
                }
                local_28 = (double)ZEXT48(&param_5);
                pdVar6 = local_10;
                ppcVar17 = apcStack_48;
                for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
                  *ppcVar17 = (char *)*(undefined4 *)pdVar6;
                  pdVar6 = (double *)((int)pdVar6 + 4);
                  ppcVar17 = ppcVar17 + 1;
                }
                pcStack_4c = (char *)*local_14;
                piStack_50 = local_14;
                param_8 = (double)CONCAT44(param_8._4_4_,&piStack_50);
                FUN_0041ec60();
                puVar7 = (undefined4 *)FUN_0043b650();
                local_28 = (double)CONCAT44(local_c,0x4380bd);
                puVar8 = (undefined4 *)FUN_0044a410();
                for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
                apcStack_48[1] = &stack0x000000fc;
                pdVar6 = local_10;
                ppcVar17 = apcStack_48 + 2;
                for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
                  *ppcVar17 = (char *)*(undefined4 *)pdVar6;
                  pdVar6 = (double *)((int)pdVar6 + 4);
                  ppcVar17 = ppcVar17 + 1;
                }
                apcStack_48[0] = (char *)0x4380e3;
                puVar7 = (undefined4 *)FUN_00435cd0();
                uVar2 = puVar7[1];
                puVar13[-4] = *puVar7;
                puVar13[-3] = uVar2;
                uVar2 = puVar7[3];
                puVar13[-2] = puVar7[2];
                puVar13[-1] = uVar2;
                uVar2 = puVar7[5];
                *puVar13 = puVar7[4];
                puVar13[1] = uVar2;
              }
LAB_00438108:
              local_14 = local_14 + 1;
              local_8 = local_8 + 3;
              local_c = (int *)((int)local_c + 1);
              local_10 = local_10 + 4;
              puVar13 = puVar13 + 6;
            } while (local_c < (uint)(iVar19 * 4 >> 2));
          }
        }
        local_28 = (double)CONCAT44(0x43815f,(undefined4)local_28);
        FUN_0044a4b0();
        iVar9 = iVar9 + 1;
      } while (param_4._0_4_ != 0);
      iVar4 = iVar4 * 0x20;
      puVar16 = (uint *)(&stack0x00003944 + iVar4);
      puVar15 = puVar16;
      puVar18 = (uint *)&stack0x000000fc;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar18 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar18 = puVar18 + 1;
      }
      local_28 = (double)CONCAT44(0x4381a0,(undefined4)local_28);
      iVar9 = FUN_0040a460();
      if (iVar9 == 0) {
        local_28 = (double)CONCAT44(*(undefined4 *)(&stack0x0000395c + iVar4),
                                    *(undefined4 *)(&stack0x00003958 + iVar4));
        local_30 = (double)CONCAT44(*(undefined4 *)(&stack0x00003954 + iVar4),
                                    *(undefined4 *)(&stack0x00003950 + iVar4));
        local_38 = (double)CONCAT44(*(undefined4 *)(&stack0x0000394c + iVar4),*puVar16);
        apcStack_48[3] = s___d__g__d__d__x__0066bc0c;
        apcStack_48[2] = &DAT_0077d640;
        apcStack_48[1] = (char *)0x4381ca;
        FUN_0061c369();
        apcStack_48[1] = &DAT_0077d640;
        apcStack_48[0] = s_PositionId_0066bc00;
        pcStack_4c = s_Invalid_id_0066bbf4;
        piStack_50 = (int *)0x3b32;
        FUN_00401010();
      }
      uVar3 = *puVar16;
      if ((-1 < (int)uVar3) && (uVar3 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
        iVar9 = *(int *)(DAT_0068be98 + uVar3 * 4);
        iVar19 = *(int *)(iVar9 + 0x78);
        if (*(int *)(&stack0x00003958 + iVar4) < *(int *)(iVar9 + 0x7c) - iVar19 >> 2) {
          local_28 = (double)CONCAT44(0x43822e,(undefined4)local_28);
          iVar9 = (**(code **)(**(int **)(iVar19 + *(int *)(&stack0x00003958 + iVar4) * 4) + 0x18))
                            ();
          if (*(int *)(&stack0x00003954 + iVar4) < iVar9) goto LAB_0043825d;
        }
        local_28 = 1.1016071241785525e-306;
        local_30 = 1.0116915408054895e-306;
        local_38 = 1.0105561892393835e-306;
        apcStack_48[3] = (char *)0x64;
        apcStack_48[2] = (char *)0x21;
        apcStack_48[1] = (char *)0x43825a;
        FUN_00401010();
      }
LAB_0043825d:
      puVar15 = param_1._0_4_;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar15 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar15 = puVar15 + 1;
      }
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar11 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar11 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar11 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar11 = s_getNoncontradictoryPositionLong__0066d5bc;
      cVar1 = s_getNoncontradictoryPositionLong__0066d5bc[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          cVar1 = *pcVar11;
        }
      }
      ExceptionList = in_stack_00007948;
      return param_1._0_4_;
    }
  }
  puVar16 = param_1._0_4_;
  puVar15 = (uint *)&stack0x000000ac;
  puVar18 = param_1._0_4_;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  local_28 = 1.6979292257098e-313;
  local_30 = (double)CONCAT44(0x437a7a,(undefined4)local_30);
  FUN_00401870();
  local_28 = 1.0161867773858416e-306;
  FUN_004018b0();
  ExceptionList = in_stack_00007948;
  return puVar16;
}


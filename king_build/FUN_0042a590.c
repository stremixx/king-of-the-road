
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a590(double param_1,undefined8 *param_2,int *param_3,double param_4,uint param_5,
                 undefined4 param_6,char *param_7,undefined *param_8,double param_9,double param_10,
                 double param_11,double param_12,double param_13)

{
  double dVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int *piVar9;
  int iVar10;
  undefined4 unaff_EBP;
  undefined4 *puVar11;
  double *pdVar12;
  undefined4 *puVar13;
  double in_stack_00000000;
  uint in_stack_00000078;
  uint in_stack_00000098;
  int iVar14;
  void *in_stack_000068a4;
  undefined4 auStack_44 [2];
  double local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  int *local_14;
  double local_10;
  undefined4 local_8;
  double dVar15;
  
  dVar15 = (double)CONCAT44(unaff_EBP,local_8);
  local_10 = -NAN;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0061d4f0();
  local_2c = 1.69792922906944e-313;
  param_7 = s_provideNoncontradictoryPositions_0066cc00;
  param_8 = &DAT_0071d768;
  local_34 = (double)CONCAT44(0x42a5da,(undefined4)local_34);
  FUN_00401870();
  local_2c = 1.0144946130536885e-306;
  FUN_004018b0();
  iVar14 = 0;
  piVar9 = (int *)*DAT_0068a8f0;
  if (piVar9 != DAT_0068a8f0) {
    do {
      param_1 = (double)CONCAT44(param_1._4_4_,(int)&local_2c + 4);
      local_2c = (double)CONCAT44(piVar9,0x42a623);
      iVar4 = FUN_0040a950();
      if (iVar4 != 0) {
        param_1 = (double)CONCAT44(param_1._4_4_,(int)&local_2c + 4);
        local_2c = (double)CONCAT44(piVar9,0x42a638);
        param_2 = (undefined8 *)FUN_0040a950();
        if ((*(int *)((int)param_2 + 0x36c) != 0x1000) || (*(int *)((int)param_2 + 0x54) == 1)) {
          local_2c = (double)CONCAT44(param_2,0x42a655);
          cVar3 = FUN_004208e0();
          if (cVar3 == '\0') {
            local_2c = (double)CONCAT44(&param_2,&stack0x000000a0 + iVar14 * 4);
            local_34 = (double)CONCAT44(0x42a675,(undefined4)local_34);
            FUN_00460970();
            iVar14 = iVar14 + 1;
          }
        }
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != DAT_0068a8f0);
  }
  iVar4 = iVar14 * 4 >> 2;
  if (iVar4 != 0) {
    piVar9 = (int *)&stack0x000000a0;
    iVar5 = 0;
    iVar10 = iVar4;
    do {
      iVar8 = *piVar9;
      puVar11 = (undefined4 *)(iVar8 + 0x268);
      if ((*(byte *)(iVar8 + 0x58) & 1) == 0) {
        puVar11 = (undefined4 *)(iVar8 + 0x130);
      }
      pdVar12 = &local_10;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pdVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        pdVar12 = (double *)((int)pdVar12 + 4);
      }
      *(double *)(&stack0x000038a4 + iVar5) = local_10;
      *(double *)(&stack0x000038ac + iVar5) = dVar15;
      piVar9 = piVar9 + 1;
      *(double *)(&stack0x000038b4 + iVar5) = in_stack_00000000;
      *(undefined4 *)(&stack0x000008a4 + iVar5) = 0;
      *(undefined4 *)(&stack0x000008ac + iVar5) = 0;
      *(undefined4 *)(&stack0x000008b4 + iVar5) = 0;
      *(undefined4 *)(&stack0x000008a8 + iVar5) = 0;
      *(undefined4 *)(&stack0x000008b0 + iVar5) = 0;
      *(undefined4 *)(&stack0x000008b8 + iVar5) = 0;
      iVar5 = iVar5 + 0x18;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  param_2 = (undefined8 *)0x0;
  if (iVar4 != 0) {
    local_14 = (int *)&stack0x000000a0;
    iVar4 = 0;
    do {
      if (0 < iVar4) {
        param_3 = (int *)&stack0x000000a0;
        iVar10 = 0;
        param_1 = (double)CONCAT44(param_1._4_4_,param_2);
        do {
          iVar5 = *param_3;
          if (*(int *)(*local_14 + 0x36c) == *(int *)(iVar5 + 0x36c)) {
            puVar11 = (undefined4 *)(*local_14 + 0x20);
            puVar13 = (undefined4 *)&stack0x00000080;
            for (iVar8 = 8; uVar2 = in_stack_00000098, iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar13 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar11 = (undefined4 *)(iVar5 + 0x20);
            puVar13 = (undefined4 *)&stack0x00000060;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar13 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar13 = puVar13 + 1;
            }
            if (((in_stack_00000078 ^ uVar2) & 1) == 0) {
              local_2c = *(double *)(&stack0x000038b4 + iVar4) -
                         *(double *)(&stack0x000038b4 + iVar10);
              local_34 = *(double *)(&stack0x000038ac + iVar4) -
                         *(double *)(&stack0x000038ac + iVar10);
              local_3c = *(double *)(&stack0x000038a4 + iVar4) -
                         *(double *)(&stack0x000038a4 + iVar10);
              auStack_44[1] = 0x42a7fe;
              FUN_00405ea0();
              param_4 = SQRT(in_stack_00000000 * in_stack_00000000 +
                             dVar15 * dVar15 + local_10 * local_10);
              if (param_4 < _DAT_0066b760) {
                if (_DAT_0064a6c8 < param_4) {
                  dVar1 = _DAT_0064a660 / param_4;
                  local_10 = dVar1 * local_10;
                  dVar15 = dVar15 * dVar1;
                  in_stack_00000000 = in_stack_00000000 * dVar1;
                }
                param_6 = 0;
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
                param_5 = (uint)(&DAT_0068a928)[DAT_0068aa04] % 100;
                param_12 = (double)param_5;
                param_13 = (double)param_5;
                local_2c = (double)param_5 * _DAT_0064a738;
                local_34 = param_13 * _DAT_0064a738;
                local_3c = param_12 * _DAT_0064a738;
                auStack_44[1] = 0x42a9b0;
                FUN_00405ea0();
                local_10 = param_9 + local_10;
                dVar15 = param_10 + dVar15;
                in_stack_00000000 = param_11 + in_stack_00000000;
                *(double *)(&stack0x000008a4 + iVar4) =
                     local_10 + *(double *)(&stack0x000008a4 + iVar4);
                *(double *)(&stack0x000008ac + iVar4) =
                     dVar15 + *(double *)(&stack0x000008ac + iVar4);
                *(double *)(&stack0x000008b4 + iVar4) =
                     in_stack_00000000 + *(double *)(&stack0x000008b4 + iVar4);
                *(double *)(&stack0x000008a4 + iVar10) =
                     *(double *)(&stack0x000008a4 + iVar10) - local_10;
                *(double *)(&stack0x000008ac + iVar10) =
                     *(double *)(&stack0x000008ac + iVar10) - dVar15;
                *(double *)(&stack0x000008b4 + iVar10) =
                     *(double *)(&stack0x000008b4 + iVar10) - in_stack_00000000;
              }
            }
          }
          param_3 = param_3 + 1;
          iVar10 = iVar10 + 0x18;
          iVar5 = param_1._0_4_ + -1;
          param_1 = (double)CONCAT44(param_1._4_4_,iVar5);
        } while (iVar5 != 0);
      }
      param_2 = (undefined8 *)((int)param_2 + 1);
      local_14 = local_14 + 1;
      iVar4 = iVar4 + 0x18;
    } while (param_2 < (undefined1 *)(iVar14 * 4 >> 2));
  }
  iVar4 = 0;
  local_14 = (int *)0x0;
  if (iVar14 * 4 >> 2 != 0) {
    piVar9 = (int *)&stack0x000000a0;
    do {
      if ((*(byte *)(*piVar9 + 0x58) & 1) == 0) {
        local_2c = (double)CONCAT44(*piVar9,0x42aac4);
        cVar3 = FUN_004208e0();
        if (cVar3 == '\0') {
          puVar11 = (undefined4 *)(*piVar9 + 0x20);
          puVar13 = auStack_44;
          for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          FUN_00439180();
          dVar1 = _DAT_0064a660 /
                  SQRT(in_stack_00000000 * in_stack_00000000 + dVar15 * dVar15 + local_10 * local_10
                      );
          local_10 = dVar1 * local_10;
          dVar15 = dVar15 * dVar1;
          in_stack_00000000 = in_stack_00000000 * dVar1;
          param_1 = *(double *)(&stack0x000008ac + iVar4) * dVar15 +
                    *(double *)(&stack0x000008a4 + iVar4) * local_10 +
                    *(double *)(&stack0x000008b4 + iVar4) * in_stack_00000000;
          if (_DAT_0064a668 <= param_1) {
            if (param_1 <= _DAT_0064a668) {
              if (param_1 == _DAT_0064a668) goto LAB_0042ac1b;
            }
            else {
              param_1 = 1.0;
            }
          }
          else {
            param_1 = -1.0;
          }
          local_2c._4_4_ = &param_1;
          local_2c._0_4_ = local_14;
          local_34 = (double)CONCAT44(0x42abc8,(undefined4)local_34);
          piVar6 = (int *)FUN_00449a60();
          param_2 = &local_2c;
          local_2c = (double)CONCAT44(local_2c._4_4_,extraout_ECX);
          local_34 = (double)CONCAT44(*piVar6 + 0x60,0x42abda);
          FUN_0041d3f0();
          local_34 = (double)CONCAT44(0x42abdf,(undefined4)local_34);
          FUN_00435b70();
          puVar11 = (undefined4 *)(*piVar9 + 0x20);
          puVar13 = auStack_44;
          for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar7 = (undefined8 *)FUN_00435cd0();
          *(undefined8 *)(&stack0x000038a4 + iVar4) = *puVar7;
          *(undefined8 *)(&stack0x000038ac + iVar4) = puVar7[1];
          *(undefined8 *)(&stack0x000038b4 + iVar4) = puVar7[2];
        }
      }
LAB_0042ac1b:
      local_14 = (int *)((int)local_14 + 1);
      piVar9 = piVar9 + 1;
      iVar4 = iVar4 + 0x18;
    } while (local_14 < (int *)(iVar14 * 4 >> 2));
  }
  local_2c = 1.6979292257098e-313;
  local_34 = (double)CONCAT44(0x42ac54,(undefined4)local_34);
  FUN_00401870();
  local_2c = 1.0144946130539506e-306;
  FUN_004018b0();
  ExceptionList = in_stack_000068a4;
  return;
}


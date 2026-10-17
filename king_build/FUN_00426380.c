
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426380(void)

{
  double dVar1;
  char cVar2;
  double ***pppdVar3;
  int *piVar4;
  undefined4 *puVar5;
  double *pdVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  double ***pppdVar11;
  int ***extraout_ECX;
  undefined1 *puVar12;
  int ****ppppiVar13;
  undefined4 *puVar14;
  double ***pppdVar15;
  undefined4 auStack_e8 [5];
  undefined4 uStack_d4;
  int ****ppppiStack_d0;
  int ****ppppiStack_cc;
  double ***pppdStack_c8;
  double **appdStack_c4 [2];
  int ****ppppiStack_bc;
  int ****ppppiStack_b8;
  int ****ppppiStack_b4;
  int ****ppppiStack_b0;
  double ***pppdStack_ac;
  int ****local_a8;
  double ***local_94;
  double ***local_90;
  double ****local_8c;
  undefined8 local_88;
  double local_80;
  double local_78;
  char *local_70;
  undefined *local_6c;
  double local_68;
  double local_5c;
  double local_54;
  double local_4c;
  double **local_44 [6];
  int **local_2c [6];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063ce08;
  local_14 = ExceptionList;
  local_a8 = (int ****)0x8;
  pppdStack_ac = (double ***)s_START__0066b830;
  local_70 = s_provideCompetitionRegular___0066c9a8;
  local_6c = &DAT_0071d768;
  ppppiStack_b0 = (int ****)0x4263c6;
  ExceptionList = &local_14;
  FUN_00401870();
  local_a8 = (int ****)s_provideCompetitionRegular___0066c9a8;
  pppdStack_ac = (double ***)0x4263d5;
  FUN_004018b0();
  local_a8 = (int ****)&local_90;
  local_c = 0;
  pppdStack_ac = (double ***)0x4263ea;
  FUN_00477c00();
  pppdVar11 = local_90;
  if ((local_90 != DAT_0068a8f0) && (pppdVar15 = local_90 + 2, local_90[0x19] != (double **)0x5)) {
    pppdStack_ac = (double ***)0x426413;
    local_a8 = (int ****)pppdVar15;
    pppdVar3 = (double ***)FUN_00477850();
    local_94 = pppdVar3;
    if (pppdVar3 == (double ***)0x0) {
      local_8c = (double ****)&local_a8;
      local_a8 = (int ****)local_90;
      pppdStack_ac = (double ***)0x426432;
      FUN_00425880();
    }
    else if (pppdVar3[0x1a] == (double **)0x1) {
      if ((*(byte *)(DAT_0068bc18 + 0x30 + (int)*pppdVar3 * 0x68) & 4) == 0) {
        if (DAT_0068c0bc == (double ***)0x0) {
          local_a8 = (int ****)0x4264a4;
          FUN_00425700();
        }
        if ((int)DAT_0068c0c4 + ((int)DAT_006898e4 - (int)DAT_006898e0 >> 2) == 0) {
          local_a8 = (int ****)&local_80;
          local_80 = 0.0;
          pppdVar11 = pppdVar11 + 10;
          ppppiVar13 = (int ****)&pppdStack_c8;
          for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
            *ppppiVar13 = (int ***)*pppdVar11;
            pppdVar11 = pppdVar11 + 1;
            ppppiVar13 = ppppiVar13 + 1;
          }
          ppppiStack_d0 = (int ****)0x4264ee;
          ppppiStack_cc = (int ****)pppdVar15;
          iVar9 = FUN_00477850();
          puVar5 = (undefined4 *)(iVar9 + 0x18);
          puVar14 = auStack_e8;
          for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar14 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar14 = puVar14 + 1;
          }
          FUN_00487600(0);
          if (_DAT_0064a720 < local_80) {
            local_a8 = (int ****)0x42651f;
            FUN_00425ec0();
            goto LAB_0042651f;
          }
        }
        pppdVar11 = DAT_0068c0bc;
        if ((double ***)((int)DAT_0068c0c4 + ((int)DAT_006898e4 - (int)DAT_006898e0 >> 2)) <
            DAT_0068c0bc) {
          do {
            local_a8 = (int ****)&DAT_0068a928;
            ppppiStack_bc = (int ****)&local_90;
            local_8c = (double ****)&ppppiStack_b8;
            appdStack_c4[1] = (double **)0x4265a1;
            ppppiStack_b8 = (int ****)pppdVar11;
            ppppiStack_b4 = (int ****)pppdVar3;
            FUN_0041d3f0();
            ppppiStack_bc = (int ****)0x4265a8;
            FUN_00426b70();
            ppppiStack_b4 = (int ****)&local_88;
            ppppiStack_b8 = (int ****)0x4265b2;
            piVar4 = (int *)FUN_00457230();
            pppdVar11 = (double ***)*piVar4;
            if (pppdVar11 == DAT_0068a8f0) break;
            local_8c = (double ****)&local_a8;
            pppdStack_ac = (double ***)0x4265ce;
            local_a8 = (int ****)pppdVar11;
            FUN_004174c0();
            pppdStack_c8 = pppdVar11 + 2;
            pppdVar11 = pppdVar11 + 10;
            pppdVar3 = appdStack_c4;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pppdVar3 = *pppdVar11;
              pppdVar11 = pppdVar11 + 1;
              pppdVar3 = pppdVar3 + 1;
            }
            ppppiStack_cc = (int ****)0x4265e6;
            FUN_0041a8a0();
            pppdVar11 = DAT_0068c0c4;
            pppdVar3 = local_94;
          } while ((double ***)((int)DAT_0068c0c4 + ((int)DAT_006898e4 - (int)DAT_006898e0 >> 2)) <
                   DAT_0068c0bc);
        }
        pppdStack_ac = (double ***)0x426615;
        local_a8 = (int ****)pppdVar15;
        iVar9 = FUN_00477850();
        pppdStack_c8 = local_44;
        puVar5 = (undefined4 *)(iVar9 + 0x18);
        pppdVar11 = appdStack_c4;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pppdVar11 = (double **)*puVar5;
          puVar5 = puVar5 + 1;
          pppdVar11 = pppdVar11 + 1;
        }
        ppppiStack_cc = (int ****)0x426633;
        FUN_00435cd0();
        ppppiStack_cc = (int ****)local_44;
        uStack_d4 = 0x426641;
        ppppiStack_d0 = (int ****)pppdVar15;
        cVar2 = FUN_00425b80();
        if (cVar2 != '\0') {
          local_a8 = (int ****)local_44;
          local_94 = DAT_0068a8f0;
          ppppiStack_b0 = (int ****)0x426661;
          pppdStack_ac = pppdVar15;
          cVar2 = FUN_00425b80();
          if (cVar2 != '\0') {
            local_a8 = (int ****)&DAT_0068a928;
            ppppiStack_b0 = (int ****)&DAT_0068aa10;
            local_88._0_4_ = (double ****)&ppppiStack_b4;
            ppppiStack_b8 = (int ****)&local_90;
            ppppiStack_bc = (int ****)0x42668e;
            FUN_0041d3f0();
            ppppiStack_b8 = (int ****)0x426695;
            FUN_00426370();
            ppppiStack_b0 = (int ****)&local_88;
            ppppiStack_b4 = (int ****)0x42669f;
            piVar4 = (int *)FUN_00457150();
            local_94 = (double ***)*piVar4;
            if (local_94 == DAT_0068a8f0) {
              local_a8 = (int ****)&DAT_0068a928;
              pppdStack_ac = DAT_0068a8f0;
              local_88._0_4_ = (double ****)&ppppiStack_b0;
              ppppiStack_b0 = (int ****)DAT_0068a8f0;
              ppppiStack_b4 = (int ****)&local_90;
              ppppiStack_b8 = (int ****)0x4266cf;
              FUN_0041d3f0();
              ppppiStack_b4 = (int ****)0x4266d6;
              FUN_004042b0();
              ppppiStack_b0 = (int ****)&local_88;
              ppppiStack_b4 = (int ****)0x4266e0;
              piVar4 = (int *)FUN_004571c0();
              local_94 = (double ***)*piVar4;
              if (local_94 == DAT_0068a8f0) goto LAB_00426aa2;
            }
            local_a8 = (int ****)(local_94 + 2);
            pppdStack_ac = (double ***)0x426700;
            FUN_00477940();
            ppppiStack_b0 = (int ****)0x426706;
            pppdStack_ac = pppdVar15;
            local_a8 = (int ****)FUN_00477850();
            ppppiStack_b0 = (int ****)&local_94;
            local_88 = (double)CONCAT44(local_88._4_4_,&pppdStack_ac);
            ppppiStack_b4 = (int ****)0x42671b;
            FUN_0041d3f0();
            ppppiStack_b0 = (int ****)0x426720;
            FUN_00425910();
            DAT_0068c074 = 1;
            ppppiStack_b4 = (int ****)0x42672d;
            ppppiStack_b0 = (int ****)pppdVar15;
            iVar9 = FUN_00477850();
            ppppiStack_cc = (int ****)&local_94;
            puVar5 = (undefined4 *)(iVar9 + 0x18);
            pppdVar11 = appdStack_c4;
            for (pppdStack_c8 = (double ***)0x8; pppdStack_c8 != (double ***)0x0;
                pppdStack_c8 = (double ***)((int)pppdStack_c8 + -1)) {
              *pppdVar11 = (double **)*puVar5;
              puVar5 = puVar5 + 1;
              pppdVar11 = pppdVar11 + 1;
            }
            local_88 = (double)CONCAT44(local_88._4_4_,&pppdStack_c8);
            ppppiStack_d0 = (int ****)0x42674f;
            FUN_0041d3f0();
            ppppiStack_cc = (int ****)0x426754;
            FUN_00478740();
            local_a8 = (int ****)0x1;
            ppppiStack_b0 = (int ****)0x42675f;
            pppdStack_ac = pppdVar15;
            FUN_00477850();
            pppdStack_ac = (double ***)0x42676c;
            pppdStack_ac = (double ***)FUN_00426360();
            ppppiStack_b0 = (int ****)&local_88;
            ppppiStack_b4 = (int ****)0x426777;
            puVar5 = (undefined4 *)FUN_00404d60();
            ppppiStack_cc = (int ****)*puVar5;
            local_8c = &pppdStack_c8;
            ppppiStack_d0 = (int ****)0x426788;
            FUN_0040a430();
            local_8c = (double ****)&ppppiStack_cc;
            ppppiStack_d0 = (int ****)&local_94;
            uStack_d4 = 0x426799;
            FUN_0041d3f0();
            ppppiStack_d0 = (int ****)0x42679e;
            FUN_00478300();
            pppdStack_c8 = (double ***)&local_5c;
            pppdVar11 = local_94 + 10;
            pppdVar3 = appdStack_c4;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pppdVar3 = *pppdVar11;
              pppdVar11 = pppdVar11 + 1;
              pppdVar3 = pppdVar3 + 1;
            }
            ppppiStack_cc = (int ****)0x4267bb;
            FUN_00435cd0();
            local_80 = _DAT_0068aa20 - local_4c;
            if (SQRT(local_80 * local_80 +
                     (_DAT_0068aa18 - local_54) * (_DAT_0068aa18 - local_54) +
                     (_DAT_0068aa10 - local_5c) * (_DAT_0068aa10 - local_5c)) < _DAT_0066b6b0) {
              local_8c = (double ****)(DAT_0068c0c0 * 400 + -400);
              local_78 = (double)(int)local_8c;
              pppdStack_ac = (double ***)0x426830;
              local_a8 = (int ****)pppdVar15;
              iVar9 = FUN_00477850();
              dVar1 = local_78;
              if (*(double *)(iVar9 + 0x70) * _DAT_0064a7d8 < local_78) {
                pppdStack_ac = (double ***)0x426853;
                local_a8 = (int ****)pppdVar15;
                iVar9 = FUN_00477850();
                dVar1 = *(double *)(iVar9 + 0x70) * _DAT_0064a7d8;
              }
              local_80 = _DAT_0064a758;
              if ((_DAT_0064a758 <= dVar1) && (local_80 = dVar1, _DAT_0064a7d0 < dVar1)) {
                local_80 = _DAT_0064a7d0;
              }
              if (DAT_0068c0c0 < 2) {
                local_80 = 20.0;
              }
              else {
                local_8c = (double ****)(DAT_0068c0c0 + -1);
                local_80 = local_80 / (double)(int)local_8c;
              }
              puVar12 = (undefined1 *)0x0;
              if (_DAT_0064a668 < _DAT_0066b6b0) {
                do {
                  pppdStack_c8 = (double ***)local_2c;
                  pppdVar11 = local_94 + 10;
                  pppdVar15 = appdStack_c4;
                  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *pppdVar15 = *pppdVar11;
                    pppdVar11 = pppdVar11 + 1;
                    pppdVar15 = pppdVar15 + 1;
                  }
                  ppppiStack_cc = (int ****)0x4268f5;
                  pdVar6 = (double *)FUN_00435cd0();
                  local_88 = _DAT_0068aa20 - pdVar6[2];
                  if (_DAT_0066b6b0 <
                      SQRT((_DAT_0068aa10 - *pdVar6) * (_DAT_0068aa10 - *pdVar6) +
                           local_88 * local_88 +
                           (_DAT_0068aa18 - pdVar6[1]) * (_DAT_0068aa18 - pdVar6[1]))) break;
                  local_a8 = (int ****)&local_78;
                  ppppiStack_b0 = (int ****)&local_94;
                  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                  local_88 = (double)CONCAT44(local_88._4_4_,&pppdStack_ac);
                  local_78 = 4.0;
                  ppppiStack_b4 = (int ****)0x426963;
                  pppdStack_ac = (double ***)extraout_ECX;
                  FUN_0041d3f0();
                  ppppiStack_b0 = (int ****)0x426968;
                  FUN_00435b70();
                  puVar12 = puVar12 + 1;
                  local_8c = (double ****)puVar12;
                } while ((double)(int)puVar12 < _DAT_0066b6b0);
              }
              DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
              DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
              (&DAT_0068a928)[DAT_0068aa04] =
                   (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
              local_a8 = (int ****)0x4269da;
              uVar7 = __ftol();
              pppdStack_ac = (double ***)&local_68;
              local_88 = (double)CONCAT44(local_88._4_4_,&pppdStack_ac);
              local_78 = (double)(ulonglong)((uint)(&DAT_0068a928)[DAT_0068aa04] % uVar7);
              local_68 = (double)(longlong)local_78;
              local_78 = (double)(ulonglong)(uint)((int)DAT_006898e4 - (int)DAT_006898e0 >> 2);
              ppppiStack_b0 = (int ****)&local_94;
              local_68 = (double)(longlong)local_78 * local_80 + local_68;
              ppppiStack_b4 = (int ****)0x426a35;
              local_a8 = (int ****)pppdStack_ac;
              FUN_0041d3f0();
              ppppiStack_b0 = (int ****)0x426a3a;
              FUN_00435b70();
            }
            local_a8 = (int ****)local_94;
            pppdStack_ac = (double ***)0x426a4f;
            local_88._0_4_ = (double ****)&local_a8;
            FUN_004174c0();
            local_94[0x19] = (double **)0x4;
            local_a8 = (int ****)local_94;
            pppdStack_ac = (double ***)0x426a6b;
            local_88._0_4_ = (double ****)&local_a8;
            FUN_00477e00();
            local_88 = (double)CONCAT44(local_88._4_4_,&local_a8);
            local_a8 = (int ****)local_94;
            pppdStack_ac = (double ***)0x426a7c;
            FUN_004772b0();
            pppdStack_c8 = local_94 + 2;
            pppdVar11 = local_94 + 10;
            pppdVar15 = appdStack_c4;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pppdVar15 = *pppdVar11;
              pppdVar11 = pppdVar11 + 1;
              pppdVar15 = pppdVar15 + 1;
            }
            ppppiStack_cc = (int ****)0x426a98;
            FUN_0041a8a0();
            DAT_0068c074 = 0;
          }
        }
LAB_00426aa2:
        iVar9 = 0;
        piVar4 = DAT_006898e0;
        if (DAT_006898e0 != DAT_006898e4) {
          do {
            *(bool *)(*piVar4 + 0x350) = iVar9 % 3 == 0;
            piVar4 = piVar4 + 1;
            iVar9 = iVar9 + 1;
          } while (piVar4 != DAT_006898e4);
        }
        if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
          pcVar8 = (char *)(DAT_0071d778 + DAT_0071d774);
          *(undefined4 *)pcVar8 = s_COMPL__0066b7ec._0_4_;
          *(undefined4 *)(pcVar8 + 4) = s_COMPL__0066b7ec._4_4_;
          DAT_0071d778 = DAT_0071d778 + 8;
        }
        pcVar8 = s_provideCompetitionRegular___0066c9a8;
        cVar2 = s_provideCompetitionRegular___0066c9a8[0];
        if (DAT_0071d774 != 0) {
          for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
          {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
            cVar2 = *pcVar8;
          }
        }
        ExceptionList = local_14;
        return;
      }
      local_8c = (double ****)&local_a8;
      local_a8 = (int ****)local_90;
      pppdStack_ac = (double ***)0x426490;
      FUN_00425880();
    }
    else {
      local_8c = (double ****)&local_a8;
      local_a8 = (int ****)local_90;
      pppdStack_ac = (double ***)0x426463;
      FUN_00425880();
    }
    local_8c = (double ****)&local_a8;
    local_a8 = (int ****)local_90;
    pppdStack_ac = (double ***)0x426443;
    FUN_0041f080();
  }
LAB_0042651f:
  local_a8 = (int ****)0x8;
  pppdStack_ac = (double ***)s_COMPL__0066b7ec;
  ppppiStack_b0 = (int ****)0x426530;
  FUN_00401870();
  local_a8 = (int ****)s_provideCompetitionRegular___0066c9a8;
  pppdStack_ac = (double ***)0x42653f;
  FUN_004018b0();
  ExceptionList = local_14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00428ac0(int param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int *piVar13;
  char **ppcVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  double **ppdVar17;
  float10 fVar18;
  undefined4 auStack_140 [5];
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  int *piStack_124;
  double *apdStack_120 [2];
  int iStack_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  int local_f0;
  double local_e8;
  int local_e0;
  int iStack_dc;
  double local_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  double local_ac;
  double local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94 [6];
  uint local_7c;
  char *local_74 [9];
  undefined *local_50;
  double local_4c;
  double local_44;
  double local_3c;
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cf53;
  local_14 = ExceptionList;
  local_104 = 1.69792922906944e-313;
  local_74[8] = s_updateNavigator_PlayerId_player__0066cb44;
  local_50 = &DAT_0071d768;
  local_10c = (double)CONCAT44(0x428b0b,(undefined4)local_10c);
  ExceptionList = &local_14;
  FUN_00401870();
  local_104 = 1.014366953785819e-306;
  FUN_004018b0();
  local_c = 0;
  local_104 = (double)CONCAT44(param_1 + 8,0x428b2f);
  iVar6 = FUN_00477850();
  if ((iVar6 == 0) && (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c))) {
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  else if ((*(uint *)(param_1 + 0x60) & 0x2000) == 0) {
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  else if (*(int *)(param_1 + 100) == 5) {
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  else {
    puVar11 = (undefined4 *)(param_1 + 0x330);
    puVar15 = local_94;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar15 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
    }
    apdStack_120[0] = &local_4c;
    puVar11 = (undefined4 *)(param_1 + 0x330);
    ppdVar17 = apdStack_120 + 1;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppdVar17 = (double *)*puVar11;
      puVar11 = puVar11 + 1;
      ppdVar17 = ppdVar17 + 1;
    }
    piStack_124 = (int *)0x428b9d;
    pdVar7 = (double *)FUN_00435cd0();
    local_104 = pdVar7[2] - *(double *)(param_1 + 0x280);
    local_e8 = pdVar7[1];
    local_b8 = *(undefined4 *)(param_1 + 0x278);
    uStack_b4 = *(undefined4 *)(param_1 + 0x27c);
    local_e0 = *(int *)pdVar7;
    iStack_dc = *(int *)((int)pdVar7 + 4);
    local_10c = local_e8 - *(double *)(param_1 + 0x278);
    local_114 = *pdVar7 - *(double *)(param_1 + 0x270);
    iStack_118 = 0x428c1a;
    FUN_00405ea0();
    if (SQRT((double)CONCAT44(uStack_c4,local_c8) * (double)CONCAT44(uStack_c4,local_c8) +
             local_d0 * local_d0 + local_d8 * local_d8) <= _DAT_0064a690) {
      piVar8 = (int *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
        local_104._4_4_ = param_1 + 8;
        local_104._0_4_ = 0x428c72;
        iVar6 = FUN_00477850();
        local_104 = (double)CONCAT44(local_104._4_4_,
                                     *(undefined4 *)(DAT_0068be20 + *(int *)(iVar6 + 0xc) * 4));
        local_10c = (double)CONCAT44(&local_b8,0x428c88);
        FUN_00404d60();
        local_74[0] = (char *)0xffffffff;
        local_74[7] = (char *)0xffffffff;
        local_104 = (double)CONCAT44(&local_c0,(undefined4)local_104);
        local_74[1] = (char *)local_b8;
        local_74[2] = (char *)0x0;
        local_74[3] = (char *)0x0;
        local_74[4] = (char *)0x0;
        local_74[5] = (char *)0x0;
        local_74[6] = (char *)0x0;
        ppcVar14 = local_74;
        ppdVar17 = apdStack_120;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppdVar17 = (double *)*ppcVar14;
          ppcVar14 = ppcVar14 + 1;
          ppdVar17 = ppdVar17 + 1;
        }
        puVar11 = local_94;
        puVar15 = auStack_140;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar15 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar15 = puVar15 + 1;
        }
        local_c0 = 0;
        uStack_bc = 0;
        piVar8 = (int *)FUN_004859b0(&local_d8,0);
        piVar13 = (int *)(param_1 + 0x288);
        local_c._0_1_ = 1;
        if (piVar8 != piVar13) {
          local_e0 = piVar8[1];
          local_10c._4_4_ = *piVar8;
          local_104 = *(double *)piVar8;
          uVar4 = (local_e0 - local_10c._4_4_) / 0xc;
          iVar6 = *piVar13;
          if ((uint)((*(int *)(param_1 + 0x290) - iVar6) / 0xc) < uVar4) {
            local_10c = (double)CONCAT44(uVar4,0x428d87);
            iVar9 = FUN_00459420();
            iVar6 = *piVar13;
            local_e8 = (double)CONCAT44(local_e8._4_4_,iVar6);
            iVar3 = (*(int *)(param_1 + 0x290) - iVar6) / 0xc;
            if (iVar3 != 0) {
              local_104 = (double)CONCAT44(iVar3 * 0xc,iVar6);
              local_10c = (double)CONCAT44(0x428db3,(undefined4)local_10c);
              FUN_0044b440();
            }
            *piVar13 = iVar9;
            *(uint *)(param_1 + 0x290) = iVar9 + uVar4 * 0xc;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x28c);
            local_e8 = (double)CONCAT44(local_e8._4_4_,iVar3);
            if ((uint)((iVar3 - iVar6) / 0xc) < uVar4) {
              local_104 = (double)CONCAT44(iVar6,local_10c._4_4_ + ((iVar3 - iVar6) / 0xc) * 0xc);
              local_10c._0_4_ = 0x428e25;
              FUN_0045aa20();
              local_10c = (double)CONCAT44(local_10c._4_4_,local_e8._0_4_);
              local_114 = (double)CONCAT44(*(int *)(param_1 + 0x28c),piVar8[1]);
              iStack_118 = *piVar8 + ((*(int *)(param_1 + 0x28c) - *piVar13) / 0xc) * 0xc;
              apdStack_120[1] = (double *)0x428e56;
              FUN_0046f490();
            }
            else {
              local_104 = (double)CONCAT44(iVar6,local_e0);
              local_10c = (double)CONCAT44(local_10c._4_4_,0x428df7);
              uVar10 = FUN_0045aa20();
              local_e8 = (double)CONCAT44(local_e8._4_4_,uVar10);
            }
          }
          *(uint *)(param_1 + 0x28c) = *piVar13 + uVar4 * 0xc;
        }
        local_c = (uint)local_c._1_3_ << 8;
        local_104 = (double)CONCAT44(0x428e79,(undefined4)local_104);
        FUN_0044a4e0();
        local_104 = (double)CONCAT44(piVar13,0x428e7f);
        FUN_00484790();
      }
      else {
        piVar13 = (int *)(param_1 + 0x288);
        if (piVar8 != piVar13) {
          local_e0 = *(int *)(param_1 + 0x1c);
          local_10c._4_4_ = *piVar8;
          local_104 = *(double *)piVar8;
          iVar6 = *piVar13;
          uVar4 = (local_e0 - local_10c._4_4_) / 0xc;
          if ((uint)((*(int *)(param_1 + 0x290) - iVar6) / 0xc) < uVar4) {
            local_10c = (double)CONCAT44(uVar4,0x428ee1);
            iVar9 = FUN_00459420();
            iVar6 = *piVar13;
            local_e8 = (double)CONCAT44(local_e8._4_4_,iVar6);
            iVar3 = (*(int *)(param_1 + 0x290) - iVar6) / 0xc;
            if (iVar3 != 0) {
              local_104 = (double)CONCAT44(iVar3 * 0xc,iVar6);
              local_10c = (double)CONCAT44(0x428f0d,(undefined4)local_10c);
              FUN_0044b440();
            }
            *piVar13 = iVar9;
            *(uint *)(param_1 + 0x290) = iVar9 + uVar4 * 0xc;
          }
          else {
            uVar5 = (*(int *)(param_1 + 0x28c) - iVar6) / 0xc;
            if (uVar5 < uVar4) {
              local_104 = (double)CONCAT44(iVar6,local_10c._4_4_ + uVar5 * 0xc);
              local_10c._0_4_ = 0x428f60;
              FUN_0045aa20();
              local_10c = (double)CONCAT44(local_10c._4_4_,local_e8._0_4_);
              local_114 = (double)CONCAT44(*(int *)(param_1 + 0x28c),*(undefined4 *)(param_1 + 0x1c)
                                          );
              iStack_118 = *piVar8 + ((*(int *)(param_1 + 0x28c) - *piVar13) / 0xc) * 0xc;
              apdStack_120[1] = (double *)0x428f91;
              FUN_0046f490();
            }
            else {
              local_104 = (double)CONCAT44(iVar6,local_e0);
              local_10c = (double)CONCAT44(local_10c._4_4_,0x428f4a);
              uVar10 = FUN_0045aa20();
              local_e8 = (double)CONCAT44(local_e8._4_4_,uVar10);
            }
          }
          *(uint *)(param_1 + 0x28c) = *piVar13 + uVar4 * 0xc;
        }
      }
      piVar8 = (int *)(param_1 + 0x288);
      if (*piVar8 != *(int *)(param_1 + 0x28c)) {
        if ((*(byte *)(*piVar8 + 8) & 1) == 0) {
          local_7c = local_7c & 0xfffffffe;
        }
        else {
          local_7c = local_7c | 1;
        }
        local_104 = *(double *)(param_1 + 0x250);
        local_10c = *(double *)(param_1 + 0x248);
        local_114 = *(double *)(param_1 + 0x240);
        iStack_118 = 0x429044;
        FUN_00405ea0();
        local_9c = 0;
        uStack_98 = 0;
        local_f0 = 0;
        puVar11 = local_94;
        puVar15 = local_94;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar15 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar15 = puVar15 + 1;
        }
        dVar1 = _DAT_0064a660 / SQRT(local_ac * local_ac + local_a4 * local_a4);
        local_ac = dVar1 * local_ac;
        local_a4 = local_a4 * dVar1;
        do {
          local_104 = (double)CONCAT44(&local_e8,(undefined4)local_104);
          local_e8 = (double)(int)((-(uint)(local_f0 != 0) & 0xfffffff6) + 0x14);
          puStack_128 = local_34;
          puVar11 = local_94;
          ppdVar17 = apdStack_120;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *ppdVar17 = (double *)*puVar11;
            puVar11 = puVar11 + 1;
            ppdVar17 = ppdVar17 + 1;
          }
          uStack_12c = 0x4290de;
          piStack_124 = piVar8;
          puVar11 = (undefined4 *)FUN_0043aec0();
          puVar15 = puVar11;
          puVar16 = local_94;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar16 = puVar16 + 1;
          }
          apdStack_120[0] = &local_4c;
          ppdVar17 = apdStack_120 + 1;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *ppdVar17 = (double *)*puVar11;
            puVar11 = puVar11 + 1;
            ppdVar17 = ppdVar17 + 1;
          }
          piStack_124 = (int *)0x429109;
          FUN_00435cd0();
          local_104 = local_3c - *(double *)(param_1 + 0x280);
          local_10c = local_44 - *(double *)(param_1 + 0x278);
          local_114 = local_4c - *(double *)(param_1 + 0x270);
          iStack_118 = 0x429150;
          FUN_00405ea0();
          local_104 = (double)CONCAT44(&local_ac,&local_d8);
          local_c8 = 0;
          uStack_c4 = 0;
          dVar1 = _DAT_0064a660 / SQRT(local_d0 * local_d0 + local_d8 * local_d8);
          local_d8 = dVar1 * local_d8;
          local_d0 = local_d0 * dVar1;
          local_10c = (double)CONCAT44(local_74,0x4291a9);
          iVar6 = FUN_00487e90();
          local_c0 = *(undefined4 *)(iVar6 + 0x10);
          uStack_bc = *(undefined4 *)(iVar6 + 0x14);
          local_104 = (double)CONCAT44(0x4291db,(undefined4)local_104);
          fVar18 = (float10)FUN_0061d420();
          if ((double)CONCAT44(uStack_bc,local_c0) < _DAT_0064a668) {
            fVar18 = -fVar18;
          }
          local_e8 = (double)fVar18;
        } while ((ABS(local_e8) <= _DAT_0064a820) && (local_f0 = local_f0 + 1, local_f0 < 0xe));
        if (*(double *)(param_1 + 0x298) < local_e8 - _DAT_0064a818) {
          do {
            fVar18 = fVar18 - (float10)_DAT_0064a810;
          } while ((float10)*(double *)(param_1 + 0x298) < fVar18 - (float10)_DAT_0064a818);
        }
        if (fVar18 + (float10)_DAT_0064a818 < (float10)*(double *)(param_1 + 0x298)) {
          do {
            fVar18 = fVar18 + (float10)_DAT_0064a810;
          } while (fVar18 + (float10)_DAT_0064a818 < (float10)*(double *)(param_1 + 0x298));
        }
        *(double *)(param_1 + 0x298) = (double)fVar18;
        local_104 = (double)fVar18;
        local_10c = (double)CONCAT44(0x429297,(undefined4)local_10c);
        fVar18 = (float10)FUN_00488250();
        if ((float10)*(double *)(param_1 + 0x2c8) < fVar18 - (float10)_DAT_0066b750) {
          *(double *)(param_1 + 0x2c8) = (double)(fVar18 - (float10)_DAT_0066b750);
        }
        if (fVar18 + (float10)_DAT_0066b750 < (float10)*(double *)(param_1 + 0x2c8)) {
          *(double *)(param_1 + 0x2c8) = (double)(fVar18 + (float10)_DAT_0066b750);
        }
        for (dVar1 = *(double *)(param_1 + 0x2c8); _DAT_0064a818 < dVar1;
            dVar1 = dVar1 - _DAT_0064a810) {
        }
        for (; dVar1 < _DAT_0064a808; dVar1 = dVar1 + _DAT_0064a810) {
        }
        if (ABS(dVar1) <= _DAT_0064a800) {
          if (_DAT_0064a820 < ABS(dVar1)) {
            if (_DAT_0064a668 <= dVar1) {
              *(undefined4 *)(param_1 + 0x294) = 4;
            }
            else {
              *(undefined4 *)(param_1 + 0x294) = 3;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x294) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x294) = 2;
        }
        uVar10 = *(undefined4 *)(param_1 + 0x294);
        if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
          pcVar12 = (char *)(DAT_0071d778 + DAT_0071d774);
          *(undefined4 *)pcVar12 = s_COMPL__0066b7ec._0_4_;
          *(undefined4 *)(pcVar12 + 4) = s_COMPL__0066b7ec._4_4_;
          DAT_0071d778 = DAT_0071d778 + 8;
        }
        pcVar12 = s_updateNavigator_PlayerId_player__0066cb44;
        cVar2 = s_updateNavigator_PlayerId_player__0066cb44[0];
        if (DAT_0071d774 != 0) {
          for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
          {
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
            cVar2 = *pcVar12;
          }
        }
        ExceptionList = local_14;
        return uVar10;
      }
      *(undefined4 *)(param_1 + 0x294) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x294) = 0;
    }
  }
  local_104 = 1.6979292257098e-313;
  local_10c = (double)CONCAT44(0x428fca,(undefined4)local_10c);
  FUN_00401870();
  local_104 = 1.014366953786011e-306;
  FUN_004018b0();
  ExceptionList = local_14;
  return 0;
}


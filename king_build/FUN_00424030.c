
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424030(void)

{
  int *piVar1;
  uint uVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined4 auStack_b4 [2];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  int *local_80;
  int local_7c;
  undefined8 local_78;
  double local_70;
  char *local_64;
  undefined *local_60;
  double local_5c;
  double local_54;
  double local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  double local_3c;
  double local_34;
  double local_24;
  double local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cda8;
  local_14 = ExceptionList;
  local_9c = 1.69792922906944e-313;
  local_64 = s_calculatePlayerSpeedsAndFares___0066c95c;
  local_60 = &DAT_0071d768;
  local_a4 = (double)CONCAT44(0x424073,(int **)local_a4);
  ExceptionList = &local_14;
  FUN_00401870();
  local_9c = 1.0140355829200827e-306;
  FUN_004018b0();
  local_c = 0;
  local_9c = (double)CONCAT44(0x424092,(undefined4)local_9c);
  fVar11 = (float10)FUN_00401000();
  local_70 = (double)(fVar11 - (float10)_DAT_0068c050);
  if (fVar11 - (float10)_DAT_0068c050 < (float10)_DAT_0064a6c8) {
    local_9c = 1.6979292257098e-313;
    local_a4 = (double)CONCAT44(0x4240ba,(int **)local_a4);
    FUN_00401870();
    local_9c = 1.014035582920094e-306;
    FUN_004018b0();
    ExceptionList = local_14;
    return;
  }
  local_9c = (double)CONCAT44(0x4240ee,(undefined4)local_9c);
  local_7c = __ftol();
  local_80 = (int *)*DAT_0068a8f0;
  if (local_80 != DAT_0068a8f0) {
    do {
      local_78 = (double)CONCAT44(local_78._4_4_,(int)&local_9c + 4);
      local_9c = (double)CONCAT44(local_80,0x424114);
      iVar5 = FUN_0040a950();
      puVar9 = (undefined4 *)(iVar5 + 0x20);
      puVar10 = auStack_b4;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_00435cd0(&local_44);
      local_9c = local_34 - *(double *)(iVar5 + 0x128);
      local_a4 = local_3c - *(double *)(iVar5 + 0x120);
      local_ac = (double)CONCAT44(uStack_40,local_44) - *(double *)(iVar5 + 0x118);
      auStack_b4[1] = 0x42416d;
      FUN_00405ea0();
      *(undefined4 *)(iVar5 + 0x118) = local_44;
      *(undefined4 *)(iVar5 + 0x11c) = uStack_40;
      *(double *)(iVar5 + 0x120) = local_3c;
      *(double *)(iVar5 + 0x128) = local_34;
      if ((DAT_0068c0e8 == 0) && ((*(uint *)(iVar5 + 0x58) & 0x800) != 0)) {
        local_78 = SQRT(local_4c * local_4c + local_54 * local_54 + local_5c * local_5c);
        local_9c = (double)CONCAT44(iVar5,0x4241da);
        fVar11 = (float10)FUN_004773f0();
        fVar11 = (float10)*(double *)(iVar5 + 0xb8) -
                 fVar11 * (float10)local_78 * (float10)_DAT_0064a648;
        *(double *)(iVar5 + 0xb8) = (double)fVar11;
        if (fVar11 < (float10)_DAT_0064a668) {
          iVar8 = *(int *)(iVar5 + 0xa8);
          local_9c = (double)CONCAT44(iVar5,0x424216);
          fVar11 = (float10)FUN_004773f0();
          if (fVar11 * (float10)_DAT_0064a770 <= (float10)*(double *)(iVar8 + 0x88)) {
            local_9c = (double)CONCAT44(iVar5,0x424291);
            fVar11 = (float10)FUN_004773f0();
            *(double *)(iVar5 + 0x358) = (double)fVar11;
            *(double *)(iVar8 + 0x88) =
                 (double)((float10)*(double *)(iVar8 + 0x88) - fVar11 * (float10)_DAT_0064a770);
            dVar3 = *(double *)(iVar5 + 0x358) * _DAT_0064a770;
            *(double *)(iVar5 + 0xb8) = dVar3 + *(double *)(iVar5 + 0xb8);
            *(double *)(iVar5 + 0x80) = dVar3 + *(double *)(iVar5 + 0x80);
            *(double *)(iVar5 + 0x218) = *(double *)(iVar5 + 0x218) - dVar3;
          }
          else {
            local_9c = (double)(ulonglong)extraout_ECX;
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            local_78._0_4_ = (undefined1 *)((int)&local_a4 + 4);
            local_a4._0_4_ = &local_80;
            local_ac = (double)CONCAT44(0x424246,(undefined4)local_ac);
            local_a4._4_4_ = extraout_ECX;
            FUN_0041d3f0();
            local_a4 = (double)CONCAT44(local_a4._4_4_,0x42424d);
            FUN_004042b0();
            local_78._0_4_ = (undefined1 *)((int)&local_a4 + 4);
            local_ac = (double)CONCAT44(0x42425a,(undefined4)local_ac);
            local_a4._0_4_ = (int **)(iVar5 + 0xa8);
            local_a4._4_4_ = extraout_ECX_00;
            FUN_0041d3f0();
            local_a4 = (double)CONCAT44(local_a4._4_4_,0x42425f);
            FUN_00477010();
            local_78 = (double)CONCAT44(local_78._4_4_,(int)&local_9c + 4);
            local_9c = (double)CONCAT44(iVar8,0x42426f);
            cVar4 = FUN_00417560();
            if (cVar4 != '\0') {
              local_9c._4_4_ = s_NO_MONEY_FOR_ADVANCE_0066c944;
              local_9c._0_4_ = 0x424280;
              uVar6 = FUN_0040e1d0();
              local_9c = (double)CONCAT44(local_9c._4_4_,uVar6);
              local_a4 = (double)CONCAT44(0x424286,(int **)local_a4);
              FUN_0056a570();
            }
          }
        }
      }
      if (*(int *)(iVar5 + 0x54) == 2) {
        piVar1 = *(int **)(iVar5 + 0xa8);
        iVar8 = *(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(iVar5 + 0x1fc) + 4) * 4) + 0x40);
        uVar2 = iVar8 * 0xf;
        dVar3 = SQRT(local_4c * local_4c + local_54 * local_54 + local_5c * local_5c);
        if (piVar1 == DAT_0068a8f0) {
          *(double *)(iVar5 + 0x80) =
               *(double *)(iVar5 + 0x80) -
               dVar3 * (double)(float)(&DAT_00696864)[iVar8 * 0x25c] * _DAT_0064a760;
        }
        else {
          dVar3 = dVar3 * (double)(float)(&DAT_00696864)[iVar8 * 0x25c] * _DAT_0064a768;
          *(double *)(piVar1 + 0x22) = *(double *)(piVar1 + 0x22) - dVar3;
          *(double *)(iVar5 + 0x218) = *(double *)(iVar5 + 0x218) - dVar3;
          if (*(double *)(piVar1 + 0x22) < _DAT_0064a668) {
            local_9c = (double)(ulonglong)uVar2;
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            local_78._0_4_ = (undefined1 *)((int)&local_a4 + 4);
            local_a4._0_4_ = &local_80;
            local_ac = (double)CONCAT44(0x4243a9,(undefined4)local_ac);
            local_a4._4_4_ = uVar2;
            FUN_0041d3f0();
            local_a4 = (double)CONCAT44(local_a4._4_4_,0x4243b0);
            FUN_004042b0();
            local_78._0_4_ = (undefined1 *)((int)&local_a4 + 4);
            local_ac = (double)CONCAT44(0x4243bd,(undefined4)local_ac);
            local_a4._0_4_ = (int **)(iVar5 + 0xa8);
            local_a4._4_4_ = extraout_ECX_01;
            FUN_0041d3f0();
            local_a4 = (double)CONCAT44(local_a4._4_4_,0x4243c2);
            FUN_00477010();
            local_78 = (double)CONCAT44(local_78._4_4_,(int)&local_9c + 4);
            local_9c = (double)CONCAT44(piVar1,0x4243d2);
            cVar4 = FUN_00417560();
            if (cVar4 != '\0') {
              local_9c._4_4_ = s_NO_MONEY_FOR_ADVANCE_0066c944;
              local_9c._0_4_ = 0x4243e3;
              uVar6 = FUN_0040e1d0();
              local_9c = (double)CONCAT44(local_9c._4_4_,uVar6);
              local_a4 = (double)CONCAT44(0x4243e9,(int **)local_a4);
              FUN_0056a570();
            }
          }
        }
      }
      dVar3 = SQRT(local_4c * local_4c + local_54 * local_54 + local_5c * local_5c) / local_70;
      local_78 = dVar3;
      if (dVar3 < _DAT_0064a690) {
        iVar8 = local_7c + -1;
        if (0 < iVar8) {
          do {
            local_a4 = (double)CONCAT44(0x424463,(int **)local_a4);
            local_9c = dVar3;
            FUN_00488250();
            local_a4 = (double)CONCAT44(0x424472,(int **)local_a4);
            local_9c = dVar3;
            FUN_00488250();
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_a4 = (double)CONCAT44(0x424484,(int **)local_a4);
        local_9c = dVar3;
        fVar11 = (float10)FUN_00488250();
        *(double *)(iVar5 + 0x148) = (double)fVar11;
        local_a4 = (double)CONCAT44(0x424497,(int **)local_a4);
        local_9c = dVar3;
        fVar11 = (float10)FUN_00488250();
        *(double *)(iVar5 + 0x150) = (double)fVar11;
        local_78 = _DAT_0064a660 / local_70;
        local_24 = local_54 * local_78;
        local_1c = local_4c * local_78;
        *(double *)(iVar5 + 0x158) = local_78 * local_5c;
        *(double *)(iVar5 + 0x160) = local_24;
        *(double *)(iVar5 + 0x168) = local_1c;
      }
      if (*(int *)(iVar5 + 0x54) == 1) {
        DAT_0066b6a0 = *(undefined4 *)(iVar5 + 0x148);
        DAT_0066b6a4 = *(undefined4 *)(iVar5 + 0x14c);
      }
      local_80 = (int *)*local_80;
    } while (local_80 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_calculatePlayerSpeedsAndFares___0066c95c;
  cVar4 = s_calculatePlayerSpeedsAndFares___0066c95c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar4 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar4;
      cVar4 = *pcVar7;
    }
  }
  ExceptionList = local_14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b30f0(int *param_1,float param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ushort *puVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  int unaff_ESI;
  float *pfVar11;
  int iVar12;
  uint *puVar13;
  float10 fVar14;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float *pfStack_b0;
  uint uStack_ac;
  int iStack_a8;
  double local_a4;
  double dStack_9c;
  undefined1 auStack_94 [12];
  undefined1 local_88;
  undefined4 uStack_74;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00647dbb;
  pvStack_c = ExceptionList;
  local_a4 = (double)CONCAT44(local_a4._4_4_,param_2);
  local_68 = 0;
  local_60 = 0;
  local_30 = 0;
  local_3c = 0;
  local_5c = 0xffffffff;
  local_54 = 0xffffffff;
  local_58 = 0;
  local_1c = 0;
  local_34 = 0;
  local_38 = 0;
  local_24 = 0x3f800000;
  local_28 = 0x3f800000;
  local_88 = 0;
  local_50 = 0;
  local_4c = 0;
  local_2c = 0;
  local_64 = 0;
  local_20 = 0;
  local_44 = 0;
  local_48 = 0;
  local_10 = 0xee;
  iVar4 = param_1[0x1e3];
  local_4 = 0;
  local_c0 = 0.0;
  ExceptionList = &pvStack_c;
  if (param_1[0x814] != 0) {
    ExceptionList = &pvStack_c;
    if ((param_1[0x814] & 1U) != 0) {
      ExceptionList = &pvStack_c;
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + 0x1cd,param_1 + 0x1b7,1);
      local_c0 = (float)((uint)local_c0 ^ 1);
    }
    if ((*(byte *)(param_1 + 0x814) & 4) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + ((uint)local_c0 ^ 1) * 0x16 + 0x1b7,
                           param_1 + (int)local_c0 * 0x16 + 0x1b7,4);
      local_c0 = (float)((uint)local_c0 ^ 1);
    }
    if ((*(byte *)(param_1 + 0x814) & 0x10) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + ((uint)local_c0 ^ 1) * 0x16 + 0x1b7,
                           param_1 + (int)local_c0 * 0x16 + 0x1b7,0x10);
      local_c0 = (float)((uint)local_c0 ^ 1);
    }
    if ((*(byte *)(param_1 + 0x814) & 8) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + ((uint)local_c0 ^ 1) * 0x16 + 0x1b7,
                           param_1 + (int)local_c0 * 0x16 + 0x1b7,8);
      local_c0 = (float)((uint)local_c0 ^ 1);
    }
    if ((*(byte *)(param_1 + 0x814) & 2) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + ((uint)local_c0 ^ 1) * 0x16 + 0x1b7,
                           param_1 + (int)local_c0 * 0x16 + 0x1b7,2);
      local_c0 = (float)((uint)local_c0 ^ 1);
    }
  }
  iVar4 = (**(code **)(*param_1 + 0xc))(param_3,iVar4,&local_c0);
  if (iVar4 != 0) {
    iStack_a8 = iVar4;
    if (param_1[0x86b] == 2) {
      thunk_FUN_005b5b70();
      pfVar11 = (float *)(param_1 + 0xb2);
      fVar14 = (float10)_DAT_0064a660 /
               ((float10)*(double *)(param_1 + 0x846) - (float10)*(double *)(param_1 + 0x844));
      iVar12 = iVar4;
      pfStack_b0 = pfVar11;
      if (0 < iVar4) {
        fVar8 = (float)(param_3 & 0x80);
        piVar10 = param_1 + unaff_ESI * 0x16 + 0x1b7;
        fStack_b4 = fVar8;
        do {
          iVar12 = *piVar10;
          fVar3 = (float)_DAT_0064a660 / (float)param_1[iVar12 * 3 + 0x133];
          fVar2 = (float)param_1[iVar12 * 3 + 0x134];
          *pfVar11 = (fVar3 * (float)param_1[iVar12 * 3 + 0x132] + (float)_DAT_0064a660) *
                     (float)param_1[0x85b] + (float)param_1[0x859];
          pfVar11[1] = ((float)_DAT_0064a660 - fVar3 * fVar2) * (float)param_1[0x85c] +
                       (float)param_1[0x85a];
          pfVar11[2] = (float)(((float10)(float)param_1[iVar12 * 3 + 0x133] -
                               (float10)*(double *)(param_1 + 0x844)) * fVar14);
          pfVar11[3] = fVar3;
          if (fVar8 == 0.0) {
            pfVar11[4] = -NAN;
          }
          else {
            uVar5 = __ftol();
            pfVar11[4] = (float)(((uVar5 | 0xffffff00) << 8 | uVar5) << 8 | uVar5);
            fVar8 = fStack_b4;
            fVar14 = extraout_ST0;
          }
          pfVar11[5] = -1.7014118e+38;
          pfVar11[6] = (float)param_1[iVar12 + 0x174];
          pfVar11[7] = (float)param_1[iVar12 + 0x18a];
          piVar10 = piVar10 + 1;
          pfVar11 = pfVar11 + 8;
          iVar4 = iVar4 + -1;
          iVar12 = iStack_a8;
        } while (iVar4 != 0);
      }
      (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,6,3,pfStack_b0,iVar12,0);
    }
    else {
      fStack_bc = 100000.0;
      fVar8 = 10000.0;
      fStack_b4 = 0.0;
      if (0 < iVar4) {
        piVar10 = param_1 + unaff_ESI * 0x16 + 0x1b7;
        iVar12 = iVar4;
        fVar2 = _DAT_0064ca64;
        do {
          iVar9 = *piVar10;
          fVar3 = (float)param_1[iVar9 * 3 + 0x133];
          if (fVar3 < fStack_bc) {
            fStack_bc = fVar3;
          }
          if (fStack_b4 < fVar3) {
            fStack_b4 = fVar3;
          }
          if ((float)param_1[iVar9 + 0x174] < fVar8) {
            fVar8 = (float)param_1[iVar9 + 0x174];
          }
          if ((float)param_1[iVar9 + 0x18a] < fVar2) {
            fVar2 = (float)param_1[iVar9 + 0x18a];
          }
          piVar10 = piVar10 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      local_c0 = (float)__ftol();
      fVar8 = (float)(int)local_c0;
      local_c0 = (float)__ftol();
      fStack_b8 = (float)(int)local_c0;
      pfVar11 = pfStack_b0;
      if ((param_3 & 0x1000) == 0) {
        pfVar11 = (float *)*(undefined1 **)(puStack_8 + 0x4c);
      }
      uStack_ac = 0;
      if ((param_3 & 0x100) != 0) {
        param_2 = fStack_bc * fStack_bc * param_2;
        if (_DAT_0064b240 <= param_2) {
          local_c0 = (float)(uint)*(ushort *)((int)pfVar11 + 0x14);
          if (param_2 < (float)(int)local_c0) {
            for (; _DAT_0064b240 < param_2; param_2 = param_2 * _DAT_0064b248) {
            }
          }
          else {
            local_c0 = (float)(uint)*(ushort *)((int)pfVar11 + 0x1a);
          }
        }
        uStack_ac = __ftol();
        if ((int)(uint)*(ushort *)((int)pfVar11 + 0x1a) < (int)uStack_ac) {
          uStack_ac = (uint)*(ushort *)((int)pfVar11 + 0x1a);
        }
      }
      iVar12 = FUN_005b9c70(uStack_ac);
      if (iVar12 < 2) {
        FUN_005b5a20(puStack_8);
        if (*(short *)((int)pfVar11 + 0x18) == 1) {
          pbVar6 = (byte *)FUN_005b9ca0(*(undefined2 *)((int)pfVar11 + 0x1a));
          uStack_6c = (uint)*pbVar6;
        }
        else {
          puVar7 = (ushort *)FUN_005b9ca0(*(undefined2 *)((int)pfVar11 + 0x1a));
          uStack_6c = (uint)*puVar7;
        }
        pfStack_b0 = (float *)auStack_94;
        param_3 = param_3 & 0xffffffdf;
        uStack_74 = *(undefined4 *)(puStack_8 + 0x20);
        local_4 = param_3;
      }
      if (0x7f < iVar12) {
        iVar12 = iVar12 + -1;
      }
      if (((byte)DAT_00701dec & 4) != 0) {
        if ((float)param_1[0x856] < fStack_bc) {
          ExceptionList = pvStack_18;
          return;
        }
        if ((float)param_1[0x857] < fStack_b4) {
          param_3 = param_3 | 0x40;
          local_4 = param_3;
        }
      }
      iVar9 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = iVar9 + unaff_ESI * 0x16;
          iVar9 = iVar9 + 1;
          iVar1 = param_1[iVar1 + 0x1b7];
          param_1[iVar1 + 0x174] = (int)((float)param_1[iVar1 + 0x174] - fVar8);
          param_1[iVar1 + 0x18a] = (int)((float)param_1[iVar1 + 0x18a] - fStack_b8);
        } while (iVar9 < iVar4);
      }
      local_a4 = -1.0;
      dStack_9c = 1.0;
      fStack_bc = 0.0;
      if (0 < iVar4) {
        local_c0 = (float)(iVar12 << 0x10);
        fStack_b4 = (float)(param_3 & 0x80);
        piVar10 = param_1 + 0xc;
        puVar13 = (uint *)(param_1 + 6);
        do {
          fVar8 = ((float)_DAT_0064a660 /
                  (float)param_1[param_1[(int)fStack_bc + unaff_ESI * 0x16 + 0x1b7] * 3 + 0x133]) *
                  (float)param_1[param_1[(int)fStack_bc + unaff_ESI * 0x16 + 0x1b7] * 3 + 0x132];
          if (fVar8 < (float)local_a4) {
            local_a4 = (double)fVar8;
          }
          if ((float)dStack_9c < fVar8) {
            dStack_9c = (double)fVar8;
          }
          fStack_b8 = (float)param_1[0x1ea];
          iVar4 = __ftol();
          puVar13[-1] = iVar4 + param_1[0x1e8] + 0x800 + (int)fStack_b8 & 0xfffff000;
          fStack_b8 = (float)param_1[0x1eb];
          iVar4 = __ftol();
          *puVar13 = (param_1[0x1e9] - iVar4) + 0x800 + (int)fStack_b8 & 0xfffff000;
          uVar5 = __ftol();
          puVar13[1] = uVar5;
          if ((fStack_b4 != 0.0) && (iVar4 = thunk_FUN_005b5b70(), iVar4 != 0)) {
            iVar4 = thunk_FUN_005b5b70();
            fStack_b8 = (float)(*(int *)(iVar4 + 0x324) + -2);
            iVar4 = __ftol();
            *piVar10 = iVar4 << 0x14;
          }
          uVar5 = __ftol();
          puVar13[2] = uVar5;
          uVar5 = __ftol();
          puVar13[3] = uVar5;
          fStack_bc = (float)((int)fStack_bc + 1);
          piVar10 = piVar10 + 0xb;
          puVar13 = puVar13 + 0xb;
          param_3 = local_4;
          iVar4 = iStack_a8;
        } while ((int)fStack_bc < iStack_a8);
      }
      if (((param_3 & 0x20) != 0) && (uVar5 = __ftol(), (int)(uVar5 & 0xfff00000) < 0x1800000)) {
        param_3 = param_3 | 0x10;
      }
      FUN_005cf190(param_3,param_1[0x1e7],iVar4,param_1 + 2,pfStack_b0,unaff_retaddr,uStack_ac);
    }
  }
  ExceptionList = pvStack_18;
  return;
}


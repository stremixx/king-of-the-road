
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b3970(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int unaff_ESI;
  float *pfVar13;
  undefined4 unaff_retaddr;
  float fVar14;
  float fVar15;
  uint local_20;
  int *piStack_1c;
  uint *puStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_8;
  int *piStack_4;
  
  iVar4 = param_1[0x1e3];
  local_20 = 0;
  if (param_1[0x814] != 0) {
    if ((param_1[0x814] & 1U) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + 0x1cd,param_1 + 0x1b7,1);
      local_20 = local_20 ^ 1;
    }
    if ((*(byte *)(param_1 + 0x814) & 4) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + (local_20 ^ 1) * 0x16 + 0x1b7,
                           param_1 + local_20 * 0x16 + 0x1b7,4);
      local_20 = local_20 ^ 1;
    }
    if ((*(byte *)(param_1 + 0x814) & 0x10) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + (local_20 ^ 1) * 0x16 + 0x1b7,
                           param_1 + local_20 * 0x16 + 0x1b7,0x10);
      local_20 = local_20 ^ 1;
    }
    if ((*(byte *)(param_1 + 0x814) & 8) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + (local_20 ^ 1) * 0x16 + 0x1b7,
                           param_1 + local_20 * 0x16 + 0x1b7,8);
      local_20 = local_20 ^ 1;
    }
    if ((*(byte *)(param_1 + 0x814) & 2) != 0) {
      iVar4 = FUN_005ae580(param_3,iVar4,param_1 + (local_20 ^ 1) * 0x16 + 0x1b7,
                           param_1 + local_20 * 0x16 + 0x1b7,2);
      local_20 = local_20 ^ 1;
    }
  }
  iVar4 = (**(code **)(*param_1 + 0xc))(param_3,iVar4,&local_20);
  if (iVar4 != 0) {
    fVar14 = 100000.0;
    fVar15 = 0.0;
    if (0 < iVar4) {
      piVar8 = param_1 + unaff_ESI * 0x16 + 0x1b7;
      iVar12 = iVar4;
      do {
        fVar2 = (float)param_1[*piVar8 * 3 + 0x133];
        if (fVar2 < fVar14) {
          fVar14 = fVar2;
        }
        if (fVar15 < fVar2) {
          fVar15 = fVar2;
        }
        piVar8 = piVar8 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if ((DAT_00701dec & 4) != 0) {
      if ((float)param_1[0x856] < fVar14) {
        return;
      }
      if ((float)param_1[0x857] < fVar15) {
        piStack_4 = (int *)((uint)piStack_4 | 0x40);
      }
    }
    iStack_14 = iVar4;
    if (param_1[0x86b] == 2) {
      iVar12 = thunk_FUN_005b5b70();
      pbVar1 = (byte *)(iVar12 + (*(int *)(iStack_8 + 0x28) + 8) * 3);
      if (0 < iVar4) {
        uVar10 = (uint)piStack_4 & 0x80;
        piStack_4 = param_1 + unaff_ESI * 0x16 + 0x1b7;
        pfVar13 = (float *)(param_1 + 0xb2);
        puStack_18 = (uint *)iVar4;
        do {
          iVar4 = *piStack_4;
          fVar15 = (float)_DAT_0064a660 / (float)param_1[iVar4 * 3 + 0x133];
          fVar14 = (float)param_1[iVar4 * 3 + 0x134];
          *pfVar13 = (fVar15 * (float)param_1[iVar4 * 3 + 0x132] + (float)_DAT_0064a660) *
                     (float)param_1[0x85b] + (float)param_1[0x859];
          pfVar13[1] = ((float)_DAT_0064a660 - fVar15 * fVar14) * (float)param_1[0x85c] +
                       (float)param_1[0x85a];
          pfVar13[2] = (float)(((float10)(float)param_1[iVar4 * 3 + 0x133] -
                               (float10)*(double *)(param_1 + 0x844)) /
                              ((float10)*(double *)(param_1 + 0x846) -
                              (float10)*(double *)(param_1 + 0x844)));
          pfVar13[3] = fVar15;
          if (uVar10 == 0) {
            iVar4 = __ftol();
            piStack_1c = (int *)(uint)*pbVar1;
            uVar5 = __ftol();
            piStack_1c = (int *)(uint)pbVar1[1];
            uVar6 = __ftol();
            piStack_1c = (int *)(uint)pbVar1[2];
            uVar7 = __ftol();
            pfVar13[4] = (float)(((iVar4 << 8 | uVar5) << 8 | uVar6) << 8 | uVar7);
          }
          else {
            iVar4 = __ftol();
            piStack_1c = (int *)(uint)*pbVar1;
            uVar5 = __ftol();
            piStack_1c = (int *)(uint)pbVar1[1];
            uVar6 = __ftol();
            local_20 = ((iVar4 << 8 | uVar5) << 8 | uVar6) << 8;
            piStack_1c = (int *)(uint)pbVar1[2];
            uVar5 = __ftol();
            pfVar13[4] = (float)(local_20 | uVar5);
          }
          pfVar13[7] = 0.0;
          pfVar13[6] = 0.0;
          pfVar13[5] = -1.7014118e+38;
          piStack_4 = piStack_4 + 1;
          pfVar13 = pfVar13 + 8;
          puStack_18 = (uint *)((int)puStack_18 + -1);
        } while (puStack_18 != (uint *)0x0);
        puStack_18 = (uint *)0x0;
        iVar4 = iStack_14;
      }
      (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,6,3,param_1 + 0xb2,iVar4,0);
      return;
    }
    local_20 = 0;
    if (0 < iVar4) {
      uVar10 = (uint)piStack_4 & 0x80;
      puStack_18 = (uint *)(param_1 + 6);
      piStack_1c = param_1 + 0xc;
      do {
        iVar4 = param_1[0x1ea];
        iStack_10 = iVar4;
        iVar12 = __ftol();
        puStack_18[-1] = iVar12 + iVar4 + 0x800 + param_1[0x1e8] & 0xfffff000;
        iVar4 = param_1[0x1eb];
        iStack_10 = iVar4;
        iVar12 = __ftol();
        puVar3 = puStack_18;
        *puStack_18 = (iVar4 - iVar12) + 0x800 + param_1[0x1e9] & 0xfffff000;
        if ((DAT_00701dec & 0x4000) != 0) {
          uVar5 = __ftol();
          puVar3[1] = uVar5;
        }
        if ((uVar10 != 0) && (iVar4 = thunk_FUN_005b5b70(), iVar4 != 0)) {
          iVar4 = thunk_FUN_005b5b70();
          iStack_10 = *(int *)(iVar4 + 0x324) + -2;
          iVar4 = __ftol();
          *piStack_1c = iVar4 << 0x14;
        }
        local_20 = local_20 + 1;
        piStack_1c = piStack_1c + 0xb;
        puStack_18 = puVar3 + 0xb;
      } while ((int)local_20 < iStack_14);
    }
    iVar4 = iStack_14;
    if (((((uint)piStack_4 & 0x80) == 0) && ((*(byte *)(iStack_8 + 0x20) & 0x20) == 0)) &&
       ((*(uint *)(param_1[0x1e7] + 0xc) & 0x800) != 0)) {
      if (0 < iStack_14) {
        piVar8 = param_1 + 6;
        piVar11 = &DAT_00701d70;
        iVar12 = iStack_14;
        do {
          piVar11[-1] = piVar8[-1] >> 0x14;
          iVar12 = iVar12 + -1;
          *piVar11 = (uint)*(ushort *)(param_1[0x1e7] + 2) * *(int *)(param_1[0x1e7] + 0x10) +
                     (*piVar8 >> 0x14);
          piVar8 = piVar8 + 0xb;
          piVar11 = piVar11 + 2;
        } while (iVar12 != 0);
      }
      if (*(short *)(param_1[0x1e7] + 4) == 1) {
        uVar9 = *(undefined4 *)(iStack_8 + 0x28);
        thunk_FUN_005b5b70(uVar9,unaff_retaddr);
        uVar9 = FUN_005b96c0(uVar9,unaff_retaddr);
        FUN_004843e0(&DAT_00701d6c,iVar4,uVar9);
        return;
      }
      if (*(short *)(param_1[0x1e7] + 4) == 2) {
        uVar9 = *(undefined4 *)(iStack_8 + 0x28);
        thunk_FUN_005b5b70(uVar9,unaff_retaddr);
        uVar9 = FUN_005b96c0(uVar9,unaff_retaddr);
        FUN_004843e0(&DAT_00701d6c,iVar4,uVar9);
        return;
      }
      FUN_004843e0(&DAT_00701d6c,iStack_14,0);
      return;
    }
    if (((uint)piStack_4 & 0x40) != 0) {
      uVar9 = __ftol();
      FUN_005cf160(piStack_4,param_1[0x1e7],iVar4,param_1 + 2,iStack_8,unaff_retaddr,uVar9);
      return;
    }
    FUN_005cf1e0(piStack_4,param_1[0x1e7],iStack_14,param_1 + 2,iStack_8,unaff_retaddr);
  }
  return;
}


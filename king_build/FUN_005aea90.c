
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005aea90(int param_1,byte *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  float10 extraout_ST0;
  float local_98;
  float local_94;
  float local_90;
  float local_80;
  int local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  undefined1 local_14 [16];
  
  do {
    local_74 = 0.0;
    local_80 = 0.0;
    local_6c = 0.0;
    local_70 = 1.0;
    if ((DAT_007019d8 & 1) == 0) {
      DAT_007019d8 = DAT_007019d8 | 1;
      iVar11 = 4;
      puVar7 = &DAT_00701d40;
      do {
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 3;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      puVar7 = &DAT_00701550;
      puVar13 = &DAT_00701d38;
      for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      }
      FUN_0061c439(&DAT_005af080);
    }
    iVar11 = *(int *)(param_3 + 0x30);
    uVar9 = *(uint *)(param_3 + 0x20);
    if ((uVar9 & 4) == 0) {
      if ((uVar9 & 8) != 0) goto LAB_005aeb39;
      if ((uVar9 & 0x800) != 0) goto LAB_005aeb35;
    }
    else {
LAB_005aeb35:
      if ((uVar9 & 8) == 0) {
        if ((uVar9 & 4) != 0) {
          fVar1 = *(float *)(param_3 + 0x54);
          dVar3 = *(double *)(param_1 + 0x2128);
          iVar12 = __ftol();
          local_74 = (float)(extraout_ST0 - (float10)iVar12);
          iVar12 = __ftol();
          local_80 = fVar1 * (float)dVar3 - (float)iVar12;
        }
      }
      else {
LAB_005aeb39:
        fVar14 = (float10)*(float *)(param_3 + 0x6c) * (float10)*(double *)(param_1 + 0x2128);
        fVar15 = (float10)fsin(fVar14);
        local_6c = (float)fVar15;
        fVar14 = (float10)fcos(fVar14);
        local_70 = (float)fVar14;
      }
      iVar12 = 0;
      if (*(short *)(param_2 + 4) != 0) {
        local_7c = 0;
        do {
          if ((*param_2 & 2) == 0) {
            if (iVar11 == 0) {
              uVar9 = (uint)*(ushort *)(*(int *)(param_2 + 8) + iVar12 * 2);
              fVar1 = *(float *)(*(int *)(param_1 + 0x203c) + 0x10 + uVar9 * 0x1c);
              fVar2 = *(float *)(*(int *)(param_1 + 0x203c) + uVar9 * 0x1c + 0xc);
              fVar14 = (float10)fVar2;
            }
            else {
              if (*(int *)(*(int *)(param_1 + 0x203c) + 0x14 +
                          (uint)*(ushort *)(*(int *)(param_2 + 8) + iVar12 * 2) * 0x1c) == 0) {
                FUN_005d2520(s_Have_not_secondary_texture_coord_0067dee8,param_3);
              }
              iVar8 = *(int *)(*(int *)(param_1 + 0x203c) + 0x14 +
                              (uint)*(ushort *)(*(int *)(param_2 + 8) + iVar12 * 2) * 0x1c);
              fVar2 = *(float *)(iVar8 + -8 + iVar11 * 8);
              fVar14 = (float10)fVar2;
              fVar1 = *(float *)(iVar8 + iVar11 * 8 + -4);
            }
          }
          else {
            iVar8 = ((uint)*(ushort *)(param_2 + 6) * iVar12 + iVar11) * 4;
            fVar1 = *(float *)(*(int *)(param_2 + 0x10) + iVar8);
            fVar2 = *(float *)(*(int *)(param_2 + 0xc) + iVar8);
            fVar14 = (float10)fVar2;
          }
          fVar6 = DAT_00701598;
          fVar4 = DAT_00701594;
          fVar5 = DAT_00701590;
          uVar9 = *(uint *)(param_3 + 0x20);
          if ((uVar9 & 4) != 0) {
            fVar14 = fVar14 + (float10)local_74;
            fVar1 = local_80 + fVar1;
            goto LAB_005aefcf;
          }
          if ((uVar9 & 8) != 0) {
            fVar15 = fVar14 - (float10)*(float *)(param_3 + 0x70);
            fVar14 = (float10)local_70 * fVar15 +
                     ((float10)fVar1 - (float10)*(float *)(param_3 + 0x74)) * (float10)local_6c +
                     (float10)*(float *)(param_3 + 0x70);
            fVar1 = (float)((((float10)fVar1 - (float10)*(float *)(param_3 + 0x74)) *
                             (float10)local_70 - (float10)local_6c * fVar15) +
                           (float10)*(float *)(param_3 + 0x74));
            goto LAB_005aefcf;
          }
          if ((uVar9 & 0x800) == 0) goto LAB_005aefcf;
          pfVar10 = (float *)(*(int *)(param_1 + 0x203c) +
                             (uint)*(ushort *)(*(int *)(param_2 + 8) + iVar12 * 2) * 0x1c);
          local_98 = *pfVar10;
          local_94 = pfVar10[1];
          local_90 = pfVar10[2];
          if (*(int *)(param_3 + 0x40) == 3) {
            FUN_005ab040(*(int *)(param_1 + 0x2020) * 0x30 + 0x8c0 + param_1);
          }
          else {
            pfVar10 = (float *)FUN_005adc70();
            local_38 = *pfVar10 - local_98;
            local_34 = pfVar10[1] - local_94;
            local_30 = pfVar10[2] - local_90;
            pfVar10 = (float *)FUN_005aaad0(local_14,&local_38);
            local_1c = fVar4 + fVar4;
            local_18 = fVar6 + fVar6;
            fVar4 = fVar5 * *pfVar10 + fVar6 * pfVar10[2] + fVar4 * pfVar10[1];
            local_28 = local_1c * fVar4;
            local_24 = local_18 * fVar4;
            local_98 = (fVar5 + fVar5) * fVar4 - *pfVar10;
            local_94 = local_28 - pfVar10[1];
            local_90 = local_24 - pfVar10[2];
            if ((float)_DAT_0064a648 <= ABS(local_90)) {
              if (local_90 <= _DAT_0064b240) {
                if (local_90 < _DAT_0064b928) {
                  local_90 = -1.0;
                }
              }
              else {
                local_90 = 1.0;
              }
            }
            else {
              local_90 = 0.001;
            }
            if (_DAT_0064b928 <= local_98) {
              if (_DAT_0064b240 < local_98) {
                local_98 = 1.0;
              }
            }
            else {
              local_98 = -1.0;
            }
          }
          switch(*(undefined4 *)(param_3 + 0x40)) {
          case 0:
            if (local_90 < (float)_DAT_0064a738) {
              local_90 = 1e-05;
            }
            fVar14 = ((float10)*(float *)(param_3 + 0x60) * (float10)local_98 *
                     (float10)_DAT_0064a6d0) / (float10)ABS(local_90) + (float10)_DAT_0064a6d0;
            fVar1 = (*(float *)(param_3 + 100) * local_94 * (float)_DAT_0064a6d0) / ABS(local_90) +
                    (float)_DAT_0064a6d0;
            break;
          case 1:
            fVar14 = (float10)FUN_0061d420();
            fVar14 = fVar14 * (float10)_DAT_00650720;
            goto LAB_005aef79;
          case 2:
            fVar14 = (float10)_DAT_0064b240 - (float10)local_90 * (float10)_DAT_0064b248;
LAB_005aef79:
            fVar1 = (float)fVar14;
            fVar14 = (float10)FUN_0061d420();
            if (local_94 < _DAT_0064b254) {
              fVar14 = (float10)_DAT_0064c8f8 - fVar14;
            }
            fVar14 = fVar14 * (float10)_DAT_0064d4b8;
            break;
          case 3:
            fVar14 = (float10)local_98 * (float10)_DAT_0064c480 + (float10)_DAT_0064a6d0;
            fVar1 = (float)_DAT_0064c308 - local_90 * _DAT_0064b324;
            break;
          default:
            fVar14 = (float10)fVar2;
          }
LAB_005aefcf:
          if (iVar11 < 1) {
            if (*(int *)(param_2 + 0x50) == 0) {
              *(float *)(*(int *)(param_2 + 0x4c) + 0x1c + local_7c) = fVar1;
              iVar8 = *(int *)(param_2 + 0x4c);
            }
            else {
              *(float *)(*(int *)(param_2 + 0x50) + 0x1c + local_7c) = fVar1;
              iVar8 = *(int *)(param_2 + 0x50);
            }
            *(float *)(iVar8 + 0x18 + local_7c) = (float)fVar14;
          }
          else {
            *(float *)(*(int *)(param_2 + 0x44) + -8 + ((uint)param_2[0x40] * iVar12 + iVar11) * 8)
                 = (float)fVar14;
            *(float *)(*(int *)(param_2 + 0x44) + -4 + ((uint)param_2[0x40] * iVar12 + iVar11) * 8)
                 = fVar1;
          }
          local_7c = local_7c + 0x20;
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)(uint)*(ushort *)(param_2 + 4));
      }
    }
    if (*(int *)(param_3 + 0x2c) < 0) {
      return;
    }
    param_3 = *(int *)(param_1 + 0x2044) + *(int *)(param_3 + 0x2c) * 0x7c;
  } while( true );
}


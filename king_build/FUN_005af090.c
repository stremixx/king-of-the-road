
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005af090(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float local_12c;
  float local_128;
  float local_124;
  float local_114;
  float local_110;
  int local_108;
  int local_104;
  int local_f8;
  float local_f4;
  float local_d8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [132];
  
  do {
    local_d8 = 0.0;
    local_f4 = 0.0;
    local_110 = 0.0;
    local_114 = 1.0;
    if ((DAT_007019a0 & 1) == 0) {
      DAT_007019a0 = DAT_007019a0 | 1;
      iVar10 = 4;
      puVar9 = &DAT_00701d08;
      do {
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 3;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      puVar9 = &DAT_00701550;
      puVar13 = &DAT_00701d00;
      for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar13 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar13 = puVar13 + 1;
      }
      FUN_0061c439(&DAT_005af7c0);
    }
    uVar3 = *(uint *)(param_4 + 0x20);
    iVar10 = *(int *)(param_4 + 0x30);
    if ((uVar3 & 4) == 0) {
      if ((uVar3 & 8) != 0) goto LAB_005af136;
      if ((uVar3 & 0x800) != 0) goto LAB_005af132;
    }
    else {
LAB_005af132:
      if ((uVar3 & 8) != 0) {
LAB_005af136:
        fVar14 = (float10)*(float *)(param_4 + 0x6c) * (float10)*(double *)(param_1 + 0x2128);
        fVar15 = (float10)fsin(fVar14);
        local_110 = (float)fVar15;
        fVar14 = (float10)fcos(fVar14);
        local_114 = (float)fVar14;
      }
      if ((uVar3 & 4) != 0) {
        local_d8 = *(float *)(param_4 + 0x50) * (float)*(double *)(param_1 + 0x2128);
        local_f4 = *(float *)(param_4 + 0x54) * (float)*(double *)(param_1 + 0x2128);
      }
      if ((uVar3 & 0x100000) != 0) {
        fVar14 = (float10)*(double *)(param_1 + 0x2128) * (float10)_DAT_00650730;
        fVar15 = (float10)fsin(fVar14);
        local_110 = (float)fVar15;
        fVar14 = (float10)fcos(fVar14);
        local_114 = (float)fVar14;
      }
      local_108 = 0;
      if (0 < param_3) {
        local_f8 = 0;
        local_104 = 0;
        do {
          if (*(int *)(param_2 + 0x14) == 0) {
            iVar11 = *(int *)(param_1 + 0x203c);
            if (iVar10 == 0) {
              fVar2 = *(float *)(local_104 + 0x10 + iVar11);
              fVar1 = *(float *)(local_104 + iVar11 + 0xc);
            }
            else {
              if (*(int *)(local_104 + 0x18 + iVar11) < iVar10) {
                FUN_0061c369(local_88,s_Texture_coordinates_are_absent_f_0067df14,param_4);
                FUN_005d2520(local_88,0);
              }
              iVar11 = *(int *)(local_104 + 0x14 + *(int *)(param_1 + 0x203c));
              fVar1 = *(float *)(iVar11 + -8 + iVar10 * 8);
              fVar2 = *(float *)(iVar11 + iVar10 * 8 + -4);
            }
          }
          else {
            if ((int)(uint)*(byte *)(param_2 + 0xc) < iVar10) {
              FUN_005d2520(s_Texture_coordinates_are_absent_f_0067df50,param_4);
            }
            iVar11 = (*(byte *)(param_2 + 0xc) + 1) * local_108 + iVar10;
            fVar1 = *(float *)(*(int *)(param_2 + 0x14) + iVar11 * 8);
            fVar2 = *(float *)(*(int *)(param_2 + 0x14) + iVar11 * 8 + 4);
          }
          fVar8 = DAT_00701598;
          fVar7 = DAT_00701594;
          fVar4 = DAT_00701590;
          fVar14 = (float10)fVar1;
          uVar3 = *(uint *)(param_4 + 0x20);
          if ((uVar3 & 4) != 0) {
            fVar14 = fVar14 + (float10)local_d8;
            fVar1 = (float)fVar14;
            fVar2 = local_f4 + fVar2;
          }
          fVar5 = fVar2;
          if ((uVar3 & 8) != 0) {
            fVar14 = fVar14 - (float10)*(float *)(param_4 + 0x70);
            fVar5 = (float)((((float10)fVar2 - (float10)*(float *)(param_4 + 0x74)) *
                             (float10)local_114 - (float10)local_110 * fVar14) +
                           (float10)*(float *)(param_4 + 0x74));
            fVar14 = (float10)local_114 * fVar14 +
                     ((float10)fVar2 - (float10)*(float *)(param_4 + 0x74)) * (float10)local_110 +
                     (float10)*(float *)(param_4 + 0x70);
            fVar1 = (float)fVar14;
          }
          if ((uVar3 & 0x800) == 0) goto LAB_005af5ad;
          pfVar12 = (float *)(*(int *)(param_1 + 0x203c) + local_104);
          local_12c = *pfVar12;
          local_128 = pfVar12[1];
          local_124 = pfVar12[2];
          if (*(int *)(param_4 + 0x40) == 3) {
            FUN_005ab040(*(int *)(param_1 + 0x2020) * 0x30 + 0x8c0 + param_1);
          }
          else {
            pfVar12 = (float *)FUN_005adc70();
            local_a0 = *pfVar12 - local_12c;
            local_9c = pfVar12[1] - local_128;
            local_98 = pfVar12[2] - local_124;
            pfVar12 = (float *)FUN_005aaad0(local_94,&local_a0);
            fVar2 = fVar4 * *pfVar12 + fVar8 * pfVar12[2] + fVar7 * pfVar12[1];
            local_12c = (fVar4 + fVar4) * fVar2 - *pfVar12;
            local_128 = (fVar7 + fVar7) * fVar2 - pfVar12[1];
            local_124 = (fVar8 + fVar8) * fVar2 - pfVar12[2];
            if ((float)_DAT_0064a738 <= ABS(local_124)) {
              if (local_124 <= _DAT_0064b240) {
                if (local_124 < _DAT_0064b928) {
                  local_124 = -1.0;
                }
              }
              else {
                local_124 = 1.0;
              }
            }
            else {
              local_124 = 1e-05;
            }
            if (_DAT_0064b928 <= local_12c) {
              if (_DAT_0064b240 < local_12c) {
                local_12c = 1.0;
              }
            }
            else {
              local_12c = -1.0;
            }
          }
          switch(*(undefined4 *)(param_4 + 0x40)) {
          case 0:
            if (local_124 < (float)_DAT_0064a738) {
              local_124 = 1e-05;
            }
            fVar14 = ((float10)*(float *)(param_4 + 0x60) * (float10)local_12c *
                     (float10)_DAT_0064a6d0) / (float10)ABS(local_124) + (float10)_DAT_0064a6d0;
            fVar5 = (*(float *)(param_4 + 100) * local_128 * (float)_DAT_0064a6d0) / ABS(local_124)
                    + (float)_DAT_0064a6d0;
            break;
          case 1:
            fVar14 = (float10)FUN_0061d420();
            fVar14 = fVar14 * (float10)_DAT_00650720;
            goto LAB_005af553;
          case 2:
            fVar14 = (float10)_DAT_0064b240 - (float10)local_124 * (float10)_DAT_0064b248;
LAB_005af553:
            fVar5 = (float)fVar14;
            fVar14 = (float10)FUN_0061d420();
            if (local_128 < _DAT_0064b254) {
              fVar14 = (float10)_DAT_0064c8f8 - fVar14;
            }
            fVar14 = fVar14 * (float10)_DAT_0064d4b8;
            break;
          case 3:
            fVar14 = (float10)local_12c * (float10)_DAT_0064c480 + (float10)_DAT_0064a6d0;
            fVar5 = (float)_DAT_0064c308 - local_124 * _DAT_0064b324;
            break;
          default:
            fVar14 = (float10)fVar1;
          }
LAB_005af5ad:
          if ((*(uint *)(param_4 + 0x20) & 0x100000) != 0) {
            pfVar12 = (float *)(*(int *)(param_1 + 0x203c) + local_104);
            fVar1 = *pfVar12;
            fVar4 = pfVar12[1];
            fVar15 = (float10)fsin((float10)fVar1 * (float10)_DAT_006506e8);
            fVar16 = (float10)fcos((float10)fVar4 * (float10)_DAT_006506e0);
            fVar2 = (float)(fVar16 + fVar15);
            fVar15 = (float10)fcos(((float10)fVar4 + (float10)fVar1) * (float10)_DAT_006506d8);
            fVar16 = (float10)fsin(((float10)fVar1 - (float10)fVar4) * (float10)_DAT_006506d0);
            fVar1 = (float)(fVar16 + fVar15);
            if ((*(uint *)(param_4 + 0x20) & 0x800) == 0) {
              fVar17 = ((float10)fVar1 * (float10)local_110 + (float10)fVar2 * (float10)local_114) *
                       (float10)_DAT_0064a590;
              dVar6 = _DAT_0064a590;
            }
            else {
              fVar17 = ((float10)fVar1 * (float10)local_110 + (float10)fVar2 * (float10)local_114) *
                       (float10)_DAT_00650728;
              dVar6 = _DAT_00650728;
            }
            fVar14 = fVar17 + fVar14;
            fVar5 = (float)(((fVar16 + fVar15) * (float10)local_114 -
                            (float10)fVar2 * (float10)local_110) * (float10)dVar6 + (float10)fVar5);
          }
          iVar11 = *(int *)(param_2 + 0x1c);
          if ((iVar11 == 0) && (*(int *)(param_2 + 0x18) == 0)) {
            *(float *)(*(int *)(param_2 + 0x10) +
                      ((uint)*(byte *)(param_2 + 0xc) * local_108 + iVar10) * 8) = (float)fVar14;
            *(float *)(*(int *)(param_2 + 0x10) + 4 +
                      ((uint)*(byte *)(param_2 + 0xc) * local_108 + iVar10) * 8) = fVar5;
          }
          else if (iVar10 < 1) {
            if (iVar11 == 0) {
              *(float *)(*(int *)(param_2 + 0x18) + 0x1c + local_f8) = fVar5;
              *(float *)(*(int *)(param_2 + 0x18) + 0x18 + local_f8) = (float)fVar14;
            }
            else {
              *(float *)(local_f8 + 0x1c + iVar11) = fVar5;
              *(float *)(*(int *)(param_2 + 0x1c) + 0x18 + local_f8) = (float)fVar14;
            }
          }
          else {
            *(float *)(*(int *)(param_2 + 0x10) + -8 +
                      ((uint)*(byte *)(param_2 + 0xc) * local_108 + iVar10) * 8) = (float)fVar14;
            *(float *)(*(int *)(param_2 + 0x10) + -4 +
                      ((uint)*(byte *)(param_2 + 0xc) * local_108 + iVar10) * 8) = fVar5;
          }
          local_f8 = local_f8 + 0x20;
          local_108 = local_108 + 1;
          local_104 = local_104 + 0x1c;
        } while (local_108 < param_3);
      }
    }
    iVar10 = *(int *)(param_4 + 0x2c);
    if (iVar10 < 0) {
      return;
    }
    if (((*(uint *)(param_4 + 0x20) & 0x80000) != 0) && (DAT_0071f824 == 0)) {
      *(uint *)(*(int *)(param_1 + 0x2044) + 0x20 + iVar10 * 0x7c) =
           *(uint *)(*(int *)(param_1 + 0x2044) + 0x20 + iVar10 * 0x7c) | 0x100000;
    }
    param_4 = *(int *)(param_1 + 0x2044) + *(int *)(param_4 + 0x2c) * 0x7c;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b2000(int param_1,ushort *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float10 fVar15;
  float *pfVar16;
  undefined4 uVar17;
  int local_7c;
  undefined4 local_78;
  float local_74;
  int local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((DAT_00701d30 & 1) == 0) {
    DAT_00701d30 = DAT_00701d30 | 1;
    _DAT_007019e0 = 0;
    _DAT_007019e4 = 0;
    _DAT_007019e8 = 0;
    _DAT_007019ec = 0;
    FUN_0061c439(&DAT_005b26b0);
  }
  iVar7 = *(int *)(param_1 + 0x2044);
  uVar5 = param_2[0x18];
  if (*(int *)(param_1 + 0x21ac) != 1) {
    if (*(int *)(param_1 + 0x21ac) == 2) {
      iVar9 = thunk_FUN_005b5b70();
      if (iVar9 == 0) {
        return;
      }
      if (((*param_2 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      FUN_005aea60((int)(short)param_2[0x18],uVar8,0);
    }
    fVar1 = *(float *)(param_2 + 0x14);
    iVar12 = *(int *)(param_1 + 0x2020) * 0x30;
    fVar2 = *(float *)(iVar12 + 0xcac + param_1);
    fVar3 = *(float *)(param_2 + 0x12);
    fVar4 = *(float *)(iVar12 + 0xca8 + param_1);
    pfVar13 = (float *)(*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1);
    pfVar14 = local_30;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    }
    if (*(float *)(param_2 + 0x10) * *(float *)(iVar12 + 0xca4 + param_1) +
        fVar3 * fVar4 + fVar1 * fVar2 + *(float *)(param_2 + 0x16) < (float)_DAT_0064a668) {
      return;
    }
    iVar9 = thunk_FUN_005b5b70();
    if (iVar9 != 0) {
      if ((*param_2 & 0x10) != 0) {
        local_7c = 0;
        local_78 = 0x80;
        goto LAB_005b239e;
      }
      if (((*param_2 & 1) != 0) && (((byte)DAT_00701dec & 0x40) != 0)) {
        local_78 = 0;
        if (*(int *)(param_1 + 0x2030) != 0) {
          if (*(int *)(param_1 + 0x2100) == 2) {
            local_78 = 0x80;
          }
          else if (*(int *)(param_1 + 0x2100) == 1) {
            local_60 = local_30[3] * *(float *)(param_2 + 0x12) +
                       local_18 * *(float *)(param_2 + 0x14) +
                       local_30[0] * *(float *)(param_2 + 0x10);
            local_5c = local_20 * *(float *)(param_2 + 0x12) +
                       local_14 * *(float *)(param_2 + 0x14) +
                       local_30[1] * *(float *)(param_2 + 0x10);
            local_58 = local_1c * *(float *)(param_2 + 0x12) +
                       local_10 * *(float *)(param_2 + 0x14) +
                       local_30[2] * *(float *)(param_2 + 0x10);
            FUN_005ad290(&local_60,*(undefined4 *)(param_1 + 0x2140),
                         *(undefined4 *)(param_1 + 0x2144));
          }
        }
        local_7c = __ftol();
        if (local_7c < 0) {
          local_7c = 0;
        }
        else if (0xff < local_7c) {
          local_7c = 0xff;
        }
        goto LAB_005b239e;
      }
      local_7c = __ftol();
    }
    local_78 = 0;
LAB_005b239e:
    local_74 = 0.0;
    if (param_2[2] != 0) {
      local_70 = 0;
      pfVar13 = (float *)(param_1 + 0x680);
      do {
        pfVar14 = (float *)(*(int *)(param_1 + 0x203c) +
                           (uint)*(ushort *)(*(int *)(param_2 + 4) + (int)local_74 * 2) * 0x1c);
        FUN_005e0dd0(pfVar14);
        iVar9 = thunk_FUN_005b5b70();
        if (iVar9 != 0) {
          uVar6 = *param_2;
          if ((uVar6 & 0x10) == 0) {
            if (((*(int *)(param_1 + 0x2100) == 2) && ((uVar6 & 1) != 0)) &&
               (((byte)DAT_00701dec & 0x40) != 0)) {
              uVar8 = *(undefined4 *)(param_1 + 0x2144);
              uVar17 = *(undefined4 *)(param_1 + 0x2140);
              pfVar16 = &local_48;
              pfVar11 = &local_3c;
              local_48 = local_30[3] * *(float *)(param_2 + 0x12) +
                         local_18 * *(float *)(param_2 + 0x14) +
                         local_30[0] * *(float *)(param_2 + 0x10);
              local_44 = local_30[1] * *(float *)(param_2 + 0x10) +
                         local_20 * *(float *)(param_2 + 0x12) +
                         local_14 * *(float *)(param_2 + 0x14);
              local_40 = local_30[2] * *(float *)(param_2 + 0x10) +
                         local_1c * *(float *)(param_2 + 0x12) +
                         local_10 * *(float *)(param_2 + 0x14);
              local_3c = local_30[0] * *pfVar14 + local_30[3] * pfVar14[1] + local_18 * pfVar14[2] +
                         local_c;
              local_38 = local_30[1] * *pfVar14 + local_20 * pfVar14[1] + local_14 * pfVar14[2] +
                         local_8;
              local_34 = local_30[2] * *pfVar14 + local_1c * pfVar14[1] + local_10 * pfVar14[2] +
                         local_4;
LAB_005b2645:
              fVar15 = (float10)FUN_005ad200(pfVar11,pfVar16,uVar17,uVar8);
              goto LAB_005b264d;
            }
          }
          else if (((uVar6 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
            *pfVar13 = *(float *)(*(int *)(param_2 + 10) + (-0x680 - param_1) + (int)pfVar13);
          }
          else {
            if (0 < *(int *)(param_1 + 0x2030)) {
              iVar9 = *(int *)(param_2 + 0xc);
              pfVar10 = (float *)(iVar9 + local_70);
              uVar8 = *(undefined4 *)(param_1 + 0x2144);
              uVar17 = *(undefined4 *)(param_1 + 0x2140);
              pfVar11 = &local_54;
              local_5c = local_30[1] * *pfVar10 +
                         local_20 * *(float *)(iVar9 + 4 + local_70) +
                         local_14 * *(float *)(iVar9 + 8 + local_70);
              local_58 = local_30[2] * *pfVar10 + local_1c * pfVar10[1] + local_10 * pfVar10[2];
              pfVar16 = &local_60;
              local_60 = local_30[0] * *pfVar10 + local_30[3] * pfVar10[1] + local_18 * pfVar10[2];
              local_54 = local_30[0] * *pfVar14 + local_30[3] * pfVar14[1] + local_18 * pfVar14[2] +
                         local_c;
              local_50 = local_30[1] * *pfVar14 + local_20 * pfVar14[1] + local_14 * pfVar14[2] +
                         local_8;
              local_4c = local_30[2] * *pfVar14 + local_1c * pfVar14[1] + local_10 * pfVar14[2] +
                         local_4;
              goto LAB_005b2645;
            }
            fVar15 = (float10)*(double *)(param_1 + 0x2140);
LAB_005b264d:
            *pfVar13 = (float)fVar15;
          }
        }
        pfVar13[0x17] = local_74;
        local_74 = (float)((int)local_74 + 1);
        local_70 = local_70 + 0xc;
        pfVar13 = pfVar13 + 1;
      } while ((int)local_74 < (int)(uint)param_2[2]);
    }
    *(float *)(param_1 + 0x78c) = local_74;
    FUN_005b30b0(iVar7 + (short)uVar5 * 0x7c,local_78,local_7c,0,0);
    return;
  }
  iVar7 = thunk_FUN_005b5b70();
  if (iVar7 == 0) {
    return;
  }
  thunk_FUN_005b5b70();
  if (((*param_2 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  FUN_005aea60((int)(short)param_2[0x18],uVar8,0);
  if ((*param_2 & 4) != 0) {
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x16,3);
  }
  uVar5 = *param_2;
  if (*(int *)(param_1 + 0x2050) == 0) {
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88,0);
  }
  else {
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88,1);
  }
  if (((*param_2 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
    iVar7 = *(int *)(param_2 + 0x28);
    if (iVar7 == 0) goto LAB_005b2165;
    uVar6 = param_2[2];
    iVar9 = *DAT_0071f868;
    uVar8 = 0x1e2;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x26);
    if (iVar7 == 0) goto LAB_005b2165;
    uVar6 = param_2[2];
    iVar9 = *DAT_0071f868;
    uVar8 = 0x112;
  }
  (**(code **)(iVar9 + 100))(DAT_0071f868,6 - (uint)((uVar5 & 0x80) != 0),uVar8,iVar7,uVar6,0);
LAB_005b2165:
  if ((*param_2 & 4) != 0) {
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x16,2);
  }
  if ((*param_2 & 0x80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x20a0) = *(int *)(param_1 + 0x20a0) + (param_2[2] - 2);
  *(int *)(param_1 + 0x20c0) = *(int *)(param_1 + 0x20c0) + 1;
  return;
}


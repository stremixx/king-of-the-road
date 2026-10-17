
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005e4ee0(ushort *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  float10 fVar15;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  if ((DAT_00720714 & 1) == 0) {
    DAT_00720714 = DAT_00720714 | 1;
    iVar9 = FUN_005ab5d0(local_60,0x3f490fda);
    fVar4 = *(float *)(iVar9 + 0x24) + *(float *)(iVar9 + 0xc);
    fVar5 = *(float *)(iVar9 + 0x28) + *(float *)(iVar9 + 0x10);
    fVar6 = *(float *)(iVar9 + 0x2c) + *(float *)(iVar9 + 0x14);
    pfVar10 = (float *)FUN_005ab7d0(local_30,0x3f060a92);
    _DAT_0072070c = fVar4 * pfVar10[1] + fVar5 * pfVar10[4] + fVar6 * pfVar10[7] + pfVar10[10];
    _DAT_00720710 = fVar4 * pfVar10[2] + fVar5 * pfVar10[5] + fVar6 * pfVar10[8] + pfVar10[0xb];
    _DAT_00720708 = fVar4 * *pfVar10 + fVar5 * pfVar10[3] + fVar6 * pfVar10[6] + pfVar10[9];
    FUN_0061c439(&DAT_005e52d0);
  }
  uVar7 = FUN_005aa810(param_2);
  *param_1 = uVar7 ^ 1;
  param_1[3] = uVar7 >> 8;
  fVar15 = (float10)FUN_005aa860(param_2);
  *(float *)(param_1 + 0xe) = (float)fVar15;
  uVar7 = FUN_005aa810(param_2);
  param_1[0x19] = uVar7;
  uVar7 = FUN_005aa810(param_2);
  param_1[0x18] = uVar7;
  uVar7 = FUN_005aa810(param_2);
  param_1[2] = uVar7;
  param_1[1] = (ushort)DAT_0071efcc;
  DAT_0071efcc = DAT_0071efcc + 1;
  uVar11 = FUN_00631d33((uint)param_1[2] << 1);
  *(undefined4 *)(param_1 + 4) = uVar11;
  if ((*param_1 & 2) != 0) {
    param_1[3] = param_1[3] + 1;
    uVar11 = FUN_00631d33((uint)param_1[3] * (uint)param_1[2] * 4);
    *(undefined4 *)(param_1 + 6) = uVar11;
    uVar11 = FUN_00631d33((uint)param_1[3] * (uint)param_1[2] * 4);
    *(undefined4 *)(param_1 + 8) = uVar11;
  }
  if ((*param_1 & 0x10) != 0) {
    if (((*param_1 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
      uVar11 = FUN_00631d33((uint)param_1[2] << 2);
      *(undefined4 *)(param_1 + 10) = uVar11;
    }
    else {
      uVar13 = (uint)param_1[2];
      iVar9 = FUN_00631d33(uVar13 * 0xc);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else if (-1 < (int)(uVar13 - 1)) {
        puVar12 = (undefined4 *)(iVar9 + 8);
        do {
          puVar12[-2] = 0;
          puVar12[-1] = 0;
          *puVar12 = 0;
          puVar12 = puVar12 + 3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        *(int *)(param_1 + 0xc) = iVar9;
        goto LAB_005e50ef;
      }
      *(int *)(param_1 + 0xc) = iVar9;
    }
  }
LAB_005e50ef:
  local_84 = 0;
  if (param_1[2] != 0) {
    local_74 = 0;
    do {
      uVar8 = FUN_005aa810(param_2);
      *(undefined2 *)(*(int *)(param_1 + 4) + local_84 * 2) = uVar8;
      if (((*param_1 & 2) != 0) && (iVar9 = 0, param_1[3] != 0)) {
        iVar14 = local_84 << 2;
        do {
          fVar15 = (float10)FUN_005aa860(param_2);
          *(float *)(iVar14 + *(int *)(param_1 + 6)) = (float)fVar15;
          fVar15 = (float10)FUN_005aa860(param_2);
          iVar9 = iVar9 + 1;
          *(float *)(iVar14 + *(int *)(param_1 + 8)) = (float)fVar15;
          iVar14 = iVar14 + 8;
        } while (iVar9 < (int)(uint)param_1[3]);
      }
      uVar7 = *param_1;
      if ((uVar7 & 0x10) != 0) {
        if ((uVar7 & 1) == 0) {
          if ((uVar7 & 0x20) != 0) {
            fVar15 = (float10)FUN_005aa860(param_2);
            *(float *)(*(int *)(param_1 + 10) + local_84 * 4) = (float)fVar15;
          }
        }
        else {
          if ((uVar7 & 0x20) == 0) {
            uVar13 = (uint)*(ushort *)(*(int *)(param_1 + 4) + local_84 * 2);
            iVar9 = param_4 + uVar13 * 0xc;
            local_80 = *(float *)(param_4 + uVar13 * 0xc);
            local_7c = *(float *)(iVar9 + 4);
            local_78 = *(float *)(iVar9 + 8);
          }
          else {
            FUN_005aae80(param_2);
          }
          if (((byte)DAT_00701dec & 0x40) == 0) {
            *(float *)(*(int *)(param_1 + 10) + local_84 * 4) =
                 (_DAT_00720708 * local_80 + local_7c * _DAT_0072070c + local_78 * _DAT_00720710 +
                 (float)_DAT_0064a660) * (float)_DAT_0064a6d0;
          }
          else {
            pfVar10 = (float *)(*(int *)(param_1 + 0xc) + local_74);
            *pfVar10 = local_80;
            pfVar10[1] = local_7c;
            pfVar10[2] = local_78;
          }
        }
      }
      local_84 = local_84 + 1;
      local_74 = local_74 + 0xc;
    } while (local_84 < (int)(uint)param_1[2]);
  }
  puVar3 = *(ushort **)(param_1 + 4);
  puVar12 = (undefined4 *)(param_3 + (uint)puVar3[2] * 0x1c);
  puVar1 = (undefined4 *)(param_3 + (uint)puVar3[1] * 0x1c);
  puVar2 = (undefined4 *)(param_3 + (uint)*puVar3 * 0x1c);
  uVar11 = FUN_005abdf0(*puVar2,puVar2[1],puVar2[2],*puVar1,puVar1[1],puVar1[2],*puVar12,puVar12[1],
                        puVar12[2]);
  FUN_005cd110(uVar11);
  return 1;
}


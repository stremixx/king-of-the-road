
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d2a90(ushort *param_1)

{
  ushort *puVar1;
  byte bVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  float fVar9;
  byte *pbVar10;
  uint **ppuVar11;
  bool bVar12;
  uint *local_12c;
  float local_128;
  ushort *local_124;
  float local_120;
  undefined8 uStack_11c;
  undefined8 local_114;
  uint *local_10c;
  int local_fc;
  float local_e8;
  ushort *local_e4;
  float local_e0;
  int local_dc;
  float local_d8;
  ushort *local_d4;
  float local_d0;
  float fStack_cc;
  ushort *puStack_c8;
  float fStack_c4;
  double local_c0;
  int local_b4 [6];
  undefined4 local_9c;
  undefined4 local_98;
  uint local_94;
  undefined4 uStack_90;
  uint *puStack_8c;
  float local_88;
  ushort *local_84;
  float local_80;
  uint local_7c;
  undefined4 local_78;
  uint *local_74;
  uint local_70 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  char *local_60;
  byte *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  uint auStack_20 [3];
  uint local_14 [4];
  
  if (DAT_00695294 != 0) {
    local_c0 = _DAT_00695230 - _DAT_00695238;
    local_10c = (uint *)DAT_00695270;
    fVar9 = (float)(uint)(*param_1 >> 1);
    local_114 = (double)CONCAT44(0x4d2adb,(undefined4)local_114);
    local_114._4_4_ = __ftol();
    local_114._0_4_ = 0x4d2ae7;
    uVar3 = __ftol();
    local_114 = (double)CONCAT44(local_114._4_4_,uVar3);
    uStack_11c._0_4_ = local_70;
    uStack_11c._4_4_ = s__d__d__d_00671a5c;
    local_120 = 7.08675e-39;
    FUN_0061c369();
    local_120 = 0.0;
    local_128 = (float)local_70;
    local_124 = (ushort *)0x5;
    local_12c = DAT_006cdc84;
    FUN_005e97a0(param_1,fVar9,0x5a);
    uVar3 = 5;
    if (local_c0 <= _DAT_0064a668) {
      uVar3 = 7;
    }
    local_10c = (uint *)0x0;
    local_114 = (double)CONCAT44(uVar3,100);
    uStack_11c._4_4_ = (char *)0x4d2b53;
    uStack_11c._4_4_ = (char *)__ftol();
    uStack_11c._0_4_ = (uint *)0x64;
    local_124 = param_1;
    local_128 = 7.086889e-39;
    local_120 = fVar9;
    FUN_005b6a50();
    uVar3 = 5;
    if (_DAT_00695240 <= _DAT_0064a668) {
      uVar3 = 7;
    }
    local_10c = (uint *)0x0;
    local_114 = (double)CONCAT44(uVar3,0x78);
    uStack_11c._4_4_ = (char *)0x4d2b97;
    uStack_11c._4_4_ = (char *)__ftol();
    uStack_11c._0_4_ = (uint *)0x78;
    local_124 = param_1;
    local_128 = 7.086984e-39;
    local_120 = fVar9;
    FUN_005b6a50();
    uVar3 = 5;
    if (_DAT_00695248 <= _DAT_0064a668) {
      uVar3 = 7;
    }
    local_10c = (uint *)0x0;
    local_114 = (double)CONCAT44(uVar3,0x82);
    uStack_11c._4_4_ = (char *)0x4d2bde;
    uStack_11c._4_4_ = (char *)__ftol();
    uStack_11c._0_4_ = (uint *)0x82;
    local_124 = param_1;
    local_128 = 7.087088e-39;
    local_120 = fVar9;
    FUN_005b6a50();
    uVar3 = 5;
    if (_DAT_00695250 <= _DAT_0064a668) {
      uVar3 = 7;
    }
    local_10c = (uint *)0x0;
    local_114 = (double)CONCAT44(uVar3,0x8c);
    uStack_11c._4_4_ = (char *)0x4d2c28;
    uStack_11c._4_4_ = (char *)__ftol();
    uStack_11c._0_4_ = (uint *)0x8c;
    local_124 = param_1;
    local_128 = 7.087192e-39;
    local_120 = fVar9;
    FUN_005b6a50();
    uVar3 = 5;
    if (_DAT_00695258 <= _DAT_0064a668) {
      uVar3 = 7;
    }
    local_10c = (uint *)0x0;
    local_114 = (double)CONCAT44(uVar3,0x96);
    uStack_11c._4_4_ = (char *)0x4d2c72;
    uStack_11c._4_4_ = (char *)__ftol();
    uStack_11c._0_4_ = (uint *)0x96;
    local_124 = param_1;
    local_128 = 7.087295e-39;
    local_120 = fVar9;
    FUN_005b6a50();
    iVar5 = *(int *)(DAT_00695c00 + 0x1d0);
    puVar1 = *(ushort **)(DAT_00695c00 + 0xc);
    local_114 = (double)CONCAT44(0x4d2c9c,(undefined4)local_114);
    local_10c = (uint *)iVar5;
    FUN_005eaae0();
    local_10c = (uint *)0x4d2ca5;
    FUN_004042a0();
    local_10c = (uint *)(*(int *)(iVar5 + 0x2020) * 0x30 + 0x8c0 + iVar5);
    local_114 = (double)CONCAT44(&DAT_00695274,&local_94);
    uStack_11c._4_4_ = (char *)0x4d2cc8;
    pfVar4 = (float *)FUN_0043f690();
    local_e8 = *pfVar4;
    local_e4 = (ushort *)pfVar4[1];
    local_e0 = pfVar4[2];
    if (_DAT_0064b240 < (float)local_e4) {
      local_10c = (uint *)0x4d2d23;
      iVar5 = __ftol();
      local_10c = (uint *)0x4d2d3a;
      iVar6 = __ftol();
      local_10c = (uint *)0x0;
      uStack_11c._4_4_ = (char *)(iVar5 + 5);
      local_114 = (double)CONCAT44(6,iVar6);
      local_120 = (float)(iVar5 + -5);
      local_128 = 7.087591e-39;
      local_124 = puVar1;
      uStack_11c._0_4_ = (uint *)iVar6;
      FUN_005b6a50();
      local_128 = 0.0;
      local_12c = (uint *)0x6;
      FUN_005b6a50(puVar1,iVar5,iVar6 + -5,iVar5,iVar6 + 5);
    }
    _DAT_0069521c = *(undefined4 *)(DAT_00695c00 + 0x1d0);
    local_114 = (double)CONCAT44(0x4d2d86,(undefined4)local_114);
    local_10c = (uint *)_DAT_0069521c;
    FUN_005eaae0();
    local_10c = (uint *)&local_dc;
    local_114 = (double)CONCAT44(0x4d2d90,(undefined4)local_114);
    FUN_004362c0();
    while (local_dc != -1) {
      local_fc = 0;
      iVar5 = *(int *)(DAT_0068be98 + local_dc * 4);
      if (0 < (int)(*(int *)(iVar5 + 0x7c) - *(int *)(iVar5 + 0x78) & 0xfffffffcU)) {
        do {
          local_b4[0] = local_dc;
          local_10c = local_70;
          local_b4[1] = 0xffffffff;
          local_9c = 0;
          local_98 = 0xffffffff;
          local_b4[4] = 0;
          local_b4[2] = 0;
          local_b4[3] = 0;
          local_70[0] = 0;
          local_68 = 0;
          uStack_64 = 0;
          local_58 = 0;
          uStack_54 = 0;
          local_4c = 0xffffffff;
          local_48 = 0xffffffff;
          local_b4[5] = local_fc;
          piVar8 = local_b4;
          ppuVar11 = &local_12c;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *ppuVar11 = (uint *)*piVar8;
            piVar8 = piVar8 + 1;
            ppuVar11 = ppuVar11 + 1;
          }
          local_60 = s_UNDEFINED_MODULE_0066c638;
          local_5c = (byte *)s_UNDEFINED_ROOM_0066c628;
          FUN_00438e50();
          local_10c = (uint *)0x4d2e7b;
          iVar5 = FUN_0057d5d0();
          pbVar10 = *(byte **)(iVar5 + 0xc);
          pbVar7 = local_5c;
          do {
            bVar2 = *pbVar7;
            bVar12 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_004d2ea9:
              iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_004d2eae;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar7[1];
            bVar12 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_004d2ea9;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_004d2eae:
          if (iVar5 == 0) {
            bVar2 = 1;
            _DAT_006951d8 = 1;
            if ((local_70[0] & 8) == 0) {
              bVar2 = (~(byte)local_70[0] & 4 | 8) >> 2;
            }
            iVar5 = (-(uint)(bVar2 != 3) & 0xfffffffe) + 3;
            do {
              piVar8 = local_b4;
              pfVar4 = &local_128;
              for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                *pfVar4 = (float)*piVar8;
                piVar8 = piVar8 + 1;
                pfVar4 = pfVar4 + 1;
              }
              local_12c = &local_7c;
              FUN_00439660();
              local_12c = local_14;
              piVar8 = local_b4;
              pfVar4 = &local_128;
              for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                *pfVar4 = (float)*piVar8;
                piVar8 = piVar8 + 1;
                pfVar4 = pfVar4 + 1;
              }
              uVar3 = FUN_00439400();
              FUN_005aaad0(&local_d8,uVar3);
              if (bVar2 == 1) {
                local_10c = (uint *)-local_d0;
                local_114 = (double)CONCAT44(-(float)local_d4,-local_d8);
                uStack_11c._4_4_ = (char *)0x4d2f70;
                FUN_0041ce10();
                local_d8 = local_88;
                local_d4 = local_84;
                local_d0 = local_80;
              }
              uStack_11c = (double)CONCAT44(uStack_64,local_68) * _DAT_0064a6d0;
              local_114 = (double)CONCAT44(uStack_54,local_58) * _DAT_0064a770 + uStack_11c;
              local_128 = local_d8;
              local_124 = local_d4;
              local_120 = local_d0;
              local_12c = local_74;
              local_10c = (uint *)iVar5;
              FUN_004d31a0(local_7c,local_78);
              local_10c = (uint *)(local_b4 + 4);
              uStack_11c._4_4_ = (char *)(local_b4 + 2);
              local_114 = 0.05001;
              uStack_11c._0_4_ = (uint *)0x4d3039;
              iVar6 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + local_dc * 4) + 0x78)
                                             + local_fc * 4) + 0x14))();
            } while (iVar6 == 0);
            local_12c = &local_94;
            piVar8 = local_b4;
            pfVar4 = &local_128;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *pfVar4 = (float)*piVar8;
              piVar8 = piVar8 + 1;
              pfVar4 = pfVar4 + 1;
            }
            FUN_00439660();
            piVar8 = local_b4;
            pfVar4 = &local_128;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *pfVar4 = (float)*piVar8;
              piVar8 = piVar8 + 1;
              pfVar4 = pfVar4 + 1;
            }
            local_12c = auStack_20;
            uVar3 = FUN_00439400();
            FUN_005aaad0(&local_e8,uVar3);
            if (bVar2 == 1) {
              local_e8 = -local_e8;
              local_e4 = (ushort *)-(float)local_e4;
              local_e0 = -local_e0;
              fStack_cc = local_e8;
              puStack_c8 = local_e4;
              fStack_c4 = local_e0;
            }
            uStack_11c = (double)CONCAT44(uStack_64,local_68) * _DAT_0064a6d0;
            local_114 = (double)CONCAT44(uStack_54,local_58) * _DAT_0064a770 + uStack_11c;
            local_128 = local_e8;
            local_124 = local_e4;
            local_120 = local_e0;
            local_12c = puStack_8c;
            local_10c = (uint *)iVar5;
            FUN_004d31a0(local_94,uStack_90);
          }
          local_fc = local_fc + 1;
          iVar5 = *(int *)(DAT_0068be98 + local_dc * 4);
        } while (local_fc < *(int *)(iVar5 + 0x7c) - *(int *)(iVar5 + 0x78) >> 2);
      }
      local_114 = (double)CONCAT44(&local_c0,0x4d3179);
      local_10c = (uint *)local_dc;
      piVar8 = (int *)FUN_004362f0();
      local_dc = *piVar8;
    }
  }
  return;
}


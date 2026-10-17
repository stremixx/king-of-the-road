
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427ab0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int **ppiVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 auStack_16c [5];
  undefined4 uStack_158;
  int *piStack_154;
  int *piStack_150;
  int iStack_14c;
  int *apiStack_148 [2];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  int local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_dc;
  undefined4 local_d8 [8];
  undefined1 local_b8 [4];
  int local_b4;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [32];
  undefined4 local_88 [8];
  undefined1 local_68 [32];
  undefined1 local_48 [68];
  
  if (DAT_0066b6e0 == 2) {
    local_130 = (double)CONCAT44(0x427acf,(undefined4)local_130);
    fVar9 = (float10)FUN_00401000();
    if ((float10)_DAT_0066b6f8 < fVar9 - (float10)_DAT_0066b6d8) {
      local_130 = (double)CONCAT44(0x427ae7,(undefined4)local_130);
      FUN_00427990();
      return;
    }
  }
  if (DAT_0066b6e0 == 3) {
    local_130 = (double)CONCAT44(0x427b00,(undefined4)local_130);
    fVar9 = (float10)FUN_00401000();
    if ((float10)_DAT_0064a680 < fVar9 - (float10)_DAT_0068c0d0) {
      DAT_0066b6e0 = 0;
      local_130 = 2.12414838360138e-314;
      FUN_00427a80();
    }
  }
  if (DAT_0066b6e0 == 0) {
    local_130 = (double)CONCAT44(&local_fc,0x427b39);
    FUN_00477c00();
    if (local_fc != DAT_0068a8f0) {
      local_130 = (double)CONCAT44(3,DAT_0066b6e4);
      iVar4 = local_fc + 8;
      local_138 = (double)CONCAT44(s_start_d__d_0066c8f8,local_68);
      local_140 = (double)CONCAT44(0x427b70,(undefined4)local_140);
      local_f4 = iVar4;
      FUN_0061c369();
      local_140 = (double)CONCAT44(local_68,&local_f0);
      apiStack_148[1] = (int *)0x427b82;
      FUN_004365f0();
      iVar1 = *(int *)(DAT_0068be60 + local_f0 * 4);
      local_130 = _DAT_0068aa20 - *(double *)(iVar1 + 0x40);
      local_138 = _DAT_0068aa18 - *(double *)(iVar1 + 0x38);
      local_140 = _DAT_0068aa10 - *(double *)(iVar1 + 0x30);
      apiStack_148[1] = (int *)0x427bc8;
      FUN_00405ea0();
      if (_DAT_0064a750 <=
          SQRT((double)CONCAT44(uStack_110,local_114) * (double)CONCAT44(uStack_110,local_114) +
               (double)CONCAT44(uStack_100,local_104) * (double)CONCAT44(uStack_100,local_104) +
               (double)CONCAT44(uStack_108,local_10c) * (double)CONCAT44(uStack_108,local_10c))) {
        local_114 = 0;
        local_130 = (double)CONCAT44(&local_114,iVar4);
        uStack_110 = 0;
        local_10c = 0;
        uStack_108 = 0;
        local_104 = 0;
        uStack_100 = 0;
        local_138 = (double)CONCAT44(0x427c36,(int *)local_138);
        cVar2 = FUN_00425c10();
        if (cVar2 != '\0') {
          local_130 = (double)CONCAT44(&local_114,iVar4);
          local_118 = DAT_0068a8f0;
          local_114 = 0;
          uStack_110 = 0;
          local_10c = 0;
          uStack_108 = 0;
          local_104 = 0;
          uStack_100 = 0;
          local_138 = (double)CONCAT44(0x427c86,(int *)local_138);
          cVar2 = FUN_00425c10();
          local_138._4_4_ = extraout_ECX;
          while (cVar2 != '\0') {
            local_130 = (double)CONCAT44(&DAT_0068a928,local_138._4_4_);
            local_138._0_4_ = &local_fc;
            local_140 = (double)CONCAT44(0x427ca9,(undefined4)local_140);
            FUN_0041d3f0();
            local_138 = (double)CONCAT44(local_138._4_4_,0x427cb0);
            FUN_004042b0();
            local_138 = (double)CONCAT44(local_b0,0x427cbd);
            piVar3 = (int *)FUN_004572a0();
            local_118 = *piVar3;
            if (local_118 == DAT_0068a8f0) {
              local_130 = (double)CONCAT44(&DAT_0068a928,DAT_0068a8f0);
              local_138._0_4_ = &local_fc;
              local_138._4_4_ = DAT_0068a8f0;
              local_140 = (double)CONCAT44(0x427ce5,(undefined4)local_140);
              FUN_0041d3f0();
              local_138 = (double)CONCAT44(local_138._4_4_,0x427cec);
              FUN_004042b0();
              local_138 = (double)CONCAT44(local_b8,0x427cf6);
              piVar3 = (int *)FUN_00457310();
              local_118 = *piVar3;
              if (local_118 == DAT_0068a8f0) {
                return;
              }
            }
            local_130 = (double)CONCAT44(local_118 + 8,0x427d16);
            FUN_00477940();
            local_130 = (double)CONCAT44(local_118,0x427d23);
            FUN_00417670();
            iVar4 = DAT_0068bec4 - DAT_0068bec0 >> 2;
            *(int *)(local_118 + 0x2d8) = iVar4 + -1;
            local_130 = (double)CONCAT44(iVar4,DAT_0066b6e4);
            local_138 = (double)CONCAT44(s_start_d__d_0066c8f8,local_a8);
            local_140 = (double)CONCAT44(0x427d5b,(undefined4)local_140);
            FUN_0061c369();
            local_140 = (double)CONCAT44(s_check_point1_0066c168,&local_dc);
            apiStack_148[1] = (int *)0x427d6a;
            FUN_004365f0();
            apiStack_148[1] = (int *)local_a8;
            apiStack_148[0] = &local_b4;
            iStack_14c = 0x427d7f;
            puVar5 = (undefined4 *)FUN_004365f0();
            local_d8[0] = 0xffffffff;
            local_d8[1] = *puVar5;
            local_d8[2] = 0;
            local_d8[3] = 0;
            local_d8[4] = 0;
            local_d8[5] = 0;
            local_d8[6] = 0;
            local_d8[7] = 0xffffffff;
            puVar5 = local_d8;
            ppiVar7 = apiStack_148;
            for (iStack_14c = 8; iStack_14c != 0; iStack_14c = iStack_14c + -1) {
              *ppiVar7 = (int *)*puVar5;
              puVar5 = puVar5 + 1;
              ppiVar7 = ppiVar7 + 1;
            }
            piStack_150 = &local_118;
            piStack_154 = (int *)0x427dcf;
            FUN_0041d3f0();
            piStack_150 = (int *)0x427dd4;
            FUN_00478740();
            local_130 = (double)CONCAT44(1,(undefined4)local_130);
            piStack_150 = (int *)local_dc;
            piStack_154 = (int *)0x427de8;
            FUN_0040a430();
            piStack_154 = &local_118;
            uStack_158 = 0x427df5;
            piStack_150 = (int *)extraout_ECX_00;
            FUN_0041d3f0();
            piStack_154 = (int *)0x427dfa;
            FUN_00478300();
            *(undefined4 *)(local_118 + 100) = 5;
            *(uint *)(local_118 + 0x60) = *(uint *)(local_118 + 0x60) | 0x4000;
            local_130 = (double)CONCAT44(local_118,0x427e25);
            FUN_00477cf0();
            local_130 = (double)CONCAT44(local_118,0x427e32);
            FUN_004772b0();
            if (DAT_0066b6d0 <= (uint)(DAT_0068bec4 - DAT_0068bec0 >> 2)) {
              DAT_0066b6e0 = 2;
              DAT_0068c0c8 = 1;
              local_130 = (double)CONCAT44(0x427e69,(undefined4)local_130);
              fVar9 = (float10)FUN_00401000();
              _DAT_0066b6d8 = (double)fVar9;
              local_130 = (double)CONCAT44(&local_f8,0x427e79);
              FUN_00477c00();
              if (local_f8 != DAT_0068a8f0) {
                puVar5 = (undefined4 *)(local_f8 + 0x28);
                puVar8 = local_88;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar8 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar8 = puVar8 + 1;
                }
                local_130 = (double)CONCAT44(local_a8,local_ac);
                local_138 = (double)CONCAT44(0x427eb1,(int *)local_138);
                puVar5 = (undefined4 *)FUN_004365f0();
                piStack_150 = (int *)*puVar5;
                local_e8 = 0;
                local_130 = (double)CONCAT44(&local_e8,(undefined4)local_130);
                uStack_e4 = 0;
                piStack_154 = (int *)0x427ed6;
                FUN_0040a430();
                puVar5 = local_88;
                puVar8 = auStack_16c;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar8 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar8 = puVar8 + 1;
                }
                FUN_00487600(0);
                local_130 = (double)CONCAT44(0x427f1f,(undefined4)local_130);
                local_ec = __ftol();
                _DAT_0066b6f8 = (double)local_ec * _DAT_0064a7e8;
                local_130 = _DAT_0066b6f8 * _DAT_0064a7f0;
                local_138 = 1.0142447268277811e-306;
                uVar6 = FUN_0040e1d0();
                local_138 = (double)CONCAT44(uVar6,local_48);
                local_140 = (double)CONCAT44(0x427f5a,(undefined4)local_140);
                FUN_0061c369();
                local_140 = (double)CONCAT44(local_48,0x427f67);
                FUN_0056a570();
              }
            }
            local_130 = (double)CONCAT44(&local_114,local_f4);
            local_114 = 0;
            uStack_110 = 0;
            local_10c = 0;
            uStack_108 = 0;
            local_104 = 0;
            uStack_100 = 0;
            local_138 = (double)CONCAT44(0x427fa9,(int *)local_138);
            cVar2 = FUN_00425c10();
            local_138._4_4_ = extraout_ECX_01;
          }
        }
      }
    }
  }
  return;
}


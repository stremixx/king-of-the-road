
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420fc0(void)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 **ppuVar9;
  float10 fVar10;
  undefined1 *apuStack_17c [3];
  double local_170;
  undefined8 local_168;
  undefined8 local_160;
  int *local_144;
  double local_140;
  double local_138;
  double local_12c;
  double local_124;
  double local_11c;
  int *local_114;
  double local_110;
  double local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  uint local_d8 [2];
  undefined4 local_d0;
  undefined4 uStack_cc;
  char *local_c8;
  char *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90 [8];
  double local_88;
  double local_80;
  double local_78 [3];
  undefined4 local_60 [8];
  undefined1 local_40 [24];
  undefined1 local_28 [36];
  
  if (DAT_0068c090 != '\0') {
    local_160 = (double)CONCAT44(&local_114,0x420fe7);
    FUN_00477c00();
    if (local_114 != DAT_0068a8f0) {
      local_160 = (double)CONCAT44(local_114,&local_12c);
      local_168 = (double)CONCAT44(0x42100e,(undefined4)local_168);
      FUN_0040b030();
      local_144 = (int *)*DAT_0068a8f0;
      if (local_144 != DAT_0068a8f0) {
        do {
          local_160 = (double)CONCAT44(local_144,0x421037);
          iVar3 = FUN_0040a950();
          if (iVar3 != 0) {
            local_160 = (double)CONCAT44(local_144,0x421050);
            iVar3 = FUN_0040a950();
            if (*(int *)(iVar3 + 0x54) == 8) {
              local_160 = (double)CONCAT44(local_144,0x42106d);
              iVar3 = FUN_0040a950();
              local_160._4_4_ = extraout_ECX;
              if (*(int *)(iVar3 + 0x4c) == -1) {
LAB_0042108d:
                local_168 = (double)CONCAT44(&local_144,0x42109d);
                FUN_0041d3f0();
                local_168 = (double)CONCAT44(0x4210a4,(undefined4)local_168);
                FUN_004042b0();
                local_160 = (double)CONCAT44(local_160._4_4_,local_78);
                local_168 = (double)CONCAT44(0x4210b1,(undefined4)local_168);
                pdVar4 = (double *)FUN_0040b030();
                local_160 = pdVar4[2] - local_11c;
                local_168 = pdVar4[1] - local_124;
                local_170 = *pdVar4 - local_12c;
                apuStack_17c[2] = (undefined1 *)0x4210df;
                FUN_00405ea0();
                if (_DAT_0064a690 <=
                    SQRT(local_e0 * local_e0 + local_e8 * local_e8 + local_f0 * local_f0))
                goto LAB_0042111c;
              }
              else {
                local_160 = (double)CONCAT44(*(int *)(iVar3 + 0x4c),0x42107d);
                iVar3 = FUN_004d89a0();
                local_160._4_4_ = extraout_ECX_00;
                if (iVar3 == 0) goto LAB_0042108d;
LAB_0042111c:
                local_160 = (double)CONCAT44(local_144,0x42112a);
                iVar3 = FUN_0040a950();
                if (*(int *)(iVar3 + 0x4c) != -1) {
                  local_160 = (double)CONCAT44(*(int *)(iVar3 + 0x4c),0x42113e);
                  iVar3 = FUN_004d89a0();
                  if (iVar3 != 0) {
                    local_168 = (double)CONCAT44(&local_144,0x42115e);
                    local_160._4_4_ = extraout_ECX_01;
                    FUN_0041d3f0();
                    local_168 = (double)CONCAT44(0x421165,(undefined4)local_168);
                    FUN_004042b0();
                    local_160 = (double)CONCAT44(local_160._4_4_,local_90);
                    local_168 = (double)CONCAT44(0x421172,(undefined4)local_168);
                    pdVar4 = (double *)FUN_0040b030();
                    local_160 = pdVar4[2] - local_11c;
                    local_168 = pdVar4[1] - local_124;
                    local_170 = *pdVar4 - local_12c;
                    apuStack_17c[2] = (undefined1 *)0x4211a0;
                    FUN_00405ea0();
                    if (SQRT(local_110 * local_110 +
                             (double)CONCAT44(uStack_fc,local_100) *
                             (double)CONCAT44(uStack_fc,local_100) + local_108 * local_108) <=
                        _DAT_0066b740) goto LAB_00421287;
                  }
                }
                local_160 = (double)CONCAT44(0x4211d8,(int **)local_160);
                fVar10 = (float10)FUN_00401000();
                local_140 = (double)fVar10;
                local_160._0_4_ = &local_144;
                local_168 = (double)CONCAT44(0x4211e9,(undefined4)local_168);
                local_160._4_4_ = extraout_ECX_02;
                FUN_0041d3f0();
                local_160 = (double)CONCAT44(local_160._4_4_,0x4211ee);
                iVar3 = FUN_0040a950();
                if (local_140 - *(double *)(iVar3 + 0x3b0) <= _DAT_0064a740) {
                  local_168 = (double)CONCAT44(&local_144,0x421218);
                  local_160._4_4_ = extraout_ECX_03;
                  FUN_0041d3f0();
                  local_168 = (double)CONCAT44(0x42121f,(undefined4)local_168);
                  FUN_004042b0();
                  local_160 = (double)CONCAT44(local_160._4_4_,&local_a8);
                  local_168 = (double)CONCAT44(0x42122c,(undefined4)local_168);
                  pdVar4 = (double *)FUN_0040b030();
                  local_138 = pdVar4[2] - local_11c;
                  if (SQRT((*pdVar4 - local_12c) * (*pdVar4 - local_12c) +
                           local_138 * local_138 + (pdVar4[1] - local_124) * (pdVar4[1] - local_124)
                          ) <= _DAT_0066b748) goto LAB_00421287;
                }
              }
              local_160 = (double)CONCAT44(local_144,0x42127c);
              iVar3 = FUN_0040a950();
              *(uint *)(iVar3 + 0x58) = *(uint *)(iVar3 + 0x58) | 0x20000;
            }
          }
LAB_00421287:
          local_144 = (int *)*local_144;
        } while (local_144 != DAT_0068a8f0);
      }
      if ((DAT_0068c098 != '\0') && (local_144 = (int *)*DAT_0068a8f0, local_144 != DAT_0068a8f0)) {
        do {
          local_160 = (double)CONCAT44(local_144,0x4212c4);
          iVar3 = FUN_0040a950();
          if (iVar3 != 0) {
            local_160 = (double)CONCAT44(local_144,0x4212d9);
            iVar3 = FUN_0040a950();
            if (*(int *)(iVar3 + 0x54) == 8) {
              local_160 = (double)CONCAT44(local_144,0x4212f2);
              iVar3 = FUN_0040a950();
              if (*(int *)(iVar3 + 0x4c) != -1) {
                local_160 = (double)CONCAT44(*(int *)(iVar3 + 0x4c),0x421302);
                iVar3 = FUN_004d89a0();
                if (iVar3 != 0) goto LAB_00421327;
              }
              local_160 = (double)CONCAT44(local_144,0x42131c);
              iVar3 = FUN_0040a950();
              *(uint *)(iVar3 + 0x58) = *(uint *)(iVar3 + 0x58) | 0x20000;
            }
          }
LAB_00421327:
          local_144 = (int *)*local_144;
        } while (local_144 != DAT_0068a8f0);
      }
LAB_0042133f:
      local_144 = (int *)*DAT_0068a8f0;
      if (local_144 != DAT_0068a8f0) {
        do {
          local_160 = (double)CONCAT44(local_144,0x421353);
          iVar3 = FUN_0040a950();
          if (iVar3 != 0) {
            local_160 = (double)CONCAT44(local_144,0x421368);
            iVar3 = FUN_0040a950();
            local_160._0_4_ = *(int ***)(iVar3 + 0x58);
            if (((uint)(int **)local_160 & 0x20000) != 0) goto LAB_00421388;
          }
          local_144 = (int *)*local_144;
          if (local_144 == DAT_0068a8f0) break;
        } while( true );
      }
      if (((DAT_0068c098 == '\0') && (*(int *)(DAT_0068bc08 + 0x20) < *(int *)(DAT_0068be88 + 0x20))
          ) && (local_114[0x19] != 5)) {
        local_160 = -NAN;
        iVar3 = FUN_004d89f0();
        if (iVar3 == 0) {
          DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
          DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
          (&DAT_0068a928)[DAT_0068aa04] =
               (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
          if ((*(byte *)(&DAT_0068a928 + DAT_0068aa04) & 1) == 0) {
            return;
          }
        }
        local_b4 = 0xffffffff;
        local_160 = (double)CONCAT44(local_d8,(int **)local_160);
        local_b0 = 0xffffffff;
        local_d8[0] = 0;
        local_d0 = 0;
        uStack_cc = 0;
        local_c8 = s_UNDEFINED_MODULE_0066c638;
        local_c4 = s_UNDEFINED_ROOM_0066c628;
        local_c0 = 0;
        local_bc = 0;
        piVar6 = local_114 + 10;
        ppuVar9 = apuStack_17c;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppuVar9 = (undefined1 *)*piVar6;
          piVar6 = piVar6 + 1;
          ppuVar9 = ppuVar9 + 1;
        }
        FUN_00438e50();
        uVar2 = local_b4;
        local_138 = (double)((ulonglong)local_138 & 0xffffffff00000000);
        do {
          DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
          uStack_f4 = 0;
          local_100 = 0;
          uStack_fc = 0;
          DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
          (&DAT_0068a928)[DAT_0068aa04] =
               (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
          local_f8 = (uint)(&DAT_0068a928)[DAT_0068aa04] % 0x9965e;
          local_160 = (double)CONCAT44(&local_a8,uVar2);
          fVar10 = (float10)fcos((float10)local_f8 * (float10)_DAT_0064a738);
          local_78[0] = (double)fVar10;
          fVar10 = (float10)fsin((float10)local_f8 * (float10)_DAT_0064a738);
          local_110 = (double)((float10)local_78[0] * (float10)_DAT_0066b738);
          fVar10 = fVar10 * (float10)_DAT_0066b738;
          local_f0 = local_110 + local_110;
          local_e0 = 0.0;
          local_a8 = local_f0 + local_12c;
          local_a0 = (double)(fVar10 + fVar10 + (float10)local_124);
          local_98 = local_11c + 0.0;
          local_168 = (double)CONCAT44(local_28,0x4215d9);
          puVar5 = (undefined4 *)FUN_004366b0();
          puVar7 = puVar5;
          puVar8 = local_60;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          local_160 = (double)CONCAT44(local_d8,(int **)local_160);
          ppuVar9 = apuStack_17c;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppuVar9 = (undefined1 *)*puVar5;
            puVar5 = puVar5 + 1;
            ppuVar9 = ppuVar9 + 1;
          }
          FUN_00438e50();
          if ((local_d8[0] & 0x50) == 0) {
            apuStack_17c[0] = local_40;
            puVar5 = local_60;
            ppuVar9 = apuStack_17c + 1;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *ppuVar9 = (undefined1 *)*puVar5;
              puVar5 = puVar5 + 1;
              ppuVar9 = ppuVar9 + 1;
            }
            pdVar4 = (double *)FUN_00435cd0();
            local_88 = pdVar4[1];
            local_80 = pdVar4[2];
            local_140 = local_80 - local_11c;
            if (_DAT_0066b738 <=
                SQRT(local_140 * local_140 +
                     (local_88 - local_124) * (local_88 - local_124) +
                     (*pdVar4 - local_12c) * (*pdVar4 - local_12c))) {
              dVar1 = SQRT((double)CONCAT44(uStack_cc,local_d0) * _DAT_0064a730);
              if (local_b8 == 2) {
                dVar1 = dVar1 * _DAT_0064a6d0;
              }
              else if (local_b8 == 3) {
                dVar1 = dVar1 * _DAT_0064a728;
              }
              DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
              DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
              (&DAT_0068a928)[DAT_0068aa04] =
                   (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
              local_140 = (double)(ulonglong)((uint)(&DAT_0068a928)[DAT_0068aa04] % 1000);
              if (dVar1 * _DAT_0064a720 <= (double)(longlong)local_140) {
                return;
              }
              puVar5 = local_60;
              ppuVar9 = apuStack_17c + 1;
              for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                *ppuVar9 = (undefined1 *)*puVar5;
                puVar5 = puVar5 + 1;
                ppuVar9 = ppuVar9 + 1;
              }
              apuStack_17c[0] = (undefined1 *)0x421770;
              FUN_00420da0();
              return;
            }
          }
          iVar3 = local_138._0_4_ + 1;
          local_138 = (double)CONCAT44(local_138._4_4_,iVar3);
          if (7 < iVar3) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_00421388:
  local_168 = (double)CONCAT44(&local_144,0x421398);
  local_160._4_4_ = (uint)(int **)local_160;
  FUN_0041d3f0();
  local_168 = (double)CONCAT44(0x42139f,(undefined4)local_168);
  FUN_004042b0();
  local_160 = (double)CONCAT44(local_160._4_4_,0x4213a4);
  FUN_00446670();
  goto LAB_0042133f;
}


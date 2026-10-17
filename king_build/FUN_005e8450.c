
uint * FUN_005e8450(undefined4 param_1)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  short *psVar12;
  uint uVar13;
  int iVar14;
  int *unaff_EDI;
  uint uVar15;
  int *piVar16;
  int *local_124;
  undefined4 *local_120;
  char *local_11c;
  char *local_118;
  short *local_114;
  short *local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_fc;
  int local_f8 [24];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 *puStack_58;
  
  puVar4 = (uint *)FUN_00631d33(0x28);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[7] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[8] = 0xffffffff;
    puVar4[4] = 0;
    puVar4[9] = 0;
  }
  puVar4[1] = 0;
  puVar4[2] = 0xff;
  puVar5 = (undefined4 *)FUN_005e6da0(param_1,0,0);
  puVar4[6] = (uint)(*(ushort *)(puVar5 + 5) >> 4);
  uVar3 = *(ushort *)((int)puVar5 + 0x16);
  puVar4[8] = 0xffffffff;
  puVar4[5] = (uVar3 >> 4) - 1;
  local_120 = puVar5;
  uVar6 = FUN_00631d33(0x100);
  puVar4[3] = uVar6;
  uVar6 = FUN_00631d33(0x100);
  puVar4[4] = uVar6;
  local_fc = ((int)((puVar4[6] - 1) + ((int)(puVar4[6] - 1) >> 0x1f & 7U)) >> 3) + 1;
  local_104 = local_fc * puVar4[5];
  uVar6 = FUN_00631d33(local_104 * 0x100);
  puVar4[7] = uVar6;
  local_124 = (int *)0x0;
  local_10c = 0;
  do {
    uVar6 = (int)local_124 >> 0x1f;
    if (*(short *)(puVar5 + 6) == 1) {
      uVar15 = puVar4[6];
      uVar13 = (uint)local_124 & 0x8000000f;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
      }
      local_11c = (char *)((puVar4[5] + 1) * ((int)((int)local_124 + (uVar6 & 0xf)) >> 4) *
                           (uint)*(ushort *)(puVar5 + 5) + uVar13 * uVar15 + puVar5[2]);
      pcVar7 = (char *)0x0;
      pcVar8 = pcVar7;
      if (0 < (int)uVar15) {
        do {
          pcVar8 = pcVar7;
          if (pcVar7[(int)local_11c] != '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar7;
        } while ((int)pcVar7 < (int)uVar15);
      }
      for (; (puVar5 = local_120, (int)pcVar7 < (int)uVar15 && (pcVar7[(int)local_11c] != '\0'));
          pcVar7 = pcVar7 + 1) {
      }
    }
    else if (*(short *)(puVar5 + 6) == 2) {
      uVar15 = puVar4[6];
      uVar13 = (uint)local_124 & 0x8000000f;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
      }
      local_114 = (short *)(puVar5[2] +
                           ((puVar4[5] + 1) * ((int)((int)local_124 + (uVar6 & 0xf)) >> 4) *
                            (uint)*(ushort *)(puVar5 + 5) + uVar13 * uVar15) * 2);
      pcVar8 = (char *)0x0;
      psVar12 = local_114;
      if (0 < (int)uVar15) {
        do {
          if (*psVar12 != 0) break;
          pcVar8 = pcVar8 + 1;
          psVar12 = psVar12 + 1;
        } while ((int)pcVar8 < (int)uVar15);
      }
      pcVar7 = pcVar8;
      puVar5 = local_120;
      if ((int)pcVar8 < (int)uVar15) {
        psVar12 = local_114 + (int)pcVar8;
        do {
          if (*psVar12 == 0) break;
          pcVar7 = pcVar7 + 1;
          psVar12 = psVar12 + 1;
        } while ((int)pcVar7 < (int)uVar15);
      }
    }
    else {
      uVar15 = puVar4[6];
      uVar13 = (uint)local_124 & 0x8000000f;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
      }
      local_11c = (char *)(((puVar4[5] + 1) * ((int)((int)local_124 + (uVar6 & 0xf)) >> 4) *
                            (uint)*(ushort *)(puVar5 + 5) + uVar13 * uVar15) * 3 + puVar5[2]);
      pcVar8 = (char *)0x0;
      pcVar7 = local_11c;
      if (0 < (int)uVar15) {
        do {
          if (*pcVar7 != '\0') break;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 3;
        } while ((int)pcVar8 < (int)uVar15);
      }
      pcVar7 = pcVar8;
      local_118 = pcVar8;
      if ((int)pcVar8 < (int)uVar15) {
        pcVar11 = local_11c + (int)pcVar8 * 3;
        do {
          if (*pcVar11 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar11 = pcVar11 + 3;
        } while ((int)pcVar7 < (int)uVar15);
      }
    }
    *(char *)(puVar4[4] + (int)local_124) = (char)pcVar8;
    if (pcVar7 != (char *)0x0) {
      pcVar7 = pcVar7 + 1;
    }
    local_108 = 0;
    *(char *)(puVar4[3] + (int)local_124) = (char)pcVar7;
    iVar14 = local_10c + puVar4[7];
    do {
      if (*(short *)(puVar5 + 6) == 1) {
        local_11c = local_11c + *(ushort *)(puVar5 + 5);
      }
      else if (*(short *)(puVar5 + 6) == 2) {
        local_114 = local_114 + *(ushort *)(puVar5 + 5);
      }
      else {
        local_11c = local_11c + (uint)*(ushort *)(puVar5 + 5) * 3;
      }
      uVar6 = 0;
      if (0 < (int)puVar4[6]) {
        local_118 = local_11c;
        local_110 = local_114;
        do {
          iVar9 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3;
          uVar15 = uVar6 & 0x80000007;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
          }
          if (uVar15 == 0) {
            *(undefined1 *)(iVar9 + iVar14) = 0;
          }
          if (*(short *)(local_120 + 6) == 1) {
            cVar2 = local_11c[uVar6];
joined_r0x005e8756:
            if (cVar2 != '\0') {
LAB_005e8758:
              pbVar1 = (byte *)(iVar9 + iVar14);
              *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)uVar15 & 0x1f));
            }
          }
          else {
            if (*(short *)(local_120 + 6) != 2) {
              cVar2 = *local_118;
              goto joined_r0x005e8756;
            }
            if (*local_110 != 0) goto LAB_005e8758;
          }
          uVar6 = uVar6 + 1;
          local_110 = local_110 + 1;
          local_118 = local_118 + 3;
          puVar5 = local_120;
        } while ((int)uVar6 < (int)puVar4[6]);
      }
      local_108 = local_108 + 1;
      iVar14 = iVar14 + local_fc;
    } while (local_108 < (int)puVar4[5]);
    local_124 = (int *)((int)local_124 + 1);
    local_10c = local_10c + local_104;
    if (0xff < (int)local_124) {
      *puVar4 = *puVar4 | 1;
      if (DAT_0071f868 != 0) {
        iVar14 = FUN_005d7a00();
        puVar5 = local_120;
        local_f8[2] = (int)*(ushort *)((int)local_120 + 0x16);
        piVar16 = local_f8;
        for (iVar9 = 0x1f; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar16 = 0;
          piVar16 = piVar16 + 1;
        }
        local_f8[3] = (int)*(ushort *)(local_120 + 5);
        piVar16 = local_f8;
        local_f8[0] = 0x7c;
        local_f8[1] = 7;
        local_90 = 0x800;
        iVar9 = (**(code **)(*DAT_0071f86c + 0x18))(DAT_0071f86c,piVar16,&local_124,0);
        if (iVar9 == 0) {
          if (unaff_EDI == (int *)0x0) {
            FUN_005d2520(s_can_not_create_mask_surface__sf__0068243c,0);
          }
          local_114 = (short *)0x0;
          local_110 = (short *)0x0;
          (**(code **)(*unaff_EDI + 0x74))(unaff_EDI,8,&local_114);
          uStack_98 = 0x7c;
          uStack_94 = 0x7ff9ee;
          iVar9 = (**(code **)(*piVar16 + 100))(piVar16,0,&uStack_98,1,0);
          if ((iVar9 == 0) && (puStack_58 != (undefined4 *)0x0)) {
            uVar15 = (uint)*(ushort *)((int)puVar5 + 0x16) * (uint)*(ushort *)(puVar5 + 5) * iVar14;
            puVar5 = (undefined4 *)puVar5[2];
            for (uVar6 = uVar15 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puStack_58 = *puVar5;
              puVar5 = puVar5 + 1;
              puStack_58 = puStack_58 + 1;
            }
            for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined1 *)puStack_58 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puStack_58 = (undefined4 *)((int)puStack_58 + 1);
            }
            (**(code **)(*local_124 + 0x80))(local_124,0);
            puVar4[9] = (uint)local_124;
            puVar5 = local_120;
          }
          else {
            FUN_005d2250(s_can_not_Lock_Font_00682428,0);
            puVar4[9] = (uint)local_124;
            puVar5 = local_120;
          }
        }
        else {
          uVar10 = FUN_005d42c0(iVar9,s_can_not_create_mask_surface__00682408,0);
          FUN_005d2520(uVar10);
          puVar5 = local_120;
        }
      }
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      return puVar4;
    }
  } while( true );
}


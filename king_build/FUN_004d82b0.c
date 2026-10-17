
undefined4
FUN_004d82b0(int param_1,byte *param_2,char *param_3,byte *param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined3 uVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  byte *pbVar17;
  int *piVar18;
  bool bVar19;
  undefined4 in_stack_00000050;
  int aiStack_2b8 [5];
  undefined4 uStack_2a4;
  char *pcStack_2a0;
  undefined1 *puStack_29c;
  int iStack_298;
  int iStack_294;
  byte *pbStack_290;
  byte *pbStack_28c;
  int local_26c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644fce;
  local_c = ExceptionList;
  pcVar13 = s_Traffic_Light_00671bd0;
  pbVar3 = param_2;
  do {
    bVar2 = *pbVar3;
    bVar19 = bVar2 < (byte)*pcVar13;
    if (bVar2 != *pcVar13) {
LAB_004d8305:
      iVar4 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_004d830a;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar19 = bVar2 < (byte)pcVar13[1];
    if (bVar2 != pcVar13[1]) goto LAB_004d8305;
    pbVar3 = pbVar3 + 2;
    pcVar13 = pcVar13 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_004d830a:
  if (iVar4 == 0) {
    if ((DAT_006d0fd8 != 0) && (*(int *)(DAT_006d0fd8 + 0x660) == 0)) {
      pbStack_28c = (byte *)0x4d8334;
      ExceptionList = &local_c;
      iVar4 = FUN_00631d33();
      local_4 = 0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        pbStack_28c = (byte *)param_1;
        pbStack_290 = (byte *)0x4d8361;
        uVar5 = FUN_0053db50();
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(DAT_006d0fd8 + 0x660) = uVar5;
      pbStack_28c = (byte *)0x4d8393;
      FUN_005d2c20();
      if (param_1 == DAT_00695c00) {
        *(undefined4 *)(*(int *)(DAT_006d0fd8 + 0x660) + 0x50) = 1;
      }
      FUN_0053dbc0();
      ExceptionList = local_c;
      return *(undefined4 *)(DAT_006d0fd8 + 0x660);
    }
  }
  else {
    pbStack_28c = (byte *)0x4d83e9;
    ExceptionList = &local_c;
    FUN_005e44d0();
    pbStack_28c = (byte *)0x4d83f8;
    iVar4 = FUN_005e4980();
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x1c) != 0) {
        pbStack_28c = (byte *)0x4d840d;
        FUN_005e3fe0();
      }
      pbStack_290 = (byte *)0x0;
      iStack_294 = 0x4d8419;
      pbStack_28c = (byte *)iVar4;
      FUN_005e4ad0();
      pbStack_28c = (byte *)0x4d8421;
      FUN_005e4820();
    }
    pbStack_28c = (byte *)param_7;
    pbStack_290 = (byte *)0x4d8431;
    FUN_005e4740();
    pbStack_28c = (byte *)0x4d8439;
    puVar6 = (undefined4 *)FUN_005e4980();
    if (puVar6 != (undefined4 *)0x0) {
      *(byte *)(puVar6 + 2) = *(byte *)(puVar6 + 2) | 1;
      if (((*(byte *)(puVar6[3] + 0xfac) & 2) != 0) &&
         (*(int *)(*(int *)(DAT_00695c00 + 0x1e4) + 0x14) != 0)) {
        iVar4 = *(int *)(*(int *)(DAT_00695c00 + 0x1e4) + 0x10);
        while (iVar4 == 0) {
          pbStack_28c = (byte *)0x4d847f;
          Sleep(10);
          iVar4 = *(int *)(*(int *)(DAT_00695c00 + 0x1e4) + 0x10);
        }
        FUN_005e3ac0();
      }
      iVar4 = puVar6[1];
      if (iVar4 / 1000 == 100) {
        local_26c = 0;
        if (*(int *)(DAT_006cdbcc + 0x514) < 2) {
          local_26c = 2;
        }
        else if (param_7 == DAT_00671984) {
          local_26c = 1;
          *(byte *)(puVar6 + 2) = *(byte *)(puVar6 + 2) & 0xfe;
          if (*(int *)(puVar6[3] + 0xfac) == 2) {
            iVar4 = *(int *)(param_1 + 0x1e8);
            puVar14 = (undefined4 *)&stack0x00000020;
            puVar15 = (undefined4 *)(param_1 + 0x28c);
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            uVar9 = 0xffffffff;
            pcVar13 = param_3;
            do {
              pcVar16 = pcVar13;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar16 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar16;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar16 + -uVar9;
            pcVar16 = (char *)(iVar4 + 0x2c);
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar16 = pcVar16 + 4;
            }
            pbStack_28c = param_2;
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar16 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar9 = 0xffffffff;
            pbVar3 = param_2;
            do {
              pbVar17 = pbVar3;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pbVar17 = pbVar3 + 1;
              bVar2 = *pbVar3;
              pbVar3 = pbVar17;
            } while (bVar2 != 0);
            uVar9 = ~uVar9;
            pbVar3 = pbVar17 + -uVar9;
            pbVar17 = (byte *)(*(int *)(param_1 + 0x1e8) + 0xc);
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pbVar17 = *(undefined4 *)pbVar3;
              pbVar3 = pbVar3 + 4;
              pbVar17 = pbVar17 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pbVar17 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              pbVar17 = pbVar17 + 1;
            }
            pbStack_290 = (byte *)0x4d8589;
            FUN_005d8d70();
            DAT_00674cb0 = *(undefined4 *)(DAT_00695c00 + 0xbb0);
          }
        }
        iVar4 = 0;
        if (0 < DAT_006cd28c) {
          pbVar12 = &DAT_006970ee;
          pbVar3 = param_4;
          pbVar17 = pbVar12;
LAB_004d85be:
          do {
            bVar2 = *pbVar3;
            bVar19 = bVar2 < *pbVar12;
            if (bVar2 == *pbVar12) {
              if (bVar2 != 0) {
                bVar2 = pbVar3[1];
                bVar19 = bVar2 < pbVar12[1];
                if (bVar2 != pbVar12[1]) goto LAB_004d85e2;
                pbVar12 = pbVar12 + 2;
                pbVar3 = pbVar3 + 2;
                if (bVar2 != 0) goto LAB_004d85be;
              }
              iVar8 = 0;
            }
            else {
LAB_004d85e2:
              iVar8 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            }
            if (iVar8 == 0) break;
            iVar4 = iVar4 + 1;
            pbVar12 = pbVar17 + 0x970;
            pbVar3 = param_4;
            pbVar17 = pbVar12;
          } while (iVar4 < DAT_006cd28c);
        }
        pbStack_28c = (byte *)in_stack_00000050;
        pbStack_290 = (byte *)0x0;
        iStack_294 = 0;
        iStack_298 = in_stack_00000050;
        puStack_29c = (undefined1 *)0x4d8618;
        FUN_0041ec60();
        puStack_29c = &stack0x00000020;
        pcStack_2a0 = param_3;
        uStack_2a4 = 0;
        aiStack_2b8[3] = 0x4d862d;
        aiStack_2b8[4] = iVar4;
        FUN_004cd6a0();
        pbStack_28c = (byte *)0x12c;
        pbStack_290 = param_2;
        iStack_294 = param_7;
        iStack_298 = 0x4d8652;
        FUN_005e48c0();
        if ((&DAT_006d1428)[iVar4 * 0x174] == 0) {
          pbStack_28c = (byte *)s_Not_found_cluster_for_truck_00671bb4;
          pbStack_290 = (byte *)0x4d8681;
          FUN_005d2520();
        }
        else {
          puVar6[4] = *(undefined4 *)((&DAT_006d1428)[iVar4 * 0x174] + 0x10);
        }
        pbStack_28c = (byte *)0x4d8690;
        FUN_005e3f10();
        if ((1 < *(int *)(DAT_006cdbcc + 0x514)) && (local_26c == 1)) {
          if (puVar6[7] == 0) {
            iVar4 = FUN_00541090();
            if (iVar4 != 0) {
              pbStack_28c = (byte *)0x4d86dd;
              FUN_004d8a40();
            }
            pbStack_28c = (byte *)0x4d86e9;
            FUN_004d8a80();
          }
          iVar4 = puVar6[7];
          if ((iVar4 != 0) && (DAT_006952a0 = iVar4, DAT_006d0fd8 != 0)) {
            pbStack_28c = (byte *)0x4d8711;
            FUN_005313f0();
            pbStack_28c = (byte *)0x4d871c;
            FUN_00596c60();
          }
        }
      }
      else {
        if (iVar4 / 1000 == 0x65) {
          iVar8 = 0;
          if (0 < DAT_006cd28c) {
            pbVar12 = &DAT_006970ee;
            pbVar3 = param_4;
            pbVar17 = pbVar12;
LAB_004d8744:
            do {
              bVar2 = *pbVar3;
              uVar11 = (undefined3)((uint)iVar4 >> 8);
              iVar4 = CONCAT31(uVar11,bVar2);
              bVar19 = bVar2 < *pbVar12;
              if (bVar2 == *pbVar12) {
                if (bVar2 != 0) {
                  bVar2 = pbVar3[1];
                  iVar4 = CONCAT31(uVar11,bVar2);
                  bVar19 = bVar2 < pbVar12[1];
                  if (bVar2 != pbVar12[1]) goto LAB_004d8768;
                  pbVar12 = pbVar12 + 2;
                  pbVar3 = pbVar3 + 2;
                  if (bVar2 != 0) goto LAB_004d8744;
                }
                iVar7 = 0;
              }
              else {
LAB_004d8768:
                iVar7 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              }
              if (iVar7 == 0) break;
              iVar8 = iVar8 + 1;
              pbVar12 = pbVar17 + 0x970;
              pbVar3 = param_4;
              pbVar17 = pbVar12;
            } while (iVar8 < DAT_006cd28c);
          }
          pbStack_28c = (byte *)in_stack_00000050;
          pbStack_290 = (byte *)0x0;
          iStack_294 = 0;
          puStack_29c = (undefined1 *)0x4d8796;
          iStack_298 = iVar4;
          FUN_0041ec60();
          puStack_29c = &stack0x00000020;
          pcStack_2a0 = param_3;
          uStack_2a4 = 0;
          aiStack_2b8[3] = 0x4d87b5;
          aiStack_2b8[4] = iVar8;
          FUN_004cd6a0();
          pbStack_28c = (byte *)0x12c;
          pbStack_290 = param_2;
          iStack_294 = param_7;
          iStack_298 = 0x4d87dd;
          FUN_005e48c0();
          if ((&DAT_006d1428)[iVar8 * 0x174] == 0) {
            pbStack_28c = (byte *)s_Not_found_cluster_for_semitraile_00671b90;
            pbStack_290 = (byte *)0x4d8810;
            FUN_005d2520();
          }
          else {
            puVar6[4] = *(undefined4 *)((&DAT_006d1428)[iVar8 * 0x174] + 0x10);
          }
        }
        else if (iVar4 / 100000 == 2) {
          puVar14 = (undefined4 *)&stack0x00000020;
          piVar18 = aiStack_2b8;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar18 = *puVar14;
            puVar14 = puVar14 + 1;
            piVar18 = piVar18 + 1;
          }
          FUN_004df4a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
          iVar4 = FUN_0052e2b0(((int)puVar6[1] / 1000) % 100);
          if ((&DAT_006cdcf8)[iVar4 * 0xb] != 0) {
            puVar6[4] = *(undefined4 *)((&DAT_006cdcf8)[iVar4 * 0xb] + 0x10);
          }
          if (1 < *(int *)(DAT_006cdbcc + 0x514)) {
            *puVar6 = 2;
          }
        }
        else {
          if (iVar4 / 100000 != 3) {
            ExceptionList = local_c;
            return 0;
          }
          puVar14 = (undefined4 *)&stack0x00000020;
          piVar18 = aiStack_2b8;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar18 = *puVar14;
            puVar14 = puVar14 + 1;
            piVar18 = piVar18 + 1;
          }
          FUN_004df4a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
          if (1 < *(int *)(DAT_006cdbcc + 0x514)) {
            *puVar6 = 2;
          }
        }
        pbStack_28c = (byte *)0x4d8964;
        FUN_005e3f10();
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


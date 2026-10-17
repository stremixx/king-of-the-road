
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004d7610(char ****param_1,int param_2,byte *param_3)

{
  char cVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  char ****ppppcVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char ***pppcVar11;
  char *pcVar12;
  char ****ppppcVar13;
  char **ppcVar14;
  char ***pppcVar15;
  char ***pppcVar16;
  undefined1 **ppuVar17;
  undefined1 *puStack_2fc;
  int iStack_2f8;
  char *pcStack_2f4;
  char ****ppppcStack_2f0;
  char *pcStack_2ec;
  char ****ppppcStack_2e8;
  char ****ppppcStack_2e4;
  char ****local_2e0;
  char ****local_2dc;
  char ****local_2c8;
  char ****local_2c4;
  char ****local_2c0;
  int local_2bc;
  int local_2b8;
  char ***local_2b4 [4];
  char ****local_2a4;
  char *local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  char ***local_284 [2];
  undefined4 local_27c;
  undefined4 local_278;
  char ****local_274;
  char *local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_254 [48];
  char ***local_224 [2];
  int local_21c;
  int local_218;
  int local_214;
  char ****local_200;
  undefined1 local_164 [48];
  char ***local_134 [76];
  
  if ((DAT_006951d0 & 1) == 0) {
    DAT_006951d0 = DAT_006951d0 | 1;
    local_2dc = (char ****)&DAT_004d82a0;
    DAT_006951d4 = (char ****)0xffffffff;
    local_2e0 = (char ****)0x4d764b;
    FUN_0061c439();
  }
  if ((DAT_006951d0 & 2) == 0) {
    local_2dc = (char ****)&DAT_004d8290;
    DAT_006951d0 = DAT_006951d0 | 2;
    DAT_00695228 = (char ****)0xffffffff;
    local_2e0 = (char ****)0x4d7677;
    FUN_0061c439();
  }
  if ((DAT_006951d0 & 4) == 0) {
    local_2dc = (char ****)&DAT_004d8280;
    DAT_006951d0 = DAT_006951d0 | 4;
    DAT_00695280 = (char ****)0xffffffff;
    local_2e0 = (char ****)0x4d769e;
    FUN_0061c439();
  }
  if ((DAT_00695290 != 0) && (DAT_006951d4 == (char ****)0xffffffff)) {
    local_2e0 = (char ****)&local_2c8;
    local_2dc = (char ****)s_check_point1_0066c168;
    ppppcStack_2e4 = (char ****)0x4d76c3;
    piVar3 = (int *)FUN_004365f0();
    DAT_006951d4 = (char ****)*piVar3;
    ppppcStack_2e8 = (char ****)&local_2bc;
    ppppcStack_2e4 = (char ****)s_check_point3_0066c148;
    pcStack_2ec = (char *)0x4d76da;
    piVar3 = (int *)FUN_004365f0();
    DAT_00695228 = (char ****)*piVar3;
    ppppcStack_2f0 = (char ****)&local_2c8;
    pcStack_2ec = s_check_point2_0066c158;
    pcStack_2f4 = (char *)0x4d76f0;
    puVar4 = (undefined4 *)FUN_004365f0();
    DAT_00695280 = (char ****)*puVar4;
  }
  if ((DAT_0069528c != 0) && (DAT_006951d4 == (char ****)0xffffffff)) {
    local_2e0 = (char ****)&local_2c8;
    local_2dc = (char ****)s_____anode_117_00671b80;
    ppppcStack_2e4 = (char ****)0x4d771a;
    piVar3 = (int *)FUN_004365f0();
    DAT_006951d4 = (char ****)*piVar3;
    ppppcStack_2e8 = (char ****)&local_2bc;
    ppppcStack_2e4 = (char ****)s_____anode_101_00671b70;
    pcStack_2ec = (char *)0x4d7731;
    piVar3 = (int *)FUN_004365f0();
    DAT_00695228 = (char ****)*piVar3;
  }
  local_2dc = local_224;
  local_2e0 = DAT_006cdbcc;
  pppcVar16 = DAT_006cdbcc[0x153];
  ppppcStack_2e4 = (char ****)&param_1;
  ppppcStack_2e8 = (char ****)0x4d775b;
  FUN_0041d3f0();
  ppppcStack_2e4 = (char ****)0x4d7760;
  FUN_0043fd20();
  pbVar2 = param_3;
  if (param_2 != 1) {
    if (param_2 == 5) {
      local_2dc = local_200;
      local_2e0 = (char ****)0x4d7bd8;
      local_2e0 = (char ****)FUN_005e4980();
      if ((local_2e0 != (char ****)0x0) && (local_21c != 1)) {
        ppppcStack_2e4 = (char ****)&param_1;
        local_290 = 0xffffffff;
        local_28c = 0xffffffff;
        local_2dc = local_2b4;
        local_2b4[0] = (char ***)0x0;
        local_2b4[2] = (char ***)0x0;
        local_2b4[3] = (char ***)0x0;
        local_2a4 = (char ****)s_UNDEFINED_MODULE_0066c638;
        local_2a0 = s_UNDEFINED_ROOM_0066c628;
        local_29c = 0;
        local_298 = 0;
        ppppcStack_2e8 = (char ****)0x4d7c44;
        FUN_0041d3f0();
        ppppcStack_2e4 = (char ****)local_254;
        ppppcStack_2e8 = (char ****)0x4d7c51;
        FUN_004d4340();
        pcStack_2ec = local_254;
        ppppcStack_2e8 = (char ****)0x0;
        ppppcStack_2f0 = (char ****)local_2a0;
        iStack_2f8 = 0x4d7c66;
        pcStack_2f4 = (char *)local_2e0;
        FUN_004d7590();
        local_2dc = (char ****)0x1;
        ppppcStack_2e4 = local_2a4;
        ppppcStack_2e8 = (char ****)0x4d7c78;
        iVar7 = FUN_005e4ad0();
        if (iVar7 == -1) {
          local_2dc = local_2a4;
          local_2e0 = (char ****)s_can_t_attach_to_module_00671b14;
          ppppcStack_2e4 = (char ****)0x4d7c8c;
          FUN_005d2520();
        }
        if ((DAT_00695288 != 0) && (param_1 == DAT_0069522c)) {
          local_2e0 = local_284;
          local_2dc = param_1;
          ppppcStack_2e4 = (char ****)0x4d7cbb;
          puVar4 = (undefined4 *)FUN_00437600();
          puStack_2fc = local_164;
          piVar3 = &iStack_2f8;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            piVar3 = piVar3 + 1;
          }
          puVar4 = (undefined4 *)FUN_0043a860();
          ppcVar14 = pppcVar16[0x7a];
          pppcVar11 = pppcVar16 + 0xa3;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pppcVar11 = (char **)*puVar4;
            puVar4 = puVar4 + 1;
            pppcVar11 = pppcVar11 + 1;
          }
          uVar5 = 0xffffffff;
          do {
            pcVar10 = local_2a0;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar10 = local_2a0 + 1;
            cVar1 = *local_2a0;
            local_2a0 = pcVar10;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar10 = pcVar10 + -uVar5;
          ppcVar14 = ppcVar14 + 0xb;
          for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *ppcVar14 = *(char **)pcVar10;
            pcVar10 = pcVar10 + 4;
            ppcVar14 = ppcVar14 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)ppcVar14 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            ppcVar14 = (char **)((int)ppcVar14 + 1);
          }
          uVar5 = 0xffffffff;
          do {
            ppppcVar6 = local_2a4;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            ppppcVar6 = (char ****)((int)local_2a4 + 1);
            cVar1 = *(char *)local_2a4;
            local_2a4 = ppppcVar6;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          puVar4 = (undefined4 *)((int)ppppcVar6 - uVar5);
          ppcVar14 = pppcVar16[0x7a] + 3;
          for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *ppcVar14 = (char *)*puVar4;
            puVar4 = puVar4 + 1;
            ppcVar14 = ppcVar14 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)ppcVar14 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            ppcVar14 = (char **)((int)ppcVar14 + 1);
          }
          return 0;
        }
      }
    }
    else if (param_2 == 4) {
      local_2dc = local_200;
      local_2e0 = (char ****)0x4d7d5d;
      iVar7 = FUN_005e4980();
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1c) == 0)) {
        local_2dc = param_1;
        local_2e0 = (char ****)local_254;
        ppppcStack_2e4 = (char ****)0x4d7d85;
        FUN_004d4480();
        ppppcStack_2e8 = (char ****)local_254;
        ppppcStack_2e4 = (char ****)0x0;
        ppppcStack_2f0 = (char ****)0x4d7d94;
        pcStack_2ec = (char *)iVar7;
        FUN_004d75e0();
        return 0;
      }
    }
    else {
      if (param_2 == 9) {
        if (DAT_00695290 != 0) {
          local_2dc = DAT_00695280;
          local_2e0 = DAT_006951d4;
          ppppcStack_2e8 = (char ****)&param_1;
          pcStack_2ec = (char *)0x4d7dca;
          FUN_0041d3f0();
          ppppcStack_2e8 = (char ****)0x4d7dcf;
          FUN_00487390();
          ppppcVar6 = DAT_00695228;
          DAT_00695228 = DAT_006951d4;
          DAT_006951d4 = DAT_00695280;
          DAT_00695280 = ppppcVar6;
          return 0;
        }
        if (DAT_0069528c == 0) {
          return 0xffffffff;
        }
        if (local_21c == 1) {
          return 0xffffffff;
        }
        local_2dc = DAT_00695228;
        local_2e0 = DAT_006951d4;
        ppppcStack_2e4 = DAT_006951d4;
        ppppcStack_2e8 = (char ****)&param_1;
        pcStack_2ec = (char *)0x4d7e2f;
        FUN_0041d3f0();
        ppppcStack_2e8 = (char ****)0x4d7e34;
        FUN_00487390();
      }
      else {
        if (param_2 != 10) {
          if (param_2 == 0xb) {
            if (param_3 != (byte *)0x0) {
              local_2dc = (char ****)&local_2c8;
              local_2e0 = (char ****)0x4d7f03;
              piVar3 = (int *)FUN_00568670();
              if (param_1 == (char ****)*piVar3) {
                if ((*pbVar2 & 1) == 0) {
                  if (DAT_006cdbcc[0x149] == (char ***)0x0) {
                    local_2e0 = (char ****)&local_2dc;
                    local_2dc = DAT_006cdbcc;
                    ppppcStack_2e4 = (char ****)0x4d7f78;
                    FUN_00568670();
                    local_2e0 = (char ****)0x4d7f80;
                    uVar5 = FUN_0043f700();
                    if ((uVar5 & 0x4000) == 0) {
                      local_2dc = (char ****)0x4d7f90;
                      DAT_006f23e0 = __ftol();
                      local_2dc = (char ****)0x4d7f9d;
                      DAT_006f23e4 = __ftol();
                      local_2dc = (char ****)0x4d7fb6;
                      local_2dc = (char ****)__ftol();
                      local_2e0 = (char ****)0x0;
                      ppppcStack_2e4 = (char ****)0x0;
                      ppppcStack_2e8 = (char ****)0x5;
                      pcStack_2ec = (char *)0x4d7fc0;
                      FUN_0056a5a0();
                    }
                  }
                }
                else if (DAT_006cdbcc[0x149] == (char ***)0x0) {
                  local_2dc = (char ****)0x5;
                  local_2e0 = (char ****)s__trw_bne_00671b08;
                  ppppcStack_2e4 = (char ****)0x4d7f36;
                  FUN_005271c0();
                  ppppcStack_2e4 = (char ****)0x4d7f3e;
                  iVar7 = __ftol();
                  ppppcStack_2e4 = (char ****)(*(int *)(pbVar2 + 8) + iVar7 * 100);
                  ppppcStack_2e8 = *(char *****)(pbVar2 + 4);
                  pcStack_2ec = (char *)0x0;
                  ppppcStack_2f0 = (char ****)0x5;
                  pcStack_2f4 = (char *)0x4d7f57;
                  FUN_0056a5a0();
                  return 0;
                }
                return 0;
              }
            }
          }
          else {
            if (param_2 == 0xc) {
              local_2dc = (char ****)&local_2c8;
              local_2e0 = (char ****)0x4d7fdf;
              piVar3 = (int *)FUN_00568670();
              if (param_1 == (char ****)*piVar3) {
                local_2dc = param_1;
                local_2e0 = (char ****)0x4d7ff5;
                uVar5 = FUN_0043f700();
                if ((uVar5 & 0x10000) != 0) {
                  local_2dc = (char ****)0x4;
                  local_2e0 = (char ****)s__trbn_bne_00671afc;
                  ppppcStack_2e4 = (char ****)0x4d800b;
                  FUN_005271c0();
                  return 0xffffffff;
                }
              }
              local_2dc = (char ****)&local_2c8;
              local_2e0 = (char ****)0x4d8022;
              piVar3 = (int *)FUN_00568670();
              if (param_1 == (char ****)*piVar3) {
                local_2dc = (char ****)0x3;
                local_2e0 = (char ****)s__trw1_bne_00671af0;
                ppppcStack_2e4 = (char ****)0x4d803a;
                FUN_005271c0();
                return 0xffffffff;
              }
              local_2dc = (char ****)0x1;
              local_2e0 = (char ****)0x4d8053;
              FUN_0051eb60();
              return 0xffffffff;
            }
            if (param_2 == 0xd) {
              local_2dc = (char ****)0x3f800000;
              local_2e0 = (char ****)0x3f800000;
              ppppcStack_2e4 = (char ****)s_timeoutSound_00671ae0;
              ppppcStack_2e8 = (char ****)0x4d8076;
              FUN_005eea00();
              ppppcStack_2e4 = (char ****)0x4d8080;
              FUN_005fd160();
              return 0xffffffff;
            }
            if (param_2 == 7) {
              local_2dc = local_200;
              local_2e0 = (char ****)0x4d80a6;
              iVar7 = FUN_005e4980();
              if (iVar7 != 0) {
                if (*(int *)(iVar7 + 0x1c) != 0) {
                  local_2e0 = (char ****)0x4d80bf;
                  local_2dc = (char ****)(pppcVar16 + 0xb0);
                  FUN_005e3fe0();
                }
                local_2dc = (char ****)0x0;
                ppppcStack_2e4 = (char ****)0x0;
                ppppcStack_2e8 = (char ****)0x4d80cb;
                local_2e0 = (char ****)iVar7;
                FUN_005e4ad0();
                local_2dc = local_200;
                local_2e0 = (char ****)0x4d80d3;
                FUN_005e4820();
                return 0xffffffff;
              }
            }
            else {
              if (param_2 == 0xf) {
                local_2dc = local_200;
                local_2e0 = (char ****)0x4d80f5;
                iVar7 = FUN_005e4980();
                if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1c) != 0)) {
                  iVar7 = *(int *)(*(int *)(iVar7 + 0x1c) + 0x5460);
                  *(undefined4 *)(iVar7 + 0x407c) = 0;
                  *(undefined4 *)(iVar7 + 0x405c) = 0;
                  *(uint *)(iVar7 + 0x4070) = *(uint *)(iVar7 + 0x4070) | 0x10;
                }
                return 0;
              }
              if (param_2 == 0xe) {
                local_2dc = local_200;
                local_2e0 = (char ****)0x4d8146;
                iVar7 = FUN_005e4980();
                if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1c) != 0)) {
                  iVar7 = *(int *)(*(int *)(iVar7 + 0x1c) + 0x5460);
                  local_2e0 = local_2b4;
                  ppppcStack_2e4 = (char ****)&param_1;
                  local_2b4[0] = (char ***)0x0;
                  local_2b4[2] = (char ***)0x0;
                  local_2b4[3] = (char ***)0x0;
                  local_2a4 = (char ****)s_UNDEFINED_MODULE_0066c638;
                  local_2a0 = s_UNDEFINED_ROOM_0066c628;
                  local_29c = 0;
                  local_298 = 0;
                  local_290 = 0xffffffff;
                  local_28c = 0xffffffff;
                  ppppcStack_2e8 = (char ****)0x4d81b3;
                  local_2dc = local_2e0;
                  FUN_0041d3f0();
                  ppppcStack_2e4 = local_284;
                  ppppcStack_2e8 = (char ****)0x4d81bd;
                  puVar4 = (undefined4 *)FUN_00437600();
                  ppuVar17 = &puStack_2fc;
                  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *ppuVar17 = (undefined1 *)*puVar4;
                    puVar4 = puVar4 + 1;
                    ppuVar17 = ppuVar17 + 1;
                  }
                  FUN_00438e50();
                  local_2dc = (char ****)0x4d81ee;
                  iVar9 = __ftol();
                  *(int *)(iVar7 + 0x407c) = iVar9;
                  *(int *)(iVar7 + 0x405c) = iVar9 * 2;
                  *(uint *)(iVar7 + 0x4070) = *(uint *)(iVar7 + 0x4070) | 0x10;
                }
                return 0;
              }
              if (param_2 == 0x11) {
                local_2dc = local_200;
                local_2e0 = (char ****)0x4d8230;
                iVar7 = FUN_005e4980();
                if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1c) != 0)) {
                  iVar7 = *(int *)(*(int *)(iVar7 + 0x1c) + 0x5460);
                  local_2dc = (char ****)0x4d8246;
                  uVar5 = _rand();
                  uVar5 = uVar5 & 0x80000003;
                  if ((int)uVar5 < 0) {
                    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
                  }
                  *(uint *)(iVar7 + 0x407c) = uVar5;
                  *(uint *)(iVar7 + 0x405c) = uVar5 * 2;
                  *(uint *)(iVar7 + 0x4070) = *(uint *)(iVar7 + 0x4070) & 0xffffffef;
                }
                return 0;
              }
            }
          }
          return 0xffffffff;
        }
        if (DAT_00695290 != 0) {
          ppppcStack_2e4 = (char ****)&param_1;
          local_2dc = DAT_006951d4;
          ppppcStack_2e8 = (char ****)0x4d7e60;
          FUN_0041d3f0();
          ppppcStack_2e4 = (char ****)0x4d7e65;
          FUN_00487370();
          ppppcVar6 = DAT_00695228;
          DAT_00695228 = DAT_006951d4;
          DAT_006951d4 = DAT_00695280;
          DAT_00695280 = ppppcVar6;
          return 0;
        }
        if (DAT_0069528c == 0) {
          return 0xffffffff;
        }
        if (local_21c == 1) {
          return 0xffffffff;
        }
        ppppcStack_2e4 = (char ****)&param_1;
        local_2dc = DAT_006951d4;
        ppppcStack_2e8 = (char ****)0x4d7ebe;
        FUN_0041d3f0();
        ppppcStack_2e4 = (char ****)0x4d7ec3;
        FUN_00487370();
      }
      ppppcVar6 = DAT_006951d4;
      DAT_006951d4 = DAT_00695228;
      DAT_00695228 = ppppcVar6;
    }
    return 0;
  }
  local_2dc = param_1;
  local_2e0 = (char ****)0x4d777b;
  uVar5 = FUN_0043f700();
  if ((uVar5 & 0x100) != 0) {
    local_2dc = (char ****)0xffffffff;
    ppppcStack_2e4 = (char ****)&param_1;
    ppppcStack_2e8 = (char ****)0x4d7791;
    FUN_0041d3f0();
    ppppcStack_2e4 = (char ****)0x4d7796;
    FUN_0043fc40();
    return 0;
  }
  iVar7 = 4;
  local_2dc = (char ****)param_1[0x15];
  local_260 = 0xffffffff;
  local_25c = 0xffffffff;
  local_284[0] = (char ***)0x0;
  local_27c = 0;
  local_278 = 0;
  local_274 = (char ****)s_UNDEFINED_MODULE_0066c638;
  local_270 = s_UNDEFINED_ROOM_0066c628;
  local_26c = 0;
  local_268 = 0;
  ppppcVar6 = local_2b4 + 2;
  do {
    ppppcVar6[-2] = (char ***)0x0;
    ppppcVar6[-1] = (char ***)0x0;
    *ppppcVar6 = (char ***)0x0;
    ppppcVar6 = ppppcVar6 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = &DAT_00701550;
  ppppcVar6 = local_2b4;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppppcVar6 = (char ***)*puVar4;
    puVar4 = puVar4 + 1;
    ppppcVar6 = ppppcVar6 + 1;
  }
  local_2bc = local_214;
  local_2b8 = local_218;
  if ((int)local_2dc < 0) {
    local_2c4 = (char ****)(DAT_006f236c + 100000);
    DAT_006f236c = (DAT_006f236c + 1) % 500;
    local_2dc = (char ****)&local_2c4;
    local_2e0 = (char ****)0x4d7854;
    FUN_005685e0();
    local_2dc = local_284;
    ppppcStack_2e4 = (char ****)&param_1;
    ppppcStack_2e8 = (char ****)0x4d7868;
    FUN_0041d3f0();
    ppppcStack_2e4 = (char ****)local_254;
    ppppcStack_2e8 = (char ****)0x4d7875;
    puVar4 = (undefined4 *)FUN_004d4340();
    ppppcVar6 = local_2b4;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppppcVar6 = (char ***)*puVar4;
      puVar4 = puVar4 + 1;
      ppppcVar6 = ppppcVar6 + 1;
    }
    local_2dc = local_274;
    local_2e0 = local_2c4;
    ppppcStack_2e4 = (char ****)0x4d789c;
    FUN_005e4740();
    local_2dc = local_2c4;
    local_2e0 = (char ****)0x4d78a8;
    local_2c0 = (char ****)FUN_005e4980();
    local_2c8 = local_2c4;
    if (local_21c == 1) {
      param_1[0x27] = *(char ****)(DAT_006cdc38 + 0x268);
      ppppcStack_2e4 = (char ****)&param_1;
      local_2dc = (char ****)(*(int *)(DAT_006cdc38 + 0x270) + 1);
      local_2e0 = param_1;
      ppppcStack_2e8 = (char ****)0x4d78ef;
      FUN_0041d3f0();
      ppppcStack_2e4 = (char ****)0x4d78f4;
      FUN_0043fa30();
      pcStack_2ec = (char *)extraout_ECX;
    }
    else {
      pcStack_2ec = (char *)DAT_00695288;
      if ((DAT_00695288 != 0) && (local_21c == 2)) {
        DAT_0069522c = param_1;
        ppcVar14 = pppcVar16[0x7a];
        ppppcVar6 = local_2b4;
        pppcVar11 = pppcVar16 + 0xa3;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pppcVar11 = (char **)*ppppcVar6;
          ppppcVar6 = ppppcVar6 + 1;
          pppcVar11 = pppcVar11 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar10 = local_270;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        ppcVar14 = ppcVar14 + 0xb;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *ppcVar14 = *(char **)pcVar10;
          pcVar10 = pcVar10 + 4;
          ppcVar14 = ppcVar14 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)ppcVar14 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          ppcVar14 = (char **)((int)ppcVar14 + 1);
        }
        uVar5 = 0xffffffff;
        ppppcVar6 = local_274;
        do {
          ppppcVar13 = ppppcVar6;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          ppppcVar13 = (char ****)((int)ppppcVar6 + 1);
          cVar1 = *(char *)ppppcVar6;
          ppppcVar6 = ppppcVar13;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        puVar4 = (undefined4 *)((int)ppppcVar13 - uVar5);
        ppcVar14 = pppcVar16[0x7a] + 3;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *ppcVar14 = (char *)*puVar4;
          puVar4 = puVar4 + 1;
          ppcVar14 = ppcVar14 + 1;
        }
        for (uVar5 = uVar5 & 3; pcStack_2ec = (char *)0x0, uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)ppcVar14 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          ppcVar14 = (char **)((int)ppcVar14 + 1);
        }
      }
    }
    local_2dc = (char ****)0x0;
    local_2e0 = (char ****)0x0;
    ppppcStack_2e4 = (char ****)0x0;
    ppppcStack_2e8 = (char ****)0x0;
    ppppcStack_2f0 = (char ****)&param_1;
    pcStack_2f4 = (char *)0x4d7989;
    FUN_0041d3f0();
    ppppcStack_2f0 = local_2b4;
    pcStack_2f4 = local_270;
    iStack_2f8 = (int)local_2c4 % 1000;
    puStack_2fc = (undefined1 *)(local_2b8 + local_2bc * 1000);
    FUN_004cd6a0();
    local_2dc = local_134;
    local_2e0 = (char ****)0x12c;
    ppppcStack_2e4 = local_274;
    ppppcStack_2e8 = local_2c4;
    pcStack_2ec = (char *)0x4d79e3;
    FUN_005e48c0();
    ppppcStack_2e4 = (char ****)&param_1;
    local_2dc = local_2c8;
    ppppcStack_2e8 = (char ****)0x4d79f4;
    FUN_0041d3f0();
    ppppcStack_2e4 = (char ****)0x4d79f9;
    FUN_0043fc40();
    if (local_21c == 1) {
      uVar5 = 0xffffffff;
      pcVar10 = local_270;
      do {
        pcVar12 = pcVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar10 = pcVar12 + -uVar5;
      ppcVar14 = pppcVar16[0x7a] + 0xb;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *ppcVar14 = *(char **)pcVar10;
        pcVar10 = pcVar10 + 4;
        ppcVar14 = ppcVar14 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)ppcVar14 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        ppcVar14 = (char **)((int)ppcVar14 + 1);
      }
      ppcVar14 = pppcVar16[0x7a];
      ppppcVar6 = local_274;
LAB_004d7aea:
      uVar5 = 0xffffffff;
      do {
        ppppcVar13 = ppppcVar6;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        ppppcVar13 = (char ****)((int)ppppcVar6 + 1);
        cVar1 = *(char *)ppppcVar6;
        ppppcVar6 = ppppcVar13;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      puVar4 = (undefined4 *)((int)ppppcVar13 - uVar5);
      ppcVar14 = ppcVar14 + 3;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *ppcVar14 = (char *)*puVar4;
        puVar4 = puVar4 + 1;
        ppcVar14 = ppcVar14 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)ppcVar14 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        ppcVar14 = (char **)((int)ppcVar14 + 1);
      }
      if (local_21c == 1) {
        local_2dc = (char ****)0x6;
        ppppcVar6 = local_2b4;
        pppcVar16 = pppcVar16 + 0xa3;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pppcVar16 = (char **)*ppppcVar6;
          ppppcVar6 = ppppcVar6 + 1;
          pppcVar16 = pppcVar16 + 1;
        }
        ppppcStack_2e4 = (char ****)&param_1;
        local_2e0 = local_2c4;
        DAT_0067a670 = local_2c4;
        ppppcStack_2e8 = (char ****)0x4d7b3a;
        FUN_0041d3f0();
        ppppcStack_2e4 = (char ****)0x4d7b3f;
        iVar7 = FUN_0043f9b0();
        local_2e0 = *(char *****)(*(int *)(DAT_006cdc1c + 0x170 + iVar7 * 4) + 0x48);
        ppppcStack_2e4 = *(char *****)(*(int *)(DAT_006cdc1c + 0x2a0) + 0x48);
        ppppcStack_2e8 = (char ****)0x4d7b62;
        FUN_0050b610();
        goto LAB_004d7b73;
      }
    }
  }
  else {
    local_2e0 = (char ****)0x4d7a58;
    local_2c4 = local_2dc;
    local_2dc = (char ****)FUN_005e4980();
    local_2c0 = local_2dc;
    if (local_2dc == (char ****)0x0) {
      local_2e0 = (char ****)s_can_not_find_saved_params_for_pl_00671b48;
      ppppcStack_2e4 = (char ****)0x4d7a6b;
      FUN_005d2520();
    }
    pppcVar11 = local_2c0[6] + 0x3e;
    ppppcVar6 = local_2b4;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppppcVar6 = (char ***)*pppcVar11;
      pppcVar11 = pppcVar11 + 1;
      ppppcVar6 = ppppcVar6 + 1;
    }
    local_2c0[6][0x4a] = (char **)param_1;
    if (local_21c == 1) {
      uVar5 = 0xffffffff;
      local_2c8 = (char ****)(pppcVar16[0x7a] + 0xb);
      pppcVar11 = local_2c0[6] + 4;
      do {
        pppcVar15 = pppcVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pppcVar15 = (char ***)((int)pppcVar11 + 1);
        cVar1 = *(char *)pppcVar11;
        pppcVar11 = pppcVar15;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      puVar4 = (undefined4 *)((int)pppcVar15 - uVar5);
      ppppcVar6 = local_2c8;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *ppppcVar6 = (char ***)*puVar4;
        puVar4 = puVar4 + 1;
        ppppcVar6 = ppppcVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)ppppcVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
      }
      ppcVar14 = pppcVar16[0x7a];
      ppppcVar6 = (char ****)local_2c0[3][0x3ec];
      goto LAB_004d7aea;
    }
  }
  *(byte *)(local_2c0 + 2) = *(byte *)(local_2c0 + 2) | 1;
LAB_004d7b73:
  if ((&DAT_006d1428)[local_2bc + local_2b8 * 0x174] != 0) {
    local_2c0[4] = *(char ****)((&DAT_006d1428)[local_2bc + local_2b8 * 0x174] + 0x10);
    return 0;
  }
  local_2dc = (char ****)0x0;
  local_2e0 = (char ****)s_Not_found_claster_for_truck_00671b2c;
  ppppcStack_2e4 = (char ****)0x4d7bae;
  FUN_005d2520();
  return 0;
}


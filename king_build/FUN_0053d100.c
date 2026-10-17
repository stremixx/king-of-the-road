
void __fastcall FUN_0053d100(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char **ppcVar11;
  char *apcStack_1f4 [3];
  int iStack_1e8;
  char *pcStack_1e4;
  char *pcStack_1e0;
  undefined **ppuStack_1dc;
  undefined8 local_1d8;
  int local_1c0;
  char *local_1bc;
  char *local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c [9];
  undefined1 local_178 [4];
  int local_174;
  undefined4 local_16c;
  char local_168 [100];
  undefined1 local_104 [52];
  undefined1 local_d0 [52];
  undefined *local_9c [13];
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  if (DAT_00695bc4 == 0) goto LAB_0053d215;
  local_1d8 = (double)CONCAT44(&local_1bc,&local_1a8);
  ppuStack_1dc = (undefined **)0x53d136;
  iVar3 = FUN_0054e6e0();
  if ((iVar3 == 0) || (local_1a8 == 0)) goto LAB_0053d215;
  uVar2 = *(undefined4 *)(DAT_00695c00 + 0xb30);
  local_168[0] = '\0';
  switch(local_1a8) {
  case 1:
    pcVar8 = s_WrongSideDriving___006781e8;
    break;
  case 2:
    pcVar8 = s_WrongCrossing___006781d8;
    break;
  case 3:
    pcVar8 = s_WrongMovingBack___006781c4;
    break;
  case 4:
    pcVar8 = s_WrongParking___006781b4;
    break;
  case 5:
    pcVar8 = s_WrongCrossingCentralLine___00678198;
    break;
  case 6:
    pcVar8 = s_RoadHog___0067818c;
    break;
  default:
    goto switchD_0053d161_default;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar3 = -1;
  pcVar8 = local_168;
  do {
    pcVar9 = pcVar8;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
switchD_0053d161_default:
  uVar5 = 0xffffffff;
  pcVar8 = local_168;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_1d8 = (double)(float)local_1bc;
  ppuStack_1dc = &PTR_FuncInfo_00678188;
  pcStack_1e0 = local_168 + (~uVar5 - 1);
  pcStack_1e4 = (char *)0x53d1f6;
  FUN_0061c369();
  pcStack_1e4 = (char *)0x0;
  apcStack_1f4[2] = local_168;
  iStack_1e8 = 4;
  apcStack_1f4[0] = (char *)0x78;
  apcStack_1f4[1] = (char *)uVar2;
  FUN_005e97a0(*(undefined4 *)(DAT_00695c00 + 0xc),0x78);
LAB_0053d215:
  if (1 < DAT_00695b4c) {
    local_1d8 = (double)CONCAT44(0x53d228,(undefined4)local_1d8);
    FUN_0053ded0();
    local_1d8 = (double)CONCAT44(s_dumping_all_vehicles_00678170,local_168);
    ppuStack_1dc = (undefined **)0x53d237;
    FUN_0061c369();
    ppuStack_1dc = (undefined **)0x0;
    pcStack_1e4 = local_168;
    pcStack_1e0 = (char *)0x5;
    iStack_1e8 = *(int *)(DAT_00695c00 + 0xb30);
    apcStack_1f4[0] = *(char **)(DAT_00695c00 + 0xc);
    apcStack_1f4[2] = (char *)0x8c;
    apcStack_1f4[1] = (char *)0x78;
    FUN_005e97a0();
  }
  if (1 < DAT_00695b48) {
    local_1d8 = (double)CONCAT44(s_dumping_trace_road_collsisions_00678150,local_168);
    ppuStack_1dc = (undefined **)0x53d275;
    FUN_0061c369();
    ppuStack_1dc = (undefined **)0x0;
    pcStack_1e4 = local_168;
    pcStack_1e0 = (char *)0x5;
    iStack_1e8 = *(int *)(DAT_00695c00 + 0xb30);
    apcStack_1f4[0] = *(char **)(DAT_00695c00 + 0xc);
    apcStack_1f4[2] = (char *)0xa0;
    apcStack_1f4[1] = (char *)0x78;
    FUN_005e97a0();
  }
  if (DAT_006cdbc8 == 0) {
    local_19c[3] = 0;
    local_19c[2] = 0;
    local_19c[1] = 0;
    local_19c[8] = 0;
    local_19c[7] = 0;
    local_19c[5] = 0;
    local_19c[4] = 0;
    local_19c[0] = 0;
    pcVar8 = *(char **)(param_1 + 0x28);
    local_19c[6] = 0x3f000000;
    local_1d8 = (double)CONCAT44(local_178,0x53d2e4);
    local_1bc = pcVar8;
    FUN_005d7ca0();
    iVar3 = *(int *)(param_1 + 0x24);
    iVar6 = *(int *)(iVar3 + 0x100);
    local_1a0 = *(int *)(iVar3 + 0x104);
    pcVar10 = *(char **)(*(int *)(iVar3 + 0xfc) + 0xc);
    if (0x27f < iVar6) {
      pcVar8 = *(char **)(*(int *)(param_1 + 0x20) + 0xb30);
      local_1bc = pcVar8;
    }
    local_1a8 = iVar6;
    if (*(int *)(param_1 + 0x578) == 0) {
      if ((*(byte *)(param_1 + 0x57c) & 8) != 0) {
        local_19c[3] = 0;
        local_19c[2] = 0;
        local_19c[1] = 0;
        local_19c[0] = 0;
        local_19c[8] = 0;
        local_19c[7] = 0;
        local_19c[5] = 0;
        local_19c[4] = 0;
        ppuStack_1dc = *(undefined ***)(param_1 + 0x574);
        local_1d8 = (double)CONCAT44(&local_1c0,&local_1a4);
        local_19c[6] = 0x3f000000;
        pcStack_1e0 = (char *)0x53d609;
        FUN_0053cff0();
        if ((iVar6 == 800) && (local_1a0 == 600)) {
          local_1c0 = local_1c0 + 0x32;
        }
        uVar5 = *(uint *)(param_1 + 0x574);
        if (uVar5 + 2 < 5) {
          uVar4 = (int)uVar5 >> 0x1f;
          ppuStack_1dc = (undefined **)local_1c0;
          switch(uVar5) {
          case 0:
            local_1d8 = (double)(ulonglong)*(uint *)(param_1 + 0x274);
            pcStack_1e0 = (char *)local_1a4;
            iStack_1e8 = 0x53d65a;
            pcStack_1e4 = pcVar10;
            FUN_005b8030();
            if ((*(byte *)(param_1 + 0x57c) & 0x80) != 0) {
              local_1d8 = (double)CONCAT44(local_1c0 + 0x164,local_1a4 + 0xac);
              ppuStack_1dc = (undefined **)0x53d684;
              FUN_0053cc60();
            }
            ppuStack_1dc = (undefined **)(local_1c0 + 0x145);
            uVar5 = *(uint *)(param_1 + 0x388 + *(int *)(param_1 + 0x424) * 4);
            local_1a4 = local_1a4 + 0x73;
            break;
          case 1:
          case 2:
            uVar5 = *(uint *)(param_1 + 0x274 + ((uVar5 ^ uVar4) - uVar4) * 4);
            break;
          default:
            uVar5 = *(uint *)(param_1 + 0x280 + ((uVar5 ^ uVar4) - uVar4) * 4);
          }
          local_1d8 = (double)(ulonglong)uVar5;
          iStack_1e8 = 0x53d6d3;
          pcStack_1e4 = pcVar10;
          pcStack_1e0 = (char *)local_1a4;
          FUN_005b8030();
        }
        if (0 < local_1c0) {
          puVar7 = local_19c;
          ppcVar11 = apcStack_1f4;
          local_1b0 = iVar6;
          local_1ac = local_1c0;
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppcVar11 = (char *)*puVar7;
            puVar7 = puVar7 + 1;
            ppcVar11 = ppcVar11 + 1;
          }
          local_1b8 = (char *)0x0;
          local_1b4 = 0;
          FUN_005bcdc0(pcVar10,&local_1b8,2);
          pcVar8 = local_1bc;
          iVar6 = local_1a8;
        }
        local_1c0 = local_1c0 + *(int *)(&DAT_00695b94 + *(int *)(param_1 + 0x574) * 4);
        if (local_1c0 < local_1a0) {
          local_1ac = local_1a0;
          puVar7 = local_19c;
          ppcVar11 = apcStack_1f4;
          local_1b4 = local_1c0;
          local_1b0 = iVar6;
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppcVar11 = (char *)*puVar7;
            puVar7 = puVar7 + 1;
            ppcVar11 = ppcVar11 + 1;
          }
          local_1b8 = (char *)0x0;
          FUN_005bcdc0(pcVar10,&local_1b8,2);
          pcVar8 = local_1bc;
          iVar6 = local_1a8;
        }
      }
      if ((*(byte *)(param_1 + 0x57c) & 0x20) != 0) {
        local_1d8 = 0.0;
        ppuStack_1dc = (undefined **)local_68;
        pcStack_1e4 = (char *)(*(int *)(param_1 + 0x564) + 0x29);
        iStack_1e8 = *(int *)(param_1 + 0x560) + -0x5a + iVar6;
        apcStack_1f4[1] = (char *)0x53d7a8;
        apcStack_1f4[2] = pcVar10;
        pcStack_1e0 = pcVar8;
        FUN_005e97a0();
        apcStack_1f4[1] = (char *)0x0;
        apcStack_1f4[0] = (char *)0x6;
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5b + iVar6,
                     *(int *)(param_1 + 0x564) + 0x28,pcVar8,local_68);
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5a + iVar6,
                     *(int *)(param_1 + 0x564) + 0x33,pcVar8,local_34,0,0);
        ppuStack_1dc = (undefined **)local_34;
        pcStack_1e4 = (char *)(*(int *)(param_1 + 0x564) + 0x32);
        local_1d8 = 2.96439387504748e-323;
        iStack_1e8 = *(int *)(param_1 + 0x560) + -0x5b + iVar6;
        apcStack_1f4[1] = (char *)0x53d823;
        apcStack_1f4[2] = pcVar10;
        pcStack_1e0 = pcVar8;
        FUN_005e97a0();
        apcStack_1f4[1] = (char *)0x0;
        apcStack_1f4[0] = (char *)0x0;
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5a + iVar6,
                     *(int *)(param_1 + 0x564) + 0x3d,pcVar8,local_104);
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5b + iVar6,
                     *(int *)(param_1 + 0x564) + 0x3c,pcVar8,local_104,6,0);
        ppuStack_1dc = (undefined **)local_d0;
        local_1d8 = 0.0;
        pcStack_1e4 = (char *)(*(int *)(param_1 + 0x564) + 0x47);
        iStack_1e8 = *(int *)(param_1 + 0x560) + -0x5a + iVar6;
        apcStack_1f4[1] = (char *)0x53d89e;
        apcStack_1f4[2] = pcVar10;
        pcStack_1e0 = pcVar8;
        FUN_005e97a0();
        apcStack_1f4[1] = (char *)0x0;
        apcStack_1f4[0] = (char *)0x6;
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5b + iVar6,
                     *(int *)(param_1 + 0x564) + 0x46,pcVar8,local_d0);
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5a + iVar6,
                     *(int *)(param_1 + 0x564) + 0x51,pcVar8,local_9c,0,0);
        ppuStack_1dc = local_9c;
        pcStack_1e4 = (char *)(*(int *)(param_1 + 0x564) + 0x50);
        local_1d8 = 2.96439387504748e-323;
        iStack_1e8 = *(int *)(param_1 + 0x560) + -0x5b + iVar6;
        apcStack_1f4[1] = (char *)0x53d919;
        apcStack_1f4[2] = pcVar10;
        pcStack_1e0 = pcVar8;
        FUN_005e97a0();
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x57c) & 0x20) != 0) {
        local_1d8 = 0.0;
        ppuStack_1dc = (undefined **)local_68;
        pcStack_1e4 = (char *)(*(int *)(param_1 + 0x564) + 0x33);
        iStack_1e8 = *(int *)(param_1 + 0x560) + -0x5a + iVar6;
        apcStack_1f4[1] = (char *)0x53d360;
        apcStack_1f4[2] = pcVar10;
        pcStack_1e0 = pcVar8;
        FUN_005e97a0();
        apcStack_1f4[1] = (char *)0x0;
        apcStack_1f4[0] = (char *)0x6;
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5b + iVar6,
                     *(int *)(param_1 + 0x564) + 0x32,pcVar8,local_68);
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5a + iVar6,
                     *(int *)(param_1 + 0x564) + 0x3d,pcVar8,local_34,0,0);
        ppuStack_1dc = (undefined **)local_34;
        pcStack_1e4 = (char *)(*(int *)(param_1 + 0x564) + 0x3c);
        local_1d8 = 2.96439387504748e-323;
        iStack_1e8 = *(int *)(param_1 + 0x560) + -0x5b + iVar6;
        apcStack_1f4[1] = (char *)0x53d3db;
        apcStack_1f4[2] = pcVar10;
        pcStack_1e0 = pcVar8;
        FUN_005e97a0();
        apcStack_1f4[1] = (char *)0x0;
        apcStack_1f4[0] = (char *)0x0;
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5a + iVar6,
                     *(int *)(param_1 + 0x564) + 0x47,pcVar8,local_104);
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5b + iVar6,
                     *(int *)(param_1 + 0x564) + 0x46,pcVar8,local_104,6,0);
        ppuStack_1dc = (undefined **)local_d0;
        local_1d8 = 0.0;
        pcStack_1e4 = (char *)(*(int *)(param_1 + 0x564) + 0x51);
        iStack_1e8 = *(int *)(param_1 + 0x560) + -0x5a + iVar6;
        apcStack_1f4[1] = (char *)0x53d456;
        apcStack_1f4[2] = pcVar10;
        pcStack_1e0 = pcVar8;
        FUN_005e97a0();
        apcStack_1f4[1] = (char *)0x0;
        apcStack_1f4[0] = (char *)0x6;
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5b + iVar6,
                     *(int *)(param_1 + 0x564) + 0x50,pcVar8,local_d0);
        FUN_005e97a0(pcVar10,*(int *)(param_1 + 0x560) + -0x5a + iVar6,
                     *(int *)(param_1 + 0x564) + 0x5b,pcVar8,local_9c,0,0);
        ppuStack_1dc = local_9c;
        pcStack_1e4 = (char *)(*(int *)(param_1 + 0x564) + 0x5a);
        local_1d8 = 2.96439387504748e-323;
        iStack_1e8 = *(int *)(param_1 + 0x560) + -0x5b + iVar6;
        apcStack_1f4[1] = (char *)0x53d4d1;
        apcStack_1f4[2] = pcVar10;
        pcStack_1e0 = pcVar8;
        FUN_005e97a0();
      }
      local_1ac = local_174 + -1;
      puVar7 = local_19c;
      ppcVar11 = apcStack_1f4;
      local_1b0 = iVar6;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar11 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar11 = ppcVar11 + 1;
      }
      local_1b8 = (char *)0x0;
      local_1b4 = 0;
      FUN_005bcdc0(pcVar10,&local_1b8,2);
      local_1ac = local_1a0;
      local_1b4 = local_16c + 1;
      local_1b0 = local_1a8;
      puVar7 = local_19c;
      ppcVar11 = apcStack_1f4;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar11 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar11 = ppcVar11 + 1;
      }
      local_1b8 = (char *)0x0;
      FUN_005bcdc0(pcVar10,&local_1b8,2);
      if ((*(byte *)(param_1 + 0x57c) & 0x80) != 0) {
        local_1b4 = local_1a0 + -0x34;
        local_19c[6] = 0x3f000000;
        iVar3 = local_1a0 + -7;
        puVar7 = local_19c;
        ppcVar11 = apcStack_1f4;
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppcVar11 = (char *)*puVar7;
          puVar7 = puVar7 + 1;
          ppcVar11 = ppcVar11 + 1;
        }
        local_1b8 = (char *)0x2;
        local_1b0 = 0x80;
        local_1ac = iVar3;
        FUN_005bcdc0(pcVar10,&local_1b8,1);
        local_1d8 = (double)CONCAT44(local_1a0 + -0x2d,5);
        ppuStack_1dc = (undefined **)0x53d5b5;
        FUN_0053cc60();
        return;
      }
    }
  }
  return;
}


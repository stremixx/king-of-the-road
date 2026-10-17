
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005e2800(undefined4 *param_1,char *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  LPSTR pCVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  uint local_a8;
  int local_a4;
  undefined4 local_a0;
  byte *local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 *local_90;
  byte local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648b0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_90 = param_1;
  FUN_00639084(0);
  *param_1 = &PTR_LAB_00651654;
  param_1[0x44] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  _DAT_00720700 = PTR_FUN_0067eabc;
  PTR_FUN_0067eabc = &LAB_005e27d0;
  DAT_007206b0 = param_1;
  param_1[0x5a] = 0;
  param_1[0x5e] = 0;
  local_4 = 0;
  local_a8 = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  param_1[0x45] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x5b] = 0;
  param_1[0x5f] = 0;
  FUN_0061f3cc(&LAB_005e27a0);
  FUN_0061f3af(1);
  if (param_3 == (byte *)0x0) {
    uVar8 = 0xffffffff;
    pcVar11 = param_2;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    puVar3 = (undefined1 *)FUN_00631d33(~uVar8 + 2);
    param_1[0x46] = puVar3;
    *puVar3 = 0x2e;
    *(undefined1 *)(param_1[0x46] + 1) = 0x5c;
    uVar8 = 0xffffffff;
    do {
      pcVar11 = param_2;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar11 = pcVar11 + -uVar8;
    pcVar5 = (char *)(param_1[0x46] + 2);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar5 = pcVar5 + 4;
    }
  }
  else {
    pbVar10 = &DAT_00682174;
    pbVar6 = param_3;
    do {
      bVar2 = *pbVar6;
      bVar14 = bVar2 < *pbVar10;
      if (bVar2 != *pbVar10) {
LAB_005e296c:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_005e2971;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar14 = bVar2 < pbVar10[1];
      if (bVar2 != pbVar10[1]) goto LAB_005e296c;
      pbVar6 = pbVar6 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_005e2971:
    if (iVar7 == 0) {
      pCVar4 = GetCommandLineA();
      uVar8 = 0xffffffff;
      do {
        pcVar11 = pCVar4;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar11 = pCVar4 + 1;
        cVar1 = *pCVar4;
        pCVar4 = pcVar11;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pbVar6 = (byte *)(pcVar11 + -uVar8);
      pbVar10 = local_8c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar10 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        pbVar10 = pbVar10 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar10 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar10 = pbVar10 + 1;
      }
      local_9c = local_8c + 1;
      pcVar11 = (char *)FUN_005aa880(&local_9c);
      pcVar5 = (char *)FUN_005aa880(&local_9c);
      if (pcVar5 != (char *)0x0) {
        pcVar11 = pcVar5;
      }
      if (*pcVar11 == '\"') {
        pcVar11 = pcVar11 + 1;
      }
      param_3 = (byte *)FUN_005e3920(pcVar11);
      uVar8 = 0xffffffff;
      pbVar6 = param_3;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
      uVar9 = 0xffffffff;
      pcVar11 = param_2;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      pbVar6 = (byte *)FUN_00631d33(~uVar8 + ~uVar9);
    }
    else {
      uVar8 = 0xffffffff;
      pcVar11 = param_2;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar9 = 0xffffffff;
      pbVar6 = param_3;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
      pbVar6 = (byte *)FUN_00631d33(~uVar8 + ~uVar9);
    }
    uVar8 = 0xffffffff;
    param_1[0x46] = pbVar6;
    do {
      pbVar10 = param_3;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar10 = param_3 + 1;
      bVar2 = *param_3;
      param_3 = pbVar10;
    } while (bVar2 != 0);
    uVar8 = ~uVar8;
    pbVar10 = pbVar10 + -uVar8;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar6 = pbVar6 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar6 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar6 = pbVar6 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_00682170;
    do {
      pcVar5 = pcVar11;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar5 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar5;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar7 = -1;
    pcVar11 = (char *)param_1[0x46];
    do {
      pcVar12 = pcVar11;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar5 + -uVar8;
    pcVar5 = pcVar12 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar5 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uVar8 = 0xffffffff;
    do {
      pcVar11 = param_2;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar7 = -1;
    pcVar5 = (char *)param_1[0x46];
    do {
      pcVar12 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar8;
    pcVar5 = pcVar12 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar5 = pcVar5 + 4;
    }
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar5 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[99] = 0;
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_statistic_00682164,&DAT_006719a8,(LPSTR)local_8c,0x3c,
             (LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e2b12:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2b17;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e2b12;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2b17:
  if (iVar7 == 0) {
    uVar8 = param_1[0x49] | 0x20000000;
  }
  else {
    pbVar10 = &DAT_0068215c;
    pbVar6 = local_8c;
    do {
      bVar2 = *pbVar6;
      bVar14 = bVar2 < *pbVar10;
      if (bVar2 != *pbVar10) {
LAB_005e2b55:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_005e2b5a;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar14 = bVar2 < pbVar10[1];
      if (bVar2 != pbVar10[1]) goto LAB_005e2b55;
      pbVar6 = pbVar6 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_005e2b5a:
    if (iVar7 != 0) goto LAB_005e2b6f;
    uVar8 = param_1[0x49] | 0x30000000;
  }
  param_1[0x49] = uVar8;
LAB_005e2b6f:
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_targettexture_0068214c,&DAT_0066cdd8,(LPSTR)local_8c,0x3c,
             (LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_0066cdd8;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e2bbb:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2bc0;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e2bbb;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2bc0:
  if (iVar7 == 0) {
    param_1[100] = 0;
  }
  else {
    uVar8 = 0xffffffff;
    pbVar6 = local_8c;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
    pbVar6 = (byte *)FUN_00631d33(~uVar8);
    uVar8 = 0xffffffff;
    param_1[100] = pbVar6;
    pbVar10 = local_8c;
    do {
      pbVar13 = pbVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar13 = pbVar10 + 1;
      bVar2 = *pbVar10;
      pbVar10 = pbVar13;
    } while (bVar2 != 0);
    uVar8 = ~uVar8;
    pbVar10 = pbVar13 + -uVar8;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar6 = pbVar6 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar6 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar6 = pbVar6 + 1;
    }
  }
  FUN_00603230(s_RENDER_00681dc4,s_clear_00682144,0,&local_a0,param_1[0x46]);
  param_1[0x4a] = local_a0;
  FUN_00603230(&DAT_006720a0,&DAT_0068213c,0x280,&local_94,param_1[0x46]);
  FUN_00603230(&DAT_006720a0,&DAT_00682134,0x1e0,&local_98,param_1[0x46]);
  FUN_00603230(&DAT_006720a0,&DAT_0068212c,2,&local_a0,param_1[0x46]);
  FUN_00603230(&DAT_006720a0,s_numdev_00675d28,1,&local_a4,param_1[0x46]);
  DAT_0071f844 = local_a4 + -1;
  local_a4 = DAT_0071f844;
  FUN_00603230(&DAT_006720a0,&DAT_00682124,0x10,&local_a4,param_1[0x46]);
  DAT_0071f848 = local_a4;
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,&DAT_00681d20,&DAT_00671994,(LPSTR)local_8c,0x3c,
             (LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e2d33:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2d38;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e2d33;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2d38:
  if (iVar7 == 0) {
    local_a8 = 0x4000;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_protectinput_00682114,&DAT_006719a8,(LPSTR)local_8c,0x3c,
             (LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e2d90:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2d95;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e2d90;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2d95:
  if (iVar7 == 0) {
    param_1[0x58] = 1;
  }
  else {
    param_1[0x58] = 0;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_bordin_0068210c,&DAT_006719a8,(LPSTR)local_8c,0x3c,
             (LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e2dfb:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2e00;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e2dfb;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2e00:
  if (iVar7 == 0) {
    param_1[0x49] = param_1[0x49] | 2;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_alttab_00682104,&DAT_006719a8,(LPSTR)local_8c,0x3c,
             (LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e2e5e:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2e63;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e2e5e;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2e63:
  if (iVar7 == 0) {
    param_1[0x4b] = 1;
  }
  else {
    param_1[0x4b] = 0;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_fullscreen_006820f8,&DAT_00671994,(LPSTR)local_8c,0x3c,
             (LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e2ec9:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2ece;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e2ec9;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2ece:
  if (iVar7 == 0) {
    local_a8 = local_a8 | 0xe00;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,&DAT_006820f4,&DAT_00671994,(LPSTR)local_8c,0x3c,(LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e2f29:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2f2e;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e2f29;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2f2e:
  if (iVar7 == 0) {
    local_a8 = local_a8 | (-(uint)((local_a8 & 0x400) != 0) & 0x1600) + 0xa00 | 0x1000;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_mouse_006820ec,&DAT_00671994,(LPSTR)local_8c,0x3c,(LPCSTR)param_1[0x46]
            );
  pcVar11 = s_joystick_006820e0;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < (byte)*pcVar11;
    if (bVar2 != *pcVar11) {
LAB_005e2fa3:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e2fa8;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < (byte)pcVar11[1];
    if (bVar2 != pcVar11[1]) goto LAB_005e2fa3;
    pbVar6 = pbVar6 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e2fa8:
  if (iVar7 == 0) {
    param_1[0x4f] = 1;
  }
  else {
    param_1[0x4f] = 0;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,&DAT_006820d8,&DAT_006719a8,(LPSTR)local_8c,0x3c,(LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e300e:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e3013;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e300e;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e3013:
  if (iVar7 == 0) {
    param_1[0x57] = 1;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_sound_00675770,&DAT_006719a8,(LPSTR)local_8c,0x3c,(LPCSTR)param_1[0x46]
            );
  pbVar10 = &DAT_00671994;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e306d:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e3072;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e306d;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e3072:
  if (iVar7 == 0) {
    param_1[0x56] = 1;
    _DAT_007206cc = 1;
  }
  GetPrivateProfileStringA
            (&DAT_006720a0,s_langv_006820cc,(LPCSTR)&PTR_DAT_006820d4,(LPSTR)local_8c,0x1e,
             (LPCSTR)param_1[0x46]);
  pbVar10 = &DAT_006772bc;
  pbVar6 = local_8c;
  do {
    bVar2 = *pbVar6;
    bVar14 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_005e30d7:
      iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005e30dc;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar14 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_005e30d7;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005e30dc:
  if (iVar7 == 0) {
    param_1[0x50] = 0;
  }
  else {
    pbVar10 = &DAT_006820c8;
    pbVar6 = local_8c;
    do {
      bVar2 = *pbVar6;
      bVar14 = bVar2 < *pbVar10;
      if (bVar2 != *pbVar10) {
LAB_005e3119:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_005e311e;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar14 = bVar2 < pbVar10[1];
      if (bVar2 != pbVar10[1]) goto LAB_005e3119;
      pbVar6 = pbVar6 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_005e311e:
    if (iVar7 == 0) {
      param_1[0x50] = 2;
    }
    else {
      param_1[0x50] = 1;
    }
  }
  param_1[0x41] = local_98;
  param_1[0x40] = local_94;
  param_1[0x42] = local_a0;
  param_1[0x43] = local_a8;
  if (local_94 == 0x140) {
    param_1[0x4e] = 3;
  }
  else if (local_94 == 0x280) {
    param_1[0x4e] = 7;
  }
  else {
    param_1[0x4e] = local_94 / 100;
  }
  ExceptionList = local_c;
  return param_1;
}


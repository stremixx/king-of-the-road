
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00571d33) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005715f0(int *param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  int *piVar16;
  int local_210;
  double local_1f0;
  undefined4 local_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8;
  byte local_1c0 [428];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00646e4c;
  local_14 = ExceptionList;
  DAT_006f230c = 0;
  DAT_006f23f8 = 0;
  DAT_006f2398 = 0;
  ExceptionList = &local_14;
  *(int *)(DAT_006cdbcc + 0x54c) = DAT_00695c00;
  switch(DAT_006cdcd0) {
  case 0:
    param_1[0x2a4] = 0x70800;
    break;
  case 1:
    param_1[0x2a4] = 0xaf000;
    break;
  case 2:
    param_1[0x2a4] = 0x177000;
    break;
  case 3:
    param_1[0x2a4] = 0x1f4000;
    break;
  case 4:
    param_1[0x2a4] = 0x5dc000;
  }
  iVar11 = 0;
  if (0 < DAT_006cd2ac) {
    do {
      FUN_0052e200();
      FUN_005e46e0();
      iVar11 = iVar11 + 1;
    } while (iVar11 < DAT_006cd2ac);
  }
  FUN_005e46e0();
  FUN_005e46e0();
  FUN_005e46e0();
  FUN_005e46e0();
  FUN_005e46e0();
  FUN_005e46e0();
  FUN_005e46e0();
  DAT_006f2378 = param_1[0x2a5];
  DAT_006f237c = param_1[0x2a6];
  param_1[0x2a5] = (int)&LAB_00571fc0;
  param_1[0x2a6] = (int)&LAB_00573510;
  DAT_006f236c = DAT_00695860 * 8;
  DAT_006952a0 = 0;
  FUN_00603370(s_EFFECTS_00671998);
  FUN_00603370(s_EFFECTS_00671998,s_timetemp_0067b244,0x33333333,0x3fd33333,&DAT_006f2260,
               DAT_006957c8);
  FUN_00603370(s_EFFECTS_00671998,s_wstart_0067b23c,0x66666666,0x3fe66666,&DAT_006f2250,DAT_006957c8
              );
  FUN_00603370(s_EFFECTS_00671998);
  if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
    sVar3 = *(short *)(DAT_006cdbfc + 0x194);
  }
  else {
    sVar3 = *(short *)(DAT_006cdbf8 + 0x188);
  }
  _DAT_006f2258 = (double)(int)sVar3 * _DAT_0064a590;
  if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
    sVar3 = *(short *)(DAT_006cdbfc + 0x192);
  }
  else {
    sVar3 = *(short *)(DAT_006cdbf8 + 0x186);
  }
  _DAT_006f2250 = _DAT_006f2258 * _DAT_0064a728;
  DAT_006f2270 = 0;
  DAT_006f2274 = 0;
  DAT_006f2278 = 1;
  DAT_006f227c = 0xffffffff;
  DAT_006f2280 = 0;
  _DAT_006f2260 = (double)(int)sVar3 * _DAT_0064a590 * _DAT_0064a6d0 + _DAT_0064a948;
  if (*(int *)(DAT_006cdbcc + 0x514) < 2) {
    if ((*(int *)(DAT_006cdbcc + 0x524) == 0) || (*(int *)(DAT_006cdbf8 + 0x180) < 2)) {
      GetPrivateProfileStringA
                (s_EFFECTS_00671998,s_live_absent_0067b218,&DAT_006719a8,(LPSTR)local_1c0,0x20,
                 DAT_006957c8);
      pbVar9 = &DAT_00671994;
      pbVar13 = local_1c0;
      do {
        bVar2 = *pbVar13;
        bVar15 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00571b0f:
          iVar11 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_00571b14;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar13[1];
        bVar15 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00571b0f;
        pbVar13 = pbVar13 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar11 = 0;
LAB_00571b14:
      if (iVar11 == 0) {
        DAT_00695288 = 1;
      }
      GetPrivateProfileStringA
                (s_EFFECTS_00671998,s_roadview_0067b20c,&DAT_006719a8,(LPSTR)local_1c0,0x20,
                 DAT_006957c8);
      pbVar9 = &DAT_00671994;
      pbVar13 = local_1c0;
      do {
        bVar2 = *pbVar13;
        bVar15 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00571b74:
          iVar11 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_00571b7b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar13[1];
        bVar15 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00571b74;
        pbVar13 = pbVar13 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar11 = 0;
LAB_00571b7b:
      if (iVar11 == 0) {
        DAT_00695294 = 1;
      }
      *(undefined4 *)(DAT_00695c00 + 0x1f08) = 1;
      FUN_0042dc70();
      local_1e8 = 0;
      local_1e4 = s_DRIVER_0066b874;
      local_1e0 = 1;
      local_1dc = 0;
      local_1d8 = 0;
      if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
        sVar3 = *(short *)(DAT_006cdbfc + 400);
      }
      else {
        sVar3 = *(short *)(DAT_006cdbf8 + 0x184);
      }
      local_210 = (int)sVar3;
      local_1f0 = (double)local_210 * _DAT_0064a590;
      if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
        local_1e8 = FUN_00519be0();
      }
      local_1e4 = (char *)(DAT_006cdc38 + 0x278);
      local_1d8 = *(int *)(DAT_006cdbcc + 0x520) != 0;
      piVar14 = (int *)0x0;
      if ((char)DAT_006f1c78 != '\0') {
        piVar14 = (int *)FUN_0051b780();
        if (piVar14 == (int *)0x0) {
          FUN_005d2520();
        }
        iVar11 = *piVar14;
        piVar16 = (int *)0x0;
        uVar6 = FUN_0050b500(s_listofgames_006757d4);
        (**(code **)(iVar11 + 0x18))(piVar14,uVar6);
        if (piVar16 == (int *)0x0) {
          (**(code **)(*piVar14 + 8))(piVar14);
          FUN_005d2520(s_old_version_of_format___pl1_0067b1f0,0);
        }
        iVar11 = *piVar16;
        uVar6 = FUN_0050b500(&DAT_006f1c78,0,0x10,0,0,&stack0xfffffdd0);
        (**(code **)(iVar11 + 0x18))(piVar16,uVar6);
        FUN_005d2520();
        FUN_005713f0();
      }
      FUN_00434860();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 8))();
      }
      FUN_005288e0();
    }
    else {
      DAT_006f236c = DAT_00695860;
      *(undefined4 *)(DAT_00695c00 + 0x1f08) = 1;
      FUN_005ab330();
      FUN_005ab7d0();
      FUN_005ab130();
      uVar7 = 0xffffffff;
      pcVar10 = s_room_tb_000_0067b228;
      do {
        pcVar12 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar12 + -uVar7;
      pcVar12 = (char *)(param_1[0x7a] + 0x2c);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_0067b224;
      do {
        pcVar12 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar12 + -uVar7;
      pcVar12 = (char *)(param_1[0x7a] + 0xc);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      DAT_0067a670 = DAT_006f236c + 100000;
      iVar4 = FUN_00519c20();
      iVar11 = *(int *)(DAT_006cdbf4 + 0x32c);
      FUN_005e4740();
      iVar5 = FUN_005e4980();
      if ((&DAT_006d1428)[iVar11 + iVar4 * 0x174] == 0) {
        FUN_005d2520();
      }
      else {
        *(undefined4 *)(iVar5 + 0x10) =
             *(undefined4 *)((&DAT_006d1428)[iVar11 + iVar4 * 0x174] + 0x10);
      }
      FUN_0041ec60();
      FUN_004cd6a0(iVar4 + iVar11 * 1000,DAT_006f236c,s_room_tb_000_0067b228,&local_1f0);
      FUN_005e48c0();
    }
  }
  FUN_004e05c0();
  FUN_005d1bf0();
  FUN_005d1bf0();
  iVar11 = FUN_00631d33();
  local_c = 0;
  if (iVar11 == 0) {
    DAT_006f2310 = 0;
  }
  else {
    DAT_006f2310 = FUN_0060d7d0();
  }
  local_c = 0xffffffff;
  FUN_005db990();
  iVar11 = FUN_0061c356();
  if (iVar11 == 0) {
    FUN_005d2520();
  }
  FUN_005db990();
  iVar11 = FUN_0061c356();
  if (iVar11 == 0) {
    FUN_005d2520();
  }
  FUN_005db990();
  iVar11 = FUN_0061c356();
  if (iVar11 == 0) {
    FUN_005d2520();
  }
  if (DAT_006f2314 != 0) {
    FUN_00613f60();
    FUN_00631d5c();
  }
  iVar11 = FUN_00631d33();
  local_c = 1;
  if (iVar11 == 0) {
    DAT_006f2314 = 0;
  }
  else {
    DAT_006f2314 = FUN_006139b0(0x455de000,0xc58ca000,0);
  }
  local_c = 0xffffffff;
  FUN_005c3fe0();
  if (1 < *(int *)(DAT_006cdbcc + 0x514)) {
    param_1[0x7c6] = 0;
    param_1[0x7bf] = 1;
    param_1[0x7c7] = 0x3ff00000;
    param_1[0x7c1] = 0;
    FUN_0061dd53();
    DAT_006f2434 = FUN_005aa810();
    FUN_0061dd53(param_1[0x7be],0);
    (**(code **)(*param_1 + 0xd8))();
  }
  DAT_006f240c = 0;
  ExceptionList = local_14;
  return;
}


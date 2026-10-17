
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005e2060(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  HINSTANCE hInstance;
  HBITMAP pHVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  HCURSOR pHVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  int *local_c0;
  char *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [4];
  int local_9c;
  int local_98;
  char local_88 [116];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648a75;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = (undefined4 *)FUN_00631d33(0xc0);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00636f84();
    local_b0 = 100;
    local_ac = 100;
    local_4._0_1_ = 1;
    *puVar2 = &PTR_LAB_00651560;
    local_a8 = 200;
    local_a4 = 300;
    FUN_00637795(0,0,0x80000000,&local_b0,0,0,0,0);
    puVar3 = (undefined4 *)FUN_00631d33(8);
    local_4._0_1_ = 2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_005e2500();
      *puVar3 = &PTR_LAB_00651554;
    }
    puVar2[0x2f] = puVar3;
    local_4 = CONCAT31(local_4._1_3_,1);
    if (*(int *)((int)DAT_007206b0 + 0x140) == 1) {
      iVar4 = FUN_00639a37();
      hInstance = *(HINSTANCE *)(iVar4 + 0xc);
      pcVar16 = s_TITLEBMP_006820a8;
    }
    else {
      iVar4 = FUN_00639a37();
      hInstance = *(HINSTANCE *)(iVar4 + 0xc);
      pcVar16 = s_TITLEBMPE_0068209c;
    }
    pHVar5 = LoadBitmapA(hInstance,pcVar16);
    FUN_00636848(pHVar5);
    iVar6 = GetSystemMetrics(0);
    iVar7 = GetSystemMetrics(1);
    iVar4 = 100;
    iVar11 = 200;
    if (*(int *)(puVar2[0x2f] + 4) != 0) {
      GetObjectA(*(HANDLE *)(puVar2[0x2f] + 4),0x18,local_a0);
      iVar4 = local_9c;
      iVar11 = local_98;
    }
    FUN_00632e26(&DAT_0072c9b8,(iVar6 - iVar4) / 2,(iVar7 - iVar11) / 2,iVar4,iVar11,0x40);
  }
  local_4 = 0xffffffff;
  FUN_005e1ff0(100);
  DAT_007206b0 = param_1;
  param_1[0x62] = param_1[0x1a];
  pcVar16 = (char *)FUN_005e3920(param_1[0x23]);
  uVar13 = 0xffffffff;
  pcVar8 = pcVar16;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  DAT_0071fb64 = (char *)FUN_00631d33(~uVar13);
  uVar13 = 0xffffffff;
  pcVar8 = pcVar16;
  do {
    pcVar15 = pcVar8;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  uVar13 = ~uVar13;
  pcVar8 = pcVar15 + -uVar13;
  pcVar15 = DAT_0071fb64;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar15 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar13 = 0xffffffff;
  pcVar8 = pcVar16;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar13 = ~uVar13;
  DAT_0071fb64[uVar13 - 4] = 'e';
  DAT_0071fb64[uVar13 - 3] = 'x';
  DAT_0071fb64[uVar13 - 2] = 'e';
  uVar13 = 0xffffffff;
  pcVar8 = pcVar16;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  iVar4 = FUN_00631d33(~uVar13);
  DAT_007206b0[0x45] = iVar4;
  uVar13 = 0xffffffff;
  do {
    pcVar8 = pcVar16;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar8 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar8;
  } while (cVar1 != '\0');
  uVar13 = ~uVar13;
  pcVar16 = pcVar8 + -uVar13;
  pcVar8 = (char *)DAT_007206b0[0x45];
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar8 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar13 = 0xffffffff;
  pcVar16 = (char *)param_1[0x1c];
  do {
    pcVar8 = pcVar16;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar8 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar8;
  } while (cVar1 != '\0');
  uVar13 = ~uVar13;
  pcVar16 = pcVar8 + -uVar13;
  pcVar8 = local_88;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar8 = pcVar8 + 4;
  }
  local_c0 = (int *)0x1;
  puVar2 = &DAT_0071fb68;
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar8 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar8 = pcVar8 + 1;
  }
  local_b4 = local_88;
  do {
    pcVar16 = (char *)FUN_005aa880(&local_b4);
    if (pcVar16 == (char *)0x0) break;
    uVar13 = 0xffffffff;
    pcVar8 = pcVar16;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar8 = (char *)FUN_00631d33(~uVar13);
    uVar13 = 0xffffffff;
    *puVar2 = pcVar8;
    do {
      pcVar15 = pcVar16;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar15 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar15;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    puVar2 = puVar2 + 1;
    pcVar16 = pcVar15 + -uVar13;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar8 = pcVar8 + 4;
    }
    local_c0 = (int *)((int)local_c0 + 1);
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar8 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar8 = pcVar8 + 1;
    }
  } while ((int)puVar2 < 0x71fbc8);
  FUN_00639eab(0xc0c0c0,0);
  FUN_00639d57();
  FUN_005e31e0();
  if ((DAT_007206b0[0x43] & 0x400U) == 0) {
    pHVar9 = LoadCursorA((HINSTANCE)param_1[0x1a],(LPCSTR)0x0);
    *(HCURSOR *)(param_1[0x60] + 0xc0) = pHVar9;
  }
  else {
    SetCapture(*(HWND *)(DAT_007206b0[0x60] + 0x1c));
  }
  param_1[7] = param_1[0x60];
  param_1[0x61] = *(int *)(param_1[0x60] + 0x1c);
  iVar7 = GetSystemMetrics(0);
  iVar10 = GetSystemMetrics(1);
  iVar11 = DAT_007206b0[0x40];
  iVar4 = FUN_005d3620();
  iVar4 = iVar4 * iVar11;
  iVar6 = DAT_007206b0[0x41];
  iVar11 = FUN_005d3630();
  iVar11 = iVar11 * iVar6;
  if ((*(byte *)(DAT_007206b0 + 0x49) & 2) != 0) {
    iVar6 = FUN_005d7bf0(2);
    iVar12 = FUN_005d7bf0(1);
    iVar4 = iVar12 + iVar4 + iVar6;
    iVar6 = FUN_005d7bf0(4);
    iVar12 = FUN_005d7bf0(3);
    iVar11 = iVar12 + iVar11 + iVar6;
  }
  uVar13 = DAT_007206b0[0x49];
  DAT_007206b0[0x49] = uVar13 & 0xfffffffe;
  FUN_00632e26(&DAT_0072c9b8,(iVar7 - iVar4) / 2,(iVar10 - iVar11) / 2,iVar4,iVar11,0x40);
  DAT_007206b0[0x49] = DAT_007206b0[0x49] | uVar13 & 1;
  (**(code **)(*param_1 + 0x9c))(local_c0,&DAT_0071fb64);
  if (local_c0 != (int *)0x0) {
    (**(code **)(*local_c0 + 4))(1);
  }
  param_1[0x52] = 1;
  _DAT_007206d8 = 1;
  iVar4 = FUN_005e8290(s_menu_fon_006751b8);
  param_1[0x44] = iVar4;
  ExceptionList = pvStack_14;
  return 1;
}


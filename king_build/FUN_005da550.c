
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005da550(uint param_1,byte *param_2,char *param_3,char *param_4)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 uVar12;
  char *pcVar13;
  bool bVar14;
  char *pcVar15;
  undefined4 *puVar16;
  uint local_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006487a6;
  pvStack_c = ExceptionList;
  uVar8 = 0xffffffff;
  do {
    pcVar15 = param_3;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar15;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar15 = pcVar15 + -uVar8;
  pcVar13 = (char *)&DAT_0071fac0;
  ExceptionList = &pvStack_c;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  DAT_0071f92c = (char *)&DAT_0071fac0;
  if ((char)DAT_0071fac0 == '\"') {
    uVar8 = 0xffffffff;
    DAT_0071f92c = (char *)((int)&DAT_0071fac0 + 1);
    pcVar15 = (char *)((int)&DAT_0071fac0 + 1);
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar2 != '\0');
    (&DAT_0071fabf)[~uVar8] = 0;
  }
  uVar8 = 0xffffffff;
  pcVar15 = DAT_0071f92c;
  do {
    pcVar13 = pcVar15;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar15 + 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  pcVar15 = pcVar13 + -uVar8;
  pcVar13 = (char *)&DAT_0071fb14;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar15 = (char *)&DAT_0071fb14;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (cVar2 != '\0');
  local_2c = param_1;
  if (~uVar8 - 1 < 5) {
    FUN_005d2520(s_Incorrect_b3d_file_name_00681cc0,0);
  }
  uVar8 = 0xffffffff;
  pcVar15 = (char *)&DAT_0071fb14;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (cVar2 != '\0');
  (&DAT_0071fb0f)[~uVar8] = 0;
  iVar4 = FUN_00631d33(0xb4);
  local_4 = 0;
  if (iVar4 == 0) {
    param_3 = (char *)0x0;
  }
  else {
    param_3 = (char *)FUN_005e9eb0(&DAT_0071fb14);
  }
  puVar16 = *(undefined4 **)(param_1 + 0x1d4);
  local_4 = 0xffffffff;
  if (puVar16 == (undefined4 *)0x0) {
    *(char **)(param_1 + 0x1d4) = param_3;
  }
  else {
    if (puVar16[0x19] == 0) {
      *(char **)(param_1 + 0x1d4) = param_3;
      puVar16 = (undefined4 *)param_3;
    }
    FUN_005d1840(puVar16);
  }
  uVar8 = 0xffffffff;
  pcVar15 = DAT_0071f92c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (cVar2 != '\0');
  uVar9 = 0xffffffff;
  pbVar5 = param_2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    bVar3 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar3 != 0);
  if (0x7f < ~uVar8 + (~uVar9 - 1)) {
    FUN_005d2520(s_The_path_is_too_long__00681ca8,0);
  }
  pbVar11 = &DAT_00670204;
  pbVar5 = param_2;
  do {
    bVar3 = *pbVar5;
    bVar14 = bVar3 < *pbVar11;
    if (bVar3 != *pbVar11) {
LAB_005da6ee:
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_005da6f3;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar5[1];
    bVar14 = bVar3 < pbVar11[1];
    if (bVar3 != pbVar11[1]) goto LAB_005da6ee;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar3 != 0);
  iVar4 = 0;
LAB_005da6f3:
  if (iVar4 == 0) {
    DAT_00720178._0_1_ = '\0';
  }
  else {
    uVar8 = 0xffffffff;
    pbVar5 = param_2;
    do {
      pbVar11 = pbVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar11 = pbVar5 + 1;
      bVar3 = *pbVar5;
      pbVar5 = pbVar11;
    } while (bVar3 != 0);
    uVar8 = ~uVar8;
    pbVar5 = pbVar11 + -uVar8;
    pbVar11 = (byte *)&DAT_00720178;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar11 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar11 = pbVar11 + 1;
    }
  }
  uVar8 = 0xffffffff;
  pcVar15 = DAT_0071f92c;
  do {
    pcVar13 = pcVar15;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar15 + 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8;
  iVar4 = -1;
  pcVar15 = (char *)&DAT_00720178;
  do {
    pcVar6 = pcVar15;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar15 + 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar6;
  } while (cVar2 != '\0');
  pcVar15 = pcVar13 + -uVar8;
  pcVar13 = pcVar6 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  iVar4 = FUN_0061c356(&DAT_00720178,&DAT_0066f3e8);
  if (iVar4 == 0) {
    uVar8 = 0xffffffff;
    pcVar15 = s_is_not_found_00681c98;
    do {
      pcVar13 = pcVar15;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8;
    iVar10 = -1;
    pcVar15 = (char *)&DAT_00720178;
    do {
      pcVar6 = pcVar15;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar6 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar6;
    } while (cVar2 != '\0');
    pcVar15 = pcVar13 + -uVar8;
    pcVar13 = pcVar6 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_005d2520(&DAT_00720178,0);
  }
  uVar8 = local_2c;
  if (*(code **)(local_2c + 0x218) != (code *)0x0) {
    (**(code **)(local_2c + 0x218))();
  }
  *(undefined4 *)((int)param_3 + 0x38) = *(undefined4 *)(uVar8 + 0x218);
  _DAT_0071d78c = (undefined4 *)param_3;
  iVar10 = FUN_005ecce0(iVar4);
  if (iVar10 == 0) {
    iVar10 = FUN_005d2640();
    if (iVar10 < 500000) {
      pcVar15 = s_Not_enough_memory_00681be4;
    }
    else {
      pcVar15 = s___b3d_is_bad_00681c88;
    }
    FUN_005d2520(pcVar15,0);
  }
  FUN_0061c25a(iVar4);
  if (param_4 == (char *)0x0) {
    pcVar6 = (char *)&DAT_00720178;
    cVar2 = (char)DAT_00720178;
    while ((cVar2 != '\0' && (cVar2 != '.'))) {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
  }
  else {
    pbVar11 = &DAT_00670204;
    pbVar5 = param_2;
    do {
      bVar3 = *pbVar5;
      bVar14 = bVar3 < *pbVar11;
      if (bVar3 != *pbVar11) {
LAB_005da859:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_005da85e;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar5[1];
      bVar14 = bVar3 < pbVar11[1];
      if (bVar3 != pbVar11[1]) goto LAB_005da859;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar3 != 0);
    iVar4 = 0;
LAB_005da85e:
    if (iVar4 == 0) {
      DAT_00720178._0_1_ = '\0';
    }
    else {
      uVar8 = 0xffffffff;
      pbVar5 = param_2;
      do {
        pbVar11 = pbVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pbVar11 = pbVar5 + 1;
        bVar3 = *pbVar5;
        pbVar5 = pbVar11;
      } while (bVar3 != 0);
      uVar8 = ~uVar8;
      pbVar5 = pbVar11 + -uVar8;
      pbVar11 = (byte *)&DAT_00720178;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar11 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar11 = pbVar11 + 1;
      }
    }
    uVar8 = 0xffffffff;
    do {
      pcVar15 = param_4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar15 = param_4 + 1;
      cVar2 = *param_4;
      param_4 = pcVar15;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8;
    iVar4 = -1;
    pcVar13 = (char *)&DAT_00720178;
    do {
      pcVar6 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar2 != '\0');
    pcVar15 = pcVar15 + -uVar8;
    pcVar13 = pcVar6 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    pcVar6 = (char *)&DAT_00720178;
    for (uVar8 = uVar8 & 3; cVar2 = (char)DAT_00720178, uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    while ((cVar2 != '\0' && (cVar2 != '.'))) {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
  }
  *pcVar6 = '.';
  DAT_0071f930 = (char *)&DAT_00720178;
  if (*(int *)(DAT_007206b0 + 0x158) != 0) {
    FUN_005fc460();
  }
  iVar4 = FUN_005da350(param_3,param_2,DAT_0071f930);
  if (iVar4 == 0) {
    if ((char *)*(undefined4 **)(local_2c + 0x1d4) == param_3) {
      *(undefined4 *)(local_2c + 0x1d4) = 0;
    }
    if (param_3 != (char *)0x0) {
      (*(code *)**(undefined4 **)param_3)(1);
    }
    param_3 = (char *)0x0;
  }
  puVar16 = (undefined4 *)param_3;
  DAT_0071f930 = (char *)&DAT_00720178;
  cVar2 = (char)DAT_00720178;
  while (cVar2 != '\0') {
    DAT_0071f930 = DAT_0071f930 + 1;
    cVar2 = *DAT_0071f930;
  }
  if (*DAT_0071f930 != '.') {
    do {
      if (DAT_0071f930 < (char *)((int)&DAT_00720178 + 1)) break;
      DAT_0071f930 = DAT_0071f930 + -1;
    } while (*DAT_0071f930 != '.');
    if (*DAT_0071f930 != '.') goto LAB_005daa03;
  }
  DAT_0071f930 = DAT_0071f930 + 1;
  uVar12 = 1;
  *DAT_0071f930 = 'o';
  DAT_0071f930 = DAT_0071f930 + 1;
  *DAT_0071f930 = 'v';
  DAT_0071f930 = DAT_0071f930 + 1;
  *DAT_0071f930 = 'l';
  DAT_0071f930 = DAT_0071f930 + 1;
  *DAT_0071f930 = '\0';
  if ((iVar4 == 3) || ((iVar4 == 2 && (DAT_0071f864 != 0)))) {
    uVar12 = 0;
  }
  iVar4 = FUN_00631d33(0x14);
  local_4 = 1;
  if (iVar4 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_005edbb0(&DAT_00720178,param_3,uVar12);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)param_3 + 0x88) = uVar12;
LAB_005daa03:
  if ((*(int *)((int)param_3 + 0x58) != 0) && ((*(uint *)(DAT_007206b0 + 0x10c) & 0x800) != 0)) {
    FUN_005ba4e0(0);
  }
  uVar8 = local_2c;
  iVar4 = 0;
  if (0 < *(int *)((int)param_3 + 0x48)) {
    iVar10 = 0;
    do {
      if ((*(byte *)(*(int *)((int)param_3 + 0x4c) + iVar10 + 0x20) & 2) != 0) {
        puVar1 = (uint *)(*(int *)(*(int *)((int)param_3 + 0x54) +
                                  *(int *)(*(int *)((int)param_3 + 0x4c) + iVar10 + 0x38) * 4) +
                         0x34);
        *puVar1 = *puVar1 | 8;
      }
      if ((*(byte *)(iVar10 + 0x20 + *(int *)((int)param_3 + 0x4c)) & 0x40) != 0) {
        iVar7 = *(int *)(*(int *)((int)param_3 + 0x54) +
                        *(int *)(iVar10 + *(int *)((int)param_3 + 0x4c) + 0x38) * 4);
        uVar9 = *(uint *)(iVar7 + 0x34);
        if ((uVar9 & 8) == 0) {
          *(uint *)(iVar7 + 0x34) = uVar9 | 0x40;
        }
      }
      iVar4 = iVar4 + 1;
      iVar10 = iVar10 + 0x7c;
    } while (iVar4 < *(int *)((int)param_3 + 0x48));
  }
  iVar4 = 0;
  if (0 < *(int *)((int)param_3 + 0x68)) {
    do {
      if (*(int *)(*(int *)(uVar8 + 0x1d4) + 100) == 0) {
        FUN_005d2520(s_Module_has_masks_and_has_not_pal_00681c60,0);
      }
      FUN_005bb5b0(**(undefined4 **)(*(int *)(uVar8 + 0x1d4) + 100));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)param_3 + 0x68));
  }
  if (DAT_0071f864 != 0) {
    uStack_24 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    if (*(int *)(*(int *)(uVar8 + 0x1d4) + 100) == 0) {
      FUN_005d2520(s_Base_module_have_not_palette_00681c40,0);
    }
    uStack_14 = *(undefined4 *)((int)param_3 + 0x4c);
    uStack_10 = **(undefined4 **)(*(int *)(uVar8 + 0x1d4) + 100);
    FUN_005ea330(&LAB_005dad20,&uStack_24);
    param_2 = (byte *)0x0;
    if (0 < *(int *)((int)param_3 + 0x48)) {
      param_3 = (char *)0x0;
      do {
        iVar4 = (int)param_3 + puVar16[0x13];
        if ((*(byte *)(iVar4 + 0x20) & 1) != 0) {
          iVar10 = *(int *)(iVar4 + 0x4c);
          if (((*(short *)(iVar10 + 0x1a) == 0) && (*(short *)(iVar10 + 0x14) != 1)) &&
             (*(short *)(iVar10 + 0x16) != 1)) {
            FUN_005d2520(s_check_format_resolution__of_00681c20,iVar4);
          }
          if ((*(uint *)(iVar4 + 0x20) & 0x200) != 0) {
            *(uint *)(iVar10 + 0x34) = *(uint *)(iVar10 + 0x34) | 0x100;
          }
          uVar9 = *(uint *)(iVar10 + 0x34);
          if (((uVar9 & 1) != 0) && ((uVar9 & 2) == 0)) {
            iVar7 = FUN_005ba4e0(uVar9 >> 10 & 1);
            if (iVar7 == 0) {
              FUN_005d2250(iVar4,param_2);
            }
            if (*(int *)(iVar10 + 0x40) == 8) {
              *(uint *)(iVar4 + 0x20) = *(uint *)(iVar4 + 0x20) | 0x80000;
            }
            if (((*(uint *)(iVar4 + 0x20) & 0x80000) != 0) && (DAT_0071f824 == 0)) {
              *(undefined4 *)(iVar10 + 0x40) = 5;
            }
            if ((*(byte *)(iVar10 + 0x34) & 8) != 0) {
              pbVar5 = (byte *)((*(int *)(iVar4 + 0x28) + 8) * 3 +
                               **(int **)(*(int *)(uVar8 + 0x1d4) + 100));
              local_2c = ((*pbVar5 & 0xfffffff8) << 5 | pbVar5[1] & 0xfffffffc) << 3 |
                         (uint)(pbVar5[2] >> 3);
              uStack_28 = local_2c;
              iVar4 = (**(code **)(**(int **)(iVar10 + 0x48) + 0x74))
                                (*(int **)(iVar10 + 0x48),8,&local_2c);
              if (iVar4 != 0) {
                uVar12 = FUN_005d42c0(iVar4,0,0);
                FUN_005d2250(uVar12);
              }
            }
          }
        }
        param_2 = (byte *)((int)param_2 + 1);
        param_3 = (char *)((int)param_3 + 0x7c);
      } while ((int)param_2 < (int)puVar16[0x12]);
    }
    iVar4 = 0;
    if (0 < (int)puVar16[0x1a]) {
      do {
        if ((*(byte *)(*(int *)(puVar16[0x1b] + iVar4 * 4) + 0x1c) & 1) != 0) {
          FUN_005bb710();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)puVar16[0x1a]);
    }
    iVar4 = 0;
    if (0 < (int)puVar16[0x14]) {
      do {
        uVar8 = *(uint *)(*(int *)(puVar16[0x15] + iVar4 * 4) + 0x34);
        if (((uVar8 & 1) != 0) && ((uVar8 & 2) == 0)) {
          FUN_005ba4e0(((byte)(uVar8 >> 8) & 4 | 8) >> 2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)puVar16[0x14]);
    }
  }
  iVar4 = FUN_00631d33(50000);
  if (iVar4 == 0) {
    FUN_005d2520(s_Not_enough_memory_00681be4,0);
  }
  else {
    FUN_00631d5c(iVar4);
  }
  _DAT_0071d78c = (undefined4 *)0x0;
  ExceptionList = pvStack_c;
  return puVar16;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005dbb90(undefined4 *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  bool bVar15;
  float10 fVar16;
  int local_54;
  undefined4 *local_50;
  byte local_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648870;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_50 = param_1;
  FUN_005d93a0(*(undefined4 *)(DAT_007206b0 + 0xfc),param_2,param_1);
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  local_4 = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  puVar3 = param_1 + 0xa5;
  iVar7 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar3 = &DAT_00701550;
  puVar12 = param_1 + 0xa3;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_005e4100();
  local_4._0_1_ = 1;
  FUN_005ea810();
  param_1[0x2ed] = 0;
  param_1[0x2ef] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2ee] = 0;
  param_1[0x2f2] = 0;
  local_4._0_1_ = 3;
  FUN_005b8b90();
  *param_1 = &PTR_FUN_00651300;
  uVar8 = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,4);
  pcVar4 = *(char **)(DAT_007206b0 + 0x118);
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)FUN_00631d33(~uVar8);
  uVar8 = 0xffffffff;
  param_1[0xa0] = pcVar4;
  pcVar10 = *(char **)(DAT_007206b0 + 0x118);
  do {
    pcVar13 = pcVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar10 = pcVar13 + -uVar8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  FUN_005dcde0();
  if ((*(uint *)(DAT_007206b0 + 0x10c) & 0x100) != 0) {
    param_1[0x2f3] = param_1[0x2f3] | 0x100;
  }
  if (*(int *)(DAT_007206b0 + 0x108) == 1) {
    param_1[0x2f3] = param_1[0x2f3] | 0x20;
  }
  FUN_00603230(&DAT_006720a0,s_taskdump_00681df8,0,&local_54,param_1[0xa0]);
  if (local_54 != 0) {
    DAT_007206c8 = 1;
    param_1[0x2f1] = 1;
    FUN_005d17b0(s_state_dump_00681dec,0x80000);
  }
  FUN_00603230(&DAT_006720a0,s_debugtime_00681de0,0,&local_54,param_1[0xa0]);
  param_1[0x2f6] = local_54;
  GetPrivateProfileStringA
            (&DAT_006720a0,s_stereo_00681dd8,&DAT_006719a8,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  param_2 = local_4c;
  pbVar5 = (byte *)FUN_005aa880(&param_2);
  if (pbVar5 != (byte *)0x0) {
    pbVar11 = &DAT_00671994;
    do {
      bVar2 = *pbVar5;
      bVar15 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_005dbde6:
        iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_005dbdeb;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar15 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_005dbde6;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_005dbdeb:
    if (iVar7 == 0) {
      param_1[0x2fe] = 0;
      param_1[0x300] = 0;
      param_1[0x2ff] = 0x40000000;
      param_1[0x301] = 0;
      iVar7 = FUN_005aa880(&param_2);
      if (iVar7 != 0) {
        fVar16 = (float10)FUN_0061f358(iVar7);
        *(double *)(param_1 + 0x2fe) = (double)fVar16;
        iVar7 = FUN_005aa880(&param_2);
        if (iVar7 != 0) {
          fVar16 = (float10)FUN_0061f358(iVar7);
          *(double *)(param_1 + 0x300) = (double)(fVar16 * (float10)_DAT_0064cad0);
        }
      }
    }
  }
  FUN_00603230(s_RENDER_00681dc4,s_skyshift_00681dcc,0,param_1[0x76] + 0x50,param_1[0xa0]);
  FUN_00603230(s_RENDER_00681dc4,s_showfacemode_00681db4,0,&local_54,param_1[0xa0]);
  DAT_007206d0 = local_54;
  FUN_00603370(s_RENDER_00681dc4,s_ambient_00681dac,0x33333333,0x3fd33333,param_1[0x76] + 0x30,
               param_1[0xa0]);
  FUN_00603230(s_RENDER_00681dc4,s_detail_00681da4,100,param_1[0x76] + 0x70,param_1[0xa0]);
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_intensity_00681d98,&DAT_00671994,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dbf36:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dbf3b;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dbf36;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dbf3b:
  if (iVar7 == 0) {
    param_1[0x2f3] = param_1[0x2f3] | 0x40;
  }
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_intenmap_00681d8c,&DAT_006719a8,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dbf9d:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dbfa2;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dbf9d;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dbfa2:
  if (iVar7 == 0) {
    param_1[0x2f3] = param_1[0x2f3] | 0x10;
  }
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_alphamir_00681d80,&DAT_00671994,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dc004:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc009;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dc004;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc009:
  if (iVar7 == 0) {
    param_1[0x2f3] = param_1[0x2f3] | 0x1000000;
  }
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_shadow_00671650,&DAT_006719a8,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dc067:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc06c;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dc067;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc06c:
  if (iVar7 == 0) {
    param_1[0x2f3] = param_1[0x2f3] | 8;
  }
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_multitex_00681d74,&DAT_00671994,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dc0cb:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc0d0;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dc0cb;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc0d0:
  if (iVar7 != 0) {
    param_1[0x2f3] = param_1[0x2f3] | 0x2000000;
  }
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_newkeying_00681d68,&DAT_006719a8,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dc12e:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc133;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dc12e;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc133:
  if (iVar7 == 0) {
    param_1[0x2f3] = param_1[0x2f3] | 0x4000000;
  }
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,&DAT_00681d64,&DAT_006719a8,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  param_2 = local_4c;
  pbVar5 = (byte *)FUN_005aa880(&param_2);
  if (pbVar5 != (byte *)0x0) {
    pbVar11 = &DAT_00671994;
    do {
      bVar2 = *pbVar5;
      bVar15 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_005dc1aa:
        iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_005dc1af;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar15 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_005dc1aa;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_005dc1af:
    if (iVar7 == 0) {
      param_1[0x2f3] = param_1[0x2f3] | 4;
      iVar7 = param_1[0x76];
      *(undefined4 *)(iVar7 + 0x18) = 0;
      *(undefined4 *)(iVar7 + 0x1c) = 0x4072c000;
      iVar7 = param_1[0x76];
      *(undefined4 *)(iVar7 + 0x10) = 0;
      *(undefined4 *)(iVar7 + 0x14) = 0x408c2000;
      *(undefined4 *)(param_1[0x76] + 0x48) = 8;
      iVar7 = FUN_005aa880(&param_2);
      if (iVar7 != 0) {
        fVar16 = (float10)FUN_0061f358(iVar7);
        *(double *)(param_1[0x76] + 0x18) = (double)fVar16;
        iVar7 = FUN_005aa880(&param_2);
        if (iVar7 == 0) {
          *(double *)(param_1[0x76] + 0x10) = *(double *)(param_1[0x76] + 0x18) * _DAT_0064a778;
        }
        else {
          fVar16 = (float10)FUN_0061f358(iVar7);
          *(double *)(param_1[0x76] + 0x10) = (double)fVar16;
          iVar7 = FUN_005aa880(&param_2);
          if (iVar7 != 0) {
            uVar6 = FUN_0061f2c2(iVar7);
            *(undefined4 *)(param_1[0x76] + 0x48) = uVar6;
          }
        }
      }
      if (-1 < *(int *)(DAT_007206b0 + 0x128)) {
        *(undefined4 *)(DAT_007206b0 + 0x128) = *(undefined4 *)(param_1[0x76] + 0x48);
      }
    }
  }
  FUN_00603370(s_RENDER_00681dc4,s_dcoeff_00681d5c,0,0x3ff00000,param_1[0x76] + 0x78,param_1[0xa0]);
  FUN_00603370(s_RENDER_00681dc4,s_farplane_00681d50,0,0x40f86a00,param_1[0x76] + 0x20,param_1[0xa0]
              );
  FUN_00603370(s_RENDER_00681dc4,s_nearplane_00681d44,0,0x3ff00000,param_1[0x76] + 0x28,
               param_1[0xa0]);
  FUN_00603370(s_RENDER_00681dc4,s_skyzb_00681d3c,0,0,param_1[0x76] + 0x60,param_1[0xa0]);
  FUN_00603370(s_RENDER_00681dc4,s_skyfun_00681d34,0,0x3ff00000,param_1[0x76] + 0x68,param_1[0xa0]);
  FUN_00603370(s_RENDER_00681dc4,s_tanglimith_00681d28,0x5436b8fa,0x4073a28c,&DAT_00681948,
               param_1[0xa0]);
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,&DAT_00681d20,&DAT_00671994,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dc3b6:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc3bb;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dc3b6;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc3bb:
  if (iVar7 == 0) {
    param_1[0x2f3] = param_1[0x2f3] | 0x4000;
  }
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_antialiasing_00681d10,&DAT_006719a8,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dc41e:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc423;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dc41e;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc423:
  if (iVar7 == 0) {
    param_1[0x2f3] = param_1[0x2f3] & 0xffffbfff | 0x80;
  }
  GetPrivateProfileStringA
            (s_RENDER_00681dc4,s_ponly_00681d08,&DAT_006719a8,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_00671994;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dc488:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc48d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dc488;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc48d:
  if (iVar7 == 0) {
    param_1[0x2f3] = param_1[0x2f3] | 2;
  }
  FUN_00603370(s_RENDER_00681dc4,s_xpyramid_0067d0ec,0x9999999a,0x3fe99999,param_1 + 0x2fa,
               param_1[0xa0]);
  FUN_00603370(s_RENDER_00681dc4,s_ypyramid_00681cfc,0x33333333,0x3fe33333,param_1 + 0x2fc,
               param_1[0xa0]);
  GetPrivateProfileStringA
            (s_INSTALL_006751a4,&DAT_00681cf4,&DAT_006751b4,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  uVar8 = 0xffffffff;
  pbVar5 = local_4c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar2 != 0);
  pbVar5 = (byte *)FUN_00631d33(~uVar8 + 1);
  uVar8 = 0xffffffff;
  param_1[0xa1] = pbVar5;
  pbVar11 = local_4c;
  do {
    pbVar14 = pbVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pbVar14 = pbVar11 + 1;
    bVar2 = *pbVar11;
    pbVar11 = pbVar14;
  } while (bVar2 != 0);
  uVar8 = ~uVar8;
  pbVar11 = pbVar14 + -uVar8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    pbVar5 = pbVar5 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar5 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar5 = pbVar5 + 1;
  }
  param_2 = (byte *)param_1[0xa1];
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  pcVar4 = s___noinst_00681ce8;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < (byte)*pcVar4;
    if (bVar2 != *pcVar4) {
LAB_005dc597:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc59c;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < (byte)pcVar4[1];
    if (bVar2 != pcVar4[1]) goto LAB_005dc597;
    pbVar5 = pbVar5 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc59c:
  if (iVar7 == 0) {
    uVar6 = FUN_005d2500(1);
    FUN_005d25a0(uVar6);
  }
  else {
    *param_2 = '\\';
    param_2[1] = '\0';
    param_2 = param_2 + 2;
  }
  GetPrivateProfileStringA
            (s_INSTALL_006751a4,&DAT_00681ce0,&DAT_006751b4,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  uVar8 = 0xffffffff;
  pbVar5 = local_4c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar2 != 0);
  pbVar5 = (byte *)FUN_00631d33(~uVar8 + 1);
  uVar8 = 0xffffffff;
  param_1[0xa2] = pbVar5;
  pbVar11 = local_4c;
  do {
    pbVar14 = pbVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pbVar14 = pbVar11 + 1;
    bVar2 = *pbVar11;
    pbVar11 = pbVar14;
  } while (bVar2 != 0);
  uVar8 = ~uVar8;
  pbVar11 = pbVar14 + -uVar8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    pbVar5 = pbVar5 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar5 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar5 = pbVar5 + 1;
  }
  param_2 = (byte *)param_1[0xa2];
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  pcVar4 = s___noinst_00681ce8;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < (byte)*pcVar4;
    if (bVar2 != *pcVar4) {
LAB_005dc670:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc675;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < (byte)pcVar4[1];
    if (bVar2 != pcVar4[1]) goto LAB_005dc670;
    pbVar5 = pbVar5 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc675:
  if (iVar7 != 0) {
    *param_2 = '\\';
    param_2[1] = '\0';
    param_2 = param_2 + 2;
  }
  GetPrivateProfileStringA
            (s_INSTALL_006751a4,s_setup_00681cd8,&DAT_00671994,(LPSTR)local_4c,0x3c,
             (LPCSTR)param_1[0xa0]);
  pbVar11 = &DAT_006719a8;
  pbVar5 = local_4c;
  do {
    bVar2 = *pbVar5;
    bVar15 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_005dc6e0:
      iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_005dc6e5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar15 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_005dc6e0;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_005dc6e5:
  if (iVar7 == 0) {
    uVar6 = FUN_005d2500(2);
    FUN_005d25a0(uVar6);
    DAT_00701dec = param_1[0x2f3];
  }
  else {
    DAT_00701dec = param_1[0x2f3];
  }
  ExceptionList = pvStack_c;
  return param_1;
}


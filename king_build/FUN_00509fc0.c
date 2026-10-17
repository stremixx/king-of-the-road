
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509fc0(LPCSTR param_1,int param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  bool bVar15;
  float10 fVar16;
  CHAR *pCVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  float local_688;
  float local_684;
  float local_680;
  float local_67c;
  int local_678;
  int local_674;
  float local_670;
  HMODULE local_66c;
  float local_668;
  CHAR local_664 [20];
  float local_650;
  FARPROC local_64c;
  float local_648;
  float local_644;
  float local_640;
  float local_63c;
  float local_638;
  undefined4 local_634;
  float local_630;
  float local_62c;
  float local_628;
  float local_624;
  float local_620;
  undefined4 local_61c;
  float local_618;
  float local_614;
  undefined4 local_610;
  float local_60c;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float local_5e4;
  undefined4 local_5e0;
  float local_5dc;
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  byte local_5a0 [72];
  undefined4 local_558 [9];
  undefined1 local_534 [12];
  undefined4 local_528 [12];
  float local_4f8;
  float local_4f4;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  undefined1 local_4dc [4];
  float fStack_4d8;
  undefined1 local_4d4 [8];
  float local_4cc [58];
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  float local_3c4;
  int local_3c0;
  undefined4 local_3bc;
  float local_3b8;
  float local_3b4;
  undefined4 local_3b0;
  float local_3ac;
  float local_3a8;
  undefined4 local_3a4;
  float local_3a0;
  float local_39c;
  undefined4 local_398;
  float local_394;
  float local_390;
  undefined4 local_38c;
  float local_388 [80];
  int local_248;
  float local_244;
  float local_240;
  UINT UStack_23c;
  undefined4 uStack_238;
  byte local_234 [200];
  undefined1 local_16c [116];
  undefined1 local_f8 [48];
  undefined1 local_c8 [200];
  
  iVar5 = FUN_006310b6(param_1);
  if (iVar5 == -1) {
    pbVar6 = local_234;
    uVar18 = CONCAT44(param_1,s_tch_file___s__not_found_006742a0);
    FUN_0061c369();
    FUN_00507500(local_234,pbVar6,uVar18);
  }
  local_674 = 1;
  DAT_006cd2b0 = 0;
  DAT_006cd2b4 = 0;
  DAT_006cd2b8 = 0;
  DAT_006cd2bc = 0;
  DAT_006cd2c0 = 0;
  DAT_006cd2c4 = 0;
  DAT_006cd2c8 = 0;
  local_64c = (FARPROC)0x0;
  local_66c = (HMODULE)0x0;
  if ((param_2 != 0) &&
     ((local_66c = LoadLibraryA(s_qhdll_dll_00674294), local_66c == (HMODULE)0x0 ||
      (local_64c = GetProcAddress(local_66c,s_make_qh_planes_00674270), local_64c == (FARPROC)0x0)))
     ) {
    FUN_00507500();
  }
  SetFileAttributesA(param_1,0x20);
  DAT_006cd2ac = 0;
  local_678 = 0;
  do {
    FUN_004011e0(local_558,0xc,4,FUN_004042a0);
    puVar7 = &DAT_00701550;
    puVar14 = local_558;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar14 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar14 = puVar14 + 1;
    }
    FUN_004011e0(local_528,0xc,4,FUN_004042a0);
    puVar7 = &DAT_00701550;
    puVar14 = local_528;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar14 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar14 = puVar14 + 1;
    }
    local_4f8 = 0.0;
    local_4f4 = 0.0;
    local_4f0 = 0.0;
    local_4ec = 0.0;
    local_4e8 = 0.0;
    local_4e4 = 0.0;
    iVar5 = 0x14;
    do {
      FUN_004042a0();
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_3e4 = 0.0;
    local_3e0 = 0.0;
    local_3dc = 0.0;
    local_3d8 = 0.0;
    local_3d4 = 0.0;
    local_3d0 = 0.0;
    FUN_004042a0();
    FUN_004011e0(&local_3b8,0xc,4,FUN_004042a0);
    FUN_004011e0(local_388,0x10,0x14,FUN_004042a0);
    switch(local_678) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
    }
    FUN_0061c369();
    switch(local_678) {
    case 0:
      DAT_006cd2b4 = DAT_006cd2ac;
    case 1:
      DAT_006cd2b8 = DAT_006cd2ac;
    case 2:
      DAT_006cd2bc = DAT_006cd2ac;
    case 3:
      DAT_006cd2c0 = DAT_006cd2ac;
    case 4:
      DAT_006cd2c4 = DAT_006cd2ac;
    case 5:
      DAT_006cd2c8 = DAT_006cd2ac;
    }
    FUN_006033f0(local_664);
    if (_DAT_0064b254 <= local_4e0) {
      if (DAT_006cd2ac == 0x23) {
        FUN_0061c369(local_234,&DAT_00674208,local_664);
        FUN_00507500();
      }
      FUN_0061c369();
      GetPrivateProfileStringA(local_664,&DAT_0066be44,&DAT_006719a8,(LPSTR)local_234,0x14,param_1);
      pbVar11 = &DAT_006719a8;
      pbVar6 = local_234;
      do {
        bVar2 = *pbVar6;
        bVar15 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_0050a32c:
          iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_0050a331;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar15 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_0050a32c;
        pbVar6 = pbVar6 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_0050a331:
      if (iVar5 == 0) {
        FUN_0061c369();
        if (local_678 != 0) {
          FUN_0061c369(local_234,s_in_the__s_there_is_NO_any_node_i_006741b0,param_1);
          FUN_00507500();
        }
      }
      else {
        uVar9 = 0xffffffff;
        pbVar6 = local_234;
        do {
          pbVar11 = pbVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar6 + 1;
          bVar2 = *pbVar6;
          pbVar6 = pbVar11;
        } while (bVar2 != 0);
        uVar9 = ~uVar9;
        pbVar6 = pbVar11 + -uVar9;
        pbVar11 = local_5a0;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pbVar11 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + 4;
          pbVar11 = pbVar11 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar11 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar11 = pbVar11 + 1;
        }
      }
      local_674 = local_674 + 1;
      puVar7 = &DAT_00701550;
      puVar14 = local_558;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar14 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar14 = puVar14 + 1;
      }
      uVar20 = CONCAT44(param_1,local_534);
      pCVar17 = local_664;
      uVar18 = 0x7015b000673df8;
      FUN_00507580();
      puVar7 = (undefined4 *)FUN_005aba00(local_f8,local_558,pCVar17,uVar18,uVar20);
      puVar14 = local_528;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar14 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar14 = puVar14 + 1;
      }
      FUN_00507580(local_664,s_CollisionCenter_00673dbc,&DAT_007015b0,&local_4ec,param_1);
      FUN_006033f0(local_664,s_CollisionRadius_00673dac,0,0x3ff00000,local_4dc,param_1);
      local_5c4 = 0x43fa0000;
      local_5c0 = 0x43480000;
      local_5bc = 0x43fa0000;
      FUN_00507580();
      local_3c0 = 0;
      iVar5 = 0;
      puVar12 = local_4d4;
      do {
        iVar5 = iVar5 + 1;
        puVar19 = local_16c;
        uVar18 = CONCAT44(iVar5,s_Corner_Mark__d_00673d28);
        FUN_0061c369();
        iVar8 = FUN_00507580(local_664,local_16c,&DAT_007015b0,puVar12,param_1,puVar19,uVar18);
        if (iVar8 == 0) break;
        puVar12 = puVar12 + 0xc;
        local_3c0 = local_3c0 + 1;
      } while (iVar5 < 0x14);
      local_244 = 0.0;
      if (local_678 != 3) {
        iVar5 = 0;
        local_688 = 10000.0;
        local_680 = -10000.0;
        local_684 = 10000.0;
        local_67c = -10000.0;
        local_670 = 10000.0;
        local_668 = -10000.0;
        if (0 < local_3c0) {
          pfVar13 = local_4cc;
          do {
            fVar1 = pfVar13[-2];
            fVar3 = pfVar13[-1];
            fVar4 = *pfVar13;
            if (fVar1 < local_688) {
              local_688 = fVar1;
            }
            if (local_680 < fVar1) {
              local_680 = fVar1;
            }
            if (fVar3 < local_684) {
              local_684 = fVar3;
            }
            if (local_67c < fVar3) {
              local_67c = fVar3;
            }
            if (fVar4 < local_670) {
              local_670 = fVar4;
            }
            if (local_668 < fVar4) {
              local_668 = fVar4;
            }
            local_600 = pfVar13[-2] - local_4ec;
            local_5fc = pfVar13[-1] - local_4e8;
            local_5f8 = *pfVar13 - local_4e4;
            local_5d0 = local_600;
            local_5cc = local_5fc;
            local_5c8 = local_5f8;
            fVar16 = (float10)FUN_005aabc0();
            if ((float10)local_244 < fVar16) {
              local_244 = (float)fVar16;
            }
            iVar5 = iVar5 + 1;
            pfVar13 = pfVar13 + 3;
          } while (iVar5 < local_3c0);
        }
        fVar1 = local_680 - local_688;
        local_610 = 0;
        local_5e0 = 0;
        local_634 = 0;
        local_61c = 0;
        local_3bc = 4;
        fVar3 = local_67c - local_684;
        fVar4 = local_668 - local_670;
        local_5dc = local_680;
        local_3d8 = local_680;
        local_5d8 = local_67c;
        local_3d4 = local_67c;
        local_5d4 = local_668;
        local_3d0 = local_668;
        local_644 = local_684;
        local_3c8 = local_684;
        local_640 = local_670;
        local_3c4 = local_670;
        local_648 = local_688;
        local_3cc = local_688;
        local_618 = local_688;
        local_614 = local_67c;
        local_3b8 = local_688;
        local_3b0 = 0;
        local_5e8 = local_680;
        local_3b4 = local_67c;
        local_5e4 = local_67c;
        local_3ac = local_680;
        local_3a8 = local_67c;
        local_3a4 = 0;
        local_63c = local_688;
        local_638 = local_684;
        local_3a0 = local_688;
        local_398 = 0;
        local_624 = local_680;
        local_39c = local_684;
        local_620 = local_684;
        local_394 = local_680;
        local_38c = 0;
        local_390 = local_684;
        local_630 = fVar1;
        local_62c = fVar3;
        local_628 = fVar4;
        local_3e4 = fVar1;
        local_3e0 = fVar3;
        local_3dc = fVar4;
        if (((fVar1 < _DAT_0064b240) || (fVar3 < _DAT_0064b240)) || (fVar4 < _DAT_0064b240)) {
          FUN_0061c369(local_c8,s_error_while_reading___s__and_mak_00674160,local_664,(double)fVar1,
                       (double)fVar3,(double)fVar4);
          FUN_00507500(local_c8);
        }
        local_650 = fVar3 * fVar3;
        local_60c = (local_650 + fVar4 * fVar4) * local_4e0 * _DAT_0064cae4;
        local_608 = (fVar1 * fVar1 + fVar4 * fVar4) * local_4e0 * _DAT_0064cae4;
        local_604 = (fVar1 * fVar1 + local_650) * local_4e0 * _DAT_0064cae4;
        local_4f8 = local_60c;
        local_4f4 = local_608;
        local_4f0 = local_604;
      }
      iVar5 = 0;
      if (local_64c != (FARPROC)0x0) {
        (*local_64c)(local_4d4,local_3c0,param_1);
      }
      local_248 = 0;
      local_240 = local_244;
      pfVar13 = local_388 + 2;
      do {
        puVar12 = local_16c;
        uVar18 = CONCAT44(iVar5,s_CollisionPlane_d_00673cac);
        FUN_0061c369();
        iVar8 = FUN_005075b0(local_664,local_16c,0x3f800000,pfVar13 + -2,param_1,4,puVar12,uVar18);
        if (iVar8 == 0) break;
        fVar1 = -pfVar13[1];
        fStack_5b8 = fVar1 * pfVar13[-2];
        fStack_5b4 = fVar1 * pfVar13[-1];
        fStack_5f4 = fStack_5b8 - local_4ec;
        fStack_5f0 = fStack_5b4 - local_4e8;
        fStack_5ec = fVar1 * *pfVar13 - local_4e4;
        fStack_5ac = fStack_5f4;
        fStack_5a8 = fStack_5f0;
        fStack_5a4 = fStack_5ec;
        fVar16 = (float10)FUN_005aabc0();
        if (fVar16 < (float10)local_240) {
          local_240 = (float)fVar16;
        }
        pfVar13 = pfVar13 + 4;
        local_248 = local_248 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x14);
      FUN_006033f0(local_664,s_rubber_collision_coeff_00673e58,0,0x3fe00000,&fStack_4d8);
      if ((fStack_4d8 < _DAT_0064b254) || (_DAT_0064b240 < fStack_4d8)) {
        fStack_4d8 = 0.2;
      }
      UStack_23c = GetPrivateProfileIntA(local_664,s_texture_Bytes_00674150,0,param_1);
      GetPrivateProfileStringA
                (local_664,s_circular_shadow_00674140,&DAT_006719a8,(LPSTR)local_234,0x1e,param_1);
      uStack_238 = 0;
      iVar5 = FUN_0061d520();
      if (iVar5 == 0) {
        uStack_238 = 1;
      }
      else {
        iVar5 = FUN_0061d520();
        if (iVar5 == 0) {
          uStack_238 = 2;
        }
        else {
          iVar5 = FUN_0061d520();
          if (iVar5 == 0) {
            uStack_238 = 3;
          }
        }
      }
      pbVar6 = local_5a0;
      puVar7 = &DAT_006c5ac8 + DAT_006cd2ac * 0xdb;
      for (iVar5 = 0xdb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        puVar7 = puVar7 + 1;
      }
    }
    else {
      if (local_674 == 1) break;
      DAT_006cd2ac = DAT_006cd2ac + -1;
      local_678 = local_678 + 1;
      local_674 = 1;
    }
    DAT_006cd2ac = DAT_006cd2ac + 1;
  } while (DAT_006cd2ac < 0x24);
  if (local_66c != (HMODULE)0x0) {
    FreeLibrary(local_66c);
  }
  iVar5 = FUN_0061c356(PTR_s___vehicle_tech_00673a62_2_00673a58,&DAT_00674130);
  if (iVar5 != 0) {
    local_66c = (HMODULE)0x36c;
    FUN_0061d9d6(&local_66c,4,1,iVar5);
    FUN_0061d9d6(&DAT_006cd2ac,4,1,iVar5);
    FUN_0061d9d6(&DAT_006cd2b0,4,1,iVar5);
    FUN_0061d9d6(&DAT_006cd2b4,4,1,iVar5);
    FUN_0061d9d6(&DAT_006cd2b8,4,1,iVar5);
    FUN_0061d9d6(&DAT_006cd2bc,4,1,iVar5);
    FUN_0061d9d6(&DAT_006cd2c0,4,1,iVar5);
    FUN_0061d9d6(&DAT_006cd2c4,4,1,iVar5);
    FUN_0061d9d6(&DAT_006cd2c8,4,1,iVar5);
    FUN_0061d9d6(&DAT_006c5ac8,0x36c,0x23,iVar5);
    FUN_0061c25a(iVar5);
  }
  return;
}


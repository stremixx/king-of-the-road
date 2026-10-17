
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056b390(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  bool bVar18;
  int *piStack_354;
  int *piStack_350;
  undefined8 local_34c;
  int local_328;
  int local_320 [2];
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 *local_30c;
  undefined4 *local_308;
  int local_304;
  int local_300;
  int iStack_2fc;
  undefined4 local_2f8;
  int local_2f4 [32];
  int local_274 [12];
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  int local_224;
  int local_21c;
  int local_214;
  int *local_210;
  int *local_20c;
  int *local_204;
  double local_1e4;
  int local_1dc;
  int local_1d4;
  undefined4 local_1c0;
  int *local_1b4;
  double local_194;
  int local_18c;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_144 [40];
  int local_a4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar12 = DAT_006cdc78;
  piVar16 = DAT_006cdc74;
  iVar11 = DAT_00695c00;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00646c17;
  local_14 = ExceptionList;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0x11:
    if (*(int *)(param_1 + 0x24) % 100 == 0) {
      piStack_354 = *(int **)(DAT_00695c00 + 0xc);
      local_34c = (double)CONCAT44(DAT_006f2324,DAT_006cdc78);
      piStack_350 = DAT_006cdc74;
      ExceptionList = &local_14;
      FUN_005b7d70();
      iVar12 = DAT_006cdc78;
      piVar16 = DAT_006cdc74;
      uVar7 = FUN_005d2500(0x38);
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),piVar16 + 0x19,iVar12 + 0x2dc,DAT_006cdc84,uVar7,4,
                   0);
      break;
    }
    local_34c = (double)CONCAT44(0x56bbd0,(undefined4 *)local_34c);
    ExceptionList = &local_14;
    FUN_004184d0();
    piStack_354 = *(int **)(param_1 + 0x24);
    local_c = 4;
    local_34c = (double)CONCAT44(local_274,(int)piStack_354 % 100);
    piStack_350 = (int *)((int)piStack_354 / 100);
    FUN_00568670(&piStack_354);
    FUN_00441920();
    if (local_274[0] != -1) {
      piStack_354 = *(int **)(iVar11 + 0xc);
      local_34c = (double)CONCAT44(DAT_006f2324,DAT_006cdc78);
      piStack_350 = DAT_006cdc74;
      FUN_005b7d70();
      iVar15 = DAT_006cdc78;
      piVar16 = DAT_006cdc74;
      local_34c._4_4_ = *(int *)(param_1 + 0x24) % 100;
      iVar12 = (int)DAT_006cdc74 + 0x7d;
      local_34c._0_4_ = (undefined4 *)0x3c;
      piStack_350 = (int *)0x56bc7d;
      uVar7 = FUN_005d2500();
      piStack_354 = local_2f4;
      local_34c = (double)CONCAT44(local_34c._4_4_,uVar7);
      piStack_350 = (int *)s__s__d_0067a940;
      FUN_0061c369();
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),piVar16 + 0x19,iVar15 + 0x2dc,DAT_006cdc84,
                   local_2f4,4,0);
      local_320[0] = 0;
      FUN_004402b0(local_274[0],local_320);
      puVar9 = local_144;
      iVar8 = 0x13;
      do {
        puVar9[2] = 0;
        *puVar9 = 0;
        puVar9[3] = 0x3ff00000;
        puVar9 = puVar9 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      piStack_350 = (int *)&local_34c;
      local_34c = (double)(ZEXT48(local_144) << 0x20);
      piStack_354 = (int *)0x56bd00;
      FUN_00568670();
      piStack_350 = (int *)0x56bd08;
      FUN_004769d0();
      if ((local_a4 == 0) || (local_20c == (int *)0x0)) {
LAB_0056bd56:
        piStack_350 = local_210;
        uVar7 = *(undefined4 *)(iVar11 + 0xc);
        piStack_354 = DAT_006cdc84;
      }
      else {
        local_34c = (double)CONCAT44(0x56bd32,(undefined4 *)local_34c);
        uVar6 = __ftol();
        uVar6 = uVar6 & 0x80000001;
        bVar18 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar18 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar18) goto LAB_0056bd56;
        uVar7 = *(undefined4 *)(iVar11 + 0xc);
        piStack_350 = local_20c;
        piStack_354 = DAT_006cdc8c;
      }
      local_34c = 2.47032822920623e-323;
      FUN_005e97a0(uVar7,iVar12,iVar15 + 0x23c);
      local_34c = 2.47032822920623e-323;
      piStack_350 = local_204;
      piStack_354 = DAT_006cdc84;
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x250);
      local_34c = (double)CONCAT44(0x56bdaa,(undefined4 *)local_34c);
      uVar7 = __ftol();
      piStack_350 = local_2f4;
      local_34c = (double)CONCAT44(uVar7,&PTR_LAB_006769d4);
      piStack_354 = (int *)0x56bdba;
      FUN_0061c369();
      piStack_354 = (int *)0x0;
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x264,DAT_006cdc84,local_2f4,5);
      local_34c = (double)CONCAT44(0x56bde7,(undefined4 *)local_34c);
      iVar8 = __ftol();
      local_34c = (double)CONCAT44(iVar8 % 0x3c,iVar8 / 0x3c);
      piStack_354 = local_2f4;
      piStack_350 = (int *)s__02d__02d_0067a838;
      FUN_0061c369();
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x278,DAT_006cdc84,local_2f4,5,0);
      local_34c = local_1e4 * _DAT_0064a648;
      piStack_350 = (int *)0x46;
      piStack_354 = (int *)0x56be4d;
      piStack_350 = (int *)FUN_005d2500();
      piStack_354 = local_2f4;
      FUN_0061c369();
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x28c,DAT_006cdc84,local_2f4,5,0);
      local_34c._0_4_ = (undefined4 *)local_1dc;
      piStack_350 = (int *)0x47;
      piStack_354 = (int *)0x56be92;
      piStack_350 = (int *)FUN_005d2500();
      piStack_354 = local_2f4;
      FUN_0061c369();
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x2a0,DAT_006cdc84,local_2f4,5,0);
      local_34c = (double)CONCAT44(0x56bed6,(undefined4 *)local_34c);
      uVar7 = __ftol();
      piStack_350 = local_2f4;
      local_34c = (double)CONCAT44(uVar7,&DAT_0067a948);
      piStack_354 = (int *)0x56bee6;
      FUN_0061c369();
      piStack_354 = (int *)0x0;
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x2b4,DAT_006cdc84,local_2f4,5);
    }
    local_c = 7;
    if (local_214 - local_21c != 0) {
      local_34c = (double)CONCAT44(local_214 - local_21c,local_21c);
      piStack_350 = (int *)0x56bf2d;
      FUN_0044b440();
    }
    local_c._0_1_ = 6;
    local_34c = (double)CONCAT44(0x56bf44,(undefined4 *)local_34c);
    FUN_0044a450();
    local_c = CONCAT31(local_c._1_3_,5);
    local_34c = (double)CONCAT44(0x56bf58,(undefined4 *)local_34c);
    FUN_0044a450();
    local_c = 0xffffffff;
    local_34c = (double)CONCAT44(0x56bf6f,(undefined4 *)local_34c);
    FUN_0044a450();
    break;
  case 0x12:
    if (*(int *)(param_1 + 0x24) < 0) break;
    local_34c = (double)CONCAT44(DAT_006f2328,DAT_006cdc78);
    piStack_354 = *(int **)(DAT_00695c00 + 0xc);
    piStack_350 = DAT_006cdc74;
    iVar15 = (int)DAT_006cdc74 + 0x67;
    ExceptionList = &local_14;
    FUN_005b7d70();
    piVar5 = local_274;
    iVar8 = 0x13;
    do {
      piVar5[2] = 0;
      *piVar5 = 0;
      piVar5[3] = 0x3ff00000;
      piVar5 = piVar5 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    piStack_350 = (int *)&local_34c;
    local_34c = (double)CONCAT44(local_274,local_274);
    piStack_354 = (int *)0x56b441;
    FUN_00568670();
    piStack_350 = (int *)0x56b449;
    FUN_004769d0();
    bVar3 = (byte)DAT_006f1d38;
    if (local_1d4 == 0) {
LAB_0056b4f4:
      local_34c = 2.47032822920623e-323;
      piStack_350 = DAT_006f1d04;
      piStack_354 = DAT_006cdc84;
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 600);
    }
    else {
      if (((byte)DAT_006f1d38 & 4) == 0) {
LAB_0056b4aa:
        if ((bVar3 & 8) != 0) {
          local_34c = (double)CONCAT44(0x56b4c0,(undefined4 *)local_34c);
          uVar6 = __ftol();
          uVar6 = uVar6 & 0x80000001;
          bVar18 = uVar6 == 0;
          if ((int)uVar6 < 0) {
            bVar18 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar18) {
            local_34c._4_4_ = 0x6e;
            local_34c._0_4_ = (undefined4 *)0x56b4d5;
            piStack_354 = (int *)FUN_005d2500();
            local_34c = (double)((ulonglong)local_34c._4_4_ << 0x20);
            piStack_350 = (int *)0x5;
            FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 600,DAT_006cdc8c);
            goto LAB_0056b516;
          }
        }
        goto LAB_0056b4f4;
      }
      local_34c = (double)CONCAT44(0x56b476,(undefined4 *)local_34c);
      uVar6 = __ftol();
      uVar6 = uVar6 & 0x80000001;
      bVar18 = uVar6 == 0;
      if ((int)uVar6 < 0) {
        bVar18 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar18) goto LAB_0056b4aa;
      local_34c._4_4_ = 0x6d;
      local_34c._0_4_ = (undefined4 *)0x56b48b;
      piStack_354 = (int *)FUN_005d2500();
      local_34c = (double)((ulonglong)local_34c._4_4_ << 0x20);
      piStack_350 = (int *)0x5;
      FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 600,DAT_006cdc8c);
    }
LAB_0056b516:
    local_34c = (double)CONCAT44(DAT_006f1d14,DAT_006f1d10);
    piStack_354 = local_2f4;
    piStack_350 = (int *)&DAT_0067a958;
    FUN_0061c369();
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 0x26c,DAT_006cdc84,local_2f4,5,0);
    local_34c = (double)CONCAT44(0x56b55e,(undefined4 *)local_34c);
    uVar7 = __ftol();
    piStack_350 = local_2f4;
    local_34c = (double)CONCAT44(uVar7,&DAT_0066b8cc);
    piStack_354 = (int *)0x56b56e;
    FUN_0061c369();
    piStack_354 = (int *)0x0;
    piVar16 = piVar16 + 0x25;
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),piVar16,iVar12 + 0x280,DAT_006cdc84,local_2f4,5);
    local_34c = (double)CONCAT44(0x56b59c,(undefined4 *)local_34c);
    uVar7 = __ftol();
    piStack_350 = local_2f4;
    local_34c = (double)CONCAT44(uVar7,&DAT_0066b8cc);
    piStack_354 = (int *)0x56b5ac;
    FUN_0061c369();
    piStack_354 = (int *)0x0;
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),piVar16,iVar12 + 0x294,DAT_006cdc84,local_2f4,5);
    if ((DAT_006f2390 == 0) || (*(int *)(DAT_006f2390 + 0x3c) != 0)) break;
    local_34c._4_4_ = 0x3a;
    goto LAB_0056b5e7;
  case 0x13:
    piStack_350 = (int *)(DAT_006cdc7c + 2);
    local_34c = (double)CONCAT44(DAT_006f2330,DAT_006cdc80);
    piStack_354 = *(int **)(DAT_00695c00 + 0xc);
    ExceptionList = &local_14;
    FUN_005b7d70();
    iVar8 = 0;
    local_318 = 0;
    local_314 = 0;
    local_310 = 0;
    local_30c = (undefined4 *)0x0;
    local_308 = (undefined4 *)0x0;
    local_304 = 0;
    local_300 = 0;
    iStack_2fc = 0;
    local_2f8 = 0;
    piStack_350 = local_320;
    local_34c = (double)CONCAT44(piStack_350,*(undefined4 *)(param_1 + 0x24));
    piStack_354 = (int *)&piStack_350;
    local_c = 8;
    FUN_00568670();
    piStack_354 = (int *)0x56bff3;
    FUN_00440f40();
    iVar12 = DAT_006cdc7c;
    iVar15 = DAT_006cdc7c + 0x31;
    local_328 = 0;
    if (0 < local_300) {
      iVar13 = DAT_006cdc80 + 0x227;
      do {
        iVar10 = iVar8 + iStack_2fc;
        local_34c = 2.47032822920623e-323;
        piStack_350 = *(int **)(iVar10 + 100);
        piStack_354 = DAT_006cdc84;
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar13);
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12 + 0x97,iVar13,DAT_006cdc84,
                     *(undefined4 *)(iVar10 + 0x6c),5,0);
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12 + 0xf1,iVar13,DAT_006cdc84,
                     *(undefined4 *)(iVar10 + 0x70),5,0);
        local_34c = (double)CONCAT44(0x56c097,(undefined4 *)local_34c);
        iVar10 = __ftol();
        local_34c = (double)CONCAT44(iVar10 % 0x3c,iVar10 / 0x3c);
        piStack_354 = local_2f4;
        piStack_350 = (int *)s__02d__02d_0067a838;
        FUN_0061c369();
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12 + 0x149,iVar13,DAT_006cdc84,local_2f4,5,0)
        ;
        local_328 = local_328 + 1;
        iVar8 = iVar8 + 0xc0;
        iVar13 = iVar13 + 0x14;
      } while (local_328 < local_300);
    }
    puVar4 = local_308;
    local_c = 9;
    puVar1 = local_30c;
    for (puVar9 = local_30c; local_30c = puVar1, puVar9 != puVar4; puVar9 = puVar9 + 0x30) {
      local_34c = 2.80903789710657e-317;
      FUN_005762d0();
      puVar1 = local_30c;
    }
    iVar11 = (local_304 - (int)puVar1) / 0xc0;
    if (iVar11 != 0) {
      uVar6 = iVar11 * 0xc0;
      if (uVar6 < 0x81) {
        local_34c = 2.12538767612852e-314;
        piStack_350 = (int *)0x56c19b;
        iVar11 = FUN_00402af0();
        uVar2 = DAT_0066b83c;
        if (iVar11 != 0) {
          uVar17 = 0;
          if (DAT_0066b83c != 0) {
            uVar14 = DAT_0068c168 >> 1;
            do {
              if ((uVar14 <= uVar17) && (DAT_0068c164 == 0)) {
                local_34c = 2.12538767612852e-314;
                piStack_350 = (int *)0x56c1dc;
                iVar11 = FUN_00402af0();
                if (iVar11 == 0) {
                  DAT_0066b83c = 1000;
                  DAT_0068c168 = uVar17;
                  goto LAB_0056c270;
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar2);
          }
          DAT_0066b83c = 0x1e;
          iVar11 = 6;
          while( true ) {
            iVar12 = iVar11;
            if (0x1b < iVar11) {
              iVar12 = 0x1b;
            }
            local_34c = 2.12538767612852e-314;
            piStack_350 = (int *)0x56c24d;
            iVar15 = FUN_00402af0();
            if (iVar15 == 0) break;
            local_34c = (double)CONCAT44(iVar12,0x56c25a);
            FUN_00402b10();
            iVar11 = iVar11 + 1;
          }
        }
LAB_0056c270:
        *puVar1 = *(undefined4 *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = puVar1;
        DAT_0068c164 = 0;
      }
      else {
        local_34c = (double)CONCAT44(puVar1,0x56c172);
        FUN_0061c888();
      }
    }
    break;
  case 0x14:
  case 0x19:
    if (DAT_006f1e68 != DAT_0068becc) {
      local_34c = 1.8090132949743256e-307;
      piStack_354 = local_274 + 1;
      piStack_350 = (int *)0xc;
      local_274[0] = 0;
      ExceptionList = &local_14;
      FUN_004011e0();
      piVar16 = local_274;
      piVar5 = &DAT_00701550;
      for (iVar12 = 0xc; piVar16 = piVar16 + 1, iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar16 = *piVar5;
        piVar5 = piVar5 + 1;
      }
      local_240 = 0;
      local_23c = 0;
      local_238 = 0;
      local_234 = 0;
      local_230 = 0;
      local_22c = 0xffffffff;
      local_228 = 0xffffffff;
      local_34c = (double)CONCAT44(0x56b883,(undefined4 *)local_34c);
      FUN_004184d0();
      local_164 = 0xffffffff;
      local_160 = 0xffffffff;
      local_c = 0;
      local_34c = (double)CONCAT44(local_274,extraout_ECX);
      piStack_350 = &DAT_006f1e68;
      piStack_354 = (int *)0x56b8b1;
      FUN_0041d3f0();
      piStack_354 = (int *)&piStack_350;
      piStack_350 = extraout_ECX_00;
      FUN_00568670();
      piStack_354 = (int *)0x56b8c6;
      FUN_0041bf30();
      if (local_224 != -1) {
        piStack_354 = *(int **)(iVar11 + 0xc);
        local_34c = (double)CONCAT44(DAT_006f2324,DAT_006cdc78);
        piStack_350 = DAT_006cdc74;
        FUN_005b7d70();
        iVar15 = DAT_006cdc78;
        local_320[0] = 0;
        iVar12 = (int)DAT_006cdc74 + 0x7d;
        FUN_004402b0(local_224,local_320);
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x23c,DAT_006cdc84,local_1c0,5,0)
        ;
        local_34c = (double)CONCAT44(0x56b953,(undefined4 *)local_34c);
        uVar6 = __ftol();
        uVar6 = uVar6 & 0x80000001;
        bVar18 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar18 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar18) {
          local_34c = 2.47032822920623e-323;
          piStack_350 = local_1b4;
          piStack_354 = DAT_006cdc84;
          FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x250);
        }
        local_34c = (double)CONCAT44(0x56b990,(undefined4 *)local_34c);
        uVar7 = __ftol();
        piStack_350 = local_2f4;
        local_34c = (double)CONCAT44(uVar7,&DAT_0066b8cc);
        piStack_354 = (int *)0x56b9a0;
        FUN_0061c369();
        piStack_354 = (int *)0x0;
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x264,DAT_006cdc84,local_2f4,5);
        local_34c = (double)CONCAT44(0x56b9cd,(undefined4 *)local_34c);
        iVar8 = __ftol();
        piStack_354 = local_2f4;
        local_34c = (double)CONCAT44(iVar8 % 0x3c,iVar8 / 0x3c);
        piStack_350 = (int *)s__d__d_0067a950;
        FUN_0061c369();
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x278,DAT_006cdc84,local_2f4,5,0)
        ;
        local_34c = local_194 * _DAT_0064a648;
        piStack_350 = (int *)0x46;
        piStack_354 = (int *)0x56ba32;
        piStack_350 = (int *)FUN_005d2500();
        piStack_354 = local_2f4;
        FUN_0061c369();
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x28c,DAT_006cdc84,local_2f4,5,0)
        ;
        local_34c._0_4_ = (undefined4 *)local_18c;
        piStack_350 = (int *)0x47;
        piStack_354 = (int *)0x56ba78;
        piStack_350 = (int *)FUN_005d2500();
        piStack_354 = local_2f4;
        FUN_0061c369();
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x2a0,DAT_006cdc84,local_2f4,5,0)
        ;
        local_34c = (double)CONCAT44(0x56babb,(undefined4 *)local_34c);
        uVar7 = __ftol();
        piStack_350 = local_2f4;
        local_34c = (double)CONCAT44(uVar7,&DAT_0067a948);
        piStack_354 = (int *)0x56bacb;
        FUN_0061c369();
        piStack_354 = (int *)0x0;
        FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar12,iVar15 + 0x2b4,DAT_006cdc84,local_2f4,5);
      }
      local_c = 3;
      local_34c = (double)CONCAT44(0x56bb11,(undefined4 *)local_34c);
      FUN_0044a450();
      local_c._0_1_ = 2;
      local_34c = (double)CONCAT44(0x56bb25,(undefined4 *)local_34c);
      FUN_004497b0();
      local_c = CONCAT31(local_c._1_3_,1);
      local_34c = (double)CONCAT44(0x56bb39,(undefined4 *)local_34c);
      FUN_004497b0();
      local_c = 0xffffffff;
      local_34c = (double)CONCAT44(0x56bb50,(undefined4 *)local_34c);
      FUN_004497b0();
    }
    break;
  case 0x18:
    if (*(int *)(param_1 + 0x24) < 0) break;
    local_34c = (double)CONCAT44(DAT_006f232c,DAT_006cdc78);
    piVar5 = (int *)((int)DAT_006cdc74 + 0x62);
    piStack_350 = DAT_006cdc74;
    piStack_354 = *(int **)(DAT_00695c00 + 0xc);
    iVar15 = (int)DAT_006cdc74 + 0x67;
    ExceptionList = &local_14;
    FUN_005b7d70();
    if (DAT_006f1d20 == DAT_0068a8f0) break;
    local_34c = (double)CONCAT44(local_274,DAT_006f1d20);
    piStack_350 = &DAT_006f1d20;
    piStack_354 = (int *)0x56b665;
    FUN_0041d3f0();
    piStack_350 = (int *)0x56b66a;
    FUN_0043fd20();
    piStack_350 = (int *)0x0;
    piStack_354 = (int *)0x5;
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 0x244,DAT_006cdc84,local_244);
    piStack_354 = local_2f4;
    local_34c = (double)CONCAT44(DAT_006f1d34,DAT_006f1d30);
    piStack_350 = (int *)&DAT_0067a958;
    FUN_0061c369();
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 600,DAT_006cdc84,local_2f4,5,0);
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 0x26c,DAT_006cdc84,DAT_006f1d04,5,0);
    piStack_354 = local_2f4;
    local_34c = (double)CONCAT44(DAT_006f1d14,DAT_006f1d10);
    piStack_350 = (int *)&DAT_0067a958;
    FUN_0061c369();
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 0x280,DAT_006cdc84,local_2f4,5,0);
    local_34c = (double)CONCAT44(0x56b733,(undefined4 *)local_34c);
    uVar7 = __ftol();
    piStack_350 = local_2f4;
    local_34c = (double)CONCAT44(uVar7,&DAT_0066b8cc);
    piStack_354 = (int *)0x56b743;
    FUN_0061c369();
    piStack_354 = (int *)0x0;
    iVar15 = (int)piVar16 + 0x93;
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 0x294,DAT_006cdc84,local_2f4,5);
    local_34c = (double)CONCAT44(0x56b771,(undefined4 *)local_34c);
    local_34c._4_4_ = __ftol();
    piStack_350 = local_2f4;
    local_34c._0_4_ = (undefined4 *)&DAT_0066b8cc;
    piStack_354 = (int *)0x56b781;
    FUN_0061c369();
    piStack_354 = (int *)0x0;
    FUN_005e97a0(*(undefined4 *)(iVar11 + 0xc),iVar15,iVar12 + 0x2a8,DAT_006cdc84,local_2f4,5);
    local_34c._0_4_ = &DAT_006f1d20;
    piStack_350 = (int *)0x56b7b2;
    FUN_0041d3f0();
    local_34c._0_4_ = (undefined4 *)0x56b7b7;
    iVar12 = FUN_0043f9b0();
    piStack_350 = (int *)(DAT_006cdc78 + 0x1c6);
    local_34c = (double)CONCAT44(local_34c._4_4_,*(undefined4 *)(DAT_006cdc1c + 0x170 + iVar12 * 4))
    ;
    piStack_354 = piVar5;
    FUN_005b7d70(*(undefined4 *)(iVar11 + 0xc));
    if ((DAT_006f2390 == 0) || (*(int *)(DAT_006f2390 + 0x3c) != 0)) break;
    local_34c._4_4_ = 0x48;
LAB_0056b5e7:
    local_34c = (double)CONCAT44(local_34c._4_4_,0x56b5ec);
    uVar7 = FUN_005d2500();
    local_34c = (double)CONCAT44(uVar7,8);
    piStack_350 = (int *)0x56b5fd;
    FUN_0056a6f0();
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  ExceptionList = local_14;
  return;
}


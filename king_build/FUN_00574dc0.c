
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00574dc0(void)

{
  undefined4 ****ppppuVar1;
  undefined *puVar2;
  undefined4 ***pppuVar3;
  undefined4 *****pppppuVar4;
  undefined4 ***pppuVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined ***pppuVar9;
  uint uVar10;
  undefined4 ***pppuVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 ****ppppuStack_3e4;
  undefined ***pppuStack_3e0;
  undefined4 ***pppuStack_3dc;
  undefined4 ***pppuStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 ****ppppuStack_3bc;
  undefined ***pppuStack_3b8;
  int iStack_3b4;
  undefined ***pppuStack_3b0;
  undefined8 uStack_3ac;
  undefined *puStack_3a0;
  int iStack_39c;
  undefined4 **appuStack_398 [2];
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined ***pppuStack_364;
  undefined4 uStack_360;
  int iStack_35c;
  undefined ***pppuStack_358;
  undefined4 uStack_354;
  int iStack_350;
  undefined ***pppuStack_34c;
  undefined4 uStack_348;
  int iStack_344;
  undefined ***pppuStack_340;
  undefined4 uStack_33c;
  int iStack_338;
  undefined4 ***pppuStack_334;
  undefined4 ***pppuStack_330;
  undefined4 uStack_32c;
  undefined4 ***pppuStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined **appuStack_2d8 [10];
  undefined4 **appuStack_2b0 [40];
  undefined **appuStack_210 [5];
  undefined4 uStack_1fc;
  undefined **appuStack_150 [40];
  int iStack_b0;
  void *pvStack_2c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00646fcb;
  pvStack_14 = ExceptionList;
  uStack_3d0 = 1;
  uStack_3d4 = 0xe;
  pppuStack_3d8 = DAT_0071f868;
  pppuStack_3dc = (undefined4 ***)0x574df4;
  ExceptionList = &pvStack_14;
  (*(code *)(*DAT_0071f868)[0x14])();
  pppuVar3 = *(undefined4 ****)(DAT_00695c00 + 0xc);
  pppuStack_3e0 = (undefined ***)0x574e03;
  pppuStack_3dc = pppuVar3;
  FUN_004d2a90();
  pppuVar11 = (undefined4 ***)0x0;
  if ((*(int *)(DAT_006cdbcc + 0x50c) != 0) && (*(int *)(DAT_006cdbcc + 0x54c) == DAT_00695c00)) {
    pppuStack_3dc = (undefined4 ***)(*(int *)(DAT_006cdbcc + 0x50c) + -1);
    ppppuStack_3e4 = (undefined4 *****)0x574e35;
    pppuStack_3e0 = (undefined ***)pppuVar3;
    FUN_00528fd0();
  }
  if (*(int *)(DAT_006cdbcc + 0x510) != 0) {
    pppuStack_3dc = (undefined4 ***)0x574e4c;
    FUN_0050b9a0();
    pppuVar5 = DAT_006cdc70;
    pppuStack_3dc = DAT_006f2334;
    pppuStack_3e0 = (undefined ***)DAT_006cdc70;
    ppppuStack_3e4 = DAT_006cdc6c;
    iVar7 = (int)DAT_006cdc6c + 0x19;
    puVar2 = (undefined *)((int)DAT_006cdc70 + 0x1ce);
    FUN_005b7d70(pppuVar3);
    iStack_39c = DAT_006cdbcc + 0x210;
    iVar6 = *(int *)(*(int *)(DAT_006cdbcc + 0x20c) + 0x120);
    while (iVar6 != 0) {
      puStack_3a0 = (undefined *)(*(int *)(iVar6 + 0x1c) + -1000);
      pppuStack_3dc = (undefined4 ***)0x0;
      pppuStack_3e0 = (undefined ***)0x6;
      uStack_3ac._4_4_ = (undefined4)((ulonglong)uStack_3ac >> 0x20);
      uStack_3ac = (double)CONCAT44(uStack_3ac._4_4_,pppuVar5 + ((int)pppuVar11 % 0x12) * 5 + 0x76);
      ppppuStack_3e4 = *(undefined4 *****)(iVar6 + 0xc);
      iVar6 = iVar7 + ((int)pppuVar11 / 0x12) * 0xaa;
      FUN_005e97a0(pppuVar3,iVar6,pppuVar5 + ((int)pppuVar11 % 0x12) * 5 + 0x76,DAT_006cdc84);
      FUN_005e97a0(pppuVar3,iVar6 + 0x6f,(undefined4 ***)uStack_3ac,DAT_006cdc84,
                   *(undefined4 *)(&DAT_006743e8 + *(int *)(iStack_39c + (int)puStack_3a0 * 4) * 4),
                   6,0);
      pppuVar11 = (undefined4 ***)((int)pppuVar11 + 1);
      pppuStack_3dc = (undefined4 ***)0x574f3c;
      iVar6 = FUN_005d2730();
    }
    pppuStack_3e0 = (undefined ***)s_0_1_9_0067b370;
    ppppuStack_3e4 = (undefined4 ****)0x61;
    pppuStack_3dc = pppuVar11;
    FUN_005737d0(pppuVar3,iVar7,puVar2);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x20,&DAT_0067b36c,(int)pppuVar11 + 1);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x1f,&DAT_0067b364,(int)pppuVar11 + 2);
    pppuStack_3e0 = (undefined ***)s_Ctrl_L_0067b35c;
    ppppuStack_3e4 = (undefined4 ****)0x54;
    pppuStack_3dc = (undefined4 ***)((int)pppuVar11 + 3);
    FUN_005737d0(pppuVar3,iVar7,puVar2);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x10,&DAT_0067b358,pppuVar11 + 1);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x14,&DAT_0067b354,(int)pppuVar11 + 5);
    pppuStack_3e0 = (undefined ***)&DAT_0067b350;
    ppppuStack_3e4 = (undefined4 ****)0x13;
    pppuStack_3dc = (undefined4 ***)((int)pppuVar11 + 6);
    FUN_005737d0(pppuVar3,iVar7,puVar2);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x42,&DAT_0067b34c,(int)pppuVar11 + 7);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x6a,&DAT_0067b348,pppuVar11 + 2);
    pppuStack_3e0 = (undefined ***)&DAT_0067b344;
    ppppuStack_3e4 = (undefined4 ****)0x6b;
    pppuStack_3dc = (undefined4 ***)((int)pppuVar11 + 9);
    FUN_005737d0(pppuVar3,iVar7,puVar2);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x68,&DAT_0067b340,(int)pppuVar11 + 10);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x69,&DAT_0067b33c,(int)pppuVar11 + 0xb);
    pppuStack_3e0 = (undefined ***)&DAT_0067b338;
    ppppuStack_3e4 = (undefined4 *****)0xe;
    pppuStack_3dc = pppuVar11 + 3;
    FUN_005737d0(pppuVar3,iVar7,puVar2);
    FUN_005737d0(pppuVar3,iVar7,puVar2,0x6c,s_Pause_0067b330,(int)pppuVar11 + 0xd);
  }
  if (*(int *)(DAT_006cdbcc + 0x504) != 0) {
    pppuStack_3dc = (undefined4 ***)0x575077;
    FUN_0050b9a0();
    if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
      pppuStack_3dc = DAT_006f2338;
      pppuStack_3e0 = (undefined ***)DAT_006cdc70;
      ppppuStack_3e4 = DAT_006cdc6c;
      FUN_005b7d70(pppuVar3);
      FUN_005739e0(pppuVar3,(int)DAT_006cdc6c + 0x11,(undefined *)((int)DAT_006cdc70 + 0x1d7),10);
    }
    else {
      pppuStack_3dc = DAT_006f233c;
      pppuStack_3e0 = (undefined ***)DAT_006cdc70;
      ppppuStack_3e4 = DAT_006cdc6c;
      FUN_005b7d70(pppuVar3);
      FUN_00573ee0(pppuVar3,(int)DAT_006cdc6c + 0x11,(undefined *)((int)DAT_006cdc70 + 0x221));
    }
  }
  if (*(int *)(DAT_006cdbcc + 0x508) != 0) {
    pppuStack_3dc = (undefined4 ***)0x575112;
    FUN_0050b9a0();
    pppuStack_3dc = DAT_006f2340;
    pppuStack_3e0 = (undefined ***)DAT_006cdc70;
    ppppuStack_3e4 = DAT_006cdc6c;
    pppuStack_3b0 = (undefined ***)0x0;
    iStack_3b4 = 0;
    pppuStack_3b8 = (undefined ***)0x0;
    ppppuStack_3bc = (undefined4 ****)0x0;
    puStack_3a0 = (undefined *)0x0;
    iStack_39c = 0;
    FUN_005b7d70(pppuVar3);
    pppuVar5 = DAT_006cdc70;
    pppppuVar4 = DAT_006cdc6c;
    pppuStack_3dc = (undefined4 ***)appuStack_210;
    ppppuVar1 = (undefined4 ****)((int)DAT_006cdc6c + 0x11);
    pppuVar11 = DAT_006cdc70 + 0x7b;
    ppppuStack_3e4 = (undefined4 ****)&pppuStack_3e0;
    pppuStack_3e0 = (undefined ***)DAT_006cdc70;
    FUN_00568670();
    ppppuStack_3e4 = (undefined4 ****)0x575178;
    FUN_0043fd20();
    ppppuStack_3e4 = (undefined4 ****)0x0;
    FUN_005e97e0(pppuVar3,(int)pppppuVar4 + 0x13,pppuVar11,0x94,DAT_006cdc84,DAT_006cdc38 + 0x278,5)
    ;
    FUN_005e97e0(pppuVar3,(int)pppppuVar4 + 0x2f,pppuVar5 + 0xb4,0x91,DAT_006cdc84,uStack_1fc,5,0);
    pppuStack_3e0 = (undefined ***)&pppuStack_3dc;
    ppppuStack_3e4 = (undefined4 ****)0x5751d6;
    FUN_00568670();
    pppuStack_3e0 = (undefined ***)0x5751de;
    fVar13 = (float10)FUN_0043f840();
    uStack_3ac = (double)fVar13;
    ppppuStack_3e4 = (undefined4 ****)0x5751ee;
    pppuStack_3e0 = (undefined ***)&pppuStack_3dc;
    FUN_00568670();
    pppuStack_3e0 = (undefined ***)0x5751f6;
    fVar14 = (float10)FUN_004736c0();
    fVar13 = (float10)uStack_3ac;
    uStack_3ac = (double)(fVar14 + fVar13);
    if (fVar14 + fVar13 < (float10)_DAT_0064a660) {
      uStack_3ac = 1.0;
    }
    ppppuStack_3e4 = (undefined4 ****)0x57522b;
    pppuStack_3e0 = (undefined ***)&pppuStack_3dc;
    FUN_00568670();
    pppuStack_3e0 = (undefined ***)0x575233;
    FUN_0043f840();
    pppuStack_3e0 = (undefined ***)0x575242;
    iVar7 = __ftol();
    ppppuStack_3e4 = (undefined4 ****)0x575252;
    pppuStack_3e0 = (undefined ***)&pppuStack_3dc;
    FUN_00568670();
    pppuStack_3e0 = (undefined ***)0x57525a;
    FUN_00473720();
    pppuStack_3dc = (undefined4 ***)0x57526c;
    iVar6 = __ftol();
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (0x9e < iVar7) {
      iVar7 = 0x9e;
    }
    uStack_3ac._0_4_ = (undefined4 ***)iVar6;
    if (0x9e < iVar6) {
      uStack_3ac._0_4_ = (undefined4 ***)0x9e;
    }
    pppuStack_3dc = (undefined4 ***)0x0;
    iStack_3b4 = iVar7 + (int)ppppuVar1;
    ppppuStack_3e4 = &ppppuStack_3bc;
    pppuStack_3b8 = (undefined ***)((int)pppuVar5 + 0x24b);
    pppuStack_3e0 = (undefined ***)0x5;
    pppuStack_3b0 = (undefined ***)((int)pppuVar5 + 0x25e);
    ppppuStack_3bc = ppppuVar1;
    FUN_005b6640(pppuVar3);
    ppppuStack_3bc =
         (undefined4 ****)((int)ppppuStack_3bc + (0x9e - (int)(undefined4 ***)uStack_3ac));
    iStack_3b4 = (int)(undefined4 ***)uStack_3ac + (int)ppppuStack_3bc;
    FUN_005b6640(pppuVar3,&ppppuStack_3bc,6,0);
    ppppuStack_3e4 = (undefined4 ****)0x575301;
    pppuStack_3e0 = (undefined ***)&pppuStack_3dc;
    FUN_00568670();
    pppuStack_3e0 = (undefined ***)0x575309;
    FUN_0043f840();
    pppuStack_3dc = (undefined4 ***)0x575311;
    pppuStack_3dc = (undefined4 ***)__ftol();
    ppppuStack_3e4 = (undefined4 ****)appuStack_2b0;
    pppuStack_3e0 = (undefined ***)&PTR_LAB_006769d4;
    FUN_0061c369();
    ppppuStack_3e4 = (undefined4 ****)appuStack_2b0;
    pppuStack_3dc = (undefined4 ***)0x0;
    pppuStack_3e0 = (undefined ***)0x5;
    uVar8 = FUN_00568e50();
    FUN_005e97a0(pppuVar3,(int)DAT_006cdc6c + 0x17,(undefined *)((int)DAT_006cdc70 + 0x25d),uVar8);
    ppppuStack_3e4 = (undefined4 ****)0x575364;
    pppuStack_3e0 = (undefined ***)&pppuStack_3dc;
    FUN_00568670();
    pppuStack_3e0 = (undefined ***)0x57536c;
    FUN_004736c0();
    pppuStack_3dc = (undefined4 ***)0x575374;
    pppuStack_3dc = (undefined4 ***)__ftol();
    ppppuStack_3e4 = (undefined4 ****)appuStack_2b0;
    pppuStack_3e0 = (undefined ***)&PTR_LAB_006769d4;
    FUN_0061c369();
    pppuStack_3dc = appuStack_2b0;
    pppuStack_3e0 = (undefined ***)0x57539d;
    iVar7 = FUN_005e9710();
    pppuStack_3dc = (undefined4 ***)0x0;
    ppppuStack_3e4 = (undefined4 ****)appuStack_2b0;
    pppuStack_3e0 = (undefined ***)0x5;
    uVar8 = FUN_00568e50();
    FUN_005e97a0(pppuVar3,(iStack_3b4 - iVar7) + -5,(undefined *)((int)DAT_006cdc70 + 0x25d),uVar8);
    appuStack_398[0] = (undefined4 ***)0xffffffff;
    uStack_390 = 0;
    uStack_38c = 0;
    uStack_388 = 0xffffffff;
    uStack_384 = 0xffffffff;
    uStack_380 = 0;
    uStack_37c = 0;
    uStack_378 = 0;
    uStack_374 = 0;
    uStack_370 = 0;
    uStack_36c = 0xffffffff;
    uStack_368 = 0xffffffff;
    pppuStack_364 = (undefined ***)0x0;
    uStack_360 = 0;
    iStack_35c = 0;
    pppuStack_358 = (undefined ***)0x0;
    uStack_354 = 0;
    iStack_350 = 0;
    pppuStack_34c = (undefined ***)0x0;
    uStack_348 = 0;
    iStack_344 = 0;
    pppuStack_340 = (undefined ***)0x0;
    uStack_33c = 0;
    iStack_338 = 0;
    pppuStack_334 = (undefined4 ****)0x0;
    pppuStack_330 = (undefined4 ****)0x0;
    uStack_32c = 0;
    pppuStack_328 = (undefined4 ****)0x0;
    uStack_320 = 0;
    uStack_31c = 0;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    uStack_2f8 = 0;
    uStack_2f4 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    uStack_2e8 = 0;
    uStack_2e4 = 0x3ff00000;
    uStack_2e0 = 0;
    pppuStack_3dc = appuStack_398;
    uStack_18 = 0;
    pppuStack_3e0 = (undefined ***)0x0;
    FUN_00568670(&ppppuStack_3e4);
    iVar7 = FUN_00442320();
    if (iVar7 == 0) {
      pppuStack_3dc = (undefined4 ***)0x575571;
      pppuStack_3dc = (undefined4 ***)__ftol();
      ppppuStack_3e4 = (undefined4 ****)appuStack_2b0;
      pppuStack_3e0 = (undefined ***)&PTR_LAB_006769d4;
      FUN_0061c369();
      FUN_005e97a0(pppuVar3,(int)pppppuVar4 + 0x7f,pppuVar5 + 0x8a,DAT_006cdc84,appuStack_2b0,4,0);
      ppppuStack_3bc = (undefined4 ****)((int)DAT_006cdc6c + 0x11);
      iStack_3b4 = __ftol();
      pppuStack_3b8 = (undefined ***)((int)DAT_006cdc70 + 0x22d);
      pppuStack_3b0 = (undefined ***)((int)DAT_006cdc70 + 0x235);
      FUN_005b6640(pppuVar3,&ppppuStack_3bc,5,0);
    }
    bVar12 = false;
    appuStack_2d8[0] = (undefined **)0x0;
    uStack_3ac = (double)((ulonglong)uStack_3ac & 0xffffffff00000000);
    while( true ) {
      ppppuStack_3e4 = (undefined4 ****)appuStack_398;
      pppuStack_3e0 = (undefined ***)(undefined4 ***)uStack_3ac;
      pppuStack_3dc = ppppuStack_3e4;
      FUN_00568670(&ppppuStack_3e4);
      iVar7 = FUN_00442320();
      if (iVar7 != 0) break;
      pppuStack_3dc = (undefined4 ***)appuStack_2d8;
      pppuStack_3e0 = (undefined ***)appuStack_398[0];
      ppppuStack_3e4 = (undefined4 ****)0x575645;
      FUN_004402b0();
      pppuStack_3dc = (undefined4 ***)0x575669;
      puStack_3a0 = (undefined *)__ftol();
      pppuStack_3dc = (undefined4 ***)0x57568e;
      iStack_39c = __ftol();
      if (!bVar12) {
        pppuVar9 = appuStack_150;
        pppuStack_3e0 = (undefined ***)0x13;
        do {
          pppuVar9[2] = (undefined **)0x0;
          *pppuVar9 = (undefined **)0x0;
          pppuVar9[3] = (undefined **)0x3ff00000;
          pppuVar9 = pppuVar9 + 4;
          pppuStack_3e0 = (undefined ***)((int)pppuStack_3e0 + -1);
        } while ((undefined4 ***)pppuStack_3e0 != (undefined4 ***)0x0);
        pppuStack_3dc = (undefined4 ***)appuStack_150;
        ppppuStack_3e4 = (undefined4 ****)&pppuStack_3e0;
        FUN_00568670();
        ppppuStack_3e4 = (undefined4 ****)0x5756d9;
        FUN_004769d0();
        if ((iStack_b0 == 0) || ((undefined4 ****)pppuStack_330 == (undefined4 ****)0x0)) {
          ppppuStack_3e4 = (undefined4 ****)pppuStack_334;
          uVar8 = DAT_006cdc84;
        }
        else {
          pppuStack_3dc = (undefined4 ***)0x1;
          pppuStack_3e0 = (undefined ***)0x3f800000;
          ppppuStack_3e4 = (undefined4 ****)0x3f800000;
          FUN_005fcaa0();
          pppuStack_3dc = (undefined4 ***)0x575712;
          thunk_FUN_00603580();
          pppuStack_3dc = (undefined4 ***)0x57571d;
          uVar10 = __ftol();
          uVar10 = uVar10 & 0x80000001;
          bVar12 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar12 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar12) {
            ppppuStack_3e4 = (undefined4 ****)pppuStack_334;
            uVar8 = DAT_006cdc84;
          }
          else {
            ppppuStack_3e4 = (undefined4 ****)pppuStack_330;
            uVar8 = DAT_006cdc8c;
          }
        }
        pppuStack_3dc = (undefined4 ***)0x0;
        pppuStack_3e0 = (undefined ***)0x4;
        FUN_005e97a0(pppuVar3,pppppuVar4 + 5,pppuVar5 + 0x88,uVar8);
        pppuStack_3dc = (undefined4 ***)0x0;
        pppuStack_3e0 = (undefined ***)0x4;
        ppppuStack_3e4 = (undefined4 ****)pppuStack_328;
        FUN_005e97a0(pppuVar3,pppppuVar4 + 5,pppuVar5 + 0x8b,DAT_006cdc84);
      }
      bVar12 = true;
      uStack_3ac = (double)CONCAT44(uStack_3ac._4_4_,(int)(undefined4 ***)uStack_3ac + 1);
    }
    pppuStack_3dc = (undefined4 ***)0x0;
    ppppuStack_3e4 = &ppppuStack_3bc;
    pppuStack_3e0 = (undefined ***)0x5;
    iStack_3b4 = (int)ppppuVar1 + (int)puStack_3a0;
    pppuStack_3b0 = (undefined ***)(pppuVar5 + 0x9f);
    ppppuStack_3bc = ppppuVar1;
    pppuStack_3b8 = (undefined ***)(pppuVar5 + 0x9d);
    FUN_005b6640(pppuVar3);
    pppuStack_3dc = (undefined4 ***)0x575803;
    FUN_004eaf10();
    pppuStack_3dc = (undefined4 ***)0x575812;
    iStack_3b4 = __ftol();
    pppuStack_3b8 = (undefined ***)((int)pppuVar5 + 0x292);
    pppuStack_3dc = (undefined4 ***)0x0;
    ppppuStack_3e4 = &ppppuStack_3bc;
    pppuStack_3e0 = (undefined ***)0x5;
    pppuStack_3b0 = (undefined ***)((int)pppuVar5 + 0x29a);
    puStack_3a0 = (undefined *)pppuStack_3b8;
    FUN_005b6640(pppuVar3);
    pppuStack_3dc = (undefined4 ***)0x575859;
    FUN_004eaf10();
    pppuStack_3dc = (undefined4 ***)0x575868;
    iStack_3b4 = __ftol();
    pppuStack_3dc = (undefined4 ***)0x0;
    ppppuStack_3e4 = &ppppuStack_3bc;
    pppuStack_3e0 = (undefined ***)0x5;
    pppuStack_3b0 = (undefined ***)(pppuVar5 + 0xae);
    pppuStack_3b8 = (undefined ***)(pppuVar5 + 0xac);
    FUN_005b6640(pppuVar3);
    ppppuStack_3bc = pppppuVar4 + 0x18;
    iStack_3b4 = iStack_39c + (int)ppppuStack_3bc;
    pppuStack_3b0 = (undefined ***)(pppuVar5 + 0x9f);
    pppuStack_3b8 = (undefined ***)(pppuVar5 + 0x9d);
    FUN_005b6640(pppuVar3,&ppppuStack_3bc,5,0);
    pppuStack_3dc = (undefined4 ***)0x5758d9;
    FUN_004eaf10();
    pppuStack_3dc = (undefined4 ***)0x5758e8;
    iStack_3b4 = __ftol();
    pppuStack_3dc = (undefined4 ***)0x0;
    ppppuStack_3e4 = &ppppuStack_3bc;
    pppuStack_3b8 = (undefined ***)puStack_3a0;
    pppuStack_3e0 = (undefined ***)0x5;
    pppuStack_3b0 = (undefined ***)(puStack_3a0 + 8);
    FUN_005b6640(pppuVar3);
    iStack_3b4 = __ftol();
    pppuStack_3b0 = (undefined ***)(pppuVar5 + 0xae);
    pppuStack_3b8 = (undefined ***)(pppuVar5 + 0xac);
    FUN_005b6640(pppuVar3,&ppppuStack_3bc,5,0);
    FUN_00574020(pppuVar3,DAT_006cdc6c,DAT_006cdc70,0);
    FUN_005b7d70(pppuVar3,(int)DAT_006cdc6c + 0x11,(undefined *)((int)DAT_006cdc70 + 0x1a6),
                 *(undefined4 *)(DAT_006cdc1c + 0x2a0));
    pppuVar9 = pppuStack_340;
    uVar10 = iStack_338 - (int)pppuStack_340;
    uStack_18 = 0xffffffff;
    if (uVar10 != 0) {
      if (uVar10 < 0x81) {
        pppuStack_3dc = (undefined4 ***)0x5759dc;
        FUN_00401aa0();
        *pppuVar9 = (undefined **)*(undefined4 ***)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4);
        *(undefined ****)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4) = pppuVar9;
        pppuStack_3dc = (undefined4 ***)0x5759ec;
        FUN_00434030();
      }
      else {
        pppuStack_3dc = (undefined4 ***)pppuStack_340;
        pppuStack_3e0 = (undefined ***)0x5759be;
        FUN_0061c888();
      }
    }
    pppuVar9 = pppuStack_34c;
    uVar10 = iStack_344 - (int)pppuStack_34c;
    if (uVar10 != 0) {
      if (uVar10 < 0x81) {
        pppuStack_3dc = (undefined4 ***)0x575a27;
        FUN_00401aa0();
        *pppuVar9 = (undefined **)*(undefined4 ***)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4);
        *(undefined ****)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4) = pppuVar9;
        pppuStack_3dc = (undefined4 ***)0x575a37;
        FUN_00434030();
      }
      else {
        pppuStack_3dc = (undefined4 ***)pppuStack_34c;
        pppuStack_3e0 = (undefined ***)0x575a0b;
        FUN_0061c888();
      }
    }
    pppuVar9 = pppuStack_358;
    uVar10 = iStack_350 - (int)pppuStack_358;
    if (uVar10 != 0) {
      if (uVar10 < 0x81) {
        pppuStack_3dc = (undefined4 ***)0x575a72;
        FUN_00401aa0();
        *pppuVar9 = (undefined **)*(undefined4 ***)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4);
        *(undefined ****)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4) = pppuVar9;
        pppuStack_3dc = (undefined4 ***)0x575a82;
        FUN_00434030();
      }
      else {
        pppuStack_3dc = (undefined4 ***)pppuStack_358;
        pppuStack_3e0 = (undefined ***)0x575a56;
        FUN_0061c888();
      }
    }
    pppuVar9 = pppuStack_364;
    uVar10 = iStack_35c - (int)pppuStack_364;
    if (uVar10 != 0) {
      if (uVar10 < 0x81) {
        pppuStack_3dc = (undefined4 ***)0x575ab7;
        FUN_00401aa0();
        *pppuVar9 = (undefined **)*(undefined4 ***)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4);
        *(undefined ****)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4) = pppuVar9;
        pppuStack_3dc = (undefined4 ***)0x575ac7;
        FUN_00434030();
      }
      else {
        pppuStack_3dc = (undefined4 ***)pppuStack_364;
        pppuStack_3e0 = (undefined ***)0x575a9b;
        FUN_0061c888();
      }
    }
  }
  if (DAT_006f2394 != 0) {
    pppuStack_3dc = (undefined4 ***)0x575ad6;
    FUN_0056b390();
  }
  pppuStack_3dc = (undefined4 ***)0x575ae0;
  FUN_00594960();
  pppuStack_3dc = (undefined4 ***)0x1;
  pppuStack_3e0 = (undefined ***)0xe;
  ppppuStack_3e4 = DAT_0071f868;
  (*(code *)(*DAT_0071f868)[0x14])();
  ExceptionList = pvStack_2c;
  return;
}


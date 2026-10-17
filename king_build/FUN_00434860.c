
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434860(int **param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  char *pcVar12;
  float10 fVar13;
  float10 fVar14;
  int *piStack_28;
  undefined8 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063d75c;
  pvStack_c = ExceptionList;
  piStack_28 = (int *)0x434881;
  ExceptionList = &pvStack_c;
  FUN_00403950();
  piStack_28 = (int *)0x434886;
  FUN_00401000();
  piStack_28 = (int *)0x43488b;
  uVar4 = __ftol();
  puVar5 = param_3;
  uVar4 = uVar4 ^ 0x9a4ec86;
  puVar10 = &DAT_006897d0;
  for (iVar6 = 0x37; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  uVar11 = 0;
  iVar6 = 1;
  _DAT_006898a8 = uVar4;
  do {
    iVar7 = uVar4 - iVar6;
    uVar4 = uVar11 % 0x37;
    uVar11 = uVar11 + 0x15;
    (&DAT_006897d0)[uVar4] = iVar6;
    uVar4 = (&DAT_006897d0)[uVar4];
    iVar6 = iVar7;
  } while (uVar11 < 0x46e);
  iVar6 = 4;
  do {
    uVar4 = 0;
    piVar9 = &DAT_006897d0;
    do {
      uVar11 = uVar4 + 0x1f;
      uVar4 = uVar4 + 1;
      *piVar9 = *piVar9 - (&DAT_006897d0)[uVar11 % 0x37];
      piVar9 = piVar9 + 1;
    } while (uVar4 < 0x37);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_006898ac = 0;
  DAT_006898b0 = 0x1f;
  DAT_0068c27c = (byte)param_2 & 1;
  if (((uint)param_2 & 1) != 0) {
    DAT_0066e62a = (byte)((uint)param_2 >> 1) & 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    _DAT_0066b6f0 = *param_3;
    _DAT_0066b6f4 = param_3[1];
    DAT_0068c0d8 = *(undefined1 *)(param_3 + 6);
  }
  piStack_28 = (int *)0x43495a;
  FUN_00409270();
  piStack_28 = (int *)0x43495f;
  FUN_00413ff0();
  piStack_28 = (int *)0x434964;
  FUN_004306d0();
  piStack_28 = (int *)0x434969;
  FUN_004142c0();
  piStack_28 = (int *)0x43496e;
  FUN_00414570();
  piStack_28 = (int *)0x434973;
  FUN_00434070();
  piStack_28 = (int *)0x434978;
  FUN_004341d0();
  piStack_28 = (int *)0x43497d;
  FUN_00434350();
  piStack_28 = (int *)0x434982;
  FUN_00434150();
  piStack_28 = (int *)0x434987;
  FUN_004843e0();
  piStack_28 = (int *)0x43498c;
  FUN_00409520();
  if ((DAT_0068c0e8 == 0) || (DAT_0068c0e8 == 1)) {
    if (puVar5 == (undefined4 *)0x0) {
      piStack_28 = (int *)0x1;
    }
    else if (DAT_0068c0e8 == 0) {
      piStack_28 = (int *)0x1;
    }
    else {
      piStack_28 = (int *)puVar5[4];
    }
    FUN_00427a80();
  }
  piStack_28 = (int *)0x4349bb;
  FUN_0042fb70();
  piStack_28 = (int *)0x4349c0;
  fVar13 = (float10)FUN_00483b10();
  piVar9 = (int *)param_1;
  _DAT_00689780 = (double)fVar13;
  _DAT_0068c050 = (double)fVar13;
  _DAT_0068c068 = 0.0;
  if ((param_1 == (int **)0x0) || (DAT_0066e62a == 0)) {
    piStack_28 = (int *)0x434a00;
    fVar13 = (float10)FUN_00401000();
    _DAT_0068c0f8 = (double)fVar13;
  }
  else {
    piStack_28 = (int *)param_1;
    FUN_004836a0();
  }
  if (_DAT_0068c068 == _DAT_0064a668) {
    piStack_28 = (int *)0x434a1e;
    fVar13 = (float10)FUN_00401000();
    _DAT_0068c068 = (double)(fVar13 + (float10)_DAT_0064a860);
  }
  piStack_28 = (int *)0x434a2f;
  FUN_004843e0();
  if (DAT_0068c27c != 0) {
    piStack_28 = (int *)0x434a3c;
    FUN_0046d490();
  }
  piStack_28 = (int *)0x434a41;
  fVar13 = (float10)FUN_00483b10();
  _DAT_00689780 = (double)fVar13;
  _DAT_0068c050 = (double)fVar13;
  DAT_0068c0a4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    DAT_0068c0a4 = puVar5[2];
    piStack_28 = DAT_0068c00c;
    FUN_004471c0();
    uVar4 = 0xffffffff;
    pcVar12 = (char *)puVar5[3];
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    piStack_28 = (int *)((char *)puVar5[3] + ~uVar4);
    FUN_0044c1c0(DAT_0068c00c);
    piVar9 = (int *)param_1;
  }
  if ((piVar9 == (int *)0x0) || (DAT_0066e62a == 0)) {
    piStack_28 = (int *)0x434ac4;
    FUN_00423cf0();
    piStack_28 = (int *)0x0;
    FUN_0041d430();
    if ((DAT_0068c0e8 == 1) || (DAT_0068c0e8 == 0)) {
      piStack_28 = (int *)s_pos_work_dr_33_0066d35c;
      puVar5 = (undefined4 *)FUN_004365f0();
      FUN_0041d0e0(*puVar5);
      puVar5 = (undefined4 *)FUN_004365f0(&param_1,s_pos_work_dr_37_0066d34c);
      FUN_0041d0e0(*puVar5);
    }
  }
  else {
    DAT_0066b68c = 0;
    piStack_28 = (int *)0x434abd;
    FUN_0042ce50();
  }
  if ((DAT_0068c0e8 == 1) || (DAT_0068c0e8 == 2)) {
    DAT_0068c0c8 = 1;
  }
  DAT_006898ac = (DAT_006898ac + 1) % 0x37;
  DAT_0068c060 = 0;
  DAT_0068c064 = 0xc09f4000;
  DAT_006898b0 = (DAT_006898b0 + 1) % 0x37;
  (&DAT_006897d0)[DAT_006898ac] = (&DAT_006897d0)[DAT_006898ac] - (&DAT_006897d0)[DAT_006898b0];
  uStack_14 = (double)(ulonglong)((uint)(&DAT_006897d0)[DAT_006898ac] % 600 + 600);
  _DAT_0066b6e8 = (double)(longlong)uStack_14;
  if (piVar9 != (int *)0x0) {
    piStack_28 = (int *)0x434bb3;
    fVar13 = (float10)FUN_00401000();
    _DAT_0068c0d0 = (double)((fVar13 + (float10)_DAT_0066b6e8) - (float10)_DAT_0064a680);
  }
  piStack_28 = (int *)0x434bca;
  FUN_0042cc00();
  piStack_28 = (int *)&param_1;
  FUN_00477c00();
  if ((param_1 != (int **)DAT_0068a8f0) && (_DAT_0064a918 < *(double *)(param_1 + 0xc0))) {
    DAT_0068c100 = 1;
  }
  piVar8 = (int *)*DAT_0068a8f0;
  if (piVar8 != DAT_0068a8f0) {
    do {
      param_1 = &piStack_28;
      piStack_28 = piVar8;
      iVar6 = FUN_0040a950();
      if (iVar6 != 0) {
        param_1 = &piStack_28;
        piStack_28 = piVar8;
        iVar6 = FUN_0040a950();
        if (*(int *)(iVar6 + 0x94) != -1) {
          param_1 = &piStack_28;
          piStack_28 = piVar8;
          iVar6 = FUN_0040a950();
          puVar1 = (uint *)(DAT_0068bbe8 + *(int *)(iVar6 + 0x94) * 4);
          *puVar1 = *puVar1 | 1;
        }
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != DAT_0068a8f0);
  }
  if ((piVar9 != (int *)0x0) && (piVar9 = (int *)*DAT_0068a8f0, piVar9 != DAT_0068a8f0)) {
    do {
      param_1 = &piStack_28;
      piStack_28 = piVar9;
      iVar6 = FUN_0040a950();
      if (iVar6 != 0) {
        param_1 = &piStack_28;
        piStack_28 = piVar9;
        iVar6 = FUN_0040a950();
        if (*(int *)(iVar6 + 0x5c) == 0x100) {
          param_1 = &piStack_28;
          piStack_28 = piVar9;
          iVar6 = FUN_0040a950();
          if ((*(uint *)(iVar6 + 0x58) >> 2 & 1) != 0) {
            param_1 = &piStack_28;
            piStack_28 = piVar9;
            iVar6 = FUN_0040a950();
            piVar8 = (int *)(*(int *)(iVar6 + 0x3c4) + 0xc);
            *piVar8 = *piVar8 + 1;
          }
        }
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != DAT_0068a8f0);
  }
  piVar9 = (int *)*DAT_0068a8f0;
  if (piVar9 != DAT_0068a8f0) {
    do {
      param_1 = &piStack_28;
      piStack_28 = piVar9;
      iVar6 = FUN_0040a950();
      if (iVar6 != 0) {
        param_1 = &piStack_28;
        piStack_28 = piVar9;
        iVar6 = FUN_0040a950();
        if (*(int *)(iVar6 + 0x5c) == 0x101) {
          param_1 = &piStack_28;
          piStack_28 = piVar9;
          iVar6 = FUN_0040a950();
          if ((*(uint *)(iVar6 + 0x58) >> 2 & 1) != 0) {
            DAT_0068c0b4 = DAT_0068c0b4 + 1;
          }
        }
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != DAT_0068a8f0);
  }
  piStack_28 = (int *)0x434d4b;
  FUN_00434800();
  piVar9 = (int *)*DAT_0068a8fc;
  if (piVar9 != DAT_0068a8fc) {
    do {
      piStack_28 = (int *)piVar9[2];
      FUN_00631d5c();
      piVar9 = (int *)*piVar9;
    } while (piVar9 != DAT_0068a8fc);
  }
  piStack_28 = (int *)0x434d77;
  FUN_00453b20();
  if (DAT_0068c0e8 == 0) {
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x434da3;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x40240000;
      puVar5[8] = s_formOrders_0066d340;
      puVar5[10] = &LAB_0041b7f0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 1;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x434e14;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x40200000;
      puVar5[8] = s_updateRating_0066d330;
      puVar5[10] = FUN_0041fde0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 2;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x434e85;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x401c0000;
      puVar5[8] = s_updatePresents_0066d320;
      puVar5[10] = &LAB_0041ee40;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 3;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      piStack_28 = (int *)0x434f0b;
      fVar14 = (float10)FUN_0061d200();
      fVar13 = (float10)_DAT_0064a900;
      puVar5[2] = 0;
      uStack_14 = (double)(fVar14 * fVar13);
      piStack_28 = (int *)0x434f1d;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = (undefined4)uStack_14;
      puVar5[7] = uStack_14._4_4_;
      puVar5[8] = s_updateGhosts_0066d310;
      puVar5[10] = FUN_00420fc0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 4;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x434f92;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x403b8000;
      puVar5[8] = s_updateDealers_0066d300;
      puVar5[10] = &LAB_00422460;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 5;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      piStack_28 = (int *)s_ObstaclesTask_0066d2f0;
      DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
      DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
      (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
      uStack_14 = (double)(ulonglong)((uint)(&DAT_0068a928)[DAT_0068aa04] % 300 + 600);
      FUN_00435730(FUN_0042b480,(double)(longlong)uStack_14);
      *puVar5 = &PTR_LAB_0064a8f8;
      uVar3 = DAT_0068c06c;
      puVar5[4] = DAT_0068c068;
      puVar5[5] = uVar3;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 6;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x4350f7;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x3ff00000;
      puVar5[8] = s_updateAmbushes_0066d2e0;
      puVar5[10] = FUN_0042c470;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 7;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x43516d;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x403e0000;
      puVar5[8] = s_provideRacesRegular_0066d2cc;
      puVar5[10] = FUN_00427ab0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 8;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      DAT_0068c080 = (undefined4 *)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x4351de;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x403e0000;
      puVar5[8] = s_provideCompetitionRegular_0066d2b0;
      puVar5[10] = FUN_00426380;
      *puVar5 = &PTR_LAB_0064a910;
      DAT_0068c080 = puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    param_1 = (int **)DAT_0068c080;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 9;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x435255;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x403e0000;
      puVar5[8] = s_updateCompanies_0066d2a0;
      puVar5[10] = FUN_00429a10;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 10;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x4352c5;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x3ff00000;
      puVar5[8] = s_expirePlayerOrders_0066d28c;
      puVar5[10] = FUN_0042a090;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0xb;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x435332;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x3ff00000;
      puVar5[8] = s_expirePresentOrders_0066d278;
      puVar5[10] = FUN_0042a200;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0xc;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x43539f;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x40240000;
      puVar5[8] = s_destroyStraySemitrailers_0066d25c;
      puVar5[10] = FUN_0042a2a0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0xd;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x435410;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x40330000;
      puVar5[8] = s_expireParkedCars_0066d248;
      puVar5[10] = FUN_0042a3a0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0xe;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x435481;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x40080000;
      puVar5[8] = s_updateChasedCars_0066d234;
      puVar5[10] = FUN_00432eb0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0xf;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x4354f2;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0;
      puVar5[7] = 0x4072c000;
      puVar5[8] = s_markAmbushes_0066d224;
      puVar5[10] = FUN_0042c190;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0x10;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x43556b;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0x66666666;
      puVar5[7] = 0x40226666;
      puVar5[8] = s_detectJams_0066d218;
      puVar5[10] = FUN_00420130;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0x11;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x4355dc;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0x9999999a;
      puVar5[7] = 0x403b1999;
      puVar5[8] = s_recoverServices_0066d208;
      puVar5[10] = FUN_0042a4d0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0x12;
    param_2 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_1 = (int **)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x435651;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0x33333333;
      puVar5[7] = 0x401d3333;
      puVar5[8] = s_changeLanes_0066d1fc;
      puVar5[10] = FUN_004209a0;
      *puVar5 = &PTR_LAB_0064a910;
      param_1 = (int **)puVar5;
    }
    piStack_28 = (int *)&param_1;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&param_3);
    piStack_28 = (int *)0x30;
    puVar5 = (undefined4 *)FUN_00631d33();
    uStack_4 = 0x13;
    param_1 = (int **)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      puVar5[2] = 0;
      piStack_28 = (int *)0x4356c6;
      fVar13 = (float10)FUN_00401000();
      *(double *)(puVar5 + 4) = (double)fVar13;
      puVar5[6] = 0x66666666;
      puVar5[7] = 0x40146666;
      puVar5[8] = s_damageCargo_0066d1f0;
      puVar5[10] = FUN_00420c80;
      *puVar5 = &PTR_LAB_0064a910;
      param_2 = puVar5;
    }
    piStack_28 = (int *)&param_2;
    uStack_4 = 0xffffffff;
    FUN_004896a0(&stack0xffffffd4);
    FUN_0044afd0(&uStack_14);
  }
  DAT_0068c04c = 1;
  ExceptionList = pvStack_c;
  return;
}


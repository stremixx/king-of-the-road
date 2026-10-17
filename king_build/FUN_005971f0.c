
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005971f0(int param_1)

{
  float fVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 extraout_ECX;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  float10 fVar13;
  char *pcStack_160;
  char *pcStack_15c;
  uint uVar14;
  char *local_144;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 local_130;
  int local_124;
  undefined1 auStack_120 [28];
  char local_104 [192];
  undefined1 auStack_44 [48];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  piVar5 = DAT_00695c00;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00647417;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (1 < *(int *)(DAT_006cdbcc + 0x514)) {
    ExceptionList = &pvStack_14;
    if ((_DAT_0064a668 < *(double *)(DAT_00695c00 + 0x7c6)) &&
       ((local_144 = (char *)DAT_00695c00[0x7c1], DAT_006f2434 <= (int)(local_144 + 4) ||
        (ExceptionList = &pvStack_14,
        (double)DAT_006f2434 <
        (double)(int)local_144 + *(double *)(DAT_00695c00 + 0x7c6) + _DAT_0064a7b0)))) {
      ExceptionList = &pvStack_14;
      DAT_00695c00[0x7c6] = 0;
      piVar5[0x7c7] = 0;
      DAT_00695c00[0x2f4] = 1;
    }
    piVar5 = DAT_00695c00;
    if (*(double *)(DAT_00695c00 + 0x7c6) < _DAT_0064a668) {
      local_144 = (char *)(4 - DAT_00695c00[0x7c1]);
      if ((*(double *)(DAT_00695c00 + 0x7c6) < (double)(int)local_144) || (DAT_00695c00[0x7c1] < 5))
      {
        DAT_00695c00[0x7c6] = 0;
        piVar5[0x7c7] = 0;
      }
    }
  }
  local_124 = param_1;
  if (*(int *)(param_1 + 0x10) < 4) {
    _pcStack_15c = 1.0601749015618772e-306;
    DAT_006f59b0 = FUN_005eea00();
  }
  _pcStack_15c = 5.09307952710804e-313;
  iVar4 = FUN_0052f7d0();
  if ((iVar4 != 0) && (*(int *)(DAT_006d0fd8 + 0x578) == 0)) {
    _DAT_0067d0c0 = _DAT_0067d0c0 - *(double *)(DAT_00695c00 + 0x2e4) * _DAT_0064a830;
    if (_DAT_0067d0c0 < _DAT_0064a7a8) {
      _DAT_0067d0c0 = 1.2;
    }
    _pcStack_15c = (double)CONCAT44(DAT_006957c8,DAT_0067d0c4);
    pcStack_160 = DAT_0067d0c0;
    FUN_00603470(s_EFFECTS_00671998,s_xpyramid_0067d0ec);
  }
  _pcStack_15c = 5.30527911267683e-313;
  iVar4 = FUN_0052f7d0();
  if ((iVar4 != 0) && (*(int *)(DAT_006d0fd8 + 0x578) == 0)) {
    _DAT_0067d0c0 = *(double *)(DAT_00695c00 + 0x2e4) * _DAT_0064a830 + _DAT_0067d0c0;
    if (_DAT_0064a650 < _DAT_0067d0c0) {
      _DAT_0067d0c0 = 2.0;
    }
    _pcStack_15c = (double)CONCAT44(DAT_006957c8,DAT_0067d0c4);
    pcStack_160 = DAT_0067d0c0;
    FUN_00603470(s_EFFECTS_00671998,s_xpyramid_0067d0ec);
  }
  _pcStack_15c = 4.88087996090663e-313;
  iVar4 = FUN_0052f7d0();
  if (iVar4 != 0) {
    _pcStack_15c = 8.4908795911015e-314;
    iVar4 = FUN_0052f7d0();
    if (iVar4 != 0) {
      iVar4 = *(int *)(DAT_006d0fd8 + 0x268);
      iVar8 = *(int *)(iVar4 + 0x51b8);
      if (iVar8 == 0) {
        *(undefined4 *)(iVar4 + 0x51b8) = 2;
      }
      else if (iVar8 == 1) {
        *(undefined4 *)(iVar4 + 0x51b8) = 2;
      }
      else if (iVar8 == 2) {
        *(undefined4 *)(iVar4 + 0x51b8) = 1;
      }
    }
  }
  _pcStack_15c = 4.88087996530381e-313;
  iVar4 = FUN_0052f7d0();
  if (iVar4 != 0) {
    _pcStack_15c = 8.49087963260302e-314;
    iVar4 = FUN_0052f7d0();
    if (iVar4 == 0) {
      *(uint *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x51b8) =
           (uint)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x51b8) == 0);
    }
  }
  _pcStack_15c = 7.21507533833001e-313;
  iVar4 = FUN_0052f7d0();
  if ((iVar4 != 0) && (*(int *)(DAT_006cdbcc + 0x514) < 2)) {
    _pcStack_15c = (double)CONCAT44(0x5974c5,pcStack_15c);
    FUN_004184d0();
    local_c = 0;
    _pcStack_15c = (double)CONCAT44(&local_144,0x5974d6);
    FUN_00568670();
    pcStack_160 = local_104;
    _pcStack_15c = (double)(ZEXT48(pcStack_160) << 0x20);
    local_130 = CONCAT44(local_130._4_4_,&pcStack_160);
    FUN_0041d3f0(&local_144);
    iVar4 = FUN_00442320();
    if (iVar4 == 0) {
      pcStack_15c = &stack0xfffffea8;
      local_130 = CONCAT44(local_130._4_4_,&stack0xfffffea8);
      pcStack_160 = (char *)0x597509;
      uVar14 = extraout_ECX;
      FUN_00568670();
      _pcStack_15c = (double)CONCAT44(uVar14,0x597511);
      FUN_00445290();
      _pcStack_15c = (double)CONCAT44(0x597519,pcStack_15c);
      FUN_0056eda0();
      _pcStack_15c = 3.0517585287270776e-05;
      pcStack_160 = s_order1Sound_0067d2bc;
      FUN_005eea00();
      pcStack_160 = (char *)0x597537;
      FUN_005fd160();
    }
    local_c = 3;
    _pcStack_15c = (double)CONCAT44(0x59754a,pcStack_15c);
    FUN_0044a450();
    local_c._0_1_ = 2;
    _pcStack_15c = (double)CONCAT44(0x59755e,pcStack_15c);
    FUN_0044a450();
    local_c = CONCAT31(local_c._1_3_,1);
    _pcStack_15c = (double)CONCAT44(0x597572,pcStack_15c);
    FUN_0044a450();
    local_c = 0xffffffff;
    _pcStack_15c = (double)CONCAT44(0x597589,pcStack_15c);
    FUN_004497b0();
  }
  _pcStack_15c = 7.00287577123928e-313;
  iVar4 = FUN_0052f7d0();
  DAT_006f2354 = (uint)(iVar4 != 0);
  _pcStack_15c = 9.33707114243743e-313;
  iVar4 = FUN_0052f7d0();
  if (((iVar4 != 0) && (*(int *)(DAT_006cdbcc + 0x524) == 0)) &&
     (*(int *)(DAT_006cdbcc + 0x514) < 2)) {
    *(undefined4 *)(DAT_006cdbcc + 0x504) = 0;
    *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
    *(undefined4 *)(DAT_006cdbcc + 0x510) = 0;
    if ((*(byte *)(DAT_006cdc1c + 4) & 2) == 0) {
      if ((*(byte *)(DAT_006cdc10 + 0x10) & 2) == 0) {
        _pcStack_15c = (double)CONCAT44(0x597616,pcStack_15c);
        (**(code **)(*DAT_006cdc1c + 0x24))();
      }
    }
    else {
      _pcStack_15c = (double)CONCAT44(0x5975f4,pcStack_15c);
      (**(code **)(*DAT_006cdc1c + 0x20))();
      _pcStack_15c = (double)CONCAT44(0x5975ff,pcStack_15c);
      (**(code **)(*DAT_00695c00 + 0x24))();
      _pcStack_15c = (double)CONCAT44(0x597604,pcStack_15c);
      FUN_0050b5d0();
    }
  }
  _pcStack_15c = 7.42727493639866e-313;
  iVar4 = FUN_0052f7d0();
  if (((iVar4 != 0) && (*(int *)(DAT_006cdbcc + 0x514) < 2)) &&
     ((*(int *)(DAT_006cdbcc + 0x524) == 0 || (*(int *)(DAT_006cdbf8 + 0x180) != 2)))) {
    if (*(int *)(DAT_006cdbcc + 0x50c) == 2) {
      *(undefined4 *)(DAT_006cdbcc + 0x50c) = 0;
    }
    else if (*(int *)(DAT_006cdbcc + 0x50c) == 1) {
      *(undefined4 *)(DAT_006cdbcc + 0x50c) = 2;
    }
    else {
      *(undefined4 *)(DAT_006cdbcc + 0x50c) = 1;
      *(undefined4 *)(DAT_006cdbcc + 0x504) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x510) = 0;
    }
  }
  _pcStack_15c = 7.63947452152278e-313;
  iVar4 = FUN_0052f7d0();
  if (((iVar4 != 0) &&
      ((*(int *)(DAT_006cdbcc + 0x524) == 0 || (*(int *)(DAT_006cdbf8 + 0x180) == 2)))) &&
     (*(int *)(DAT_006cdbcc + 0x514) < 2)) {
    if (*(int *)(DAT_006cdbcc + 0x504) == 0) {
      if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
        _pcStack_15c = (double)CONCAT44(0x5976e7,pcStack_15c);
        FUN_00573c00();
      }
      _pcStack_15c = (double)CONCAT44(0x5976f2,pcStack_15c);
      (**(code **)(*DAT_006cdc1c + 0x20))();
      _pcStack_15c = (double)CONCAT44(0x5976fd,pcStack_15c);
      (**(code **)(*DAT_00695c00 + 0x24))();
      if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
        _pcStack_15c = (double)CONCAT44(0x59770f,pcStack_15c);
        FUN_0050b860();
      }
      *(undefined4 *)(DAT_006cdbcc + 0x504) = 1;
      *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x510) = 0;
      _pcStack_15c = 2.8968175522719e-317;
      FUN_004e1230();
    }
    else {
      *(undefined4 *)(DAT_006cdbcc + 0x504) = 0;
      _pcStack_15c = (double)CONCAT44(0x5976dc,pcStack_15c);
      FUN_0050b970();
    }
  }
  _pcStack_15c = 7.85167410906783e-313;
  iVar4 = FUN_0052f7d0();
  if (((iVar4 != 0) && (*(int *)(DAT_006cdbcc + 0x524) == 0)) &&
     (*(int *)(DAT_006cdbcc + 0x514) < 2)) {
    if (*(int *)(DAT_006cdbcc + 0x508) == 0) {
      _pcStack_15c = (double)CONCAT44(0x597780,pcStack_15c);
      (**(code **)(*DAT_006cdc1c + 0x20))();
      _pcStack_15c = (double)CONCAT44(0x59778b,pcStack_15c);
      (**(code **)(*DAT_00695c00 + 0x24))();
      _pcStack_15c = (double)CONCAT44(0x597790,pcStack_15c);
      FUN_0050b860();
      _pcStack_15c = (double)CONCAT44(0x597795,pcStack_15c);
      FUN_005686a0();
      _pcStack_15c = 2.89686646477084e-317;
      FUN_004e1230();
    }
    else {
      *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
      _pcStack_15c = (double)CONCAT44(0x597773,pcStack_15c);
      FUN_0050b970();
    }
  }
  _pcStack_15c = 8.27607327215214e-313;
  iVar4 = FUN_0052f7d0();
  if ((iVar4 != 0) && (*(int *)(DAT_006cdbcc + 0x514) < 2)) {
    if (*(int *)(DAT_006cdbcc + 0x510) == 0) {
      _pcStack_15c = (double)CONCAT44(0x5977db,pcStack_15c);
      (**(code **)(*DAT_006cdc1c + 0x20))();
      _pcStack_15c = (double)CONCAT44(0x5977e6,pcStack_15c);
      (**(code **)(*DAT_00695c00 + 0x24))();
      _pcStack_15c = (double)CONCAT44(0x5977eb,pcStack_15c);
      FUN_0050b860();
      *(undefined4 *)(DAT_006cdbcc + 0x504) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x510) = 1;
      _pcStack_15c = 2.89692624671398e-317;
      FUN_004e1230();
    }
    else {
      *(undefined4 *)(DAT_006cdbcc + 0x510) = 0;
      _pcStack_15c = (double)CONCAT44(0x5977ce,pcStack_15c);
      FUN_0050b970();
    }
  }
  _pcStack_15c = 5.94187790806853e-313;
  iVar4 = FUN_0052f7d0();
  if ((iVar4 != 0) && (DAT_006f5870 != 0)) {
    DAT_006f59a4 = DAT_006f59a4 ^ 1;
  }
  _pcStack_15c = 6.15407748864726e-313;
  iVar4 = FUN_0052f7d0();
  if (((iVar4 != 0) && (*(int *)(DAT_006cdbcc + 0x514) < 2)) &&
     (*(int *)(DAT_006cdbcc + 0x524) == 0)) {
    _pcStack_15c = (double)CONCAT44(0x59785f,pcStack_15c);
    FUN_0051d260();
  }
  _pcStack_15c = 6.36627706981886e-313;
  iVar4 = FUN_0052f7d0();
  if (((iVar4 != 0) && (*(int *)(DAT_006cdbcc + 0x514) < 2)) &&
     (*(int *)(DAT_006cdbcc + 0x524) == 0)) {
    _pcStack_15c = (double)CONCAT44(0x597889,pcStack_15c);
    FUN_00511c90();
  }
  _pcStack_15c = 6.79067623008699e-313;
  FUN_0052f7d0();
  _pcStack_15c = 6.57847665158334e-313;
  iVar4 = FUN_0052f7d0();
  if (((iVar4 != 0) && (*(int *)(DAT_006cdbcc + 0x524) == 0)) &&
     (*(int *)(DAT_006cdbcc + 0x514) < 2)) {
    _pcStack_15c = (double)CONCAT44(0x5978c5,pcStack_15c);
    (**(code **)(*DAT_006cdc50 + 0x24))();
  }
  _pcStack_15c = 8.4882728658236e-313;
  iVar4 = FUN_0052f7d0();
  if (iVar4 == 0) {
LAB_00597906:
    DAT_006f2360 = 0;
  }
  else {
    _pcStack_15c = (double)CONCAT44(0x5978e5,pcStack_15c);
    iVar4 = (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 4))();
    if (iVar4 != 1) goto LAB_00597906;
    if (*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5578) != 0) {
      *(undefined4 *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5584) = 1;
      goto LAB_00597906;
    }
    DAT_006f2360 = 1;
  }
  _pcStack_15c = 9.12487160662105e-313;
  iVar4 = FUN_0052f7d0();
  if (iVar4 != 0) {
    _pcStack_15c = (double)CONCAT44(0x597921,pcStack_15c);
    FUN_00568e60();
  }
  _pcStack_15c = 8.70047244946553e-313;
  iVar4 = FUN_0052f7d0();
  if ((iVar4 != 0) && (*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) != 0)) {
    _pcStack_15c = (double)CONCAT44(0x597952,pcStack_15c);
    fVar13 = (float10)FUN_004eae60();
    if (fVar13 <= (float10)_DAT_0064b254) {
      _pcStack_15c = 0.0;
      pcStack_160 = (char *)0x75;
      pcStack_160 = (char *)FUN_005d2500();
      FUN_0056a5a0(8);
    }
  }
  _pcStack_15c = (double)CONCAT44(0x59797b,pcStack_15c);
  iVar4 = FUN_0056a590();
  if ((((iVar4 != 8) && (*(int *)(DAT_006d0fd8 + 0x268) != 0)) &&
      (iVar4 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0x3c80) == 0)) {
    _pcStack_15c = 0.0;
    pcStack_160 = (char *)0x76;
    pcStack_160 = (char *)FUN_005d2500();
    FUN_0056a5a0(8);
  }
  if (DAT_006f586c == DAT_00695c00) {
    _pcStack_15c = (double)CONCAT44(0x5979d6,pcStack_15c);
    iVar4 = __ftol();
    if (iVar4 % 0x3c == 0) {
      _pcStack_15c = (double)CONCAT44(&local_144,0x5979f0);
      FUN_004364a0();
      if (local_144 != DAT_0068a8f0) {
        do {
          _pcStack_15c = (double)CONCAT44(*(undefined4 *)(local_144 + 0x54),0x597a1a);
          iVar4 = FUN_005e4980();
          if (((iVar4 != 0) && (piVar5 = *(int **)(iVar4 + 0x1c), piVar5 != (int *)0x0)) &&
             (piVar5 != *(int **)(DAT_006d0fd8 + 0x268))) {
            _pcStack_15c = (double)CONCAT44(0x597a42,pcStack_15c);
            (**(code **)(*piVar5 + 0x74))();
            _pcStack_15c = (double)CONCAT44(0x597a49,pcStack_15c);
            (**(code **)(*piVar5 + 0x78))();
            _pcStack_15c = (double)CONCAT44(0x597a5a,pcStack_15c);
            fVar13 = (float10)FUN_004eaf00();
            _pcStack_15c = (double)CONCAT44((float)fVar13,0x597a6f);
            FUN_004eae80();
            _pcStack_15c = 0.00781250001017252;
            (**(code **)(*piVar5 + 0x50))();
            local_130 = CONCAT44(local_130._4_4_,&stack0xfffffea8);
            _pcStack_15c = (double)CONCAT44(local_144,0x597a8d);
            fVar13 = (float10)FUN_0043f840();
            _pcStack_15c = (double)fVar13;
            local_130._4_4_ = (undefined4)((ulonglong)_pcStack_15c >> 0x20);
            local_130 = CONCAT44(local_130._4_4_,&pcStack_160);
            FUN_0041d3f0(&local_144);
            FUN_0043f8a0();
          }
          local_130 = CONCAT44(local_130._4_4_,&stack0xfffffea8);
          _pcStack_15c = (double)CONCAT44(local_144,&uStack_140);
          pcStack_160 = (char *)0x597ace;
          piVar5 = (int *)FUN_004364d0();
          local_144 = (char *)*piVar5;
        } while (local_144 != DAT_0068a8f0);
      }
    }
  }
  _pcStack_15c = (double)CONCAT44(0x597aea,pcStack_15c);
  FUN_0056f2e0();
  if (*(int *)(DAT_006d0fd8 + 0x268) != 0) {
    _pcStack_15c = (double)CONCAT44(0x597afe,pcStack_15c);
    fVar13 = (float10)FUN_00554c10();
    if ((float10)_DAT_0064b948 < fVar13) {
      _pcStack_15c = 4.24734778369658e-314;
      pcStack_160 = (char *)0x597b16;
      FUN_005271c0();
    }
  }
  if (*(int *)(DAT_006cdbcc + 0x508) != 0) {
    uStack_140 = _DAT_006f2370 + _DAT_0064a5e0;
    _pcStack_15c = (double)CONCAT44(0x597b3c,pcStack_15c);
    fVar13 = (float10)thunk_FUN_00603580();
    if ((float10)uStack_140 < fVar13) {
      *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
    }
  }
  pcVar11 = *(char **)(*(int *)(DAT_00695c00[0x7a] + 0x4c) + 0x24);
  local_144 = pcVar11;
  if ((pcVar11 != DAT_006f2410) && (DAT_006f2310 != 0)) {
    pbVar7 = *(byte **)(pcVar11 + 0x3c);
    pbVar9 = &DAT_0067d2b8;
    pbVar6 = pbVar7;
    do {
      bVar2 = *pbVar6;
      bVar12 = bVar2 < *pbVar9;
      if (bVar2 != *pbVar9) {
LAB_00597bbb:
        iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00597bc0;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar12 = bVar2 < pbVar9[1];
      if (bVar2 != pbVar9[1]) goto LAB_00597bbb;
      pbVar6 = pbVar6 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_00597bc0:
    if (iVar4 == 0) {
LAB_00597c80:
      iVar4 = 0;
      uVar3 = (ulonglong)uStack_140 >> 0x20;
      uStack_140 = (double)((ulonglong)uStack_140 & 0xffffffff00000000);
      if (0 < *(int *)(pcVar11 + 0x48)) {
        pbVar7 = *(byte **)(pcVar11 + 0x4c);
        do {
          pcVar10 = s_mat_sea0_0067d2a0;
          pbVar6 = pbVar7;
          do {
            bVar2 = *pbVar6;
            bVar12 = bVar2 < (byte)*pcVar10;
            if (bVar2 != *pcVar10) {
LAB_00597cbb:
              iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00597cc0;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar12 = bVar2 < (byte)pcVar10[1];
            if (bVar2 != pcVar10[1]) goto LAB_00597cbb;
            pbVar6 = pbVar6 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar2 != 0);
          iVar8 = 0;
LAB_00597cc0:
          if (iVar8 == 0) {
            uStack_140 = (double)CONCAT44((int)uVar3,*(int *)(pcVar11 + 0x4c) + iVar4 * 0x7c);
            break;
          }
          iVar4 = iVar4 + 1;
          pbVar7 = pbVar7 + 0x7c;
        } while (iVar4 < *(int *)(pcVar11 + 0x48));
      }
      _pcStack_15c = (double)CONCAT44(&uStack_140,1);
      pcStack_160 = (char *)0x597cf9;
      FUN_0060e130();
      piVar5 = (int *)(pcVar11 + 0x48);
      iVar4 = 0;
      if (0 < *piVar5) {
        pbVar7 = *(byte **)(pcVar11 + 0x4c);
        do {
          pcVar11 = s_mat_horizon_0067d294;
          pbVar6 = pbVar7;
          do {
            bVar2 = *pbVar6;
            bVar12 = bVar2 < (byte)*pcVar11;
            if (bVar2 != *pcVar11) {
LAB_00597d30:
              iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00597d35;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar12 = bVar2 < (byte)pcVar11[1];
            if (bVar2 != pcVar11[1]) goto LAB_00597d30;
            pbVar6 = pbVar6 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar2 != 0);
          iVar8 = 0;
LAB_00597d35:
          pcVar11 = local_144;
          if (iVar8 == 0) {
            uStack_140 = (double)CONCAT44(uStack_140._4_4_,*(int *)(local_144 + 0x4c) + iVar4 * 0x7c
                                         );
            break;
          }
          iVar4 = iVar4 + 1;
          pbVar7 = pbVar7 + 0x7c;
        } while (iVar4 < *piVar5);
      }
      _pcStack_15c = (double)CONCAT44(SUB84(uStack_140,0),0x597d6c);
      FUN_0060e150();
      if (DAT_006f2410 == (char *)0x0) {
LAB_00597e51:
        uVar14 = (uint)(DAT_006f2410 == (char *)0x0);
        _pcStack_15c = (double)CONCAT44(uVar14,0x597e64);
        FUN_0060dc40();
      }
      else {
        pbVar7 = *(byte **)(DAT_006f2410 + 0x3c);
        pbVar9 = &DAT_0067d2b8;
        pbVar6 = pbVar7;
        do {
          bVar2 = *pbVar6;
          bVar12 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_00597da8:
            iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00597dad;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar12 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_00597da8;
          pbVar6 = pbVar6 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00597dad:
        if (iVar4 != 0) {
          pbVar9 = &DAT_0067d2b4;
          pbVar6 = pbVar7;
          do {
            bVar2 = *pbVar6;
            bVar12 = bVar2 < *pbVar9;
            if (bVar2 != *pbVar9) {
LAB_00597de0:
              iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00597de5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar12 = bVar2 < pbVar9[1];
            if (bVar2 != pbVar9[1]) goto LAB_00597de0;
            pbVar6 = pbVar6 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_00597de5:
          if (iVar4 != 0) {
            pbVar9 = &DAT_0067d2b0;
            pbVar6 = pbVar7;
            do {
              bVar2 = *pbVar6;
              bVar12 = bVar2 < *pbVar9;
              if (bVar2 != *pbVar9) {
LAB_00597e14:
                iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00597e19;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar6[1];
              bVar12 = bVar2 < pbVar9[1];
              if (bVar2 != pbVar9[1]) goto LAB_00597e14;
              pbVar6 = pbVar6 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar2 != 0);
            iVar4 = 0;
LAB_00597e19:
            if (iVar4 != 0) {
              pbVar6 = &DAT_0067d2ac;
              do {
                bVar2 = *pbVar7;
                bVar12 = bVar2 < *pbVar6;
                if (bVar2 != *pbVar6) {
LAB_00597e48:
                  iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00597e4d;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar12 = bVar2 < pbVar6[1];
                if (bVar2 != pbVar6[1]) goto LAB_00597e48;
                pbVar7 = pbVar7 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_00597e4d:
              if (iVar4 != 0) goto LAB_00597e51;
            }
          }
        }
      }
    }
    else {
      pbVar9 = &DAT_0067d2b4;
      pbVar6 = pbVar7;
      do {
        bVar2 = *pbVar6;
        bVar12 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00597bf3:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00597bf8;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar12 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00597bf3;
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00597bf8:
      if (iVar4 == 0) goto LAB_00597c80;
      pbVar9 = &DAT_0067d2b0;
      pbVar6 = pbVar7;
      do {
        bVar2 = *pbVar6;
        bVar12 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00597c2b:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00597c30;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar12 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00597c2b;
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00597c30:
      if (iVar4 == 0) goto LAB_00597c80;
      pbVar6 = &DAT_0067d2ac;
      do {
        bVar2 = *pbVar7;
        bVar12 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00597c5f:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00597c64;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar12 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00597c5f;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00597c64:
      if (iVar4 == 0) goto LAB_00597c80;
      uVar14 = (uint)(DAT_006f2410 == (char *)0x0);
      _pcStack_15c = (double)CONCAT44(uVar14,0x597c7b);
      FUN_0060dcc0();
    }
    DAT_006f2410 = pcVar11;
  }
  if ((*(int *)(DAT_006cdbcc + 0x514) == 1) || (*(int *)(DAT_006cdbcc + 0x524) == 1)) {
    _pcStack_15c = (double)CONCAT44(0x597e90,pcStack_15c);
    FUN_006022c0();
    _pcStack_15c = (double)CONCAT44(0xc,&uStack_140);
    pcStack_160 = (char *)0x3bb;
    local_c = 4;
    uStack_140 = (double)CONCAT44((float)((float10)*(double *)(DAT_006f230c + 0x68) *
                                         (float10)_DAT_0064d4b8),
                                  (float)*(double *)(DAT_006f230c + 0x58));
    uStack_138 = *(undefined4 *)(DAT_006f230c + 0x220);
    FUN_006027f0();
    _pcStack_15c = (double)CONCAT44(auStack_120,0x597ee3);
    FUN_005c2d10();
    local_c = 0xffffffff;
    _pcStack_15c = (double)CONCAT44(0x597ef7,pcStack_15c);
    FUN_00602560();
  }
  _pcStack_15c = (double)CONCAT44(*(undefined4 *)(DAT_006cdbcc + 0x54c),0x597f09);
  FUN_005969c0();
  _pcStack_15c = (double)*(float *)(DAT_006f230c + 0x224);
  pcStack_160 = (char *)0x597f1d;
  FUN_005cdc00();
  if (*(int *)(DAT_006cdbcc + 0x540) != 0) {
    _pcStack_15c = (double)CONCAT44(0x597f33,pcStack_15c);
    FUN_0062a170();
  }
  if (*(int *)(DAT_00695c00[0x76] + 0x4c) == -1) {
    _pcStack_15c = 1.69788641670022e-313;
    FUN_005d7ce0();
  }
  _pcStack_15c = 0.0;
  pcStack_160 = (char *)0x597f59;
  fVar13 = (float10)FUN_005a9410();
  if ((_DAT_0064a590 < _DAT_006f2428) && (DAT_006f59b0 != 0)) {
    pcStack_160 = (char *)(float)((fVar13 * (float10)_DAT_0064a6d0 + (float10)_DAT_0064ba68) *
                                 (float10)_DAT_006f2428);
    _pcStack_15c = (double)CONCAT44(10,pcStack_160);
    local_144 = pcStack_160;
    FUN_005fcaa0();
  }
  _DAT_006f2428 = _DAT_006f2428 * _DAT_0064fa88;
  if (*(int *)(DAT_006d0fd8 + 0x268) != 0) {
    _pcStack_15c = (double)CONCAT44(auStack_44,0x597fd6);
    iVar4 = FUN_0057d570();
    fVar1 = *(float *)(iVar4 + 0x2c);
    uStack_140 = (double)fVar1;
    if (_DAT_0064f9dc <= fVar1) {
      if (_DAT_0064f9e0 <= fVar1) {
        *(undefined4 *)(DAT_006f230c + 0x228) = 0;
      }
      else {
        *(float *)(DAT_006f230c + 0x228) =
             (float)_DAT_0064a660 - (fVar1 - _DAT_0064f9dc) / (_DAT_0064f9e0 - _DAT_0064f9dc);
      }
    }
    else {
      *(undefined4 *)(DAT_006f230c + 0x228) = 0x3f800000;
    }
  }
  if ((DAT_00674cb0 < 0) || (DAT_00674cb0 + 2 != DAT_00695c00[0x2ec])) goto LAB_00598299;
  if (*(int *)(DAT_00695c00[0x79] + 0x14) != 0) {
    iVar4 = *(int *)(DAT_00695c00[0x79] + 0x10);
    while (iVar4 == 0) {
      _pcStack_15c = 2.12228559045634e-313;
      Sleep(10);
      iVar4 = *(int *)(DAT_00695c00[0x79] + 0x10);
    }
    _pcStack_15c = (double)CONCAT44(0x5980a4,pcStack_15c);
    FUN_005e3ac0();
  }
  _pcStack_15c = 0.0078125;
  DAT_00674cb0 = -1;
  pcStack_160 = (char *)0x5980ba;
  FUN_005a8540();
  iVar4 = DAT_00695c00[0x7a];
  if (iVar4 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar4 + 0x4c);
  }
  pbVar6 = &DAT_006757d0;
  pbVar7 = *(byte **)(*(int *)(iVar8 + 0x24) + 0x3c);
  do {
    bVar2 = *pbVar7;
    bVar12 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_00598107:
      iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_0059810c;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar7[1];
    bVar12 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_00598107;
    pbVar7 = pbVar7 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_0059810c:
  if (iVar8 != 0) {
    if (iVar4 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar4 + 0x4c);
    }
    pbVar6 = &DAT_0067a5d8;
    pbVar7 = *(byte **)(*(int *)(iVar8 + 0x24) + 0x3c);
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < *pbVar6;
      if (bVar2 != *pbVar6) {
LAB_00598152:
        iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00598157;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < pbVar6[1];
      if (bVar2 != pbVar6[1]) goto LAB_00598152;
      pbVar7 = pbVar7 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00598157:
    if (iVar8 != 0) {
      if (iVar4 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar4 + 0x4c);
      }
      pbVar6 = &DAT_0067aa20;
      pbVar7 = *(byte **)(*(int *)(iVar8 + 0x24) + 0x3c);
      do {
        bVar2 = *pbVar7;
        bVar12 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_0059819d:
          iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_005981a2;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar12 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_0059819d;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_005981a2:
      if (iVar8 == 0) {
LAB_005981ed:
        _pcStack_15c = 3.45845952088873e-323;
        pcStack_160 = (char *)0x5981f6;
        FUN_005a8540();
      }
      else {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 0x4c);
        }
        pbVar6 = &DAT_00674130;
        pbVar7 = *(byte **)(*(int *)(iVar4 + 0x24) + 0x3c);
        do {
          bVar2 = *pbVar7;
          bVar12 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_005981e4:
            iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_005981e9;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar12 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_005981e4;
          pbVar7 = pbVar7 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005981e9:
        if (iVar4 == 0) goto LAB_005981ed;
      }
      *(undefined4 *)(DAT_006f230c + 0x240) = 0;
      if (DAT_006f2404 != (int *)0x0) {
        _pcStack_15c = (double)CONCAT44(0x59821b,pcStack_15c);
        (**(code **)(*DAT_006f2404 + 0x28))();
      }
      goto LAB_00598299;
    }
  }
  *(undefined4 *)(DAT_006f230c + 0x240) = 1;
  if (DAT_006f2408 != (int *)0x0) {
    _pcStack_15c = (double)CONCAT44(0x59823b,pcStack_15c);
    (**(code **)(*DAT_006f2408 + 0x28))();
  }
  iVar4 = 0;
  if (DAT_00695c00[0x7a] != 0) {
    iVar4 = *(int *)(DAT_00695c00[0x7a] + 0x4c);
  }
  pbVar6 = &DAT_0067a5d8;
  pbVar7 = *(byte **)(*(int *)(iVar4 + 0x24) + 0x3c);
  do {
    bVar2 = *pbVar7;
    bVar12 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_00598280:
      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00598285;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar7[1];
    bVar12 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_00598280;
    pbVar7 = pbVar7 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00598285:
  if (iVar4 == 0) {
    _pcStack_15c = 2.47032822920623e-323;
  }
  else {
    _pcStack_15c = 2.96439387504748e-323;
  }
  pcStack_160 = (char *)0x598296;
  FUN_005a8540();
LAB_00598299:
  _pcStack_15c = 2.12489405316549e-314;
  FUN_005d29a0();
  ExceptionList = pvStack_14;
  return;
}


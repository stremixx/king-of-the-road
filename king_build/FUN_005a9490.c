
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a9490(int param_1)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  float10 fVar8;
  float10 extraout_ST0;
  undefined1 local_38 [52];
  
  dVar3 = *(double *)(param_1 + 0x58) - _DAT_0064a650;
  bVar2 = dVar3 < _DAT_0064a668;
  *(double *)(param_1 + 0x48) = dVar3;
  if (bVar2) {
    *(double *)(param_1 + 0x48) = dVar3 + _DAT_006506c8;
  }
  fVar8 = (float10)*(double *)(param_1 + 0x48) * (float10)_DAT_006506c0;
  *(double *)(param_1 + 0x48) = (double)fVar8;
  fVar8 = (float10)fsin(fVar8 * (float10)_DAT_0064c8f8 - (float10)_DAT_0064c9f0);
  *(double *)(param_1 + 0x30) = (double)(fVar8 + (float10)_DAT_0064a6d0);
  fVar8 = (float10)FUN_005a9410(0,0);
  *(double *)(param_1 + 0x38) = (double)fVar8;
  fVar8 = (fVar8 - (float10)_DAT_0064a6d0) + (fVar8 - (float10)_DAT_0064a6d0);
  *(double *)(param_1 + 0x40) = (double)fVar8;
  if (fVar8 < (float10)_DAT_0064a668) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
  FUN_005a8c10();
  if ((DAT_007206c8 != 0) &&
     (pcVar4 = s_after_set_env___0067de80, cVar1 = s_after_set_env___0067de80[0], DAT_0071d774 != 0)
     ) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  FUN_005a8070();
  if ((DAT_007206c8 != 0) &&
     (pcVar4 = s_after_set_puddle___0067de6c, cVar1 = s_after_set_puddle___0067de6c[0],
     DAT_0071d774 != 0)) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  FUN_004843e0();
  if (*(int *)(param_1 + 0x238) == 0) {
    if ((*(uint *)(param_1 + 0x23c) & 0x10000) == 0) {
      iVar6 = *(int *)(param_1 + 0x50);
      *(double *)(param_1 + 0x58) =
           (*(double *)(iVar6 + 0xb90) * _DAT_006506c8) /
           (*(double *)(param_1 + 0x60) * _DAT_006506b8) + *(double *)(param_1 + 0x58);
      dVar3 = *(double *)(param_1 + 0x70) * _DAT_006506b8;
      *(double *)(param_1 + 0x68) =
           (*(double *)(iVar6 + 0xb90) * _DAT_0064c8f8) / dVar3 + *(double *)(param_1 + 0x68);
      *(double *)(param_1 + 0x78) =
           ((*(double *)(iVar6 + 0xb90) * _DAT_0064c8f8) / dVar3) * _DAT_006506b0 +
           *(double *)(param_1 + 0x78);
    }
    goto switchD_005a95ed_default;
  }
  switch(DAT_00701524) {
  case 0:
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    dVar3 = (*(double *)(*(int *)(param_1 + 0x50) + 0xb90) * _DAT_006506c8) /
            (*(double *)(param_1 + 0x60) * _DAT_006506b8) + *(double *)(param_1 + 0x58);
    *(double *)(param_1 + 0x58) = dVar3;
    uVar7 = (ushort)(dVar3 < _DAT_006506c8) << 8 | (ushort)(dVar3 == _DAT_006506c8) << 0xe;
    goto LAB_005a9620;
  case 1:
    *(undefined4 *)(param_1 + 0x68) = 0x4d12d84a;
    *(undefined4 *)(param_1 + 0x6c) = 0x3ff921fb;
    dVar3 = (*(double *)(*(int *)(param_1 + 0x50) + 0xb90) * _DAT_006506c8) /
            (*(double *)(param_1 + 0x60) * _DAT_006506b8) + *(double *)(param_1 + 0x58);
    *(double *)(param_1 + 0x58) = dVar3;
    if (_DAT_006506c8 < dVar3) {
      DAT_00701524 = DAT_00701524 + 1;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x68) = 0x4d12d84a;
    *(undefined4 *)(param_1 + 0x6c) = 0x400921fb;
    dVar3 = (*(double *)(*(int *)(param_1 + 0x50) + 0xb90) * _DAT_006506c8) /
            (*(double *)(param_1 + 0x60) * _DAT_006506b8) + *(double *)(param_1 + 0x58);
    *(double *)(param_1 + 0x58) = dVar3;
    if (_DAT_006506c8 < dVar3) {
      DAT_00701524 = DAT_00701524 + 1;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x40000000;
    dVar3 = (*(double *)(*(int *)(param_1 + 0x50) + 0xb90) * _DAT_0064c8f8) /
            (*(double *)(param_1 + 0x70) * _DAT_006506b8) + *(double *)(param_1 + 0x68);
    *(double *)(param_1 + 0x68) = dVar3;
    uVar7 = (ushort)(dVar3 < _DAT_0064c8f8) << 8 | (ushort)(dVar3 == _DAT_0064c8f8) << 0xe;
    goto LAB_005a9620;
  case 4:
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x40180000;
    dVar3 = (*(double *)(*(int *)(param_1 + 0x50) + 0xb90) * _DAT_0064c8f8) /
            (*(double *)(param_1 + 0x70) * _DAT_006506b8) + *(double *)(param_1 + 0x68);
    *(double *)(param_1 + 0x68) = dVar3;
    uVar7 = (ushort)(dVar3 < _DAT_0064c8f8) << 8 | (ushort)(dVar3 == _DAT_0064c8f8) << 0xe;
    goto LAB_005a9620;
  case 5:
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x402c0000;
    dVar3 = (*(double *)(*(int *)(param_1 + 0x50) + 0xb90) * _DAT_0064c8f8) /
            (*(double *)(param_1 + 0x70) * _DAT_006506b8) + *(double *)(param_1 + 0x68);
    *(double *)(param_1 + 0x68) = dVar3;
    uVar7 = (ushort)(dVar3 < _DAT_0064c8f8) << 8 | (ushort)(dVar3 == _DAT_0064c8f8) << 0xe;
LAB_005a9620:
    if (uVar7 == 0) {
      DAT_00701524 = DAT_00701524 + 1;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x40360000;
    dVar3 = (*(double *)(*(int *)(param_1 + 0x50) + 0xb90) * _DAT_0064c8f8) /
            (*(double *)(param_1 + 0x70) * _DAT_006506b8) + *(double *)(param_1 + 0x68);
    *(double *)(param_1 + 0x68) = dVar3;
    if (_DAT_0064c8f8 < dVar3) {
      DAT_00701524 = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
switchD_005a95ed_default:
  if (_DAT_0064c8f8 < *(double *)(param_1 + 0x68)) {
    do {
      dVar3 = *(double *)(param_1 + 0x68) - _DAT_0064c8f8;
      *(double *)(param_1 + 0x68) = dVar3;
    } while (_DAT_0064c8f8 < dVar3);
  }
  if (_DAT_0064c8f8 < *(double *)(param_1 + 0x78)) {
    do {
      dVar3 = *(double *)(param_1 + 0x78) - _DAT_0064c8f8;
      *(double *)(param_1 + 0x78) = dVar3;
    } while (_DAT_0064c8f8 < dVar3);
  }
  if (_DAT_006506c8 < *(double *)(param_1 + 0x58)) {
    do {
      dVar3 = *(double *)(param_1 + 0x58) - _DAT_006506c8;
      *(double *)(param_1 + 0x58) = dVar3;
    } while (_DAT_006506c8 < dVar3);
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar5 = FUN_005ab6d0(local_38,(float)((float10)*(double *)(param_1 + 0x38) *
                                          (float10)_DAT_006506a8 - (float10)_DAT_006506a0));
    FUN_005e1060(*(undefined4 *)(param_1 + 0x90),0,uVar5);
  }
  if (*(double *)(param_1 + 0x38) <= _DAT_0064a798) {
    if (*(double *)(param_1 + 0x38) <= _DAT_00650698) {
      if ((float10)*(double *)(param_1 + 0x38) <= (float10)_DAT_0064a830) {
        *(undefined4 *)(param_1 + 0x214) = 0;
        goto LAB_005a9995;
      }
      fVar8 = ((float10)*(double *)(param_1 + 0x38) - (float10)_DAT_0064a830) *
              (float10)_DAT_00650688;
    }
    else {
      fVar8 = (float10)_DAT_0064ba90 -
              ((float10)*(double *)(param_1 + 0x38) - (float10)_DAT_00650698) *
              (float10)_DAT_00650690;
    }
    *(float *)(param_1 + 0x214) = (float)fVar8;
    iVar6 = __ftol();
    if (iVar6 % 3 == 0) {
      *(float *)(param_1 + 0x214) = (float)(extraout_ST0 * (float10)_DAT_0064c2e8);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x214) = 0x40000000;
    iVar6 = __ftol();
    if (iVar6 % 3 == 0) {
      *(undefined4 *)(param_1 + 0x214) = 0x40800000;
    }
  }
LAB_005a9995:
  if ((DAT_007206c8 != 0) &&
     (pcVar4 = s_after_windp__0067de5c, cVar1 = s_after_windp__0067de5c[0], DAT_0071d774 != 0)) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  fVar8 = (float10)*(double *)(param_1 + 0x38) * (float10)_DAT_0064a728;
  if ((float10)_DAT_0064a5a8 <= fVar8) {
    fVar8 = fVar8 - (float10)_DAT_0064a5a8;
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float10)_DAT_0064a668;
  }
  if ((DAT_00701520 != 0) && ((float10)_DAT_006fa348 < fVar8)) {
    fVar8 = (float10)_DAT_006fa348;
  }
  if (*(int *)(param_1 + 0x1ec) != 0) {
    FUN_005fcaa0((float)fVar8,(float)fVar8,0);
  }
  if (*(double *)(param_1 + 0x38) <= _DAT_0064a798) {
    if (*(int *)(param_1 + 0x98) != 0) {
      FUN_005e10c0(*(int *)(param_1 + 0x98),0);
    }
  }
  else {
    FUN_005e10c0(*(undefined4 *)(param_1 + 0x98),1);
    if (*(int *)(param_1 + 0x1fc) != 0) {
      fVar8 = ((float10)*(double *)(param_1 + 0x38) - (float10)_DAT_0064a798) *
              (float10)*(float *)(param_1 + 0x228);
      if ((DAT_00701520 != 0) && ((float10)_DAT_006fa348 < fVar8)) {
        fVar8 = (float10)_DAT_006fa348;
      }
      FUN_005fcaa0((float)fVar8,(float)fVar8,0);
      FUN_005d29a0(1);
      return;
    }
  }
  FUN_005d29a0(1);
  return;
}


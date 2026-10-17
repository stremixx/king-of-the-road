
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0053abf0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 **ppuVar12;
  char **ppcVar13;
  float10 fVar14;
  float10 fVar15;
  char *apcStack_f0 [3];
  undefined4 **ppuStack_e4;
  undefined4 **ppuStack_e0;
  undefined4 **ppuStack_dc;
  undefined4 **ppuStack_d8;
  undefined4 **ppuStack_d4;
  undefined4 *puStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 *puStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 *puStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 *puStack_9c;
  int iStack_98;
  double dStack_94;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined1 auStack_6c [8];
  float fStack_64;
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  ppuStack_d4 = *(undefined4 ***)(param_1 + 0x268);
  if (ppuStack_d4 != (undefined4 **)0x0) {
    ppuStack_d8 = (undefined4 **)0x53ac0e;
    uVar6 = FUN_0053ee80();
    *(undefined4 *)(param_1 + 0x268) = uVar6;
  }
  if (*(int *)(param_1 + 0x268) == 0) {
    return;
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
  if (iVar10 == 0) {
    return;
  }
  *(undefined4 *)(iVar10 + 0x275c) = DAT_006cdbc8;
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  ppuStack_d4 = (undefined4 **)0x53ac5a;
  FUN_004f27e0();
  *(undefined4 *)(iVar10 + 10000) = 0;
  *(undefined4 *)(iVar10 + 0x270c) = 0;
  ppuStack_d4 = (undefined4 **)0x53ac6e;
  uVar5 = (*(code *)PTR_FUN_0067771c)();
  ppuStack_d4 = (undefined4 **)0x53ac76;
  iVar7 = (*(code *)PTR_FUN_00677720)();
  ppuStack_d4 = (undefined4 **)0x53ac7e;
  iVar8 = (*(code *)PTR_FUN_00677724)();
  *(undefined2 *)(iVar10 + 0x2714) = uVar5;
  if ((iVar8 != 0) && (*(short *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2714) != 0)) {
    *(undefined2 *)(iVar10 + 0x2714) = 2;
  }
  *(short *)(iVar10 + 0x2716) = (short)iVar7;
  if ((iVar8 != 0) && (iVar7 != 0)) {
    *(undefined2 *)(iVar10 + 0x2716) = 2;
  }
  ppuStack_d4 = (undefined4 **)0x2;
  if (DAT_006d0fc8 == 0) {
    ppuStack_d8 = (undefined4 **)0x53ad36;
    fVar14 = (float10)FUN_0052f810();
    ppuStack_d8 = (undefined4 **)(float)fVar14;
    ppuStack_d4 = (undefined4 **)s_injoyfilterA_00678140;
    ppuStack_dc = (undefined4 **)0x53ad51;
    puStack_a8 = ppuStack_d8;
    FUN_004ea55e();
    ppuStack_d4 = (undefined4 **)0x53ad58;
    fVar14 = (float10)FUN_004ea828();
    if (fVar14 < (float10)_DAT_0064b254) {
      *(undefined4 *)(iVar10 + 0x270c) = 0;
      *(float *)(iVar10 + 10000) = (float)-(fVar14 * fVar14 * fVar14);
    }
    else {
      *(float *)(iVar10 + 0x270c) = (float)fVar14;
      *(undefined4 *)(iVar10 + 10000) = 0;
    }
  }
  else {
    ppuStack_d8 = (undefined4 **)0x53acd5;
    fVar14 = (float10)FUN_0052f810();
    puStack_a8 = (undefined4 *)(float)fVar14;
    ppuStack_d4 = (undefined4 **)0x1;
    ppuStack_d8 = (undefined4 **)0x53ace5;
    fVar14 = (float10)FUN_0052f810();
    fStack_a0 = (float)fVar14;
    ppuStack_d4 = (undefined4 **)s_injoyfilterA_00678140;
    ppuStack_d8 = (undefined4 **)puStack_a8;
    ppuStack_dc = (undefined4 **)0x53ad00;
    FUN_004ea55e();
    ppuStack_d4 = (undefined4 **)0x53ad07;
    fVar14 = (float10)FUN_004ea828();
    *(float *)(iVar10 + 0x270c) =
         (float)((fVar14 + (float10)_DAT_0064b240) * (float10)_DAT_0064a6d0);
    *(float *)(iVar10 + 10000) = (fStack_a0 + _DAT_0064b240) * (float)_DAT_0064a6d0;
  }
  if (*(char *)(iVar10 + 0x2700) == '\0') {
    *(undefined2 *)(iVar10 + 0x2716) = 1;
    *(undefined4 *)(iVar10 + 10000) = 0x3f800000;
  }
  ppuStack_d4 = (undefined4 **)0x53adb4;
  uVar4 = (*(code *)PTR_FUN_00677730)();
  *(undefined1 *)(iVar10 + 0x2701) = uVar4;
  ppuStack_d4 = (undefined4 **)0x53adc0;
  fVar14 = (float10)(*(code *)PTR_FUN_00677738)();
  ppuStack_d8 = (undefined4 **)(float)fVar14;
  ppuStack_d4 = (undefined4 **)s_injoyfilterS_00678130;
  ppuStack_dc = (undefined4 **)0x53addb;
  fStack_a4 = (float)ppuStack_d8;
  FUN_004ea55e();
  ppuStack_d4 = (undefined4 **)0x53ade2;
  fVar14 = (float10)FUN_004ea828();
  fVar15 = SQRT(ABS((float10)fStack_a4 - fVar14)) * (float10)_DAT_0064a778 + (float10)_DAT_0064a5a8;
  if ((float10)_DAT_0064b240 < fVar15) {
    fVar15 = (float10)_DAT_0064b240;
  }
  fStack_a0 = 0.0;
  fVar15 = fVar15 * (float10)fStack_a4 + ((float10)_DAT_0064b240 - fVar15) * fVar14;
  puStack_a8 = (undefined4 *)(float)fVar15;
  fStack_a4 = (float)ABS(fVar15);
  fVar1 = _DAT_0064b2f0;
  fVar2 = _DAT_0064b2f4;
  fVar3 = _DAT_0064b32c;
  if ((float10)_DAT_0064b248 <= fVar14) {
    fStack_a0 = 2.0;
    fVar1 = _DAT_0064e3fc;
    fVar2 = _DAT_0064b958;
    fVar3 = _DAT_0064e3f8;
  }
  fVar1 = ((fVar1 * fStack_a4 + fVar3) * fStack_a4 + fVar2) * fStack_a4 + fStack_a0;
  if ((float)puStack_a8 <= _DAT_0064b254) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar10 + 0x271c) = fVar1;
  ppuStack_d4 = (undefined4 **)0x53aea7;
  uVar4 = (*(code *)PTR_FUN_00677728)();
  *(undefined1 *)(iVar10 + 0x2702) = uVar4;
  ppuStack_d4 = (undefined4 **)0x53aeb3;
  uVar4 = (*(code *)PTR_FUN_0067772c)();
  *(undefined1 *)(iVar10 + 0x2703) = uVar4;
  if (*(char *)(iVar10 + 0x2700) == '\x02') {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x1c14) == 0) {
      ppuStack_d4 = (undefined4 **)0x5;
      ppuStack_d8 = (undefined4 **)0x53afa8;
      iVar7 = FUN_0052f7d0();
      ppuStack_d4 = (undefined4 **)0x6;
      ppuStack_d8 = (undefined4 **)0x53afb6;
      iVar8 = FUN_0052f7d0();
      ppuStack_d4 = (undefined4 **)0x7;
      ppuStack_d8 = (undefined4 **)0x53afc4;
      iVar9 = FUN_0052f7d0();
      if (iVar9 != 0) {
        iVar8 = 2;
      }
      if (iVar7 == 0) {
        if (iVar8 == 0) {
          ppuStack_d4 = (undefined4 **)0x11;
          ppuStack_d8 = (undefined4 **)0x53b033;
          iVar7 = FUN_0052f7d0();
          if (iVar7 == 0) {
            iVar8 = 0;
            iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3bdc);
            if (iVar7 != 1 && -1 < iVar7 + -1) {
              do {
                ppuStack_d4 = (undefined4 **)(iVar8 + 8);
                ppuStack_d8 = (undefined4 **)0x53b06c;
                iVar7 = FUN_0052f7d0();
                if (iVar7 != 0) {
                  *(short *)(iVar10 + 0x2746) = (short)iVar8 + 0x16;
                  break;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3bdc) + -1)
              ;
            }
            if (iVar8 == *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3bdc) + -1) {
              ppuStack_d4 = (undefined4 **)0x7;
              ppuStack_d8 = (undefined4 **)0x53b0b7;
              iVar7 = FUN_0052f7d0();
              if (iVar7 == 0) {
                ppuStack_d4 = *(undefined4 ***)
                               (*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x1c14);
                ppuStack_d8 = (undefined4 **)0x53b0e3;
                iVar7 = FUN_0052f860();
                if (iVar7 == 0) goto LAB_0053b0f2;
                *(undefined2 *)(iVar10 + 0x2746) = 0x15;
              }
              else {
                *(undefined2 *)(iVar10 + 0x2746) = 0x14;
              }
            }
          }
          else {
            *(undefined2 *)(iVar10 + 0x2746) = 0x15;
          }
        }
        else {
          *(undefined2 *)(iVar10 + 0x2746) = 0xffff;
          if (iVar8 == 2) {
            *(undefined2 *)(iVar10 + 0x2746) = 0x14;
          }
        }
      }
      else if (iVar8 == 0) {
        *(undefined2 *)(iVar10 + 0x2746) = 1;
        if (iVar7 == 2) {
          *(undefined2 *)(iVar10 + 0x2746) = 0x16;
        }
      }
      else {
        *(undefined2 *)(iVar10 + 0x2746) = 0x15;
      }
    }
    else {
      if (DAT_006d0fcc == 1) {
        ppuStack_d4 = (undefined4 **)0xa;
        ppuStack_d8 = (undefined4 **)0x53aef6;
        iVar7 = FUN_0052f7d0();
        ppuStack_d4 = (undefined4 **)0xb;
      }
      else {
        ppuStack_d4 = (undefined4 **)0x5;
        ppuStack_d8 = (undefined4 **)0x53af08;
        iVar7 = FUN_0052f7d0();
        ppuStack_d4 = (undefined4 **)0x6;
      }
      ppuStack_d8 = (undefined4 **)0x53af16;
      iVar8 = FUN_0052f7d0();
      ppuStack_d4 = (undefined4 **)0x7;
      ppuStack_d8 = (undefined4 **)0x53af24;
      iVar9 = FUN_0052f7d0();
      if (iVar9 != 0) {
        iVar8 = 2;
      }
      if (iVar7 == 0) {
        if (iVar8 == 0) {
          ppuStack_d4 = (undefined4 **)0x11;
          ppuStack_d8 = (undefined4 **)0x53af6f;
          iVar7 = FUN_0052f7d0();
          if (iVar7 == 0) {
            if (DAT_006d0fcc == 1) {
              *(undefined2 *)(iVar10 + 0x2746) = 0x15;
            }
            else {
LAB_0053b0f2:
              *(undefined2 *)(iVar10 + 0x2746) = 0;
            }
          }
          else {
            *(undefined2 *)(iVar10 + 0x2746) = 0x15;
          }
        }
        else {
          *(undefined2 *)(iVar10 + 0x2746) = 0x14;
        }
      }
      else if (iVar8 == 0) {
        *(undefined2 *)(iVar10 + 0x2746) = 100;
      }
      else {
        *(undefined2 *)(iVar10 + 0x2746) = 0x15;
      }
    }
  }
  ppuStack_d4 = (undefined4 **)0x29;
  ppuStack_d8 = (undefined4 **)0x53b107;
  iVar10 = FUN_0052f7d0();
  if (iVar10 != 0) {
    iVar10 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
    if (*(int *)(iVar10 + 0x3c80) == 2) {
      *(undefined4 *)(iVar10 + 0x277c) = 0xffffffff;
    }
    else {
      *(undefined4 *)(iVar10 + 0x277c) = 1;
    }
  }
  ppuStack_d4 = (undefined4 **)0x16;
  ppuStack_d8 = (undefined4 **)0x53b142;
  uVar5 = FUN_0052f7d0();
  *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x271a) = uVar5;
  ppuStack_d4 = *(undefined4 ***)(param_1 + 0x270);
  ppuStack_d8 = (undefined4 **)0x53b161;
  uVar6 = FUN_0053ee80();
  *(undefined4 *)(param_1 + 0x270) = uVar6;
  if (((DAT_006d0fe8 == 0) && (DAT_006d0ff8 == 0)) && (DAT_006d0fe4 == 0)) goto LAB_0053bb99;
  if ((DAT_006d090a != '\0') && (DAT_006d08ca != '\0')) {
    DAT_006d090a = '\0';
    iVar10 = *(int *)(param_1 + 0x268);
    if (*(float *)(iVar10 + 0xd4c) * *(float *)(iVar10 + 0xcf4) +
        *(float *)(iVar10 + 0xcf8) * *(float *)(iVar10 + 0xd58) +
        *(float *)(iVar10 + 0xd64) * *(float *)(iVar10 + 0xcfc) < _DAT_0064b654) {
      ppuStack_d4 = (undefined4 **)0x53b1fa;
      fVar14 = (float10)FUN_004eaf10();
      if (((float10)_DAT_0064b254 < fVar14) || (DAT_006d0ff8 != 0)) {
        ppuStack_d4 = (undefined4 **)0x53b22b;
        fVar14 = (float10)FUN_004eaf10();
        ppuStack_d4 = (undefined4 **)(float)(fVar14 - (float10)_DAT_0064a5a8);
        ppuStack_d8 = (undefined4 **)0x53b24c;
        FUN_004eaf20();
        fStack_ac = DAT_00701588;
        puStack_b4 = (undefined4 *)-DAT_00701580;
        fStack_b0 = -DAT_00701584;
        *(undefined4 **)(param_1 + 0x1c8) = puStack_b4;
        fStack_ac = -fStack_ac;
        *(float *)(param_1 + 0x1cc) = fStack_b0;
        *(float *)(param_1 + 0x1d0) = fStack_ac;
        ppuStack_d4 = (undefined4 **)0x53b28f;
        fVar14 = (float10)FUN_004e2035();
        *(float *)(param_1 + 0x1d4) = (float)fVar14;
        fVar1 = DAT_00701580 * _DAT_0064b440;
        fVar3 = DAT_00701584 * _DAT_0064b440;
        fVar2 = DAT_00701588 * _DAT_0064b440;
        iVar10 = *(int *)(param_1 + 0x268);
        puStack_c0 = (undefined4 *)
                     (fVar1 * *(float *)(iVar10 + 0xd18) +
                      fVar3 * *(float *)(iVar10 + 0xd24) + fVar2 * *(float *)(iVar10 + 0xd30) +
                     *(float *)(iVar10 + 0xcf4));
        fStack_bc = fVar1 * *(float *)(iVar10 + 0xd1c) +
                    fVar3 * *(float *)(iVar10 + 0xd28) + fVar2 * *(float *)(iVar10 + 0xd34) +
                    *(float *)(iVar10 + 0xcf8);
        fStack_b8 = fVar1 * *(float *)(iVar10 + 0xd20) +
                    fVar3 * *(float *)(iVar10 + 0xd2c) + fVar2 * *(float *)(iVar10 + 0xd38) +
                    *(float *)(iVar10 + 0xcfc);
        ppuStack_d8 = &puStack_c0;
        ppuStack_d4 = (undefined4 **)0x0;
        ppuStack_dc = (undefined4 **)0x53b369;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x90))();
      }
    }
  }
  if ((DAT_006d090c != '\0') && (DAT_006d08ca != '\0')) {
    DAT_006d090c = '\0';
    iVar10 = *(int *)(param_1 + 0x268);
    if (_DAT_0064e30c <
        *(float *)(iVar10 + 0xd4c) * *(float *)(iVar10 + 0xcf4) +
        *(float *)(iVar10 + 0xcf8) * *(float *)(iVar10 + 0xd58) +
        *(float *)(iVar10 + 0xcfc) * *(float *)(iVar10 + 0xd64)) {
      ppuStack_d4 = (undefined4 **)0x53b3da;
      fVar14 = (float10)FUN_004eaf10();
      if (((float10)_DAT_0064b254 < fVar14) || (DAT_006d0ff8 != 0)) {
        ppuStack_d4 = (undefined4 **)0x53b40b;
        fVar14 = (float10)FUN_004eaf10();
        ppuStack_d4 = (undefined4 **)(float)(fVar14 - (float10)_DAT_0064a5a8);
        ppuStack_d8 = (undefined4 **)0x53b42c;
        FUN_004eaf20();
        *(float *)(param_1 + 0x1c8) = DAT_00701580;
        *(float *)(param_1 + 0x1cc) = DAT_00701584;
        *(float *)(param_1 + 0x1d0) = DAT_00701588;
        ppuStack_d4 = (undefined4 **)0x53b453;
        fVar14 = (float10)FUN_004e2035();
        *(float *)(param_1 + 0x1d4) = (float)fVar14;
        iVar10 = *(int *)(param_1 + 0x268);
        fVar1 = -DAT_00701580 * _DAT_0064b440;
        fVar3 = -DAT_00701584 * _DAT_0064b440;
        fVar2 = -DAT_00701588 * _DAT_0064b440;
        puStack_c0 = (undefined4 *)
                     (fVar1 * *(float *)(iVar10 + 0xd18) +
                      fVar3 * *(float *)(iVar10 + 0xd24) + fVar2 * *(float *)(iVar10 + 0xd30) +
                     *(float *)(iVar10 + 0xcf4));
        fStack_bc = fVar1 * *(float *)(iVar10 + 0xd1c) +
                    fVar3 * *(float *)(iVar10 + 0xd28) + fVar2 * *(float *)(iVar10 + 0xd34) +
                    *(float *)(iVar10 + 0xcf8);
        fStack_b8 = fVar1 * *(float *)(iVar10 + 0xd20) +
                    fVar3 * *(float *)(iVar10 + 0xd2c) + fVar2 * *(float *)(iVar10 + 0xd38) +
                    *(float *)(iVar10 + 0xcfc);
        ppuStack_d8 = &puStack_c0;
        ppuStack_d4 = (undefined4 **)0x0;
        ppuStack_dc = (undefined4 **)0x53b543;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x90))();
      }
    }
  }
  if ((DAT_006d090e != '\0') && (DAT_006d08ca != '\0')) {
    DAT_006d090e = '\0';
    iVar10 = *(int *)(param_1 + 0x268);
    ppuStack_d4 = &puStack_9c;
    fStack_b8 = *(float *)(iVar10 + 0xd50) * *(float *)(iVar10 + 0xcf4) +
                *(float *)(iVar10 + 0xcf8) * *(float *)(iVar10 + 0xd5c) +
                *(float *)(iVar10 + 0xcfc) * *(float *)(iVar10 + 0xd68);
    ppuStack_d8 = (undefined4 **)0x53b5a3;
    iVar10 = FUN_0057d570();
    uVar6 = *(undefined4 *)(iVar10 + 0x24);
    ppuVar12 = *(undefined4 ***)(iVar10 + 0x28);
    fVar1 = *(float *)(iVar10 + 0x2c);
    fStack_ac = fVar1;
    if (DAT_006d0ff8 == 0) {
      if (*(int *)(*(int *)(param_1 + 0x268) + 0x509c) == DAT_0068a8f0) {
        if ((fStack_b8 < _DAT_0064c4d8) && (fVar1 < _DAT_0064b440)) goto LAB_0053b6d0;
      }
      else {
        ppuStack_d4 = (undefined4 **)0x53b60c;
        iVar10 = FUN_0057d5d0();
        ppuStack_d4 = *(undefined4 ***)(iVar10 + 0xc);
        ppuStack_d8 = &puStack_a8;
        ppuStack_dc = (undefined4 **)0x53b61a;
        FUN_004365d0();
        if (puStack_a8 != (undefined4 *)0xffffffff) {
          ppuStack_e0 = (undefined4 **)puStack_a8;
          ppuStack_e4 = &puStack_9c;
          apcStack_f0[2] = (char *)0x53b642;
          ppuStack_dc = (undefined4 **)uVar6;
          ppuStack_d8 = ppuVar12;
          ppuStack_d4 = (undefined4 **)fVar1;
          FUN_00437470();
          if (((((puStack_9c != (undefined4 *)0xffffffff) || (iStack_98 != -1)) ||
               (_DAT_0064a668 != dStack_94)) || ((iStack_8c != 0 || (iStack_88 != 0)))) ||
             (iStack_84 != 0)) {
            ppuVar12 = &puStack_9c;
            ppcVar13 = apcStack_f0;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *ppcVar13 = (char *)*ppuVar12;
              ppuVar12 = ppuVar12 + 1;
              ppcVar13 = ppcVar13 + 1;
            }
            FUN_00439660(auStack_6c);
            if ((fStack_b8 < _DAT_0064c4d8) && (fStack_ac - fStack_64 < _DAT_0064b310))
            goto LAB_0053b6d0;
          }
        }
      }
    }
    else {
LAB_0053b6d0:
      ppuStack_d4 = (undefined4 **)0x53b6e7;
      fVar14 = (float10)FUN_004eaf10();
      if (((float10)_DAT_0064b254 < fVar14) || (DAT_006d0ff8 != 0)) {
        ppuStack_d4 = (undefined4 **)0x53b718;
        fVar14 = (float10)FUN_004eaf10();
        ppuStack_d4 = (undefined4 **)(float)(fVar14 - (float10)_DAT_0064a5a8);
        ppuStack_d8 = (undefined4 **)0x53b739;
        FUN_004eaf20();
        fStack_ac = DAT_00701598;
        puStack_b4 = (undefined4 *)-DAT_00701590;
        fStack_b0 = -DAT_00701594;
        *(undefined4 **)(param_1 + 0x1c8) = puStack_b4;
        fStack_ac = -fStack_ac;
        *(float *)(param_1 + 0x1cc) = fStack_b0;
        *(float *)(param_1 + 0x1d0) = fStack_ac;
        ppuStack_d4 = (undefined4 **)0x53b77c;
        fVar14 = (float10)FUN_004e2035();
        *(float *)(param_1 + 0x1d4) = (float)fVar14;
        iVar10 = *(int *)(param_1 + 0x268);
        fVar1 = (DAT_00701580 * _DAT_0064b2f4 + DAT_00701590) * _DAT_0064b440;
        fVar2 = (DAT_00701594 + DAT_00701584 * _DAT_0064b2f4) * _DAT_0064b440;
        fVar3 = (DAT_00701598 + DAT_00701588 * _DAT_0064b2f4) * _DAT_0064b440;
        ppuStack_d4 = (undefined4 **)0x0;
        puStack_c0 = (undefined4 *)
                     (fVar1 * *(float *)(iVar10 + 0xd18) +
                      fVar2 * *(float *)(iVar10 + 0xd24) + fVar3 * *(float *)(iVar10 + 0xd30) +
                     *(float *)(iVar10 + 0xcf4));
        fStack_bc = fVar2 * *(float *)(iVar10 + 0xd28) +
                    fVar3 * *(float *)(iVar10 + 0xd34) + fVar1 * *(float *)(iVar10 + 0xd1c) +
                    *(float *)(iVar10 + 0xcf8);
        fStack_b8 = fVar2 * *(float *)(iVar10 + 0xd2c) +
                    fVar3 * *(float *)(iVar10 + 0xd38) + fVar1 * *(float *)(iVar10 + 0xd20) +
                    *(float *)(iVar10 + 0xcfc);
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53b8a1;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x90))();
      }
    }
  }
  if ((DAT_006d0910 == '\0') || (DAT_006d08ca == '\0')) goto LAB_0053bb99;
  DAT_006d0910 = '\0';
  iVar10 = *(int *)(param_1 + 0x268);
  ppuStack_d4 = &puStack_9c;
  fStack_b8 = *(float *)(iVar10 + 0xd50) * *(float *)(iVar10 + 0xcf4) +
              *(float *)(iVar10 + 0xd5c) * *(float *)(iVar10 + 0xcf8) +
              *(float *)(iVar10 + 0xd68) * *(float *)(iVar10 + 0xcfc);
  ppuStack_d8 = (undefined4 **)0x53b901;
  iVar10 = FUN_0057d570();
  uVar6 = *(undefined4 *)(iVar10 + 0x24);
  ppuVar12 = *(undefined4 ***)(iVar10 + 0x28);
  fVar1 = *(float *)(iVar10 + 0x2c);
  fStack_ac = fVar1;
  if (DAT_006d0ff8 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x268) + 0x509c) == DAT_0068a8f0) {
      if ((fStack_b8 <= _DAT_0064e3f4) || (_DAT_0064b440 <= fVar1)) goto LAB_0053bb99;
    }
    else {
      ppuStack_d4 = (undefined4 **)0x53b96a;
      iVar10 = FUN_0057d5d0();
      ppuStack_d4 = *(undefined4 ***)(iVar10 + 0xc);
      ppuStack_d8 = &puStack_a8;
      ppuStack_dc = (undefined4 **)0x53b978;
      FUN_004365d0();
      if (puStack_a8 == (undefined4 *)0xffffffff) goto LAB_0053bb99;
      ppuStack_e0 = (undefined4 **)puStack_a8;
      ppuStack_e4 = &puStack_9c;
      apcStack_f0[2] = (char *)0x53b9a0;
      ppuStack_dc = (undefined4 **)uVar6;
      ppuStack_d8 = ppuVar12;
      ppuStack_d4 = (undefined4 **)fVar1;
      FUN_00437470();
      if ((((puStack_9c == (undefined4 *)0xffffffff) && (iStack_98 == -1)) &&
          (_DAT_0064a668 == dStack_94)) &&
         (((iStack_8c == 0 && (iStack_88 == 0)) && (iStack_84 == 0)))) goto LAB_0053bb99;
      ppuVar12 = &puStack_9c;
      ppcVar13 = apcStack_f0;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *ppcVar13 = (char *)*ppuVar12;
        ppuVar12 = ppuVar12 + 1;
        ppcVar13 = ppcVar13 + 1;
      }
      FUN_00439660(auStack_6c);
      if ((fStack_b8 <= _DAT_0064e3f4) || (_DAT_0064b310 <= fStack_ac - fStack_64))
      goto LAB_0053bb99;
    }
  }
  ppuStack_d4 = (undefined4 **)0x53ba45;
  fVar14 = (float10)FUN_004eaf10();
  if (((float10)_DAT_0064b254 < fVar14) || (DAT_006d0ff8 != 0)) {
    ppuStack_d4 = (undefined4 **)0x53ba76;
    fVar14 = (float10)FUN_004eaf10();
    ppuStack_d4 = (undefined4 **)(float)(fVar14 - (float10)_DAT_0064a5a8);
    ppuStack_d8 = (undefined4 **)0x53ba97;
    FUN_004eaf20();
    *(float *)(param_1 + 0x1c8) = DAT_00701590;
    *(float *)(param_1 + 0x1cc) = DAT_00701594;
    *(float *)(param_1 + 0x1d0) = DAT_00701598;
    ppuStack_d4 = (undefined4 **)0x53babe;
    fVar14 = (float10)FUN_004e2035();
    *(float *)(param_1 + 0x1d4) = (float)fVar14;
    fVar1 = DAT_00701590 * _DAT_0064b958;
    fVar3 = DAT_00701594 * _DAT_0064b958;
    fVar2 = DAT_00701598 * _DAT_0064b958;
    iVar10 = *(int *)(param_1 + 0x268);
    ppuStack_d4 = (undefined4 **)0x0;
    puStack_c0 = (undefined4 *)
                 (fVar1 * *(float *)(iVar10 + 0xd18) +
                  fVar3 * *(float *)(iVar10 + 0xd24) + fVar2 * *(float *)(iVar10 + 0xd30) +
                 *(float *)(iVar10 + 0xcf4));
    fStack_bc = fVar1 * *(float *)(iVar10 + 0xd1c) +
                fVar3 * *(float *)(iVar10 + 0xd28) + fVar2 * *(float *)(iVar10 + 0xd34) +
                *(float *)(iVar10 + 0xcf8);
    fStack_b8 = fVar1 * *(float *)(iVar10 + 0xd20) +
                fVar3 * *(float *)(iVar10 + 0xd2c) + fVar2 * *(float *)(iVar10 + 0xd38) +
                *(float *)(iVar10 + 0xcfc);
    ppuStack_d8 = &puStack_c0;
    ppuStack_dc = (undefined4 **)0x53bb99;
    puStack_b4 = puStack_c0;
    fStack_b0 = fStack_bc;
    fStack_ac = fStack_b8;
    (**(code **)(*(int *)(iVar10 + 0x10) + 0x90))();
  }
LAB_0053bb99:
  if ((((DAT_006d0fec != 0) || (DAT_006d0ff8 != 0)) || (DAT_006d0fe4 != 0)) &&
     ((DAT_006d0912 != '\0' && (DAT_006d08ca != '\0')))) {
    ppuStack_d4 = (undefined4 **)0x1;
    DAT_006d0912 = '\0';
    ppuStack_d8 = (undefined4 **)0x53bbda;
    FUN_00532cc0();
  }
  if ((((DAT_006d0ff0 != 0) || (DAT_006d0ff8 != 0)) || (DAT_006d0fe4 != 0)) &&
     (DAT_006d08b8 != '\0')) {
    ppuStack_d4 = (undefined4 **)0x3f800000;
    ppuStack_d8 = (undefined4 **)0x53bc11;
    FUN_0053aaf0();
    ppuStack_d4 = *(undefined4 ***)(param_1 + 0x268);
    ppuStack_d8 = (undefined4 **)0x53bc23;
    FUN_00548fc0();
    ppuStack_d4 = (undefined4 **)0x3f800000;
    ppuStack_d8 = (undefined4 **)0x53bc39;
    FUN_004eaf20();
  }
  if (DAT_006d0ff4 != 0) {
    ppuStack_d4 = (undefined4 **)0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2760) = 0;
    ppuStack_d8 = (undefined4 **)0x53bc74;
    FUN_004eaf20();
  }
  if (((DAT_00695b48 != 0) && (DAT_006d0a22 != '\0')) && (DAT_006d08c8 != '\0')) {
    uVar11 = DAT_00695b48 & 0x80000001;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
    }
    DAT_00695b48 = uVar11 + 1;
  }
  if (((DAT_00695b4c != 0) && (DAT_006d0a22 != '\0')) && (DAT_006d08ca != '\0')) {
    uVar11 = DAT_00695b4c & 0x80000001;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
    }
    DAT_00695b4c = uVar11 + 1;
  }
  if (((DAT_00695b44 != 0) && (DAT_006d0a1e != '\0')) && (DAT_006d08ca != '\0')) {
    DAT_00695b44 = DAT_00695b44 % 3 + 1;
  }
  if ((DAT_006d0ff8 != 0) || (DAT_006d0fe4 != 0)) {
    if ((DAT_006d0914 != '\0') && (DAT_006d08ca != '\0')) {
      DAT_006d0914 = '\0';
      iVar10 = *(int *)(param_1 + 0x268);
      if (_DAT_0064e3f0 <
          *(float *)(iVar10 + 0xcf4) * *(float *)(iVar10 + 0xd48) +
          *(float *)(iVar10 + 0xcf8) * *(float *)(iVar10 + 0xd54) +
          *(float *)(iVar10 + 0xcfc) * *(float *)(iVar10 + 0xd60)) {
        ppuStack_d4 = (undefined4 **)0x0;
        fVar1 = -DAT_007015a0 * _DAT_0064b440;
        fVar3 = -DAT_007015a4 * _DAT_0064b440;
        fVar2 = -DAT_007015a8 * _DAT_0064b440;
        puStack_c0 = (undefined4 *)
                     (fVar1 * *(float *)(iVar10 + 0xd18) +
                      fVar3 * *(float *)(iVar10 + 0xd24) + fVar2 * *(float *)(iVar10 + 0xd30) +
                     *(float *)(iVar10 + 0xcf4));
        fStack_bc = fVar1 * *(float *)(iVar10 + 0xd1c) +
                    fVar3 * *(float *)(iVar10 + 0xd28) + fVar2 * *(float *)(iVar10 + 0xd34) +
                    *(float *)(iVar10 + 0xcf8);
        fStack_b8 = fVar1 * *(float *)(iVar10 + 0xd20) +
                    fVar3 * *(float *)(iVar10 + 0xd2c) + fVar2 * *(float *)(iVar10 + 0xd38) +
                    *(float *)(iVar10 + 0xcfc);
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53be4f;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x90))();
      }
    }
    if ((DAT_006d0916 != '\0') && (DAT_006d08ca != '\0')) {
      DAT_006d0916 = '\0';
      iVar10 = *(int *)(param_1 + 0x268);
      if (*(float *)(iVar10 + 0xcf4) * *(float *)(iVar10 + 0xd48) +
          *(float *)(iVar10 + 0xcf8) * *(float *)(iVar10 + 0xd54) +
          *(float *)(iVar10 + 0xcfc) * *(float *)(iVar10 + 0xd60) < _DAT_0064b438) {
        fVar1 = DAT_007015a0 * _DAT_0064b440;
        fVar3 = DAT_007015a4 * _DAT_0064b440;
        fVar2 = DAT_007015a8 * _DAT_0064b440;
        ppuStack_d4 = (undefined4 **)0x0;
        puStack_c0 = (undefined4 *)
                     (fVar1 * *(float *)(iVar10 + 0xd18) +
                      fVar3 * *(float *)(iVar10 + 0xd24) + fVar2 * *(float *)(iVar10 + 0xd30) +
                     *(float *)(iVar10 + 0xcf4));
        fStack_bc = fVar1 * *(float *)(iVar10 + 0xd1c) +
                    fVar3 * *(float *)(iVar10 + 0xd28) + fVar2 * *(float *)(iVar10 + 0xd34) +
                    *(float *)(iVar10 + 0xcf8);
        fStack_b8 = fVar1 * *(float *)(iVar10 + 0xd20) +
                    fVar3 * *(float *)(iVar10 + 0xd2c) + fVar2 * *(float *)(iVar10 + 0xd38) +
                    *(float *)(iVar10 + 0xcfc);
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53bf7d;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x90))();
      }
    }
    if (DAT_006d0934 != '\0') {
      ppuStack_d4 = (undefined4 **)0x3f800000;
      ppuStack_d8 = (undefined4 **)0x53bfa2;
      FUN_004eaf20();
    }
    if (((DAT_006d0a1e != '\0') && (DAT_00695b44 == 0)) && (DAT_006d08ca != '\0')) {
      DAT_00695b44 = 2;
    }
    if (DAT_006d0a22 != '\0') {
      if (((DAT_00695b48 == 0) && (DAT_006d08c8 != '\0')) && (DAT_006d08ca == '\0')) {
        DAT_00695b48 = 2;
      }
      if (((DAT_00695b4c == 0) && (DAT_006d08ca != '\0')) && (DAT_006d08c8 == '\0')) {
        DAT_00695b4c = 2;
      }
    }
    if (DAT_006d0932 != '\0') {
      if (DAT_006d08ca != '\0') {
        iVar10 = *(int *)(param_1 + 0x268);
        ppuStack_d4 = (undefined4 **)0x0;
        puStack_c0 = (undefined4 *)(DAT_00701580 * _DAT_0064c2e8 + *(float *)(iVar10 + 0xd00));
        fStack_bc = DAT_00701584 * _DAT_0064c2e8 + *(float *)(iVar10 + 0xd04);
        fStack_b8 = DAT_00701588 * _DAT_0064c2e8 + *(float *)(iVar10 + 0xd08);
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53c0b0;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x94))();
      }
      if ((DAT_006d0932 != '\0') && (DAT_006d08c8 != '\0')) {
        iVar10 = *(int *)(param_1 + 0x268);
        ppuStack_d4 = (undefined4 **)0x0;
        puStack_c0 = (undefined4 *)(*(float *)(iVar10 + 0xd00) - DAT_00701580 * _DAT_0064c2e8);
        fStack_bc = *(float *)(iVar10 + 0xd04) - DAT_00701584 * _DAT_0064c2e8;
        fStack_b8 = *(float *)(iVar10 + 0xd08) - DAT_00701588 * _DAT_0064c2e8;
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53c151;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x94))();
      }
    }
    if (DAT_006d094c != '\0') {
      if (DAT_006d08ca != '\0') {
        iVar10 = *(int *)(param_1 + 0x268);
        ppuStack_d4 = (undefined4 **)0x0;
        puStack_c0 = (undefined4 *)(DAT_00701590 * _DAT_0064b3f8 + *(float *)(iVar10 + 0xd00));
        fStack_bc = DAT_00701594 * _DAT_0064b3f8 + *(float *)(iVar10 + 0xd04);
        fStack_b8 = DAT_00701598 * _DAT_0064b3f8 + *(float *)(iVar10 + 0xd08);
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53c1ee;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x94))();
      }
      if ((DAT_006d094c != '\0') && (DAT_006d08c8 != '\0')) {
        iVar10 = *(int *)(param_1 + 0x268);
        ppuStack_d4 = (undefined4 **)0x0;
        puStack_c0 = (undefined4 *)(*(float *)(iVar10 + 0xd00) - DAT_00701590 * _DAT_0064b3f8);
        fStack_bc = *(float *)(iVar10 + 0xd04) - DAT_00701594 * _DAT_0064b3f8;
        fStack_b8 = *(float *)(iVar10 + 0xd08) - DAT_00701598 * _DAT_0064b3f8;
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53c28f;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x94))();
      }
    }
    if (DAT_006d0956 != '\0') {
      if (DAT_006d08ca != '\0') {
        iVar10 = *(int *)(param_1 + 0x268);
        ppuStack_d4 = (undefined4 **)0x0;
        puStack_c0 = (undefined4 *)(DAT_007015a0 + DAT_007015a0 + *(float *)(iVar10 + 0xd00));
        fStack_bc = DAT_007015a4 + DAT_007015a4 + *(float *)(iVar10 + 0xd04);
        fStack_b8 = DAT_007015a8 + DAT_007015a8 + *(float *)(iVar10 + 0xd08);
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53c31c;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x94))();
      }
      if ((DAT_006d0956 != '\0') && (DAT_006d08c8 != '\0')) {
        iVar10 = *(int *)(param_1 + 0x268);
        ppuStack_d4 = (undefined4 **)0x0;
        puStack_c0 = (undefined4 *)(*(float *)(iVar10 + 0xd00) - (DAT_007015a0 + DAT_007015a0));
        fStack_bc = *(float *)(iVar10 + 0xd04) - (DAT_007015a4 + DAT_007015a4);
        fStack_b8 = *(float *)(iVar10 + 0xd08) - (DAT_007015a8 + DAT_007015a8);
        ppuStack_d8 = &puStack_c0;
        ppuStack_dc = (undefined4 **)0x53c3ad;
        puStack_b4 = puStack_c0;
        fStack_b0 = fStack_bc;
        fStack_ac = fStack_b8;
        (**(code **)(*(int *)(iVar10 + 0x10) + 0x94))();
      }
    }
  }
  if (DAT_006d0ffc != 0) {
    DAT_006d0ff8 = 1;
    if ((DAT_006d0936 != '\0') && (DAT_006d08ca != '\0')) {
      DAT_00695294 = (uint)(DAT_00695bc4 == 0);
      DAT_00695bc4 = DAT_00695294;
    }
    if ((DAT_006d0948 != '\0') && (DAT_006d08ca != '\0')) {
      ppuStack_d4 = (undefined4 **)0x53c400;
      FUN_0053e7f0();
    }
    if ((DAT_006d093c != '\0') && (DAT_006d08ca != '\0')) {
      _DAT_006785ec = _DAT_006785ec | 1;
    }
    if ((DAT_006d093e != '\0') && (DAT_006d08ca != '\0')) {
      _DAT_006785ec = _DAT_006785ec & 0xfffffffe;
    }
    if ((DAT_006d0908 != '\0') && (DAT_006d08ca != '\0')) {
      ppuStack_d4 = (undefined4 **)0x53c44c;
      FUN_004fc160();
    }
    if ((DAT_006d0918 != '\0') && (DAT_006d08ca != '\0')) {
      DAT_006d0918 = '\0';
      ppuStack_d4 = (undefined4 **)0x0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3344) = 1;
      ppuStack_d8 = (undefined4 **)0x53c48f;
      FUN_005902a0();
      ppuStack_d4 = &puStack_9c;
      ppuStack_d8 = (undefined4 **)0x53c4a2;
      FUN_0057d570();
      puStack_c0 = (undefined4 *)(DAT_00701590 * _DAT_0064b738);
      fStack_bc = DAT_00701594 * _DAT_0064b738;
      ppuStack_d4 = &puStack_c0;
      fStack_b8 = DAT_00701598 * _DAT_0064b738;
      ppuStack_d8 = (undefined4 **)auStack_6c;
      ppuStack_dc = (undefined4 **)0x53c4fd;
      puStack_b4 = puStack_c0;
      fStack_b0 = fStack_bc;
      fStack_ac = fStack_b8;
      FUN_005aae00();
      ppuStack_d8 = &puStack_9c;
      ppuStack_d4 = (undefined4 **)0x0;
      iVar10 = **(int **)(param_1 + 0x268);
      ppuStack_dc = (undefined4 **)0x53c514;
      ppuStack_dc = (undefined4 **)FUN_0057d5d0();
      ppuStack_e0 = (undefined4 **)0x53c51e;
      (**(code **)(iVar10 + 0x4c))();
      if ((*(int **)(param_1 + 0x268))[0x1518] != 0) {
        ppuStack_e0 = (undefined4 **)0x53c533;
        iVar10 = (**(code **)(**(int **)(param_1 + 0x268) + 4))();
        if (iVar10 != 1) {
          ppuStack_e0 = &puStack_a8;
          ppuStack_e4 = (undefined4 **)0x53c54a;
          ppuStack_e4 = (undefined4 **)FUN_0057d5d0();
          apcStack_f0[2] = (char *)0x53c556;
          FUN_0054bf90();
        }
      }
      ppuStack_e0 = (undefined4 **)&DAT_007015b0;
      ppuStack_e4 = (undefined4 **)0x53c566;
      (**(code **)(**(int **)(param_1 + 0x268) + 0x5c))();
      ppuStack_e4 = (undefined4 **)&DAT_007015b0;
      apcStack_f0[2] = (char *)0x53c576;
      (**(code **)(**(int **)(param_1 + 0x268) + 0x60))();
    }
    if ((DAT_006d091a != '\0') && (DAT_006d08ca != '\0')) {
      DAT_006d091a = '\0';
      ppuStack_d4 = (undefined4 **)auStack_60;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3344) = 1;
      ppuStack_d8 = (undefined4 **)0x53c5bc;
      ppuStack_d4 = (undefined4 **)FUN_0057d570();
      ppuStack_dc = (undefined4 **)auStack_30;
      ppuStack_d8 = (undefined4 **)0xbfc90fdb;
      ppuStack_e0 = (undefined4 **)0x53c5cf;
      ppuStack_d8 = (undefined4 **)FUN_005ab5d0();
      ppuStack_dc = &puStack_9c;
      ppuStack_e0 = (undefined4 **)0x53c5dd;
      FUN_005ab130();
      ppuStack_d8 = &puStack_9c;
      iVar10 = **(int **)(param_1 + 0x268);
      ppuStack_d4 = (undefined4 **)0x0;
      ppuStack_dc = (undefined4 **)0x53c5f7;
      ppuStack_dc = (undefined4 **)FUN_0057d5d0();
      ppuStack_e0 = (undefined4 **)0x53c601;
      (**(code **)(iVar10 + 0x4c))();
      if ((*(int **)(param_1 + 0x268))[0x1518] != 0) {
        ppuStack_e0 = (undefined4 **)0x53c616;
        iVar10 = (**(code **)(**(int **)(param_1 + 0x268) + 4))();
        if (iVar10 != 1) {
          ppuStack_e0 = &puStack_a8;
          ppuStack_e4 = (undefined4 **)0x53c62d;
          ppuStack_e4 = (undefined4 **)FUN_0057d5d0();
          apcStack_f0[2] = (char *)0x53c639;
          FUN_0054bf90();
        }
      }
      ppuStack_e0 = (undefined4 **)&DAT_007015b0;
      ppuStack_e4 = (undefined4 **)0x53c649;
      (**(code **)(**(int **)(param_1 + 0x268) + 0x5c))();
      ppuStack_e4 = (undefined4 **)&DAT_007015b0;
      apcStack_f0[2] = (char *)0x53c659;
      (**(code **)(**(int **)(param_1 + 0x268) + 0x60))();
    }
    if ((*(int *)(param_1 + 0x270) != 0) && (*(int *)(*(int *)(param_1 + 0x270) + 0x5464) != 0)) {
      if (DAT_006d0916 != '\0') {
        ppuStack_d4 = (undefined4 **)0x3;
        ppuStack_d8 = (undefined4 **)0x53c67d;
        FUN_00565a00();
      }
      if ((DAT_006d0918 != '\0') &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0x270) + 0x5464) + 0xca4) != 6)) {
        ppuStack_d4 = *(undefined4 ***)(param_1 + 0x268);
        ppuStack_d8 = (undefined4 **)0x53c6a7;
        FUN_00565960();
      }
      if ((DAT_006d091a != '\0') &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0x270) + 0x5464) + 0xca4) != 10)) {
        ppuStack_d4 = *(undefined4 ***)(param_1 + 0x268);
        ppuStack_d8 = (undefined4 **)0x53c6d1;
        FUN_005659a0();
      }
    }
    if ((DAT_006d093a != '\0') && (DAT_006d08ca != '\0')) {
      ppuStack_d4 = (undefined4 **)0x53c6ee;
      iVar10 = (**(code **)(**(int **)(param_1 + 0x268) + 4))();
      if (iVar10 == 1) {
        if (*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5578) == 0) {
          ppuStack_d4 = (undefined4 **)0x53c726;
          FUN_00549070();
        }
        else {
          ppuStack_d4 = (undefined4 **)0x53c713;
          FUN_00549070();
        }
      }
      else {
        ppuStack_d8 = *(undefined4 ***)(param_1 + 0x268);
        ppuStack_d4 = (undefined4 **)&LAB_00548c90;
        ppuStack_dc = (undefined4 **)0x53c739;
        FUN_004ba0b0();
      }
    }
    ppuStack_d4 = (undefined4 **)0x53c747;
    FUN_00556710();
    ppuStack_d4 = (undefined4 **)0x53c754;
    FUN_005567a0();
  }
  return;
}


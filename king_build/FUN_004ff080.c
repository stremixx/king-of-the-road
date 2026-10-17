
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ff080(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  int iVar14;
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  undefined8 local_c;
  
  *(undefined4 *)(param_1 + 0x29dc) = 0;
  if (*(float *)(param_1 + 0x3bd4) < _DAT_00673388) {
    *(undefined4 *)(param_1 + 0x29d8) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x1c1c) = 1;
  }
  fVar12 = (float10)FUN_004e2035();
  fVar1 = (float)fVar12;
  fVar2 = (float)(fVar12 - (float10)*(float *)(param_1 + 0x17dc));
  if (((*(short *)(param_1 + 0x2716) == 0) && (*(short *)(param_1 + 0x2714) == 0)) &&
     (*(short *)(param_1 + 0x2704) != 0)) {
    bVar11 = false;
    if (*(short *)(param_1 + 0x2718) < 2) {
      if ((_DAT_0064b254 <= *(float *)(param_1 + 10000)) &&
         (*(float *)(param_1 + 10000) <= (float)_DAT_0064a660)) {
        *(undefined4 *)(param_1 + 0x29dc) = *(undefined4 *)(param_1 + 10000);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x29dc) = 0x3f800000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x29dc) = 0;
    bVar11 = true;
    if (*(short *)(param_1 + 0x2716) == 1) {
      *(float *)(param_1 + 0x29dc) = (fVar2 + (float)_DAT_0064a648) / (fVar2 + _DAT_0064b240);
    }
    else if (*(short *)(param_1 + 0x2716) == 2) {
      *(float *)(param_1 + 0x29dc) = (fVar2 + (float)_DAT_0064a648) / (fVar2 + (float)_DAT_0064a5a8)
      ;
    }
  }
  if (*(float *)(param_1 + 0x29dc) <= (float)_DAT_0064a648) {
    *(float *)(param_1 + 0x17dc) = fVar1;
  }
  else if ((((float)_DAT_0064a6d0 < *(float *)(param_1 + 0xdc8)) &&
           ((float)_DAT_0064a6d0 < *(float *)(param_1 + 0x29dc))) &&
          ((*(short *)(param_1 + 0x19a4) == 0 && (*(short *)(param_1 + 0x19a6) == 0)))) {
    fVar12 = (float10)FUN_004eae60();
    if ((float10)_DAT_0064b254 < fVar12) {
      *(undefined4 *)(param_1 + 0x3c18) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x3c18) = 2;
    }
    fVar2 = *(float *)(param_1 + 0x1b74);
    fVar4 = fVar2 * DAT_00701590 + *(float *)(param_1 + 0x1844);
    fVar5 = fVar2 * DAT_00701594 + *(float *)(param_1 + 0x1848);
    fVar2 = fVar2 * DAT_00701598 + *(float *)(param_1 + 0x184c);
    *(float *)(param_1 + 0x3c1c) =
         fVar4 * *(float *)(param_1 + 0x10) +
         fVar5 * *(float *)(param_1 + 0x1c) + fVar2 * *(float *)(param_1 + 0x28) +
         *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x3c20) =
         fVar4 * *(float *)(param_1 + 0x14) +
         fVar5 * *(float *)(param_1 + 0x20) + fVar2 * *(float *)(param_1 + 0x2c) +
         *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x3c24) =
         fVar4 * *(float *)(param_1 + 0x18) +
         fVar5 * *(float *)(param_1 + 0x24) + fVar2 * *(float *)(param_1 + 0x30) +
         *(float *)(param_1 + 0x3c);
    fVar2 = *(float *)(param_1 + 0x1b78);
    fVar4 = fVar2 * DAT_00701590 + *(float *)(param_1 + 0x1850);
    fVar5 = fVar2 * DAT_00701594 + *(float *)(param_1 + 0x1854);
    local_c = (double)CONCAT44(fVar5,fVar4);
    fVar2 = fVar2 * DAT_00701598 + *(float *)(param_1 + 0x1858);
    fVar7 = fVar4 * *(float *)(param_1 + 0x10) +
            fVar5 * *(float *)(param_1 + 0x1c) + fVar2 * *(float *)(param_1 + 0x28) +
            *(float *)(param_1 + 0x34);
    fVar6 = fVar4 * *(float *)(param_1 + 0x14) +
            fVar5 * *(float *)(param_1 + 0x20) + fVar2 * *(float *)(param_1 + 0x2c) +
            *(float *)(param_1 + 0x38);
    local_18 = (double)CONCAT44(fVar6,fVar7);
    local_10 = fVar4 * *(float *)(param_1 + 0x18) +
               fVar5 * *(float *)(param_1 + 0x24) + fVar2 * *(float *)(param_1 + 0x30) +
               *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x3c28) = fVar7;
    *(float *)(param_1 + 0x3c2c) = fVar6;
    *(float *)(param_1 + 0x3c30) = local_10;
  }
  if (*(int *)(param_1 + 0x2774) == 0) {
    *(undefined4 *)(param_1 + 0x1b24) = 0;
  }
  else if (*(int *)(param_1 + 0x1b24) == 2) {
    fVar2 = fVar1 - *(float *)(param_1 + 0x17d8);
    fVar12 = (float10)FUN_004fe9d0(*(undefined4 *)(param_1 + 0x1c1c));
    local_20 = (float)fVar12;
    *(undefined4 *)(param_1 + 0x1c28) = 0;
    FUN_004fea90(&local_20);
    fVar12 = (float10)FUN_004feee0();
    local_1c = (float)fVar12;
    if (bVar11) {
      uVar9 = (uint)(0 < *(short *)(param_1 + 0x2714));
      local_18 = (double)CONCAT44(local_18._4_4_,uVar9);
      *(float *)(param_1 + 0x29d8) = (float)uVar9;
      if (*(int *)(param_1 + 0x1c28) != 0) {
        *(undefined4 *)(param_1 + 0x29d8) = 0x3f800000;
      }
      if (*(short *)(param_1 + 0x2714) < 2) {
        if (*(short *)(param_1 + 0x2714) == 1) {
          fVar2 = ((fVar2 * (float)_DAT_0064a6e8) / (fVar2 + (float)_DAT_0064c308)) *
                  *(float *)(param_1 + 0x29d8);
          local_18 = (double)CONCAT44(local_18._4_4_,fVar2);
          *(float *)(param_1 + 0x29d8) = fVar2;
          goto LAB_004ff4dd;
        }
        *(float *)(param_1 + 0x17d8) = fVar1;
      }
      else if (*(int *)(param_1 + 0x1c28) == 0) {
        *(float *)(param_1 + 0x29d8) =
             (fVar2 / (fVar2 + (float)_DAT_0064a830)) * *(float *)(param_1 + 0x29d8);
      }
    }
    else {
      if ((*(float *)(param_1 + 0x270c) < _DAT_0064b254) ||
         ((float)_DAT_0064a660 < *(float *)(param_1 + 0x270c))) {
        if (*(float *)(param_1 + 0x270c) <= (float)_DAT_0064a660) {
          if (*(float *)(param_1 + 0x270c) < _DAT_0064b254) {
            *(undefined4 *)(param_1 + 0x29d8) = 0;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x29d8) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x29d8) = *(undefined4 *)(param_1 + 0x270c);
      }
      if (*(float *)(param_1 + 0x29d8) < (float)_DAT_0064a5a8) {
        *(float *)(param_1 + 0x17d8) = fVar1;
      }
      if (((*(int *)(param_1 + 0x2754) != 0) ||
          ((DAT_00695bac != 0 && (*(short *)(param_1 + 0x2740) != 0)))) &&
         (*(char *)(param_1 + 0x2701) == '\0')) {
        fVar2 = *(float *)(param_1 + 0x29d8);
LAB_004ff4dd:
        if (local_1c * (float)_DAT_0064b948 < fVar2) {
          *(float *)(param_1 + 0x29d8) = local_1c * (float)_DAT_0064b948;
        }
      }
    }
    if ((*(int *)(param_1 + 0x1c1c) == 0) || (*(int *)(param_1 + 0x1c1c) == 2)) {
      if ((float)_DAT_0064ca38 <= ABS(*(float *)(param_1 + 0xdc4))) {
        local_18 = 0.0;
      }
      else {
        local_18 = (double)(((float)_DAT_0064ca38 - ABS(*(float *)(param_1 + 0xdc4))) *
                           (float)_DAT_0064ca30);
      }
      fVar12 = (float10)FUN_004fed80(*(undefined4 *)(param_1 + 0x1c84));
      fVar13 = (float10)local_18;
      local_18 = (double)CONCAT44(local_18._4_4_,(float)local_18);
      fVar12 = fVar13 * (float10)_DAT_0064a830 + fVar12;
      if (((*(int *)(param_1 + 0x1c1c) == 2) && ((float10)*(float *)(param_1 + 0x29d8) < fVar12)) &&
         (ABS(*(float *)(param_1 + 0xdc4)) < (float)_DAT_0064a650)) {
        *(float *)(param_1 + 0x29d8) = (float)fVar12;
      }
      if (((*(int *)(param_1 + 0x1c1c) == 0) &&
          ((float10)*(float *)(param_1 + 0x29d8) < fVar12 * (float10)_DAT_0064a830)) &&
         (ABS(*(float *)(param_1 + 0xdc4)) < (float)_DAT_0064a650)) {
        *(float *)(param_1 + 0x29d8) = (float)(fVar12 * (float10)_DAT_0064a830);
      }
    }
    else {
      if (*(float *)(param_1 + 0x29d8) < (float)_DAT_0064c328) {
        *(undefined4 *)(param_1 + 0x29d8) = 0x3d4ccccd;
      }
      if (((*(int *)(param_1 + 0x1c1c) == 2) || (*(int *)(param_1 + 0x1c1c) == 0)) &&
         (((*(float *)(param_1 + 0x29d8) < (float)_DAT_0064a5a8 &&
           (ABS(*(float *)(param_1 + 0xdc8)) < (float)_DAT_0064a660)) &&
          ((!bVar11 || (*(short *)(param_1 + 0x2714) == 0)))))) {
        *(undefined2 *)(param_1 + 0x2746) = 0x15;
      }
    }
    if (bVar11) {
      if (*(short *)(param_1 + 0x2714) < 1) goto LAB_004ff712;
LAB_004ff82a:
      bVar8 = true;
    }
    else {
      if ((float)_DAT_0064a5a8 < *(float *)(param_1 + 0x270c)) goto LAB_004ff82a;
LAB_004ff712:
      bVar8 = false;
    }
    if (((*(int *)(param_1 + 0x1c14) != 0) && (iVar10 = *(int *)(param_1 + 0x1c1c), 0 < iVar10)) &&
       ((iVar14 = *(int *)(param_1 + 0x1c24), iVar14 == 0 || (*(short *)(param_1 + 0x2746) != 0))))
    {
      if (*(short *)(param_1 + 0x2746) == -1) {
        *(undefined2 *)(param_1 + 0x2746) = 0x14;
      }
      if (((!bVar8) && (*(short *)(param_1 + 0x2746) != 0x14)) && (iVar10 != 2)) {
        *(undefined2 *)(param_1 + 0x2746) = 0;
      }
      sVar3 = *(short *)(param_1 + 0x2746);
      if (((sVar3 == 1) || (sVar3 == 100)) &&
         ((1 < iVar10 ||
          (((sVar3 == 100 && (iVar10 == 1)) && ((iVar14 != 0 && (1 < *(int *)(param_1 + 0x1c20))))))
          ))) {
LAB_004ff7c2:
        *(undefined2 *)(param_1 + 0x2746) = 0;
LAB_004ff7cb:
        if (iVar10 == 1) {
          if ((((iVar14 == 0) && (*(char *)(param_1 + 0x2700) == '\x02')) && (bVar8)) &&
             ((*(short *)(param_1 + 0x2746) != 0x14 && (*(short *)(param_1 + 0x2746) != 0x15)))) {
            *(undefined2 *)(param_1 + 0x2746) = 1;
          }
          goto LAB_004ff9c1;
        }
      }
      else {
        if (sVar3 != 0x14) goto LAB_004ff7cb;
        if (iVar10 == 1) {
          if ((iVar14 != 0) && (*(int *)(param_1 + 0x1c20) == 0)) goto LAB_004ff7c2;
          goto LAB_004ff7cb;
        }
      }
      if (*(short *)(param_1 + 0x2746) == 0) {
        fVar12 = (float10)FUN_004fece0(local_20);
        fVar12 = (float10)FUN_004fedd0((float)fVar12);
        if (((*(float *)(param_1 + 0x1c88) * (float)_DAT_0064a830 <= ABS(local_20)) ||
            (((float)_DAT_0064a5a8 <= *(float *)(param_1 + 0x29d8) &&
             (*(float *)(param_1 + 0x29dc) <= (float)_DAT_0064a5a8)))) ||
           ((bVar11 && (*(short *)(param_1 + 0x2714) != 0)))) {
          if (2 < *(int *)(param_1 + 0x1c1c)) {
            iVar10 = *(int *)(param_1 + 0x1c1c) + -1;
            local_1c = 0.0;
            if (1 < iVar10) {
              local_c = (double)((float)fVar12 * (float)_DAT_0064a7a8);
              do {
                fVar13 = (float10)FUN_004fe9d0(iVar10);
                local_18 = (double)CONCAT44(local_18._4_4_,(float)fVar13);
                iVar14 = iVar10;
                fVar13 = (float10)FUN_004fece0((float)fVar13);
                fVar13 = (float10)FUN_004fedf0((float)fVar13,iVar14);
                if (((float10)local_c < fVar13) && ((float10)local_1c < fVar13)) {
                  local_1c = (float)fVar13;
                  *(short *)(param_1 + 0x2746) = (short)iVar10 + 0x14;
                }
                iVar10 = iVar10 + -1;
              } while (1 < iVar10);
            }
          }
          if (*(int *)(param_1 + 0x1c1c) < *(int *)(param_1 + 0x1c18)) {
            iVar10 = *(int *)(param_1 + 0x1c1c) + 1;
            local_1c = 0.0;
            if (iVar10 <= *(int *)(param_1 + 0x1c18)) {
              local_c = (double)((float)fVar12 * (float)_DAT_0064a7a8);
              do {
                fVar12 = (float10)FUN_004fe9d0(iVar10);
                local_18 = (double)CONCAT44(local_18._4_4_,(float)fVar12);
                iVar14 = iVar10;
                fVar12 = (float10)FUN_004fece0((float)fVar12);
                fVar12 = (float10)FUN_004fedf0((float)fVar12,iVar14);
                if (((float10)local_c < fVar12) && ((float10)local_1c < fVar12)) {
                  local_1c = (float)fVar12;
                  *(short *)(param_1 + 0x2746) = (short)iVar10 + 0x14;
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 <= *(int *)(param_1 + 0x1c18));
            }
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x2746) = 0x15;
        }
      }
    }
LAB_004ff9c1:
    if ((*(int *)(param_1 + 0x1c14) == 0) &&
       (((*(short *)(param_1 + 0x2746) == 1 &&
         (*(int *)(param_1 + 0x1c1c) < *(int *)(param_1 + 0x1c18))) ||
        ((*(short *)(param_1 + 0x2746) == -1 && (0 < *(int *)(param_1 + 0x1c1c))))))) {
      fVar12 = (float10)FUN_004fed20();
      fVar12 = (float10)FUN_004fedd0((float)fVar12);
      if (*(short *)(param_1 + 0x2746) < 1) {
        iVar10 = *(int *)(param_1 + 0x1c1c);
        local_1c = 0.0;
        while (iVar10 = iVar10 + -1, 0 < iVar10) {
          if (iVar10 != 1) {
            fVar13 = (float10)FUN_004fe9d0(iVar10);
            local_18 = (double)CONCAT44(local_18._4_4_,(float)fVar13);
            iVar14 = iVar10;
            fVar13 = (float10)FUN_004fece0((float)fVar13);
            fVar13 = (float10)FUN_004fedf0((float)fVar13,iVar14);
            if (((float10)(float)fVar12 * (float10)_DAT_0064c368 < fVar13) &&
               ((float10)local_1c < fVar13)) {
              local_1c = (float)fVar13;
              *(short *)(param_1 + 0x2746) = (short)iVar10 + 0x14;
            }
          }
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x1c1c) + 1;
        local_1c = 0.0;
        if (iVar10 <= *(int *)(param_1 + 0x1c18)) {
          do {
            if (iVar10 != 1) {
              fVar13 = (float10)FUN_004fe9d0(iVar10);
              local_18 = (double)CONCAT44(local_18._4_4_,(float)fVar13);
              iVar14 = iVar10;
              fVar13 = (float10)FUN_004fece0((float)fVar13);
              fVar13 = (float10)FUN_004fedf0((float)fVar13,iVar14);
              if (((float10)(float)fVar12 * (float10)_DAT_0064c368 < fVar13) &&
                 ((float10)local_1c < fVar13)) {
                local_1c = (float)fVar13;
                *(short *)(param_1 + 0x2746) = (short)iVar10 + 0x14;
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 <= *(int *)(param_1 + 0x1c18));
        }
      }
    }
    sVar3 = *(short *)(param_1 + 0x2746);
    if (sVar3 != 0) {
      bVar11 = false;
      if (sVar3 == 0x15) {
        if ((*(int *)(param_1 + 0x1c20) != 1) && (*(int *)(param_1 + 0x1c1c) != 1)) {
          *(undefined4 *)(param_1 + 0x1c20) = 1;
          bVar11 = true;
        }
      }
      else if (sVar3 == 0x16) {
        if (*(int *)(param_1 + 0x1c1c) != 2) {
LAB_004ffb7a:
          if (*(int *)(param_1 + 0x1c20) != 2) {
            *(undefined4 *)(param_1 + 0x1c20) = 2;
            bVar11 = true;
          }
        }
      }
      else if ((sVar3 < 0x16) || (*(int *)(param_1 + 0x1c18) + 0x16 <= (int)sVar3)) {
        if (sVar3 == 100) {
          if (*(int *)(param_1 + 0x1c1c) < 2) goto LAB_004ffb7a;
        }
        else if (sVar3 == 0x14) {
          if ((*(int *)(param_1 + 0x1c1c) != 0) && (*(int *)(param_1 + 0x1c20) != 0)) {
            *(undefined4 *)(param_1 + 0x1c20) = 0;
            bVar11 = true;
          }
        }
        else {
          bVar11 = *(int *)(param_1 + 0x1c24) == 0;
          if (bVar11) {
            *(undefined4 *)(param_1 + 0x1c20) = *(undefined4 *)(param_1 + 0x1c1c);
          }
          *(int *)(param_1 + 0x1c20) = *(int *)(param_1 + 0x1c20) + (int)sVar3;
        }
      }
      else {
        iVar10 = sVar3 + -0x14;
        if ((*(int *)(param_1 + 0x1c1c) != iVar10) && (*(int *)(param_1 + 0x1c20) != iVar10)) {
          *(int *)(param_1 + 0x1c20) = iVar10;
          bVar11 = true;
        }
      }
      if ((*(int *)(param_1 + 0x1c20) < 0) ||
         (*(int *)(param_1 + 0x1c18) + 1 <= *(int *)(param_1 + 0x1c20))) {
        *(undefined4 *)(param_1 + 0x1c20) = *(undefined4 *)(param_1 + 0x1c1c);
      }
      else if (bVar11) {
        *(int *)(param_1 + 0x1c24) = (int)sVar3;
        *(float *)(param_1 + 0x1c2c) = fVar1;
        *(undefined4 *)(param_1 + 0x1c90) = *(undefined4 *)(param_1 + 0x1c84);
      }
    }
    *(undefined4 *)(param_1 + 0x3c34) = 0;
    if (*(int *)(param_1 + 0x1c24) != 0) {
      iVar10 = *(int *)(param_1 + 0x1c20);
      if (iVar10 == 1) {
        fVar2 = *(float *)(param_1 + 0x1c38);
      }
      else if (*(int *)(param_1 + 0x1c14) == 0) {
        fVar2 = *(float *)(param_1 + 0x1c30);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x1c34);
      }
      fVar4 = fVar1 - *(float *)(param_1 + 0x1c2c);
      if (fVar4 <= fVar2) {
        fVar4 = fVar4 / fVar2;
        fVar2 = fVar4 * *(float *)(param_1 + 0x1c88) +
                (_DAT_0064b240 - fVar4) * *(float *)(param_1 + 0x1c90);
        local_18 = (double)CONCAT44(local_18._4_4_,fVar2);
        *(float *)(param_1 + 0x1c84) = fVar2;
        FUN_004ea55e(fVar2,s_make_inner_filterEngineTach_2_0067384c);
        fVar12 = (float10)FUN_004ea828();
        *(undefined4 *)(param_1 + 0x1c1c) = 1;
        *(float *)(param_1 + 0x1c84) = (float)fVar12;
        *(undefined4 *)(param_1 + 0x3c34) = *(undefined4 *)(param_1 + 0x1c24);
      }
      else {
        *(int *)(param_1 + 0x1c1c) = iVar10;
        if (*(int *)(param_1 + 0x1c18) < iVar10) {
          *(int *)(param_1 + 0x1c1c) = *(int *)(param_1 + 0x1c18);
        }
        if (*(int *)(param_1 + 0x1c1c) < 0) {
          *(undefined4 *)(param_1 + 0x1c1c) = 0;
        }
        fVar2 = *(float *)(param_1 + 0x1c88) * *(float *)(param_1 + 0x29d8);
        fVar2 = fVar2 + fVar2;
        *(undefined4 *)(param_1 + 0x1c24) = 0;
        *(undefined4 *)(param_1 + 0x1c2c) = 0;
        *(float *)(param_1 + 0x1c3c) = fVar1;
        local_18 = (double)CONCAT44(local_18._4_4_,fVar2);
        *(float *)(param_1 + 0x1c84) = fVar2;
        FUN_004ea55e(fVar2,s_make_inner_filterEngineTach_1_0067386c);
        fVar12 = (float10)FUN_004ea828();
        *(float *)(param_1 + 0x1c84) = (float)fVar12;
        *(undefined4 *)(param_1 + 0x1c20) = 0xffffffff;
      }
    }
    fVar12 = (float10)FUN_004fed30(*(undefined4 *)(param_1 + 0x1c84),
                                   *(undefined4 *)(param_1 + 0x29d8));
    local_18._0_4_ = (float)fVar12;
    fVar12 = (float10)FUN_004fedb0((float)fVar12);
    *(float *)(param_1 + 0x1c94) = (float)fVar12;
    if (*(float *)(param_1 + 0x1c40) <= fVar1 - *(float *)(param_1 + 0x1c3c)) {
      if (((*(int *)(param_1 + 0x1c14) == 0) && (*(int *)(param_1 + 0x1c1c) != 1)) &&
         (*(float *)(param_1 + 0x1c84) < *(float *)(param_1 + 0x1c88) * (float)_DAT_0064a5a8)) {
        *(undefined4 *)(param_1 + 0x277c) = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x1c3c) = 0;
    }
    *(undefined4 *)(param_1 + 0x34cc) = 0;
    if (((fVar1 - *(float *)(param_1 + 0x17d8) < _DAT_0064b3fc) &&
        (*(float *)(param_1 + 0xdc8) < _DAT_0064b440)) &&
       ((float)_DAT_0064a6d0 < *(float *)(param_1 + 0x29d8))) {
      *(undefined4 *)(param_1 + 0x34cc) = 1;
    }
    fVar12 = (float10)FUN_004e1fd9();
    local_18 = (double)CONCAT44(local_18._4_4_,(float)fVar12);
    if (*(int *)(param_1 + 0x2760) != 0) {
      fVar12 = (float10)FUN_004eae60();
      FUN_004eaf60((float)(((ABS((float10)*(float *)(param_1 + 0x1c84)) *
                            (float10)*(float *)(param_1 + 0x29d8)) /
                           (float10)*(float *)(param_1 + 0x1c88)) * fVar12 *
                          (float10)(float)local_18));
    }
    fVar12 = (float10)FUN_004eae60();
    if ((float10)_DAT_0064b254 < fVar12) {
      *(undefined4 *)(param_1 + 0x3c7c) = 0;
      *(undefined4 *)(param_1 + 0x1b24) = 2;
      fVar12 = (float10)FUN_004eae60();
      *(float *)(param_1 + 0x3c74) = (float)fVar12;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c94) = 0;
      *(undefined4 *)(param_1 + 0x34cc) = 0;
      *(undefined4 *)(param_1 + 0x3c7c) = 1;
      *(undefined4 *)(param_1 + 0x1b24) = 3;
      fVar12 = (float10)FUN_004eae60();
      *(float *)(param_1 + 0x3c74) = (float)fVar12;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c94) = 0;
    *(undefined4 *)(param_1 + 0x1c84) = 0;
    FUN_004ea55e(0,s_make_inner_filterEngineTach_3_0067382c);
    fVar12 = (float10)FUN_004ea828();
    *(float *)(param_1 + 0x1c84) = (float)fVar12;
    *(undefined4 *)(param_1 + 0x34cc) = 0;
    *(undefined4 *)(param_1 + 0x1c1c) = 1;
  }
  *(undefined4 *)(param_1 + 0x3be4) = *(undefined4 *)(param_1 + 0x1c20);
  *(undefined4 *)(param_1 + 0x3c10) = *(undefined4 *)(param_1 + 0x1c2c);
  *(undefined4 *)(param_1 + 0x3c14) = *(undefined4 *)(param_1 + 0x1c3c);
  FUN_004ea55e(*(undefined4 *)(param_1 + 0x1c94),s_make_inner_filterEngineAccel_1_0067380c);
  fVar12 = (float10)FUN_004ea828();
  *(float *)(param_1 + 0x1c94) = (float)fVar12;
  if (((*(int *)(param_1 + 0x1b24) == 2) && (*(int *)(param_1 + 0x277c) == -1)) &&
     (_DAT_00673388 * _DAT_0064b3f8 < fVar1 - *(float *)(param_1 + 0x1b28))) {
    *(undefined4 *)(param_1 + 0x1b24) = 3;
  }
  if (*(int *)(param_1 + 0x1b24) == 3) {
    local_18 = (double)CONCAT44(local_18._4_4_,fVar1 - *(float *)(param_1 + 0x1b2c));
    fVar12 = (float10)FUN_004e1fd9();
    if ((float10)(float)local_18 <= (float10)_DAT_00673384 - fVar12) goto LAB_0050002b;
  }
  else {
    *(float *)(param_1 + 0x1b2c) = fVar1;
    if (*(int *)(param_1 + 0x277c) == 1) {
      *(undefined4 *)(param_1 + 0x1b24) = 1;
    }
    else if (*(int *)(param_1 + 0x1b24) == 0) {
      *(float *)(param_1 + 0x1b28) = fVar1;
    }
    if ((*(int *)(param_1 + 0x1b24) != 1) ||
       ((((fVar1 - *(float *)(param_1 + 0x1b28) <= _DAT_00673388 ||
          (*(short *)(param_1 + 0x2740) != 1)) || (*(int *)(param_1 + 0x277c) != 0)) &&
        (*(short *)(param_1 + 0x2740) != 0)))) goto LAB_0050002b;
    fVar12 = (float10)FUN_004eae60();
    if ((float10)_DAT_0064b254 < fVar12) {
      *(undefined4 *)(param_1 + 0x1b24) = 2;
      *(undefined4 *)(param_1 + 0x277c) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1b24) = 0;
LAB_0050002b:
  *(undefined4 *)(param_1 + 0x277c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_005045b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  undefined4 *puVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  short *psVar19;
  float *pfVar20;
  short *local_180;
  int local_17c;
  int *local_170;
  int local_16c;
  int local_e4 [8];
  float local_c4 [2];
  undefined4 local_bc [22];
  undefined1 local_64 [100];
  
  local_17c = 0;
  *(float *)(param_1 + 0xc4) = DAT_007015b0;
  *(float *)(param_1 + 200) = DAT_007015b4;
  fVar1 = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x26b0) = 0;
  *(float *)(param_1 + 0xcc) = fVar1;
  puVar14 = local_bc;
  iVar17 = 8;
  do {
    puVar14[-2] = 0;
    puVar14[-1] = 0;
    *puVar14 = 0;
    puVar14 = puVar14 + 3;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  if (1 < DAT_00695b48) {
    FUN_0061c369(local_64,s__s_getGround_for_Pos__f__f__f_NU_00673998,
                 &DAT_006970c6 + *(int *)(param_1 + 0x8cc) * 0x970,
                 (double)*(float *)(param_1 + 0x34),(double)*(float *)(param_1 + 0x38),
                 (double)*(float *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xdd4));
    FUN_004e1de6(local_64);
  }
  local_16c = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar15 = local_c4;
    local_170 = local_e4;
    local_180 = (short *)(param_1 + 0x19a4);
    pfVar18 = (float *)(param_1 + 0x1b74);
    pfVar16 = (float *)(param_1 + 0x68);
    pfVar20 = (float *)(param_1 + 0x10c);
    do {
      pfVar16[0x3a8] = DAT_007015b0;
      pfVar16[0x3a9] = DAT_007015b4;
      pfVar16[0x3aa] = DAT_007015b8;
      fVar1 = *pfVar18;
      fVar5 = pfVar16[0x715] - DAT_00701590 * fVar1;
      fVar6 = pfVar16[0x716] - DAT_00701594 * fVar1;
      fVar7 = pfVar16[0x717] - fVar1 * DAT_00701598;
      fVar1 = *(float *)(param_1 + 0x2c);
      fVar2 = *(float *)(param_1 + 0x20);
      *pfVar15 = fVar5 * *(float *)(param_1 + 0x10) +
                 fVar6 * *(float *)(param_1 + 0x1c) + fVar7 * *(float *)(param_1 + 0x28) +
                 *(float *)(param_1 + 0x34);
      fVar3 = *(float *)(param_1 + 0x30);
      fVar4 = *(float *)(param_1 + 0x24);
      pfVar15[1] = fVar5 * *(float *)(param_1 + 0x14) + fVar6 * fVar2 + fVar7 * fVar1 +
                   *(float *)(param_1 + 0x38);
      pfVar15[2] = fVar5 * *(float *)(param_1 + 0x18) + fVar6 * fVar4 + fVar7 * fVar3 +
                   *(float *)(param_1 + 0x3c);
      iVar17 = FUN_005036b0();
      *local_170 = iVar17;
      if (*(int *)(param_1 + 0x3c54) != 0) {
        return 0;
      }
      if (iVar17 == 1) {
        fVar1 = pfVar18[-0x34e];
        fVar2 = pfVar20[-1];
        fVar3 = *pfVar20;
        fVar4 = pfVar20[-4];
        fVar5 = pfVar20[-3];
        pfVar16[-1] = fVar1 * pfVar20[-2] + pfVar20[-5];
        *pfVar16 = fVar1 * fVar2 + fVar4;
        pfVar16[1] = fVar1 * fVar3 + fVar5;
        FUN_005aae00();
        local_17c = local_17c + 1;
        *(float *)(param_1 + 0x26b0) = *(float *)(param_1 + 0x26b0) + pfVar18[0x2bf];
        fVar1 = *(float *)(param_1 + 0x91c);
        fVar2 = *(float *)(param_1 + 0x910);
        fVar3 = *(float *)(param_1 + 0x904);
        fVar4 = *(float *)(param_1 + 0x928);
        fVar5 = *(float *)(param_1 + 0x920);
        fVar6 = *(float *)(param_1 + 0x914);
        fVar7 = *(float *)(param_1 + 0x908);
        fVar8 = *(float *)(param_1 + 0x92c);
        pfVar16[0x5f7] =
             *(float *)(param_1 + 0x900) * pfVar16[-1] +
             *(float *)(param_1 + 0x90c) * *pfVar16 + *(float *)(param_1 + 0x918) * pfVar16[1] +
             *(float *)(param_1 + 0x924);
        pfVar16[0x5f8] = fVar3 * pfVar16[-1] + fVar2 * *pfVar16 + fVar1 * pfVar16[1] + fVar4;
        pfVar16[0x5f9] = fVar7 * pfVar16[-1] + fVar6 * *pfVar16 + fVar5 * pfVar16[1] + fVar8;
        fVar1 = (pfVar16[0x717] - *pfVar18) - pfVar16[0x5f9];
        pfVar18[-0x357] = fVar1;
        pfVar18[-0x367] = fVar1;
        if (fVar1 <= pfVar18[0x10a]) {
          if (fVar1 < _DAT_0064b254) {
            pfVar18[-0x367] = 0.0;
          }
          if ((pfVar18[-0x395] < (float)_DAT_0064a648) && (*local_180 == 0)) {
            pfVar18[-0x395] = ABS(*pfVar20) * *(float *)(param_1 + 0x2640) * (float)_DAT_0064caa8;
          }
          *local_180 = 0;
        }
        else {
          pfVar18[-0x367] = pfVar18[0x10a];
          *local_180 = 1;
        }
      }
      else {
        fVar10 = DAT_00701590 * _DAT_0064c7a8;
        fVar11 = DAT_00701594 * _DAT_0064c7a8;
        fVar12 = DAT_00701598 * _DAT_0064c7a8;
        fVar1 = *(float *)(param_1 + 0x14);
        fVar2 = *(float *)(param_1 + 0x2c);
        fVar3 = *(float *)(param_1 + 0x20);
        fVar4 = *(float *)(param_1 + 0x18);
        fVar5 = *(float *)(param_1 + 0x30);
        fVar6 = *(float *)(param_1 + 0x24);
        fVar7 = pfVar15[1];
        fVar8 = pfVar15[2];
        pfVar16[-1] = *pfVar15 -
                      (fVar10 * *(float *)(param_1 + 0x10) +
                      fVar11 * *(float *)(param_1 + 0x1c) + fVar12 * *(float *)(param_1 + 0x28));
        *pfVar16 = fVar7 - (fVar11 * fVar3 + fVar12 * fVar2 + fVar10 * fVar1);
        pfVar16[1] = fVar8 - (fVar11 * fVar6 + fVar12 * fVar5 + fVar10 * fVar4);
        fVar1 = DAT_00701594 * _DAT_0064c7a8;
        fVar2 = DAT_00701598 * _DAT_0064c7a8;
        pfVar16[0x5f7] = pfVar16[0x715] - DAT_00701590 * _DAT_0064c7a8;
        pfVar16[0x5f8] = pfVar16[0x716] - fVar1;
        pfVar16[0x5f9] = pfVar16[0x717] - fVar2;
        pfVar18[-0x357] = 1000.0;
        pfVar18[-0x367] = pfVar18[0x10a];
        *local_180 = 1;
        pfVar18[-0x395] = 0.0;
      }
      local_180 = local_180 + 1;
      pfVar15 = pfVar15 + 3;
      local_16c = local_16c + 1;
      local_170 = local_170 + 1;
      pfVar18 = pfVar18 + 1;
      pfVar20 = pfVar20 + 0x3e;
      pfVar16 = pfVar16 + 3;
    } while (local_16c < *(int *)(param_1 + 0xdd4));
  }
  pfVar16 = (float *)(param_1 + 0xe24);
  if (*(float *)(param_1 + 0xe24) <= *(float *)(param_1 + 0xe20)) {
    pfVar16 = (float *)(param_1 + 0xe20);
  }
  pfVar18 = (float *)(param_1 + 0xe18);
  if (*(float *)(param_1 + 0xe18) < *(float *)(param_1 + 0xe1c)) {
    pfVar18 = (float *)(param_1 + 0xe1c);
  }
  if (*pfVar16 <= *pfVar18) {
    pfVar16 = pfVar18;
  }
  *(float *)(param_1 + 0xe38) = *pfVar16;
  if (local_17c == 0) {
    *(float *)(param_1 + 0xc4) = DAT_00701590;
    *(float *)(param_1 + 200) = DAT_00701594;
    *(float *)(param_1 + 0xcc) = DAT_00701598;
  }
  else {
    FUN_005aab70();
    *(float *)(param_1 + 0x26b0) = *(float *)(param_1 + 0x26b0) / (float)local_17c;
  }
  FUN_005041b0();
  FUN_005062e0();
  iVar17 = *(int *)(param_1 + 0xdd4);
  sVar9 = *(short *)(param_1 + 0x19a8);
  if (iVar17 == 6) {
    if ((((sVar9 == 0) || (*(short *)(param_1 + 0x19aa) == 0)) ||
        (*(short *)(param_1 + 0x19ac) == 0)) || (*(short *)(param_1 + 0x19ae) == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined1 *)(param_1 + 0x19b7) = uVar13;
    if ((*(short *)(param_1 + 0x19a4) == 0) || (*(short *)(param_1 + 0x19a6) == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined1 *)(param_1 + 0x19b5) = uVar13;
    if (((*(short *)(param_1 + 0x19a4) == 0) || (sVar9 == 0)) || (*(short *)(param_1 + 0x19ac) == 0)
       ) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined1 *)(param_1 + 0x19b6) = uVar13;
    if (((*(short *)(param_1 + 0x19a6) != 0) && (*(short *)(param_1 + 0x19aa) != 0)) &&
       (*(short *)(param_1 + 0x19ae) != 0)) {
      uVar13 = 1;
      goto LAB_00504cfd;
    }
  }
  else {
    if ((sVar9 == 0) || (*(short *)(param_1 + 0x19aa) == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined1 *)(param_1 + 0x19b7) = uVar13;
    if ((*(short *)(param_1 + 0x19a4) == 0) || (*(short *)(param_1 + 0x19a6) == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined1 *)(param_1 + 0x19b5) = uVar13;
    if ((*(short *)(param_1 + 0x19a4) == 0) || (sVar9 == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined1 *)(param_1 + 0x19b6) = uVar13;
    if ((*(short *)(param_1 + 0x19a6) != 0) && (*(short *)(param_1 + 0x19aa) != 0)) {
      uVar13 = 1;
      goto LAB_00504cfd;
    }
  }
  uVar13 = 0;
LAB_00504cfd:
  psVar19 = (short *)(param_1 + 0x19a4);
  *(undefined1 *)(param_1 + 0x19b8) = uVar13;
  *(undefined1 *)(param_1 + 0x19b4) = 1;
  if (((*(char *)(param_1 + 0x19b5) == '\0') && (*(char *)(param_1 + 0x19b6) == '\0')) &&
     ((*(char *)(param_1 + 0x19b7) == '\0' && (*(char *)(param_1 + 0x19b8) == '\0')))) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  *(undefined1 *)(param_1 + 0x19b9) = uVar13;
  *(undefined1 *)(param_1 + 0x19ba) = 0;
  if (0 < iVar17) {
    do {
      if ((*(char *)(param_1 + 0x19ba) == '\0') && (*psVar19 == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      *(undefined1 *)(param_1 + 0x19ba) = uVar13;
      if ((*(char *)(param_1 + 0x19b4) == '\0') || (*psVar19 == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      psVar19 = psVar19 + 1;
      iVar17 = iVar17 + -1;
      *(undefined1 *)(param_1 + 0x19b4) = uVar13;
    } while (iVar17 != 0);
  }
  FUN_00505a90(1);
  return local_17c;
}


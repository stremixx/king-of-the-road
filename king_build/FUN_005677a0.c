
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_005677a0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [48];
  
  if ((*(int *)(param_1 + 0xcb0) == 0) ||
     (iVar4 = FUN_00565710(*(int *)(param_1 + 0xcb0)), iVar4 == 0)) {
    uVar7 = *(uint *)(param_1 + 0xca4);
    *(undefined4 *)(param_1 + 0xd10) = 0;
    if ((uVar7 != 10) && ((uVar7 != 6 && (uVar7 != 7)))) {
      return uVar7;
    }
    goto LAB_00567d50;
  }
  iVar8 = 0;
  iVar4 = FUN_00565ad0();
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0xd10) == 0) {
      *(undefined4 *)(param_1 + 0xd10) = 1;
    }
    if (*(int *)(param_1 + 0xd10) == 1) {
      fVar9 = (float10)FUN_004e2035();
      *(float *)(param_1 + 0xd14) = (float)fVar9;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0xcb0) + 0x51d0) % 10;
    switch(iVar4) {
    case 0:
      *(undefined4 *)(param_1 + 0xd10) = 0;
      break;
    case 1:
      if ((2 < *(int *)(param_1 + 0xd10)) && (*(int *)(param_1 + 0xd10) != 6)) {
        *(undefined4 *)(param_1 + 0xd10) = 1;
      }
      break;
    case 2:
      if ((3 < *(int *)(param_1 + 0xd10)) && (*(int *)(param_1 + 0xd10) != 6)) {
        *(undefined4 *)(param_1 + 0xd10) = 1;
      }
      if (*(int *)(param_1 + 0xd10) == 2) {
        if (*(int *)(*(int *)(param_1 + 0xcb0) + 0x51d0) < 10) {
          fVar9 = (float10)FUN_004e2035();
          *(float *)(param_1 + 0xd14) = (float)fVar9;
        }
        *(undefined4 *)(param_1 + 0xd10) = 3;
      }
      break;
    case 3:
      if ((4 < *(int *)(param_1 + 0xd10)) && (*(int *)(param_1 + 0xd10) != 6)) {
        *(undefined4 *)(param_1 + 0xd10) = 3;
      }
      if ((*(int *)(param_1 + 0xd10) < 4) && (1 < *(int *)(param_1 + 0xd10))) {
        fVar9 = (float10)FUN_004e2035();
        *(float *)(param_1 + 0xd14) = (float)fVar9;
        *(undefined4 *)(param_1 + 0xd10) = 4;
      }
      break;
    case 4:
      if ((*(int *)(param_1 + 0xd10) < 5) && (1 < *(int *)(param_1 + 0xd10))) {
        *(undefined4 *)(param_1 + 0xd10) = 5;
      }
    }
    switch(*(undefined4 *)(param_1 + 0xd10)) {
    case 1:
      iVar8 = 0;
      iVar4 = FUN_00565ad0();
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xd10) = 2;
      }
      break;
    case 2:
      iVar8 = 1;
      iVar5 = FUN_0057d570(local_30);
      local_48 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
      local_44 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
      local_40 = *(float *)(iVar5 + 0x2c) - *(float *)(param_1 + 0x2c);
      local_3c = local_48;
      local_38 = local_44;
      local_34 = local_40;
      fVar9 = (float10)FUN_005aabc0(&local_3c);
      if ((fVar9 < (float10)_DAT_0064b438) && (iVar4 < 2)) {
        if (*(int *)(param_1 + 0xcb0) == *(int *)(DAT_006d0fd8 + 0x268)) {
          FUN_0056a430(0);
        }
LAB_005679c2:
        piVar1 = (int *)(*(int *)(param_1 + 0xcb0) + 0x51d0);
        *piVar1 = *piVar1 + 1;
      }
      break;
    case 3:
      iVar8 = 1;
      fVar9 = (float10)FUN_004e2035();
      if (((float10)_DAT_0064b440 < fVar9 - (float10)*(float *)(param_1 + 0xd14)) &&
         (*(int *)(*(int *)(param_1 + 0xcb0) + 0x51d0) < 10)) {
        if (*(int *)(param_1 + 0xcb0) != *(int *)(DAT_006d0fd8 + 0x268)) goto LAB_005679c2;
        FUN_0056a430(1);
        piVar1 = (int *)(*(int *)(param_1 + 0xcb0) + 0x51d0);
        *piVar1 = *piVar1 + 1;
      }
      break;
    case 4:
      fVar9 = (float10)FUN_004e2035();
      if ((float10)_DAT_0064b31c < fVar9 - (float10)*(float *)(param_1 + 0xd14)) goto LAB_005679c2;
      break;
    case 5:
      iVar8 = 2;
      break;
    case 6:
      iVar8 = 3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd10) = 0;
  }
  uVar7 = *(uint *)(param_1 + 0xcb0);
  if ((*(int *)(uVar7 + 0x51d0) < 0x1e) && (2 < *(int *)(param_1 + 0xd10))) {
    local_3c = *(float *)(uVar7 + 0x1b0);
    local_38 = *(float *)(uVar7 + 0x1b4);
    local_34 = *(float *)(uVar7 + 0x1b8);
    fVar9 = (float10)FUN_005aabc0(&local_3c);
    if (((float10)_DAT_0064c0e0 <= fVar9) || (iVar4 = FUN_00565ad0(), iVar4 != 0)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0xcb0) + 0x51d0);
      uVar7 = iVar4 / 10;
      iVar4 = iVar4 % 10;
      if (iVar4 == 2) {
        *(undefined4 *)(param_1 + 0xd10) = 3;
      }
      else if (iVar4 == 3) {
        *(undefined4 *)(param_1 + 0xd10) = 4;
      }
      else if (iVar4 == 4) {
        *(undefined4 *)(param_1 + 0xd10) = 5;
      }
      *(float *)(param_1 + 0xd18) = (float)*(double *)(DAT_006ee15c + 0xb98);
    }
    else {
      pfVar6 = (float *)FUN_0057d5a0(local_30);
      local_44 = pfVar6[1] * *(float *)(param_1 + 0x24) +
                 pfVar6[7] * *(float *)(param_1 + 0x2c) + pfVar6[4] * *(float *)(param_1 + 0x28) +
                 pfVar6[10];
      local_40 = pfVar6[2] * *(float *)(param_1 + 0x24) +
                 pfVar6[8] * *(float *)(param_1 + 0x2c) + pfVar6[5] * *(float *)(param_1 + 0x28) +
                 pfVar6[0xb];
      local_48 = *pfVar6 * *(float *)(param_1 + 0x24) +
                 pfVar6[6] * *(float *)(param_1 + 0x2c) + pfVar6[3] * *(float *)(param_1 + 0x28) +
                 pfVar6[9];
      fVar9 = (float10)FUN_005aabc0(param_1 + 100);
      if ((((local_44 <= ABS(local_48)) || (local_44 <= _DAT_0064b31c)) ||
          ((float10)_DAT_0064c2e8 <= fVar9)) &&
         (fVar9 = (float10)FUN_005aabc0(&local_48), (float10)_DAT_0064c4d8 <= fVar9)) {
        fVar2 = (float)*(double *)(DAT_006ee15c + 0xb98) - *(float *)(param_1 + 0xd18);
        fVar3 = (float)_DAT_0064a660;
        uVar7 = (uint)(ushort)((ushort)(fVar2 < fVar3) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                              (ushort)(fVar2 == fVar3) << 0xe);
        if (fVar2 < fVar3 || (fVar2 == fVar3) != 0) {
          *(undefined4 *)(param_1 + 0xd10) = 6;
          iVar8 = 3;
          goto LAB_00567c54;
        }
      }
      *(undefined4 *)(param_1 + 0xd10) = 0;
      if (*(int *)(param_1 + 0xcb0) == *(int *)(DAT_006d0fd8 + 0x268)) {
        FUN_0056a430(2);
      }
      uVar7 = *(uint *)(param_1 + 0xcb0);
      iVar8 = -1;
      *(undefined4 *)(uVar7 + 0x51d0) = 0;
      *(undefined4 *)(param_1 + 0xcb0) = 0;
      *(undefined4 *)(param_1 + 0xcb4) = 0;
      *(undefined4 *)(param_1 + 0xd18) = 0;
    }
  }
LAB_00567c54:
  if (((*(int *)(param_1 + 0xcb0) == 0) ||
      (uVar7 = *(uint *)(*(int *)(param_1 + 0xcb0) + 0x51d0), (int)uVar7 < 0x1f)) ||
     (0x27 < (int)uVar7)) {
LAB_00567c9a:
    if (iVar8 == 3) {
      if (*(int *)(param_1 + 0xca4) == 7) {
        return uVar7;
      }
      uVar7 = FUN_005659d0(*(undefined4 *)(param_1 + 0xcb0));
      return uVar7;
    }
    if (iVar8 == 2) {
      if (*(int *)(param_1 + 0xca4) == 10) {
        return uVar7;
      }
      uVar7 = FUN_005659a0(*(undefined4 *)(param_1 + 0xcb0));
      return uVar7;
    }
    if (iVar8 == 1) {
      if (*(int *)(param_1 + 0xca4) == 6) {
        return uVar7;
      }
      uVar7 = FUN_00565960(*(undefined4 *)(param_1 + 0xcb0));
      return uVar7;
    }
    if (iVar8 != -1) {
      return uVar7;
    }
  }
  else {
    fVar10 = (float10)FUN_00554c10();
    fVar9 = (float10)_DAT_0064ca48;
    uVar7 = (uint)(ushort)((ushort)(fVar10 < fVar9) << 8 | (ushort)(NAN(fVar10) || NAN(fVar9)) << 10
                          | (ushort)(fVar10 == fVar9) << 0xe);
    if (fVar10 < fVar9 || (fVar10 == fVar9) != 0) goto LAB_00567c9a;
    *(undefined4 *)(*(int *)(param_1 + 0xcb0) + 0x51d0) = 0;
    *(undefined4 *)(param_1 + 0xcb0) = 0;
    *(undefined4 *)(param_1 + 0xcb4) = 0;
  }
  uVar7 = *(uint *)(param_1 + 0xca4);
  if ((uVar7 != 6) && (uVar7 != 10)) {
    if (uVar7 != 7) {
      return uVar7;
    }
    uVar7 = FUN_00565a00(0xb);
    return uVar7;
  }
LAB_00567d50:
  uVar7 = FUN_00565a00(0xb);
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005000d0(int param_1)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float local_c;
  float local_4;
  
  fVar8 = (float10)FUN_004e1fd9();
  fVar1 = (float)fVar8;
  if (((*(byte *)(param_1 + 0x2702) == 0) && (*(char *)(param_1 + 0x2703) == '\0')) &&
     (*(short *)(param_1 + 0x2706) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  iVar7 = (uint)*(byte *)(param_1 + 0x2702) - (uint)*(byte *)(param_1 + 0x2703);
  if (((uint)*(byte *)(param_1 + 0x2701) != *(uint *)(param_1 + 0x1b20)) &&
     ((*(short *)(param_1 + 0x2740) != 0 || (*(int *)(param_1 + 0x274c) != 0)))) {
    fVar8 = (float10)FUN_004e2035();
    *(double *)(param_1 + 0x2738) = (double)(fVar8 - (float10)fVar1);
    fVar8 = (float10)FUN_004e2035();
    *(double *)(param_1 + 0x2730) = (double)(fVar8 - (float10)fVar1);
  }
  if ((float)_DAT_0064c328 <= *(float *)(param_1 + 0x2728)) {
    if (*(float *)(param_1 + 0x2728) <= (float)_DAT_0064c940) {
      fVar8 = (float10)FUN_0061d200();
      local_4 = (float)fVar8;
    }
    else {
      local_4 = 0.1;
    }
  }
  else {
    local_4 = 1.0;
  }
  if (bVar5) {
    fVar3 = (*(float *)(param_1 + 0x2724) + *(float *)(param_1 + 0x2724) + (float)_DAT_0064a830) *
            *(float *)(param_1 + 0x271c);
    *(float *)(param_1 + 0x271c) = fVar3;
    if (_DAT_0064b240 < fVar3) {
      *(undefined4 *)(param_1 + 0x271c) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x271c) < _DAT_0064b928) {
      *(undefined4 *)(param_1 + 0x271c) = 0xbf800000;
    }
    if (_DAT_0064b240 < *(float *)(param_1 + 0x271c)) {
      *(undefined4 *)(param_1 + 0x271c) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x271c) < _DAT_0064b928) {
      *(undefined4 *)(param_1 + 0x271c) = 0xbf800000;
    }
    if (*(int *)(param_1 + 0x29e8) == 0) {
      *(undefined4 *)(param_1 + 0x29e0) = *(undefined4 *)(param_1 + 0x271c);
    }
    else {
      fVar3 = (_DAT_0064b240 - local_4) *
              (*(float *)(param_1 + 0x271c) - *(float *)(param_1 + 0x29e0)) +
              *(float *)(param_1 + 0x29e0);
      *(float *)(param_1 + 0x29e0) = fVar3;
      if (ABS(fVar3 - *(float *)(param_1 + 0x271c)) < fVar1 * (float)_DAT_0064a6d0) {
        *(undefined4 *)(param_1 + 0x29e8) = 0;
      }
    }
  }
  else {
    fVar3 = (float)_DAT_0064a6e0;
    *(undefined4 *)(param_1 + 0x29e8) = 1;
    local_c = (float)_DAT_0064a6e0 / (ABS(*(float *)(param_1 + 0xdc8)) + fVar3);
    if ((*(short *)(param_1 + 0x2740) != 0) && (*(char *)(param_1 + 0x2701) == '\0')) {
      if ((float)_DAT_0064a5a8 <= ABS(*(float *)(param_1 + 0xdc8))) {
        fVar8 = (float10)fpatan(((float10)*(float *)(param_1 + 0x26b0) *
                                 (float10)*(float *)(param_1 + 0x263c) *
                                (float10)*(float *)(param_1 + 0x1f60)) /
                                ((float10)*(float *)(param_1 + 0xdc0) *
                                (float10)*(float *)(param_1 + 0xdc0)),(float10)1);
        fVar8 = fVar8 * (float10)_DAT_0064a658;
      }
      else {
        fVar8 = (float10)_DAT_0064b240;
      }
      local_c = (float)fVar8;
      if ((float10)_DAT_0064a660 < fVar8) {
        local_c = 1.0;
      }
    }
    if (*(char *)(param_1 + 0x2701) == '\0') {
      _DAT_006737c4 = 0.66;
    }
    else {
      local_c = 1.0;
      _DAT_006737c4 = 2.0;
    }
    if ((*(char *)(param_1 + 0x2702) != '\x01') || (*(char *)(param_1 + 0x2703) != '\x01')) {
      if (*(char *)(param_1 + 0x2702) == '\0') {
        if (*(char *)(param_1 + 0x2703) == '\0') {
          *(float *)(param_1 + 0x29e0) = local_4 * *(float *)(param_1 + 0x29e0);
        }
        else if (*(char *)(param_1 + 0x2703) != '\0') {
          fVar8 = (float10)FUN_004e2035();
          fVar8 = ((fVar8 - (float10)*(double *)(param_1 + 0x2738)) + (float10)_DAT_0064a830) *
                  ((float10)_DAT_0064a660 /
                  (ABS((float10)*(float *)(param_1 + 0xdc8)) * (float10)_DAT_0064a728 +
                  (float10)_DAT_0064a660)) * (float10)*(float *)(param_1 + 0x2724) * (float10)fVar1
                  * (float10)_DAT_0064ca40 * (float10)_DAT_006737c4;
          if (_DAT_0064b254 < *(float *)(param_1 + 0x29e0)) {
            local_4 = local_4 * *(float *)(param_1 + 0x29e0);
            local_4 = local_4 - ABS(local_4) * fVar1;
            *(float *)(param_1 + 0x29e0) = local_4;
            if (local_4 < _DAT_0064b254) {
              *(undefined4 *)(param_1 + 0x29e0) = 0;
            }
            fVar8 = (float10)*(float *)(param_1 + 0x29e0) - fVar8;
            *(float *)(param_1 + 0x29e0) = (float)fVar8;
            if (fVar8 < (float10)-local_c) {
              *(float *)(param_1 + 0x29e0) = -local_c;
            }
          }
          else if ((*(char *)(param_1 + 0x2701) != '\0') ||
                  (fVar3 = -local_c, fVar3 - fVar1 <= *(float *)(param_1 + 0x29e0))) {
            fVar8 = (float10)*(float *)(param_1 + 0x29e0) - fVar8;
            *(float *)(param_1 + 0x29e0) = (float)fVar8;
            if (fVar8 < (float10)-local_c) {
              *(float *)(param_1 + 0x29e0) = -local_c;
            }
          }
          else {
            if (*(float *)(param_1 + 0x29e0) < _DAT_0064b928) {
              *(undefined4 *)(param_1 + 0x29e0) = 0xbf800000;
            }
            fVar4 = fVar1 + *(float *)(param_1 + 0x29e0);
            *(float *)(param_1 + 0x29e0) = fVar4;
            if ((fVar4 < fVar1 - local_c) && (fVar3 < fVar4)) {
              *(float *)(param_1 + 0x29e0) = fVar3;
            }
          }
        }
      }
      else {
        fVar8 = (float10)FUN_004e2035();
        fVar8 = ((fVar8 - (float10)*(double *)(param_1 + 0x2730)) + (float10)_DAT_0064a830) *
                ((float10)_DAT_0064a660 /
                (ABS((float10)*(float *)(param_1 + 0xdc8)) * (float10)_DAT_0064a728 +
                (float10)_DAT_0064a660)) * (float10)*(float *)(param_1 + 0x2724) * (float10)fVar1 *
                (float10)_DAT_0064ca40 * (float10)_DAT_006737c4;
        if (*(float *)(param_1 + 0x29e0) < _DAT_0064b254) {
          local_4 = local_4 * *(float *)(param_1 + 0x29e0);
          local_4 = local_4 + ABS(local_4) * fVar1;
          *(float *)(param_1 + 0x29e0) = local_4;
          if (_DAT_0064b254 < local_4) {
            *(undefined4 *)(param_1 + 0x29e0) = 0;
          }
          fVar8 = fVar8 + (float10)*(float *)(param_1 + 0x29e0);
          *(float *)(param_1 + 0x29e0) = (float)fVar8;
          if ((float10)local_c < fVar8) {
            *(float *)(param_1 + 0x29e0) = local_c;
          }
        }
        else if ((*(char *)(param_1 + 0x2701) != '\0') ||
                (*(float *)(param_1 + 0x29e0) <= fVar1 + local_c)) {
          fVar8 = fVar8 + (float10)*(float *)(param_1 + 0x29e0);
          *(float *)(param_1 + 0x29e0) = (float)fVar8;
          if ((float10)local_c < fVar8) {
            *(float *)(param_1 + 0x29e0) = local_c;
          }
        }
        else {
          if (_DAT_0064b240 < *(float *)(param_1 + 0x29e0)) {
            *(undefined4 *)(param_1 + 0x29e0) = 0x3f800000;
          }
          fVar3 = *(float *)(param_1 + 0x29e0) - fVar1;
          *(float *)(param_1 + 0x29e0) = fVar3;
          if ((local_c - fVar1 < fVar3) && (fVar3 < local_c)) {
            *(float *)(param_1 + 0x29e0) = local_c;
          }
        }
      }
    }
  }
  if (iVar7 < 1) {
    fVar8 = (float10)FUN_004e2035();
    *(double *)(param_1 + 0x2730) = (double)fVar8;
    *(undefined4 *)(param_1 + 0x1b18) = *(undefined4 *)(param_1 + 0x29e0);
  }
  if (-1 < iVar7) {
    fVar8 = (float10)FUN_004e2035();
    *(double *)(param_1 + 0x2738) = (double)fVar8;
    *(undefined4 *)(param_1 + 0x1b1c) = *(undefined4 *)(param_1 + 0x29e0);
  }
  *(uint *)(param_1 + 0x1b20) = (uint)*(byte *)(param_1 + 0x2701);
  sVar2 = *(short *)(param_1 + 0x2718);
  if (*(short *)(param_1 + 0x271a) == 0) {
    if (sVar2 == 1) {
      *(undefined2 *)(param_1 + 0x2718) = 0;
    }
    else if (sVar2 == 3) {
      *(undefined2 *)(param_1 + 0x2718) = 2;
    }
  }
  else if (sVar2 == 0) {
    *(undefined2 *)(param_1 + 0x2718) = 3;
  }
  else if (sVar2 == 2) {
    *(undefined2 *)(param_1 + 0x2718) = 1;
  }
  if (*(short *)(param_1 + 0x2718) < 2) {
    *(undefined4 *)(param_1 + 0x3c50) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x2716) = 1;
    *(undefined4 *)(param_1 + 0x3c50) = 1;
  }
  FUN_004ff080();
  *(undefined2 *)(param_1 + 0x2746) = 0;
  *(undefined4 *)(param_1 + 0x3c58) = 0;
  *(undefined4 *)(param_1 + 0x3c5c) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x3c60) = DAT_007015b4;
  uVar6 = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x3c84) = 0;
  *(undefined4 *)(param_1 + 0x3c64) = uVar6;
  return;
}


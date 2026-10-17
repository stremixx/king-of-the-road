
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00534c00(int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar8 = *(int *)(param_1 + 0x268);
  local_8 = DAT_007015b4;
  local_4 = DAT_007015b8;
  iVar3 = 0;
  if (iVar8 == 0) goto LAB_00534e1c;
  iVar2 = __ftol();
  *(undefined4 *)(param_1 + 0x424) = 0x13;
  dVar1 = ABS((double)iVar2);
  uVar6 = (iVar2 < 0) - 1 & 2;
  iVar7 = uVar6 - 1;
  if (_DAT_0064a6c0 < dVar1) {
    if (_DAT_0064e368 < dVar1) {
      if (_DAT_0064e360 < dVar1) {
        if (dVar1 <= _DAT_0064a6e0) {
          iVar2 = uVar6 + 0x12 + iVar7 * 10;
          goto LAB_00534dcc;
        }
        if (_DAT_0064dd80 < dVar1) {
          if (_DAT_0064e358 < dVar1) {
            if (_DAT_0064e350 < dVar1) {
              if (_DAT_0064e348 < dVar1) {
                if (_DAT_0064e340 < dVar1) {
                  if (_DAT_0064e338 < dVar1) {
                    if (_DAT_0064e330 < dVar1) {
                      iVar2 = uVar6 + (iVar7 * 9 + 9) * 2;
                      goto LAB_00534dcc;
                    }
                    *(int *)(param_1 + 0x424) = iVar7 * 0x12 + 0x13;
                  }
                  else {
                    *(int *)(param_1 + 0x424) = iVar7 * 0x11 + 0x13;
                  }
                  goto LAB_00534dd2;
                }
                iVar2 = iVar7 * 0x10 + 0x13;
              }
              else {
                iVar2 = iVar7 * 0xf + 0x13;
              }
LAB_00534dcc:
              *(int *)(param_1 + 0x424) = iVar2;
            }
            else {
              *(int *)(param_1 + 0x424) = iVar7 * 0xe + 0x13;
            }
          }
          else {
            *(uint *)(param_1 + 0x424) = uVar6 + 0x12 + iVar7 * 0xc;
          }
        }
        else {
          *(int *)(param_1 + 0x424) = iVar7 * 0xc + 0x13;
        }
      }
      else {
        *(int *)(param_1 + 0x424) = iVar7 * 10 + 0x13;
      }
    }
    else {
      *(int *)(param_1 + 0x424) = (iVar2 + iVar7 * -5) / 2 + 0x13 + iVar7 * 5;
    }
  }
  else {
    *(int *)(param_1 + 0x424) = iVar2 + 0x13;
  }
LAB_00534dd2:
  iVar8 = *(int *)(iVar8 + 0x5460);
  if (iVar8 != 0) {
    iVar2 = 4;
    local_8 = *(float *)(iVar8 + 0x33b0);
    local_4 = *(float *)(iVar8 + 0x33b4);
    do {
      iVar3 = __ftol();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_00534e1c:
  if (*(int *)(param_1 + 0x424) < 0) {
    *(undefined4 *)(param_1 + 0x424) = 0;
  }
  if (0x26 < *(int *)(param_1 + 0x424)) {
    *(undefined4 *)(param_1 + 0x424) = 0x26;
  }
  if (*(int *)(param_1 + 0x578) == 0) {
    FUN_004e1fd9();
    dVar1 = (double)ABS(local_4);
    local_28 = 0.0;
    local_30 = 0;
    if ((float)_DAT_0064a590 < ABS(local_4)) {
      local_30 = __ftol();
      local_28 = (local_8 / local_4) * _DAT_0064e328;
    }
    fVar10 = (float10)FUN_00555d60();
    iVar8 = *(int *)(param_1 + 0x564);
    if (ABS((float10)iVar8) <= ABS(fVar10 * (float10)_DAT_0064b654 + (float10)local_28)) {
      local_2c = __ftol();
    }
    else {
      local_2c = __ftol();
    }
    iVar2 = *(int *)(param_1 + 0x560);
    iVar7 = local_30 - iVar2;
    iVar4 = __ftol();
    if (iVar4 < iVar7) {
      iVar7 = iVar4;
    }
    if (iVar7 < -iVar4) {
      iVar7 = -iVar4;
    }
    iVar9 = local_2c - iVar8;
    if (iVar4 < local_2c - iVar8) {
      iVar9 = iVar4;
    }
    if (iVar9 < -iVar4) {
      iVar9 = -iVar4;
    }
    *(int *)(param_1 + 0x560) = iVar2 + iVar7;
    *(int *)(param_1 + 0x564) = iVar8 + iVar9;
    if (iVar3 != 0) {
      _rand();
      uVar5 = __ftol();
      *(undefined4 *)(param_1 + 0x560) = uVar5;
      _rand();
      uVar5 = __ftol();
      *(undefined4 *)(param_1 + 0x564) = uVar5;
    }
    iVar8 = *(int *)(param_1 + 0x568);
    if (*(int *)(param_1 + 0x560) < -iVar8) {
      *(int *)(param_1 + 0x560) = -iVar8;
    }
    if (iVar8 < *(int *)(param_1 + 0x560)) {
      *(int *)(param_1 + 0x560) = iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x56c);
    if (*(int *)(param_1 + 0x564) < -iVar8) {
      *(int *)(param_1 + 0x564) = -iVar8;
    }
    if (iVar8 < *(int *)(param_1 + 0x564)) {
      *(int *)(param_1 + 0x564) = iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x574);
    if (iVar8 < 0) {
      local_30 = 0;
      local_2c = 0;
      if (_DAT_0064a590 < dVar1) {
        local_30 = __ftol();
        local_2c = __ftol();
      }
    }
    if (0 < iVar8) {
      local_30 = 0;
      local_2c = 0;
      if (_DAT_0064a590 < dVar1) {
        local_30 = __ftol();
        local_2c = __ftol();
      }
    }
    FUN_00531a60();
    iVar8 = *(int *)(param_1 + 0x568);
    *(int *)(param_1 + 0x558) = local_30;
    *(int *)(param_1 + 0x55c) = local_2c;
    if (local_30 < -iVar8) {
      *(int *)(param_1 + 0x558) = -iVar8;
    }
    if (iVar8 < *(int *)(param_1 + 0x558)) {
      *(int *)(param_1 + 0x558) = iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x56c);
    if (local_2c < -iVar8) {
      *(int *)(param_1 + 0x55c) = -iVar8;
    }
    if (iVar8 < *(int *)(param_1 + 0x55c)) {
      *(int *)(param_1 + 0x55c) = iVar8;
      return;
    }
  }
  else {
    iVar8 = DAT_006957b4 / 2 + -0xbe;
    iVar3 = DAT_006957b4 / 2 + 0xa0;
    if (iVar8 < DAT_00671d7c) {
      iVar8 = DAT_00671d7c;
    }
    if (DAT_006957b4 < iVar3) {
      iVar3 = DAT_006957b4;
    }
    (**(code **)(**(int **)(param_1 + 0x20) + 0x2c))(0,iVar8,DAT_006957b0,iVar3);
  }
  return;
}


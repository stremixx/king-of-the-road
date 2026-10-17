
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005041b0(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  float local_2c;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar11 = 0;
  iVar1 = *(int *)(param_1 + 0xdd4);
  if (0 < iVar1) {
    piVar12 = (int *)(param_1 + 0x17c);
    do {
      piVar2 = (int *)*piVar12;
      if (((piVar2 != (int *)0x0) && (*piVar2 == 1)) && ((piVar2[1] == 7 || (piVar2[1] == 4))))
      break;
      iVar11 = iVar11 + 1;
      piVar12 = piVar12 + 0x3e;
    } while (iVar11 < iVar1);
  }
  fVar5 = _DAT_0067338c * *(float *)(param_1 + 0x1f9c) + *(float *)(param_1 + 0x1b70);
  fVar6 = DAT_00701590 * fVar5;
  fVar7 = DAT_00701594 * fVar5;
  fVar3 = *(float *)(param_1 + 0x1cc4) + *(float *)(param_1 + 0x1cdc);
  local_8 = (*(float *)(param_1 + 0x1cc0) + *(float *)(param_1 + 0x1cd8)) * _DAT_0064b248;
  fVar8 = (*(float *)(param_1 + 0x1cd4) + *(float *)(param_1 + 0x1cbc)) * _DAT_0064b248 - fVar6;
  fVar4 = local_8 - fVar7;
  local_4 = fVar8 * *(float *)(param_1 + 0x18) +
            fVar4 * *(float *)(param_1 + 0x24) +
            (fVar3 * _DAT_0064b248 - fVar5 * DAT_00701598) * *(float *)(param_1 + 0x30) +
            *(float *)(param_1 + 0x3c);
  if ((iVar11 != iVar1) && (local_4 < _DAT_0064b254)) {
    fVar5 = ABS(local_4);
    local_2c = fVar5 * _DAT_0064b248;
    if (_DAT_0064b254 <= local_2c) {
      if (_DAT_0064b240 < local_2c) {
        local_2c = 1.0;
      }
    }
    else {
      local_2c = 0.0;
    }
    FUN_0041ce10(-DAT_00701590,-DAT_00701594,-DAT_00701598);
    FUN_0041ce10(local_c * _DAT_0064c980,local_8 * _DAT_0064c980,local_4 * _DAT_0064c980);
    fVar9 = (float)_DAT_0064a660 - local_2c * (float)_DAT_0064a888;
    FUN_0041ce10(fVar6 * fVar9,fVar7 * fVar9,local_10 * fVar9);
    *(float *)(param_1 + 0xd40) = fVar8;
    *(undefined4 *)(param_1 + 0x3c4c) = 1;
    *(float *)(param_1 + 0xd44) = fVar4;
    *(float *)(param_1 + 0xd48) = fVar3;
    *(float *)(param_1 + 0x3310) = fVar8;
    *(float *)(param_1 + 0x3314) = fVar4;
    *(float *)(param_1 + 0x3c48) = fVar5;
    *(float *)(param_1 + 0x3318) = fVar3;
    if ((*(short *)(param_1 + 0x2740) == 1) && ((float)_DAT_0064a778 < fVar5)) {
      *(undefined4 *)(param_1 + 0x3344) = 1;
    }
    puVar10 = (undefined4 *)
              FUN_004bdd80(&local_c,param_1 + 0x40,
                           -(*(float *)(param_1 + 0xdc0) * *(float *)(param_1 + 0xcf8) * local_2c));
    *(undefined4 *)(param_1 + 0xc90) = *puVar10;
    *(undefined4 *)(param_1 + 0xc94) = puVar10[1];
    *(undefined4 *)(param_1 + 0xc98) = puVar10[2];
    puVar10 = (undefined4 *)
              FUN_004bdd80(&local_c,param_1 + 0x58,-(local_2c * *(float *)(param_1 + 0xcfc)));
    *(undefined4 *)(param_1 + 0xcd8) = *puVar10;
    *(undefined4 *)(param_1 + 0xcdc) = puVar10[1];
    *(undefined4 *)(param_1 + 0xce0) = puVar10[2];
    return;
  }
  FUN_0041ce10(-DAT_00701590,-DAT_00701594,-DAT_00701598);
  FUN_0041ce10(local_c * _DAT_0064c980,local_8 * _DAT_0064c980,local_4 * _DAT_0064c980);
  *(undefined4 *)(param_1 + 0x3c48) = 0;
  *(float *)(param_1 + 0xd40) = fVar6;
  *(undefined4 *)(param_1 + 0x3c4c) = 0;
  fVar3 = _DAT_0064b254;
  *(float *)(param_1 + 0xd44) = fVar7;
  *(float *)(param_1 + 0xd48) = local_10;
  *(float *)(param_1 + 0x3310) = fVar6;
  *(float *)(param_1 + 0x3314) = fVar7;
  *(float *)(param_1 + 0x3318) = local_10;
  FUN_0041ce10(fVar3 * *(float *)(param_1 + 0x40),fVar3 * *(float *)(param_1 + 0x44),
               fVar3 * *(float *)(param_1 + 0x48));
  fVar3 = _DAT_0064b254;
  *(float *)(param_1 + 0xc90) = local_c;
  *(float *)(param_1 + 0xc94) = local_8;
  *(float *)(param_1 + 0xc98) = local_4;
  FUN_0041ce10(fVar3 * *(float *)(param_1 + 0x58),fVar3 * *(float *)(param_1 + 0x5c),
               fVar3 * *(float *)(param_1 + 0x60));
  *(float *)(param_1 + 0xcd8) = local_c;
  *(float *)(param_1 + 0xcdc) = local_8;
  *(float *)(param_1 + 0xce0) = local_4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb3e0(void)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float local_1c;
  float local_18;
  
  _rand();
  uVar4 = __ftol();
  iVar5 = _rand();
  fVar2 = (float)iVar5 * _DAT_0064b330 + _DAT_0064b324;
  iVar5 = _rand();
  uVar6 = 0;
  local_1c = (float)iVar5 * _DAT_0064b330 + _DAT_0064b324;
  uVar7 = uVar4;
  local_18 = fVar2;
  do {
    fVar3 = local_1c;
    if (uVar4 == 0) {
      _rand();
      uVar4 = __ftol();
      if (0x20 - uVar6 <= uVar4) {
        uVar4 = 0x20 - uVar6;
        local_1c = fVar2;
      }
      iVar5 = _rand();
      uVar7 = uVar4;
      fVar3 = (float)iVar5 * _DAT_0064b330 + _DAT_0064b324;
      local_18 = local_1c;
    }
    local_1c = fVar3;
    uVar1 = (ulonglong)uVar4;
    uVar4 = uVar4 - 1;
    uVar6 = uVar6 + 1;
    fVar3 = ((float)uVar1 / (float)(int)uVar7) * local_18 +
            (_DAT_0064b240 - (float)uVar1 / (float)(int)uVar7) * local_1c;
    *(float *)(uVar6 * 4 + 0x694f0c) = fVar3;
    *(float *)(uVar6 * 4 + 0x694284) = fVar3 * _DAT_0064b32c;
    *(float *)(uVar6 * 4 + 0x694d8c) = fVar3 * _DAT_0064b328;
  } while (uVar6 < 0x20);
  return;
}


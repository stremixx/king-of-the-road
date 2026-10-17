
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004d4340(undefined4 param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  undefined1 *apuStack_c4 [5];
  float local_b0;
  float local_ac;
  undefined4 *local_a8;
  int local_a4;
  int local_90;
  undefined4 local_80 [8];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  local_a4 = param_2;
  local_a8 = local_80;
  local_ac = 7.095503e-39;
  FUN_00437600();
  local_a4 = param_3;
  puVar6 = local_80;
  ppuVar7 = apuStack_c4;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppuVar7 = (undefined1 *)*puVar6;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  }
  FUN_00438e50();
  local_a4 = param_2;
  local_a8 = (undefined4 *)0x4d438c;
  uVar4 = FUN_0043f700();
  if (((uVar4 & 0x4000) == 0) && (*(int *)(DAT_006cdbcc + 0x524) == 0)) {
    local_a4 = 0x4d43be;
    local_90 = __ftol();
    if (local_90 != 0) {
      local_90 = local_90 + -1;
    }
  }
  else {
    local_a4 = *(undefined4 *)(param_2 + 0x2d8);
    local_a8 = (undefined4 *)0x4d43d5;
    local_90 = FUN_004d4300();
  }
  apuStack_c4[0] = local_60;
  puVar6 = local_80;
  ppuVar7 = apuStack_c4 + 1;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppuVar7 = (undefined1 *)*puVar6;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  }
  fVar2 = ((float)local_90 + (float)_DAT_0064a6d0) * (float)_DAT_0064c2f0;
  fVar1 = DAT_007015a0 * fVar2;
  fVar3 = DAT_007015a4 * fVar2;
  fVar2 = DAT_007015a8 * fVar2;
  local_a4 = FUN_0043a860();
  apuStack_c4[4] = local_30;
  apuStack_c4[3] = (undefined1 *)0x4d4456;
  local_b0 = fVar1;
  local_ac = fVar3;
  local_a8 = (undefined4 *)fVar2;
  local_a8 = (undefined4 *)FUN_005ab330();
  local_ac = (float)param_1;
  local_b0 = 7.095871e-39;
  FUN_005ab130();
  return param_1;
}


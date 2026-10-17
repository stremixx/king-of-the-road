
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004d4480(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  undefined1 *apuStack_b8 [4];
  float local_a8;
  float local_a4;
  undefined4 *local_a0;
  int local_9c;
  int local_90;
  undefined4 local_80 [8];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  local_9c = param_2;
  local_a0 = local_80;
  local_a4 = 7.095948e-39;
  FUN_00437600();
  local_90 = 0;
  local_9c = param_2;
  local_a0 = (undefined4 *)0x4d44b2;
  uVar4 = FUN_0043f700();
  if (((uVar4 & 0x4000) != 0) || (*(int *)(DAT_006cdbcc + 0x524) != 0)) {
    local_9c = *(int *)(param_2 + 0x2d8);
    local_a0 = (undefined4 *)0x4d44d6;
    local_90 = FUN_004d4300();
  }
  puVar6 = local_80;
  ppuVar7 = apuStack_b8;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppuVar7 = (undefined1 *)*puVar6;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  }
  fVar2 = ((float)local_90 + (float)_DAT_0064a6d0) * (float)_DAT_0064c2f0;
  fVar1 = DAT_007015a0 * fVar2;
  fVar3 = DAT_007015a4 * fVar2;
  fVar2 = DAT_007015a8 * fVar2;
  local_9c = FUN_0043a860(local_60);
  apuStack_b8[3] = local_30;
  apuStack_b8[2] = (undefined1 *)0x4d4554;
  local_a8 = fVar1;
  local_a4 = fVar3;
  local_a0 = (undefined4 *)fVar2;
  local_a0 = (undefined4 *)FUN_005ab330();
  local_a4 = (float)param_1;
  local_a8 = 7.096227e-39;
  FUN_005ab130();
  return param_1;
}


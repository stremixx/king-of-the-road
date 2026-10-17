
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00511210(double param_1,undefined4 param_2)

{
  byte bVar1;
  float10 fVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined1 *puStack_bc;
  undefined8 local_b8;
  undefined1 auStack_80 [128];
  
  local_b8._0_4_ = (undefined1 *)((int)&local_b8 + 4);
  puStack_bc = (undefined1 *)0x511221;
  FUN_00568670();
  local_b8._0_4_ = (undefined1 *)0x511229;
  fVar10 = (float10)FUN_0043f840();
  local_b8._4_4_ = (undefined1 *)0x511240;
  fVar11 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x54))();
  local_b8._4_4_ = (undefined1 *)0x511260;
  fVar12 = (float10)FUN_004eaf00();
  local_b8._4_4_ = (undefined1 *)0x511281;
  fVar13 = (float10)FUN_004eaf10();
  uVar7 = 0;
  fVar2 = (float10)_DAT_0064b240;
  pbVar8 = &DAT_006757d0;
  pbVar5 = *(byte **)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x134) + 0x3c);
  pbVar3 = pbVar5;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_005112cd:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_005112d2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_005112cd;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_005112d2:
  if (iVar4 != 0) {
    pbVar3 = &DAT_006757cc;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00511301:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00511306;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00511301;
      pbVar5 = pbVar5 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00511306:
    if (iVar4 != 0) goto LAB_0051130f;
  }
  uVar7 = 1;
LAB_0051130f:
  if ((double)fVar10 <= param_1) {
    local_b8._4_4_ = (undefined1 *)0xc;
    local_b8._0_4_ = (undefined1 *)0x51145d;
    local_b8._0_4_ = (undefined1 *)FUN_005d2500();
    puStack_bc = (undefined1 *)0x511463;
    FUN_0056a570();
    local_b8._0_4_ = (undefined1 *)0x511472;
    local_b8._4_4_ = (undefined1 *)uVar7;
    FUN_00532cc0();
  }
  else {
    local_b8._0_4_ = (undefined1 *)0x51132b;
    local_b8._4_4_ = (undefined1 *)uVar7;
    FUN_00532cc0();
    local_b8._4_4_ = (undefined1 *)(float)((float10)(double)fVar11 + (float10)_DAT_0064a5a8);
    local_b8._0_4_ = (undefined1 *)0x511344;
    FUN_0053aaf0();
    local_b8._4_4_ = (undefined1 *)0x511355;
    (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x74))();
    local_b8._4_4_ = (undefined1 *)0x511365;
    (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x78))();
    if (_DAT_0064a798 < (double)(fVar2 - fVar13)) {
      local_b8._4_4_ = (undefined1 *)(float)((float10)(double)fVar12 * (float10)_DAT_0064c0e0);
      local_b8._0_4_ = (undefined1 *)0x5113a0;
      FUN_004eae80();
    }
    local_b8 = (double)fVar10 - param_1;
    FUN_00568670(&puStack_bc);
    FUN_0043f8a0();
    local_b8._0_4_ = (undefined1 *)((int)&local_b8 + 4);
    puStack_bc = (undefined1 *)0x5113d1;
    FUN_00568670();
    local_b8._0_4_ = (undefined1 *)0x5113d9;
    uVar6 = FUN_0043f700();
    if ((uVar6 & 0x2000000) != 0) {
      local_b8._4_4_ = (undefined1 *)0x77;
      local_b8._0_4_ = (undefined1 *)0x5113ea;
      local_b8._0_4_ = (undefined1 *)FUN_005d2500();
      puStack_bc = (undefined1 *)0x5113f0;
      FUN_0056a570();
      puStack_bc = (undefined1 *)0x5113f9;
      local_b8._0_4_ = (undefined1 *)((int)&local_b8 + 4);
      FUN_00568670();
      local_b8._0_4_ = (undefined1 *)0x511401;
      FUN_004773a0();
    }
    local_b8._4_4_ = (undefined1 *)0x511410;
    local_b8._4_4_ = (undefined1 *)__ftol();
    local_b8._0_4_ = (undefined1 *)param_2;
    puStack_bc = (undefined1 *)0x51141e;
    local_b8._0_4_ = (undefined1 *)FUN_005d2500();
    puStack_bc = auStack_80;
    FUN_0061c369();
    if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
      local_b8._4_4_ = auStack_80;
      local_b8._0_4_ = (undefined1 *)0x511448;
      FUN_0056a570();
      return;
    }
  }
  return;
}


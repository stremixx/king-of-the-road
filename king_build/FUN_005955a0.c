
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005955a0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  float local_328;
  float local_324;
  float local_320;
  undefined1 local_31c [4];
  float local_318;
  float local_314;
  float local_30c;
  float local_308;
  undefined4 local_304;
  undefined1 local_300 [48];
  undefined1 local_2d0 [48];
  undefined1 local_2a0 [48];
  undefined1 local_270 [48];
  undefined1 local_240 [48];
  undefined1 local_210 [48];
  undefined1 local_1e0 [48];
  undefined1 local_1b0 [48];
  undefined1 local_180 [48];
  undefined1 local_150 [48];
  undefined1 local_120 [48];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (DAT_006f5870 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x148) = param_2;
  local_304 = FUN_005eec70();
  iVar6 = param_1 + 0x50;
  local_328 = 0.0;
  local_324 = 0.0;
  local_320 = 0.0;
  FUN_005a36c0(iVar6);
  switch(*(undefined4 *)(param_1 + 0x148)) {
  case 0:
    local_30c = DAT_007015a4 * _DAT_0064fa80;
    local_308 = DAT_007015a8 * _DAT_0064fa80;
    local_318 = DAT_00701584 * _DAT_0064b2f4 + local_30c;
    local_314 = DAT_00701588 * _DAT_0064b2f4 + local_308;
    puVar5 = (undefined4 *)
             FUN_005ab330(local_1e0,
                          DAT_007015a0 * _DAT_0064fa80 + DAT_00701580 * _DAT_0064b2f4 + DAT_00701590
                          ,local_318 + DAT_00701594,local_314 + DAT_00701598);
    puVar4 = (undefined4 *)(param_1 + 0x80);
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar5 = (undefined4 *)FUN_005ab130(local_2a0,param_1 + 0x80,iVar6);
    puVar4 = (undefined4 *)(param_1 + 0x20);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    break;
  case 1:
    pfVar3 = (float *)FUN_00594500(local_31c,DAT_006f5870,0xffffffff);
    local_328 = *pfVar3;
    local_324 = pfVar3[1];
    local_320 = pfVar3[2];
    puVar5 = (undefined4 *)
             FUN_005ab330(local_c0,local_328 + (float)_DAT_0064b948,local_324 + (float)_DAT_0064a660
                          ,local_320);
    fVar1 = (float)_DAT_0064b948;
    fVar2 = (float)_DAT_0064a650;
    puVar4 = (undefined4 *)(param_1 + 0x80);
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar5 = (undefined4 *)
             FUN_005ab330(local_240,local_328 - fVar1,local_324 - fVar2,
                          local_320 + (float)_DAT_0064a650);
    puVar4 = (undefined4 *)(param_1 + 0xb0);
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar5 = (undefined4 *)FUN_005ab130(local_120,param_1 + 0xb0,iVar6);
    puVar4 = (undefined4 *)(param_1 + 0x20);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    break;
  case 2:
    puVar4 = (undefined4 *)FUN_005960d0(local_300);
    puVar5 = (undefined4 *)(param_1 + 0x10c);
    goto LAB_00595931;
  case 3:
    uVar7 = FUN_005ab330(local_150,DAT_00701590 * _DAT_0064b3f8,DAT_00701594 * _DAT_0064b3f8,
                         DAT_00701598 * _DAT_0064b3f8,iVar6);
    puVar5 = (undefined4 *)FUN_005ab130(local_f0,uVar7);
    puVar4 = puVar5;
    puVar9 = (undefined4 *)(param_1 + 0x20);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar4 = (undefined4 *)(param_1 + 0x80);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x7c);
    break;
  case 4:
    uVar7 = FUN_005ab330(local_90,DAT_00701590 * _DAT_0064b3f8,DAT_00701594 * _DAT_0064b3f8,
                         DAT_00701598 * _DAT_0064b3f8,iVar6);
    puVar5 = (undefined4 *)FUN_005ab130(local_30,uVar7);
    puVar4 = puVar5;
    puVar9 = (undefined4 *)(param_1 + 0x20);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar4 = (undefined4 *)(param_1 + 0x80);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x7c);
    break;
  case 5:
    local_318 = DAT_00701584 * _DAT_0064b31c;
    local_314 = DAT_00701588 * _DAT_0064b31c;
    local_30c = DAT_00701594 * _DAT_0064fa7c;
    local_308 = DAT_00701598 * _DAT_0064fa7c;
    uVar7 = FUN_005ab330(local_60,DAT_00701590 * _DAT_0064fa7c + DAT_00701580 * _DAT_0064b31c,
                         local_318 + local_30c,local_314 + local_308,iVar6);
    uVar7 = FUN_005ab7d0(local_180,0x40490fda,uVar7);
    uVar7 = FUN_005ab5d0(local_2d0,0x3ec90fda,uVar7);
    uVar7 = FUN_005ab130(local_270,uVar7);
    uVar7 = FUN_005ab130(local_210,uVar7);
    puVar4 = (undefined4 *)FUN_005ab130(local_1b0,uVar7);
    puVar5 = (undefined4 *)(param_1 + 0x80);
LAB_00595931:
    puVar9 = puVar4;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar5 = (undefined4 *)(param_1 + 0x20);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  local_328 = *(float *)(param_1 + 0x44);
  local_324 = *(float *)(param_1 + 0x48);
  local_320 = *(float *)(param_1 + 0x4c);
  if (DAT_006f5870 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = DAT_006f5870 + 0x10;
  }
  uVar7 = FUN_00594570(4,iVar6,local_304,*(undefined4 *)(param_1 + 0x74),
                       *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),&local_328);
  *(float *)(param_1 + 0x44) = local_328;
  *(float *)(param_1 + 0x48) = local_324;
  *(float *)(param_1 + 0x4c) = local_320;
  FUN_00595f40(uVar7,param_1 + 0x20);
  return;
}


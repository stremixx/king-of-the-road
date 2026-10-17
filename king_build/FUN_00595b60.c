
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00595b60(int param_1,undefined4 param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float local_19c;
  float local_198;
  float local_194;
  undefined4 local_190;
  undefined1 local_18c [12];
  undefined1 local_180 [48];
  undefined1 local_150 [48];
  undefined1 local_120 [48];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (DAT_006f5870 != 0) {
    *(undefined4 *)(param_1 + 0x148) = param_2;
    local_190 = FUN_005eec70();
    iVar3 = param_1 + 0x50;
    local_19c = 0.0;
    local_198 = 0.0;
    local_194 = 0.0;
    FUN_005a36c0(iVar3);
    switch(*(undefined4 *)(param_1 + 0x148)) {
    case 0:
      puVar2 = (undefined4 *)&stack0x00000008;
      puVar6 = (undefined4 *)(param_1 + 0x80);
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar2 = (undefined4 *)FUN_005ab130(local_120,(undefined4 *)(param_1 + 0x80),iVar3);
      puVar6 = (undefined4 *)(param_1 + 0x20);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      break;
    case 1:
      puVar2 = (undefined4 *)&stack0x00000008;
      puVar6 = (undefined4 *)(param_1 + 0x80);
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      pfVar1 = (float *)FUN_00594500(local_18c,DAT_006f5870,0xffffffff);
      local_19c = *pfVar1;
      local_198 = pfVar1[1];
      local_194 = pfVar1[2];
      puVar2 = (undefined4 *)
               FUN_005ab330(local_180,local_19c - (float)_DAT_0064b948,
                            local_198 - (float)_DAT_0064a650,local_194 + (float)_DAT_0064a650);
      puVar6 = (undefined4 *)(param_1 + 0xb0);
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar2 = (undefined4 *)FUN_005ab130(local_60,param_1 + 0xb0,iVar3);
      puVar6 = (undefined4 *)(param_1 + 0x20);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      break;
    case 2:
      puVar2 = (undefined4 *)FUN_005960d0(local_c0);
      puVar6 = puVar2;
      puVar7 = (undefined4 *)(param_1 + 0x10c);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = (undefined4 *)(param_1 + 0x20);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      break;
    case 3:
      uVar4 = FUN_005ab330(local_150,DAT_00701590 * _DAT_0064b3f8,DAT_00701594 * _DAT_0064b3f8,
                           DAT_00701598 * _DAT_0064b3f8,iVar3);
      puVar2 = (undefined4 *)FUN_005ab130(local_f0,uVar4);
      puVar6 = puVar2;
      puVar7 = (undefined4 *)(param_1 + 0x20);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = (undefined4 *)(param_1 + 0x80);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
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
      uVar4 = FUN_005ab330(local_90,DAT_00701590 * _DAT_0064b3f8,DAT_00701594 * _DAT_0064b3f8,
                           DAT_00701598 * _DAT_0064b3f8,iVar3);
      puVar2 = (undefined4 *)FUN_005ab130(local_30,uVar4);
      puVar6 = puVar2;
      puVar7 = (undefined4 *)(param_1 + 0x20);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = (undefined4 *)(param_1 + 0x80);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
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
      puVar2 = (undefined4 *)&stack0x00000008;
      puVar6 = (undefined4 *)(param_1 + 0x80);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar2 = (undefined4 *)&stack0x00000008;
      puVar6 = (undefined4 *)(param_1 + 0x20);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    local_19c = *(float *)(param_1 + 0x44);
    local_198 = *(float *)(param_1 + 0x48);
    local_194 = *(float *)(param_1 + 0x4c);
    if (DAT_006f5870 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_006f5870 + 0x10;
    }
    uVar4 = FUN_00594570(4,iVar3,local_190,*(undefined4 *)(param_1 + 0x74),
                         *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),&local_19c)
    ;
    *(float *)(param_1 + 0x44) = local_19c;
    *(float *)(param_1 + 0x48) = local_198;
    *(float *)(param_1 + 0x4c) = local_194;
    FUN_00595f40(uVar4,param_1 + 0x20);
  }
  return;
}


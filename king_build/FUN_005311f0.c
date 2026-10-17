
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005311f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_70;
  undefined1 local_64 [100];
  
  iVar1 = *(int *)(param_2 + 0x28b4);
  iVar5 = 0;
  iVar4 = iVar1 * 0x5d0;
  iVar3 = *(int *)(&DAT_006d137c + iVar4);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
    *(undefined4 *)(param_1 + 0x440) = 0;
    *(undefined4 *)(param_1 + 0x444) = 0;
  }
  else {
    uVar2 = FUN_005ee8e0(iVar3,s_GearKey_00671e74);
    *(undefined4 *)(param_1 + 0x434) = uVar2;
    uVar2 = FUN_005ee8e0(iVar3,s_AvtoKey_00671e6c);
    *(undefined4 *)(param_1 + 0x438) = uVar2;
    uVar2 = FUN_005ee8e0(iVar3,s_ParkKey_00671e64);
    *(undefined4 *)(param_1 + 0x43c) = uVar2;
    uVar2 = FUN_005ee8e0(iVar3,s_FuelLampKey_00671e58);
    *(undefined4 *)(param_1 + 0x440) = uVar2;
    uVar2 = FUN_005ee8e0(iVar3,s_TrailerKey_006778e0);
    *(undefined4 *)(param_1 + 0x444) = uVar2;
  }
  local_70 = (undefined4 *)(param_1 + 0x448);
  do {
    FUN_0061c369(local_64,s_KMeter_dKey_00671e4c,iVar5);
    uVar2 = FUN_005ee8e0(iVar3,local_64);
    iVar5 = iVar5 + 1;
    *local_70 = uVar2;
    local_70 = local_70 + 1;
  } while (iVar5 < 5);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(&DAT_006d1380 + iVar4);
  puVar6 = (undefined4 *)(&DAT_006d138c + iVar4);
  puVar7 = (undefined4 *)(param_1 + 0x45c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(&DAT_006d1384 + iVar4);
  puVar6 = (undefined4 *)(&DAT_006d13bc + iVar4);
  puVar7 = (undefined4 *)(param_1 + 0x48c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x4f4) = (&DAT_00696fd0)[iVar1 * 0x25c];
  *(undefined4 *)(param_1 + 0x4ec) = (&DAT_00696fd8)[iVar1 * 0x25c];
  *(undefined4 *)(param_1 + 0x4f8) = (&DAT_00696fd4)[iVar1 * 0x25c];
  *(undefined4 *)(param_1 + 0x4f0) = (&DAT_00696fdc)[iVar1 * 0x25c];
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(&DAT_006d1388 + iVar4);
  puVar6 = (undefined4 *)(&DAT_006d13ec + iVar4);
  puVar7 = (undefined4 *)(param_1 + 0x4bc);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x4fc) = (&DAT_00696fe0)[iVar1 * 0x25c];
  FUN_004dddd0(param_2);
  *(undefined4 *)(param_1 + 0x500) = (&DAT_00696ffc)[iVar1 * 0x25c];
  *(undefined4 *)(param_1 + 0x504) = (&DAT_00697000)[iVar1 * 0x25c];
  *(undefined4 *)(param_1 + 0x508) = (&DAT_00697004)[iVar1 * 0x25c];
  *(undefined4 *)(param_1 + 0x50c) = (&DAT_00697008)[iVar1 * 0x25c];
  _DAT_006d0d14 = 0;
  return;
}


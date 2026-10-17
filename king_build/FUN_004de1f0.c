
void __thiscall FUN_004de1f0(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_64 [100];
  
  *(int *)(param_1 + 0x12d4) = param_2;
  puVar2 = (undefined4 *)(param_1 + 0x1130);
  iVar6 = 0x50;
  puVar5 = (undefined4 *)(param_1 + 0x230);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar6 = iVar6 + -1;
    puVar7 = &DAT_00701550;
    puVar8 = puVar5;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = puVar5 + 0xc;
  } while (iVar6 != 0);
  *(undefined4 *)(param_1 + 0x1270) = 0;
  FUN_005d95a0(*(undefined4 *)(param_2 + 0x1d4));
  pfVar1 = (float *)(param_1 + 0x13e4);
  FUN_00507580(&DAT_00671eb8,s_Driver_Seat_00671ebc,&DAT_007015b0,pfVar1,s___truck_ini_00671ec8);
  *pfVar1 = -*pfVar1;
  *(float *)(param_1 + 0x13e8) = -*(float *)(param_1 + 0x13e8);
  *(float *)(param_1 + 0x13ec) = -*(float *)(param_1 + 0x13ec);
  *(undefined4 *)(DAT_00695c0c + 0x58) = 0x3fcccccd;
  *(undefined4 *)(DAT_00695c0c + 0x54) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x13d8) = 0;
  *(undefined4 *)(param_1 + 0x1300) = 0;
  *(undefined4 *)(param_1 + 0x12fc) = 0;
  uVar3 = FUN_005ee8e0(0,s_Panel_00671eb0);
  *(undefined4 *)(param_1 + 0x1304) = uVar3;
  uVar3 = FUN_005ee8e0(0,s_PanelSpace_00671ea4);
  *(undefined4 *)(param_1 + 0x1308) = uVar3;
  uVar3 = FUN_005ee8e0(0,s_TachoSpace_00671e98);
  *(undefined4 *)(param_1 + 0x130c) = uVar3;
  uVar3 = FUN_005ee8e0(0,s_SpeedSpace_00671e8c);
  *(undefined4 *)(param_1 + 0x1310) = uVar3;
  uVar3 = FUN_005ee8e0(0,s_FuelArrowSpace_00671e7c);
  *(undefined4 *)(param_1 + 0x1314) = uVar3;
  uVar3 = FUN_005ee8e0(*(undefined4 *)(param_1 + 0x1304),s_GearKey_00671e74);
  *(undefined4 *)(param_1 + 0x1318) = uVar3;
  uVar3 = FUN_005ee8e0(*(undefined4 *)(param_1 + 0x1304),s_AvtoKey_00671e6c);
  *(undefined4 *)(param_1 + 0x131c) = uVar3;
  uVar3 = FUN_005ee8e0(*(undefined4 *)(param_1 + 0x1304),s_ParkKey_00671e64);
  *(undefined4 *)(param_1 + 0x1320) = uVar3;
  uVar3 = FUN_005ee8e0(*(undefined4 *)(param_1 + 0x1304),s_FuelLampKey_00671e58);
  *(undefined4 *)(param_1 + 0x1324) = uVar3;
  iVar6 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1328);
  do {
    FUN_0061c369(local_64,s_KMeter_dKey_00671e4c,iVar6);
    uVar3 = FUN_005ee8e0(*(undefined4 *)(param_1 + 0x1304),local_64);
    *puVar2 = uVar3;
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar6 < 5);
  if (*(int *)(param_1 + 0x130c) == 0) {
    puVar2 = &DAT_00701550;
    puVar5 = (undefined4 *)(param_1 + 0x133c);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    FUN_004e420a(*(int *)(param_1 + 0x130c),param_1 + 0x133c);
  }
  if (*(int *)(param_1 + 0x1310) == 0) {
    puVar2 = &DAT_00701550;
    puVar5 = (undefined4 *)(param_1 + 0x136c);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    FUN_004e420a(*(int *)(param_1 + 0x1310),param_1 + 0x136c);
  }
  if (*(int *)(param_1 + 0x1314) == 0) {
    puVar2 = &DAT_00701550;
    puVar5 = (undefined4 *)(param_1 + 0x139c);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    FUN_004e420a(*(int *)(param_1 + 0x1314),param_1 + 0x139c);
  }
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x13d4) = 0x3d20d97c;
  *(undefined4 *)(param_1 + 0x13cc) = 0x3dc104fb;
  *(undefined4 *)(param_1 + 0x13d0) = 0x4016cbe4;
  return;
}


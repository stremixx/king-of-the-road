
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dfe20(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 local_1fc;
  byte local_1f8 [300];
  CHAR local_cc [204];
  
  iVar2 = FUN_0061c356(s___truck_ini_00671ec8,&DAT_00670518);
  if (iVar2 == 0) {
    GetCurrentDirectoryA(200,local_cc);
    FUN_0061c369(local_1f8,s___s__was_not_found_in__s_006720ac,s___truck_ini_00671ec8,local_cc);
    FUN_004e1e9c(local_1f8);
  }
  FUN_0061c25a(iVar2);
  GetPrivateProfileStringA
            (&DAT_006720a0,s_prn_joy_006720a4,&DAT_006719a8,(LPSTR)local_1f8,0x10,
             s___truck_ini_00671ec8);
  pbVar4 = &DAT_00671994;
  pbVar3 = local_1f8;
  do {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004dfeda:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004dfedf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004dfeda;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_004dfedf:
  DAT_00695bd4 = (uint)(iVar2 == 0);
  GetPrivateProfileStringA
            (&DAT_006720a0,s_prn_slave_00672094,&DAT_006719a8,(LPSTR)local_1f8,0x10,
             s___truck_ini_00671ec8);
  pbVar4 = &DAT_00671994;
  pbVar3 = local_1f8;
  do {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004dff3a:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004dff3f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004dff3a;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_004dff3f:
  DAT_00695bcc = (uint)(iVar2 == 0);
  GetPrivateProfileStringA
            (&DAT_006720a0,s_prn_dynamics_00672084,&DAT_006719a8,(LPSTR)local_1f8,0x10,
             s___truck_ini_00671ec8);
  pbVar4 = &DAT_00671994;
  pbVar3 = local_1f8;
  do {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004dff9a:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004dff9f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004dff9a;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_004dff9f:
  DAT_00695bd0 = (uint)(iVar2 == 0);
  GetPrivateProfileStringA
            (&DAT_006720a0,s_prn_time_statistics_00672070,&DAT_006719a8,(LPSTR)local_1f8,0x10,
             s___truck_ini_00671ec8);
  pbVar4 = &DAT_00671994;
  pbVar3 = local_1f8;
  do {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004dfffa:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004dffff;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004dfffa;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_004dffff:
  DAT_00671d80 = (uint)(iVar2 == 0);
  FUN_00603230(&DAT_006720a0,s_joydeadzone_00672064,0xffffffff,&local_1fc,s___truck_ini_00671ec8);
  DAT_00695bb8 = local_1fc;
  FUN_004df8b0();
  DAT_006cd2cc = FUN_004e1e9c;
  _DAT_006967b8 = FUN_004e1e9c;
  DAT_006967c0 = FUN_00507880();
  if ((DAT_006967c0 != 0) && (DAT_006967c0 = FUN_00509e20(), DAT_006967c0 != 0)) {
    return;
  }
  FUN_00507b80(&DAT_00695b28,1);
  FUN_005067d0();
  FUN_00509fc0(&DAT_00695b28,1);
  return;
}


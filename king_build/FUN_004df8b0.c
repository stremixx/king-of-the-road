
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df8b0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_50 [80];
  
  GetPrivateProfileStringA
            (&DAT_00671eb8,s_tch_file_00672050,s_________0067205c,(LPSTR)local_50,0x46,
             s___truck_ini_00671ec8);
  pcVar4 = s_________0067205c;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_004df90a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004df90f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_004df90a;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004df90f:
  if (iVar3 == 0) {
    FUN_004e1e9c(s_There_is_NO_appointed_tch_file_i_00672024);
  }
  FUN_0061c369(&DAT_00695b28,&DAT_0067201c,local_50);
  GetPrivateProfileStringA
            (&DAT_00671eb8,s_f5f6f7_00672014,&DAT_006719a8,(LPSTR)local_50,0x10,
             s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004df985:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004df98a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004df985;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004df98a:
  DAT_00695ba0 = (uint)(iVar3 == 0);
  _DAT_00695b3c = 0x3fb33333;
  DAT_00695b40 = 0x3f000000;
  DAT_00695b3a = 1;
  GetPrivateProfileStringA
            (&DAT_00671eb8,s_bolvan_show_00672008,&DAT_006719a8,(LPSTR)local_50,0x10,
             s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfa02:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfa07;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfa02;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfa07:
  DAT_00695b44 = (uint)(iVar3 == 0);
  GetPrivateProfileStringA
            (&DAT_00671eb8,s_trace_road_00671ffc,&DAT_006719a8,(LPSTR)local_50,0x10,
             s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfa62:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfa67;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfa62;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfa67:
  DAT_00695b48 = (uint)(iVar3 == 0);
  GetPrivateProfileStringA
            (&DAT_00671eb8,s_trace_veh_00671ff0,&DAT_006719a8,(LPSTR)local_50,0x10,
             s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfac2:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfac7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfac2;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfac7:
  DAT_00695b4c = (uint)(iVar3 == 0);
  FUN_00507820(&DAT_00671eb8,s_maskXview0_00671fe4,0,&DAT_00695b50,s___truck_ini_00671ec8,5);
  FUN_00507820(&DAT_00671eb8,s_maskYview0_00671fd8,10,&DAT_00695b64,s___truck_ini_00671ec8,5);
  FUN_00507820(&DAT_00671eb8,s_maskYview1_00671fcc,0x17c,&DAT_00695b78,s___truck_ini_00671ec8,5);
  FUN_00507820(&DAT_00671eb8,s_maskYtile_00671fc0,0x1ae,&DAT_00695b8c,s___truck_ini_00671ec8,5);
  _DAT_00695ba4 = 0x3fc00000;
  GetPrivateProfileStringA
            (&DAT_00671eb8,&DAT_00671fb8,&DAT_00671994,(LPSTR)local_50,0x10,s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfbac:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfbb1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfbac;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfbb1:
  DAT_00695bb4 = (uint)(iVar3 == 0);
  GetPrivateProfileStringA
            (&DAT_00671eb8,&DAT_00671fb0,&DAT_006719a8,(LPSTR)local_50,0x10,s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfc0c:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfc11;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfc0c;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfc11:
  _DAT_00695ba8 = (uint)(iVar3 == 0);
  GetPrivateProfileStringA
            (&DAT_00671eb8,&DAT_00671fa8,&DAT_006719a8,(LPSTR)local_50,0x10,s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfc6c:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfc71;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfc6c;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfc71:
  DAT_00695bac = (uint)(iVar3 == 0);
  GetPrivateProfileStringA
            (&DAT_00671eb8,&DAT_00671fa0,&DAT_006719a8,(LPSTR)local_50,0x10,s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfccc:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfcd1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfccc;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfcd1:
  _DAT_00695bb0 = (uint)(iVar3 == 0);
  GetPrivateProfileStringA
            (&DAT_00671eb8,s_helicopters_00671f94,&DAT_00671994,(LPSTR)local_50,0x10,
             s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfd2c:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfd31;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfd2c;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfd31:
  DAT_00695bbc = (uint)(iVar3 == 0);
  GetPrivateProfileStringA
            (&DAT_00671eb8,s_turnHead_00671f88,&DAT_006719a8,(LPSTR)local_50,0x10,
             s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004dfd8c:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004dfd91;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004dfd8c;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004dfd91:
  DAT_00695bc0 = (uint)(iVar3 == 0);
  GetPrivateProfileStringA
            (&DAT_00671eb8,s_show_guilty_00671f7c,&DAT_006719a8,(LPSTR)local_50,0x10,
             s___truck_ini_00671ec8);
  pbVar5 = &DAT_00671994;
  pbVar2 = local_50;
  while( true ) {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) break;
    if (bVar1 == 0) {
      DAT_00695bc4 = 1;
      return;
    }
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) {
      DAT_00695bc4 = 1;
      return;
    }
  }
  DAT_00695bc4 = (uint)(1 - bVar6 == (uint)(bVar6 != 0));
  return;
}


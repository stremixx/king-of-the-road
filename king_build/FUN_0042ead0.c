
void FUN_0042ead0(void)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  int *piStack_fc;
  int **ppiStack_f8;
  int **ppiStack_f4;
  int *piStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  int *local_d0 [2];
  uint local_c8;
  undefined1 *puStack_c4;
  int *apiStack_c0 [2];
  int **ppiStack_b8;
  undefined4 local_b4;
  undefined1 *puStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  int *local_a0;
  char local_9c [4];
  char local_98 [4];
  char local_94 [4];
  int *apiStack_90 [2];
  uint uStack_88;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 local_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d360;
  pvStack_c = ExceptionList;
  ppiStack_f4 = (int **)DAT_0068bf3c;
  ppiStack_f8 = (int **)DAT_0068bf38;
  piStack_fc = (int *)0x42eb05;
  ExceptionList = &pvStack_c;
  FUN_0044a6a0();
  local_a0 = (int *)s_evehicles_sch_0066ce68._0_4_;
  local_9c[0] = s_evehicles_sch_0066ce68[4];
  local_9c[1] = s_evehicles_sch_0066ce68[5];
  local_9c[2] = s_evehicles_sch_0066ce68[6];
  local_9c[3] = s_evehicles_sch_0066ce68[7];
  local_98[0] = s_evehicles_sch_0066ce68[8];
  local_98[1] = s_evehicles_sch_0066ce68[9];
  local_98[2] = s_evehicles_sch_0066ce68[10];
  local_98[3] = s_evehicles_sch_0066ce68[0xb];
  ppiStack_f4 = (int **)&local_b4;
  ppiStack_f8 = &local_a0;
  local_94[0] = s_evehicles_sch_0066ce68[0xc];
  local_94[1] = s_evehicles_sch_0066ce68[0xd];
  piStack_fc = (int *)0x0;
  local_b4 = 1;
  piVar3 = (int *)FUN_004573a0(local_24);
  local_4 = 0;
  ppiStack_f4 = (int **)0x42eb65;
  FUN_004042a0();
  local_4._0_1_ = 1;
  if ((undefined4 *)*piVar3 == (undefined4 *)0x0) {
    local_d0[0] = (int *)0x0;
    local_c8 = 0;
  }
  else {
    ppiStack_f4 = (int **)0x42eb77;
    iVar4 = (*(code *)**(undefined4 **)*piVar3)();
    if (iVar4 == 0xb) {
      local_d0[0] = (int *)*piVar3;
      local_c8 = piVar3[2];
      local_d0[0][1] = local_d0[0][1] + 1;
    }
    else {
      ppiStack_f4 = (int **)&DAT_0066bb28;
      ppiStack_f8 = (int **)0x42eb88;
      ppiStack_f8 = (int **)(**(code **)(*(int *)*piVar3 + 4))();
      piStack_fc = (int *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  ppiStack_f4 = (int **)0x42ebc9;
  FUN_00492340();
  if (local_d0[0] == (int *)0x0) {
    ppiStack_f4 = (int **)0x1;
    ppiStack_f8 = (int **)0x0;
    piStack_fc = (int *)0x42ebd7;
    FUN_004a5470();
  }
  if ((local_c8 & 0x10000) != 0) {
    ppiStack_f4 = (int **)0x1;
    ppiStack_f8 = (int **)0x4;
    piStack_fc = (int *)0x42ebed;
    FUN_004a5470();
  }
  ppiStack_f4 = (int **)0x42ebf9;
  iVar4 = (**(code **)(*local_d0[0] + 0x28))();
  if (iVar4 != 0) {
    ppiStack_f8 = &local_a0;
    ppiStack_f4 = (int **)&DAT_0068c120;
    piStack_fc = (int *)s_Cannot_open_0066bb1c;
    FUN_00401010(0x17,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2fb9);
  }
  puStack_c4 = (undefined1 *)&piStack_fc;
  FUN_00455dc0(local_d0);
  FUN_004b4cb0(&piStack_ac,&DAT_0068aab8);
  if ((uStack_a4 & 0x10000) == 0) {
    uStack_dc = 0;
    if (piStack_ac == (int *)0x0) {
      piStack_e0 = (int *)0x0;
      uStack_d8 = 0;
    }
    else {
      piStack_e0 = piStack_ac;
      uStack_d8 = uStack_a4;
      piStack_ac[1] = piStack_ac[1] + 1;
    }
  }
  else {
    uStack_d8 = uStack_a4;
    uStack_dc = uStack_a8;
    piStack_e0 = piStack_ac;
  }
  do {
    if ((char)uStack_d8 != '\x02') {
      local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
      local_4._0_1_ = 4;
      ppiStack_f4 = (int **)0x42f08b;
      FUN_00492340();
      local_4 = CONCAT31(local_4._1_3_,3);
      ppiStack_f4 = (int **)0x42f09c;
      FUN_00492340();
      local_4 = 0xffffffff;
      ppiStack_f4 = (int **)0x42f0b0;
      FUN_00492340();
      ExceptionList = pvStack_c;
      return;
    }
    ppiStack_f4 = &piStack_e0;
    ppiStack_f8 = apiStack_c0;
    piStack_fc = (int *)0x42eca9;
    FUN_00407e60();
    local_4._0_1_ = 7;
    if ((char)ppiStack_b8 != '\x02') {
      ppiStack_f4 = (int **)&DAT_0068c120;
      ppiStack_f8 = (int **)&DAT_0068c120;
      piStack_fc = (int *)s_Incorrect_resource_format_0066ce4c;
      FUN_00401010(0x2d,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2fc5);
    }
    puStack_b0 = (undefined1 *)&piStack_fc;
    FUN_004042a0();
    local_4._0_1_ = 8;
    if (apiStack_c0[0] == (int *)0x0) {
      piStack_fc = (int *)0x0;
      ppiStack_f4 = (int **)0x0;
    }
    else {
      iVar4 = (**(code **)*apiStack_c0[0])();
      if (iVar4 == 2) {
        piStack_fc = apiStack_c0[0];
        ppiStack_f4 = ppiStack_b8;
        apiStack_c0[0][1] = apiStack_c0[0][1] + 1;
      }
      else {
        uVar5 = (**(code **)(*apiStack_c0[0] + 4))(&DAT_0066bb08);
        FUN_004a5670(2,1,uVar5);
      }
    }
    local_4._0_1_ = 7;
    iVar4 = FUN_0042e0d0();
    uVar5 = FUN_00409000(auStack_6c,apiStack_c0);
    uVar5 = FUN_00409000(auStack_54,uVar5);
    ppiStack_f4 = (int **)FUN_00407e60(auStack_18,uVar5);
    local_4._0_1_ = 0xb;
    ppiStack_f8 = (int **)0x42ed9b;
    FUN_004556d0();
    local_4._0_1_ = 0xf;
    ppiStack_f4 = (int **)0x42edaf;
    FUN_00492340();
    local_4._0_1_ = 0xe;
    ppiStack_f4 = (int **)0x42edc3;
    FUN_00492340();
    local_4 = CONCAT31(local_4._1_3_,0xd);
    ppiStack_f4 = (int **)0x42edd7;
    FUN_00492340();
    iStack_d4 = 0;
    if (0 < DAT_006cd28c) {
      do {
        ppiStack_f4 = (int **)0x42edf3;
        iVar6 = FUN_004b8250();
        pbVar9 = *(byte **)(iVar6 + 0xc);
        pbVar8 = &DAT_006970ee + iStack_d4 * 0x970;
        do {
          bVar1 = *pbVar9;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0042ee35:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0042ee3a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0042ee35;
          pbVar9 = pbVar9 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_0042ee3a:
        if (iVar6 == 0) {
          ppiStack_f4 = apiStack_c0;
          ppiStack_f8 = (int **)auStack_48;
          piStack_fc = (int *)0x42ee63;
          piStack_fc = (int *)FUN_00409000();
          uVar5 = FUN_00409000(auStack_60);
          ppiStack_f4 = (int **)FUN_00409000(auStack_3c,uVar5);
          local_4._0_1_ = 0x12;
          ppiStack_f8 = (int **)0x42ee94;
          FUN_0044ca50();
          local_4._0_1_ = 0x16;
          ppiStack_f4 = (int **)0x42eea8;
          FUN_00492340();
          local_4._0_1_ = 0x15;
          ppiStack_f4 = (int **)0x42eebc;
          FUN_00492340();
          local_4._0_1_ = 0x14;
          ppiStack_f4 = (int **)0x42eed0;
          FUN_00492340();
          ppiStack_f4 = (int **)&iStack_d4;
          ppiStack_f8 = (int **)&puStack_c4;
          piStack_fc = (int *)0x0;
          puStack_c4 = (undefined1 *)0x0;
          ppiStack_f4 = (int **)FUN_00457490(auStack_30);
          local_4._0_1_ = 0x17;
          ppiStack_f8 = (int **)0x42ef01;
          FUN_004b8250();
          ppiStack_f8 = (int **)0x42ef0b;
          FUN_0040c060();
          local_4._0_1_ = 0x14;
          ppiStack_f4 = (int **)0x42ef1f;
          FUN_00492340();
          local_4 = CONCAT31(local_4._1_3_,0xd);
          *(int *)(iVar4 + 0x40) = iStack_d4;
          ppiStack_f4 = (int **)0x42ef37;
          FUN_00492340();
          break;
        }
        iStack_d4 = iStack_d4 + 1;
      } while (iStack_d4 < DAT_006cd28c);
    }
    if (iStack_d4 == DAT_006cd28c) {
      ppiStack_f4 = (int **)0x42ef4c;
      iVar4 = FUN_004b8250();
      ppiStack_f8 = *(int ***)(iVar4 + 0xc);
      ppiStack_f4 = (int **)&DAT_0068c120;
      piStack_fc = (int *)s_No_such_vehicle_in_tech_file__0066ce2c;
      FUN_00401010(0x2b,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2fd7);
    }
    local_4._0_1_ = 7;
    ppiStack_f4 = (int **)0x42ef86;
    FUN_00492340();
    local_4._0_1_ = 5;
    ppiStack_f4 = (int **)0x42ef97;
    FUN_00492340();
    ppiStack_f4 = &piStack_e0;
    ppiStack_f8 = apiStack_90;
    piStack_fc = (int *)0x42efa6;
    puVar7 = (undefined4 *)FUN_00409000();
    local_4._0_1_ = 6;
    if (((piStack_e0 != (int *)0x0) && ((uStack_d8 & 0x10000) == 0)) &&
       (piStack_e0[1] = piStack_e0[1] + -1, piStack_e0[1] == 0)) {
      ppiStack_f8 = &piStack_e0;
      piStack_fc = (int *)0x42efe0;
      ppiStack_f4 = (int **)puVar7;
      cVar2 = FUN_00408fd0();
      if ((cVar2 == '\0') && (piStack_e0 != (int *)0x0)) {
        ppiStack_f4 = (int **)0x1;
        ppiStack_f8 = (int **)0x42eff6;
        (**(code **)(*piStack_e0 + 0xc))();
      }
    }
    uStack_d8 = puVar7[2];
    if ((uStack_d8 & 0x10000) == 0) {
      uStack_dc = 0;
      piStack_e0 = (int *)*puVar7;
      if (piStack_e0 == (int *)0x0) {
        piStack_e0 = (int *)0x0;
        uStack_d8 = 0;
      }
      else {
        uStack_d8 = puVar7[2];
        piStack_e0[1] = piStack_e0[1] + 1;
      }
    }
    else {
      piStack_e0 = (int *)*puVar7;
      uStack_dc = puVar7[1];
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    if ((((uStack_88 & 0x10000) == 0) && (apiStack_90[0] != (int *)0x0)) &&
       ((apiStack_90[0][1] = apiStack_90[0][1] + -1, apiStack_90[0][1] == 0 &&
        (apiStack_90[0] != (int *)0x0)))) {
      ppiStack_f4 = (int **)0x1;
      ppiStack_f8 = (int **)0x42f06f;
      (**(code **)(*apiStack_90[0] + 0xc))();
    }
  } while( true );
}


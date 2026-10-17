
void FUN_0042f5a0(void)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
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
  undefined1 *puStack_b4;
  undefined4 local_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  int *apiStack_a0 [2];
  uint uStack_98;
  int *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined *local_7c;
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
  puStack_8 = &LAB_0063d4a0;
  pvStack_c = ExceptionList;
  ppiStack_f4 = (int **)DAT_0068c01c;
  ppiStack_f8 = (int **)DAT_0068c018;
  piStack_fc = (int *)0x42f5d5;
  ExceptionList = &pvStack_c;
  FUN_0044a6a0();
  local_88 = DAT_0066ceb8;
  local_84 = DAT_0066cebc;
  local_80 = DAT_0066cec0;
  ppiStack_f4 = (int **)&local_b0;
  ppiStack_f8 = &local_88;
  local_7c = PTR_DAT_0066cec4;
  piStack_fc = (int *)0x0;
  local_b0 = 1;
  piVar3 = (int *)FUN_004558c0(local_24);
  local_4 = 0;
  ppiStack_f4 = (int **)0x42f633;
  FUN_004042a0();
  local_4._0_1_ = 1;
  if ((undefined4 *)*piVar3 == (undefined4 *)0x0) {
    local_d0[0] = (int *)0x0;
    local_c8 = 0;
  }
  else {
    ppiStack_f4 = (int **)0x42f645;
    iVar4 = (*(code *)**(undefined4 **)*piVar3)();
    if (iVar4 == 0xb) {
      local_d0[0] = (int *)*piVar3;
      local_c8 = piVar3[2];
      local_d0[0][1] = local_d0[0][1] + 1;
    }
    else {
      ppiStack_f4 = (int **)&DAT_0066bb28;
      ppiStack_f8 = (int **)0x42f656;
      ppiStack_f8 = (int **)(**(code **)(*(int *)*piVar3 + 4))();
      piStack_fc = (int *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  ppiStack_f4 = (int **)0x42f697;
  FUN_00492340();
  if (local_d0[0] == (int *)0x0) {
    ppiStack_f4 = (int **)0x1;
    ppiStack_f8 = (int **)0x0;
    piStack_fc = (int *)0x42f6a5;
    FUN_004a5470();
  }
  if ((local_c8 & 0x10000) != 0) {
    ppiStack_f4 = (int **)0x1;
    ppiStack_f8 = (int **)0x4;
    piStack_fc = (int *)0x42f6bb;
    FUN_004a5470();
  }
  ppiStack_f4 = (int **)0x42f6c7;
  iVar4 = (**(code **)(*local_d0[0] + 0x28))();
  if (iVar4 == 0) {
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
      piStack_e0 = piStack_ac;
      uStack_dc = uStack_a8;
    }
    while ((char)uStack_d8 == '\x02') {
      ppiStack_f4 = &piStack_e0;
      ppiStack_f8 = apiStack_c0;
      piStack_fc = (int *)0x42f751;
      FUN_00407e60();
      local_4._0_1_ = 7;
      if ((char)ppiStack_b8 != '\x02') {
        ppiStack_f4 = (int **)&DAT_0068c120;
        ppiStack_f8 = (int **)&DAT_0068c120;
        piStack_fc = (int *)s_Incorrect_resource_format_0066ce4c;
        FUN_00401010(0x2d,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3013);
      }
      puStack_b4 = (undefined1 *)&piStack_fc;
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
      iVar4 = FUN_0042f0d0();
      uVar5 = FUN_00409000(auStack_6c,apiStack_c0);
      uVar5 = FUN_00409000(auStack_54,uVar5);
      ppiStack_f4 = (int **)FUN_00407e60(auStack_18,uVar5);
      local_4._0_1_ = 0xb;
      ppiStack_f8 = (int **)0x42f843;
      FUN_004556d0();
      local_4._0_1_ = 0xf;
      ppiStack_f4 = (int **)0x42f857;
      FUN_00492340();
      local_4._0_1_ = 0xe;
      ppiStack_f4 = (int **)0x42f86b;
      FUN_00492340();
      local_4 = CONCAT31(local_4._1_3_,0xd);
      ppiStack_f4 = (int **)0x42f87f;
      FUN_00492340();
      iStack_d4 = 0;
      if (0 < DAT_006cd2ac) {
        do {
          ppiStack_f4 = (int **)0x42f89b;
          iVar6 = FUN_004b8250();
          pbVar7 = *(byte **)(iVar6 + 0xc);
          pbVar9 = (byte *)(&DAT_006c5ac8 + iStack_d4 * 0xdb);
          do {
            bVar1 = *pbVar7;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_0042f8d6:
              iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_0042f8db;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_0042f8d6;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_0042f8db:
          if (iVar6 == 0) {
            ppiStack_f4 = apiStack_c0;
            ppiStack_f8 = (int **)auStack_48;
            piStack_fc = (int *)0x42f904;
            piStack_fc = (int *)FUN_00409000();
            uVar5 = FUN_00409000(auStack_60);
            ppiStack_f4 = (int **)FUN_00409000(auStack_3c,uVar5);
            local_4._0_1_ = 0x12;
            ppiStack_f8 = (int **)0x42f935;
            FUN_0044ca50();
            local_4._0_1_ = 0x16;
            ppiStack_f4 = (int **)0x42f949;
            FUN_00492340();
            local_4._0_1_ = 0x15;
            ppiStack_f4 = (int **)0x42f95d;
            FUN_00492340();
            local_4._0_1_ = 0x14;
            ppiStack_f4 = (int **)0x42f971;
            FUN_00492340();
            ppiStack_f4 = (int **)&iStack_d4;
            ppiStack_f8 = (int **)&puStack_c4;
            piStack_fc = (int *)0x0;
            puStack_c4 = (undefined1 *)0x0;
            ppiStack_f4 = (int **)FUN_00457490(auStack_30);
            local_4._0_1_ = 0x17;
            ppiStack_f8 = (int **)0x42f9a2;
            FUN_004b8250();
            ppiStack_f8 = (int **)0x42f9ac;
            FUN_0040c060();
            local_4._0_1_ = 0x14;
            ppiStack_f4 = (int **)0x42f9c0;
            FUN_00492340();
            local_4 = CONCAT31(local_4._1_3_,0xd);
            *(int *)(iVar4 + 0x20) = iStack_d4;
            ppiStack_f4 = (int **)0x42f9d8;
            FUN_00492340();
            break;
          }
          iStack_d4 = iStack_d4 + 1;
        } while (iStack_d4 < DAT_006cd2ac);
      }
      if (iStack_d4 == DAT_006cd2ac) {
        ppiStack_f4 = (int **)0x42f9ed;
        iVar4 = FUN_004b8250();
        ppiStack_f8 = *(int ***)(iVar4 + 0xc);
        ppiStack_f4 = (int **)&DAT_0068c120;
        piStack_fc = (int *)s_No_such_trashbox_in_tech_file__0066ce98;
        FUN_00401010(0x2b,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3025);
      }
      local_4._0_1_ = 7;
      ppiStack_f4 = (int **)0x42fa27;
      FUN_00492340();
      local_4._0_1_ = 5;
      ppiStack_f4 = (int **)0x42fa38;
      FUN_00492340();
      ppiStack_f4 = &piStack_e0;
      ppiStack_f8 = apiStack_a0;
      piStack_fc = (int *)0x42fa47;
      puVar8 = (undefined4 *)FUN_00409000();
      local_4._0_1_ = 6;
      if (((piStack_e0 != (int *)0x0) && ((uStack_d8 & 0x10000) == 0)) &&
         (piStack_e0[1] = piStack_e0[1] + -1, piStack_e0[1] == 0)) {
        ppiStack_f8 = &piStack_e0;
        piStack_fc = (int *)0x42fa81;
        ppiStack_f4 = (int **)puVar8;
        cVar2 = FUN_00408fd0();
        if ((cVar2 == '\0') && (piStack_e0 != (int *)0x0)) {
          ppiStack_f4 = (int **)0x1;
          ppiStack_f8 = (int **)0x42fa97;
          (**(code **)(*piStack_e0 + 0xc))();
        }
      }
      uStack_d8 = puVar8[2];
      if ((uStack_d8 & 0x10000) == 0) {
        uStack_dc = 0;
        piStack_e0 = (int *)*puVar8;
        if (piStack_e0 == (int *)0x0) {
          piStack_e0 = (int *)0x0;
          uStack_d8 = 0;
        }
        else {
          uStack_d8 = puVar8[2];
          piStack_e0[1] = piStack_e0[1] + 1;
        }
      }
      else {
        piStack_e0 = (int *)*puVar8;
        uStack_dc = puVar8[1];
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      if ((((uStack_98 & 0x10000) == 0) && (apiStack_a0[0] != (int *)0x0)) &&
         ((apiStack_a0[0][1] = apiStack_a0[0][1] + -1, apiStack_a0[0][1] == 0 &&
          (apiStack_a0[0] != (int *)0x0)))) {
        ppiStack_f4 = (int **)0x1;
        ppiStack_f8 = (int **)0x42fb10;
        (**(code **)(*apiStack_a0[0] + 0xc))();
      }
    }
    local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
    local_4._0_1_ = 4;
    ppiStack_f4 = (int **)0x42fb2c;
    FUN_00492340();
    local_4 = CONCAT31(local_4._1_3_,3);
    ppiStack_f4 = (int **)0x42fb3d;
    FUN_00492340();
  }
  local_4 = 0xffffffff;
  ppiStack_f4 = (int **)0x42fb51;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}


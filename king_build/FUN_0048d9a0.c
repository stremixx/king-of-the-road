
undefined4 FUN_0048d9a0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_e64 [5];
  undefined4 uStack_e50;
  undefined8 uStack_e4c;
  undefined8 uStack_e44;
  undefined8 uStack_e3c;
  int local_e24;
  undefined4 local_e00;
  undefined4 local_dfc;
  undefined4 local_df8;
  undefined4 local_df4 [6];
  undefined4 local_ddc [6];
  undefined4 local_dc4 [6];
  undefined4 local_dac [144];
  undefined4 local_b6c;
  undefined1 local_b68 [580];
  undefined1 local_924 [580];
  undefined1 local_6e0 [580];
  undefined1 local_49c [1160];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  puStack_10 = &LAB_00640901;
  local_14 = ExceptionList;
  local_e00 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_c = 1;
  local_e24 = param_5;
  iVar1 = (param_4 - param_5) + -1;
  ExceptionList = &local_14;
  if (param_5 < iVar1) {
    pdVar6 = (double *)(param_2 + param_5 * 8);
    ExceptionList = &local_14;
    do {
      iVar5 = 0;
      if (*pdVar6 != pdVar6[1]) {
        local_b6c = 0;
        local_c = CONCAT31(local_c._1_3_,2);
        if (0 < param_5 + 1) {
          do {
            uStack_e44._4_4_ = (iVar5 - param_5) + local_e24;
            uStack_e3c._4_4_ = (undefined4 *)local_e24;
            uStack_e3c._0_4_ = (undefined1 *)(param_5 + 1);
            puVar2 = (undefined4 *)(param_3 + ((uStack_e44._4_4_ + iVar1) % iVar1) * 0x18);
            puVar8 = local_df4;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar8 = puVar8 + 1;
            }
            uStack_e4c._4_4_ = local_924;
            uStack_e44._0_4_ = param_2;
            uStack_e4c._0_4_ = 0x48da80;
            FUN_0048fb40();
            uStack_e3c._4_4_ = local_df4;
            uStack_e3c._0_4_ = local_49c;
            local_c._0_1_ = 3;
            uStack_e44._4_4_ = 0x48da9f;
            uStack_e3c._4_4_ = (undefined4 *)FUN_0048f270();
            uStack_e3c._0_4_ = local_b68;
            local_c = CONCAT31(local_c._1_3_,4);
            uStack_e44._4_4_ = 0x48dabc;
            puVar2 = (undefined4 *)FUN_0048f370();
            puVar8 = local_dac;
            for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar8 = puVar8 + 1;
            }
            uStack_e3c._4_4_ = (undefined4 *)0x48dad8;
            FUN_004030a0();
            local_c._0_1_ = 3;
            uStack_e3c._4_4_ = (undefined4 *)0x48daec;
            FUN_004030a0();
            local_c = CONCAT31(local_c._1_3_,2);
            uStack_e3c._4_4_ = (undefined4 *)0x48db00;
            FUN_004030a0();
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_5 + 1);
        }
        uStack_e4c._0_4_ = *(undefined4 *)pdVar6;
        uStack_e4c._4_4_ = *(undefined1 **)((int)pdVar6 + 4);
        uStack_e50 = 0x48db34;
        uStack_e44._0_4_ = (undefined4)uStack_e4c;
        uStack_e44._4_4_ = (int)uStack_e4c._4_4_;
        uStack_e3c._0_4_ = (undefined1 *)(undefined4)uStack_e4c;
        uStack_e3c._4_4_ = (undefined4 *)uStack_e4c._4_4_;
        FUN_00405ea0();
        uStack_e3c = pdVar6[1] - *pdVar6;
        uStack_e50 = 0x48db54;
        uStack_e44 = uStack_e3c;
        uStack_e4c = uStack_e3c;
        FUN_00405ea0();
        puVar2 = local_dc4;
        puVar7 = &uStack_e4c;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = (undefined8 *)((int)puVar7 + 4);
        }
        puVar2 = local_ddc;
        puVar8 = auStack_e64;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar3 = FUN_0048ed40();
        uStack_e3c._0_4_ = local_6e0;
        local_c = CONCAT31(local_c._1_3_,5);
        uStack_e44._4_4_ = 0x48dba3;
        uStack_e3c._4_4_ = (undefined4 *)uVar3;
        puVar2 = (undefined4 *)FUN_0048ee50();
        puVar8 = local_dac;
        for (iVar5 = 0x91; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar8 = puVar8 + 1;
        }
        uStack_e3c._4_4_ = (undefined4 *)0x48dbbf;
        FUN_004030a0();
        local_c._0_1_ = 2;
        uStack_e3c._4_4_ = (undefined4 *)0x48dbd3;
        FUN_004030a0();
        uStack_e3c._4_4_ = local_dac;
        uStack_e3c._0_4_ = (undefined1 *)0x48dbe4;
        FUN_0048f7a0();
        local_c = CONCAT31(local_c._1_3_,1);
        uStack_e3c._4_4_ = (undefined4 *)0x48dbf8;
        FUN_004030a0();
      }
      pdVar6 = pdVar6 + 1;
      local_e24 = local_e24 + 1;
    } while (local_e24 < iVar1);
  }
  uStack_e3c._4_4_ = &local_e00;
  uStack_e3c._0_4_ = (undefined1 *)0x48dc2c;
  FUN_0048f680();
  local_c = local_c & 0xffffff00;
  uStack_e3c._4_4_ = (undefined4 *)0x48dc45;
  FUN_004495f0();
  ExceptionList = local_14;
  return param_1;
}


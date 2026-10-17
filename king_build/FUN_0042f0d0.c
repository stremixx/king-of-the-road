
undefined4 * FUN_0042f0d0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char local_21;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18 [2];
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063d3ee;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_20 = (undefined4 *)FUN_00631d33(0x2c);
  local_4._0_1_ = 1;
  local_1c = local_20;
  if (local_20 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    *local_20 = 0xffffffff;
    FUN_004042a0();
    local_4._0_1_ = 2;
    FUN_00478a20(&local_21);
    local_20[7] = 0xffffffff;
    local_20[8] = 0xffffffff;
    local_20[9] = 0xffffffff;
    local_20[10] = 0;
  }
  local_4._0_1_ = 0;
  piVar3 = (int *)FUN_00407f50(local_18,&param_1);
  local_4 = CONCAT31(local_4._1_3_,3);
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    cVar2 = FUN_00408fd0(&param_1,piVar3);
    if ((cVar2 == '\0') && (param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0xc))(1);
    }
  }
  if ((undefined4 *)*piVar3 == (undefined4 *)0x0) {
    param_1 = (int *)0x0;
    param_3 = 0;
LAB_0042f1db:
    param_2 = 0;
  }
  else {
    iVar4 = (*(code *)**(undefined4 **)*piVar3)();
    if (iVar4 == 2) {
      param_1 = (int *)*piVar3;
      param_3 = piVar3[2];
      param_1[1] = param_1[1] + 1;
      goto LAB_0042f1db;
    }
    uVar5 = (**(code **)(*(int *)*piVar3 + 4))(&DAT_0066bb08);
    FUN_004a5670(2,1,uVar5);
  }
  local_4 = local_4 & 0xffffff00;
  if (((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      (**(code **)(*local_18[0] + 0xc))(1);
    }
  }
  piVar6 = (int *)FUN_00407ec0(local_18,&param_1);
  puVar1 = local_20;
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar4 = local_20[1];
  piVar3 = local_20 + 1;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + -1, *(int *)(*piVar3 + 4) == 0))
  {
    cVar2 = FUN_00408fd0(piVar3,piVar6);
    if ((cVar2 == '\0') && ((int *)*piVar3 != (int *)0x0)) {
      (**(code **)(*(int *)*piVar3 + 0xc))(1);
    }
  }
  if ((undefined4 *)*piVar6 == (undefined4 *)0x0) {
    *piVar3 = 0;
    puVar1[3] = 0;
  }
  else {
    iVar4 = (*(code *)**(undefined4 **)*piVar6)();
    if (iVar4 != 9) {
      uVar5 = (**(code **)(*(int *)*piVar6 + 4))(s_Identifier_0066be4c);
      FUN_004a5670(2,1,uVar5);
      goto LAB_0042f2a6;
    }
    iVar4 = *piVar6;
    *piVar3 = iVar4;
    puVar1[3] = piVar6[2];
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  }
  puVar1[2] = 0;
LAB_0042f2a6:
  local_4 = local_4 & 0xffffff00;
  if (((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      (**(code **)(*local_18[0] + 0xc))(1);
    }
  }
  uVar5 = FUN_00407f50(local_18,&param_1);
  local_4._0_1_ = 5;
  FUN_0044cae0(uVar5);
  local_4._0_1_ = 0;
  if (((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      (**(code **)(*local_18[0] + 0xc))(1);
    }
  }
  piVar3 = (int *)FUN_00407ec0(local_18,&param_1);
  local_4._0_1_ = 6;
  FUN_0044c100(*piVar3 + 0xc);
  local_4._0_1_ = 0;
  FUN_00492340();
  uVar5 = FUN_00407f50(local_18,&param_1);
  local_4._0_1_ = 7;
  FUN_0044cae0(uVar5);
  local_4._0_1_ = 0;
  FUN_00492340();
  FUN_00407ec0(local_18,&param_1);
  local_4._0_1_ = 8;
  uVar5 = FUN_004b0f30();
  local_4._0_1_ = 0;
  local_20[9] = uVar5;
  FUN_00492340();
  uVar5 = FUN_00407f50(local_18,&param_1);
  local_4._0_1_ = 9;
  FUN_0044cae0(uVar5);
  local_4._0_1_ = 0;
  FUN_00492340();
  uVar5 = FUN_00407ec0(local_18,&param_1);
  local_4._0_1_ = 10;
  local_21 = FUN_004b6670(uVar5,s_parked_0066ce90);
  local_4._0_1_ = 0;
  FUN_00492340();
  if (local_21 == '\0') {
    uVar5 = FUN_00407ec0(local_18,&param_1);
    local_4._0_1_ = 0xb;
    local_21 = FUN_004b6670(uVar5,&DAT_0066bac0);
    local_4._0_1_ = 0;
    FUN_00492340();
    if (local_21 == '\0') {
      uVar5 = FUN_00407ec0(local_18,&param_1);
      local_4._0_1_ = 0xc;
      local_21 = FUN_004b6670(uVar5,s_container_0066ce84);
      local_4._0_1_ = 0;
      FUN_00492340();
      if (local_21 == '\0') {
        uVar5 = FUN_00407ec0(local_18,&param_1);
        local_4._0_1_ = 0xd;
        local_21 = FUN_004b6670(uVar5,s_roadwork_0066ce78);
        local_4._0_1_ = 0;
        FUN_00492340();
        if (local_21 == '\0') {
          piVar3 = (int *)FUN_00407ec0(local_18,&param_1);
          local_4._0_1_ = 0xe;
          FUN_00401010(4,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2ff7,
                       s_Unsupported_type_0066cdc4,*(undefined4 *)(*piVar3 + 0xc),&DAT_0068c120);
          local_4._0_1_ = 0;
          FUN_00492340();
        }
        else {
          local_20[7] = 4;
        }
      }
      else {
        local_20[7] = 3;
      }
    }
    else {
      local_20[7] = 2;
    }
  }
  else {
    local_20[7] = 1;
  }
  FUN_00447a30(&local_20);
  puVar1 = local_20;
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return puVar1;
}


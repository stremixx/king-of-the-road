
void FUN_00409270(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int **ppiVar7;
  int *piStack_70;
  int **ppiStack_6c;
  undefined4 *puStack_68;
  undefined1 local_55;
  undefined4 local_54;
  int *local_50;
  undefined1 *puStack_4c;
  int *local_48;
  undefined4 local_44;
  undefined1 local_40;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *apiStack_30 [2];
  uint uStack_28;
  int *local_24;
  int *local_20;
  int iStack_1c;
  undefined1 local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b640;
  pvStack_c = ExceptionList;
  local_40 = DAT_0066bb38;
  local_44 = DAT_0066bb34;
  puStack_68 = (undefined4 *)&local_55;
  local_48 = DAT_0066bb30;
  ppiStack_6c = (int **)(DAT_0068aa2c - DAT_0068aa28);
  piStack_70 = (int *)0x4092cd;
  ExceptionList = &pvStack_c;
  FUN_0044a420();
  piVar3 = local_24;
  iVar2 = DAT_0068aa2c;
  iVar4 = DAT_0068aa28;
  puStack_68 = (undefined4 *)(DAT_0068aa2c - DAT_0068aa28);
  ppiStack_6c = (int **)DAT_0068aa28;
  piStack_70 = local_24;
  FUN_0061c980();
  piStack_70 = (int *)((int)piVar3 + (iVar2 - iVar4));
  local_20 = piStack_70;
  uVar6 = 0xffffffff;
  ppiVar7 = &local_48;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *(char *)ppiVar7;
    ppiVar7 = (int **)((int)ppiVar7 + 1);
  } while (cVar1 != '\0');
  ppiStack_6c = &local_48;
  local_4 = 0;
  puStack_68 = (undefined4 *)((int)&local_48 + ~uVar6);
  FUN_0044c1c0();
  puStack_68 = &local_54;
  ppiStack_6c = &local_50;
  local_50 = local_24;
  piStack_70 = (int *)0x0;
  local_54 = 1;
  piVar3 = (int *)FUN_00455760(local_18);
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4._0_1_ = 2;
  if ((undefined4 *)*piVar3 == (undefined4 *)0x0) {
    local_3c = (int *)0x0;
    local_34 = 0;
  }
  else {
    puStack_68 = (undefined4 *)0x409361;
    iVar4 = (*(code *)**(undefined4 **)*piVar3)();
    if (iVar4 == 0xb) {
      local_3c = (int *)*piVar3;
      local_34 = piVar3[2];
      local_3c[1] = local_3c[1] + 1;
    }
    else {
      puStack_68 = (undefined4 *)&DAT_0066bb28;
      ppiStack_6c = (int **)0x409374;
      ppiStack_6c = (int **)(**(code **)(*(int *)*piVar3 + 4))();
      piStack_70 = (int *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  puStack_68 = (undefined4 *)0x4093af;
  FUN_00492340();
  if (local_3c == (int *)0x0) {
    puStack_68 = (undefined4 *)0x1;
    ppiStack_6c = (int **)0x0;
    piStack_70 = (int *)0x4093bd;
    FUN_004a5470();
  }
  if ((local_34 & 0x10000) != 0) {
    puStack_68 = (undefined4 *)0x1;
    ppiStack_6c = (int **)0x4;
    piStack_70 = (int *)0x4093d6;
    FUN_004a5470();
  }
  puStack_68 = (undefined4 *)0x4093e2;
  iVar4 = (**(code **)(*local_3c + 0x28))();
  if (iVar4 != 0) {
    ppiStack_6c = &local_48;
    puStack_68 = (undefined4 *)&DAT_0068c120;
    piStack_70 = (int *)s_Cannot_open_0066bb1c;
    FUN_00401010(0x17,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x7e7);
  }
  puStack_4c = (undefined1 *)&piStack_70;
  FUN_00455dc0(&local_3c);
  FUN_004b4cb0(apiStack_30,&DAT_0068aab8);
  puStack_4c = (undefined1 *)&piStack_70;
  piStack_70 = (int *)0x0;
  ppiStack_6c = (int **)0x0;
  puStack_68 = (undefined4 *)0x0;
  local_4._0_1_ = 6;
  if (apiStack_30[0] == (int *)0x0) {
    piStack_70 = (int *)0x0;
    puStack_68 = (undefined4 *)0x0;
    puStack_4c = (undefined1 *)&piStack_70;
  }
  else {
    iVar4 = (**(code **)*apiStack_30[0])();
    if (iVar4 == 2) {
      piStack_70 = apiStack_30[0];
      puStack_68 = (undefined4 *)uStack_28;
      apiStack_30[0][1] = apiStack_30[0][1] + 1;
    }
    else {
      uVar5 = (**(code **)(*apiStack_30[0] + 4))(&DAT_0066bb08);
      FUN_004a5670(2,1,uVar5);
    }
  }
  local_4._0_1_ = 5;
  FUN_00409060(&DAT_0068aab8);
  local_4._0_1_ = 4;
  *(undefined4 *)(DAT_0068be88 + 0x1c) = DAT_0068c070;
  if (((uStack_28 & 0x10000) == 0) && (apiStack_30[0] != (int *)0x0)) {
    apiStack_30[0][1] = apiStack_30[0][1] + -1;
    if ((apiStack_30[0][1] == 0) && (apiStack_30[0] != (int *)0x0)) {
      puStack_68 = (undefined4 *)0x1;
      ppiStack_6c = (int **)0x4094e3;
      (**(code **)(*apiStack_30[0] + 0xc))();
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  puStack_68 = (undefined4 *)0x4094f0;
  FUN_00492340();
  puStack_68 = (undefined4 *)(iStack_1c - (int)local_24);
  local_4 = 0xffffffff;
  if (puStack_68 != (undefined4 *)0x0) {
    ppiStack_6c = (int **)local_24;
    piStack_70 = (int *)0x40950b;
    FUN_0044b440();
  }
  ExceptionList = pvStack_c;
  return;
}


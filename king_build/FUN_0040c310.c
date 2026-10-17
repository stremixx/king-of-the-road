
void FUN_0040c310(void)

{
  int *piVar1;
  int iVar2;
  char *pcStack_e0;
  int **ppiStack_dc;
  int *piStack_d8;
  int iStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  int *local_bc;
  undefined4 local_b8;
  uint local_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 local_a4;
  undefined1 *puStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined *local_90;
  int *apiStack_8c [2];
  uint uStack_84;
  undefined1 local_80 [12];
  undefined1 auStack_74 [104];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b8e7;
  pvStack_c = ExceptionList;
  piStack_d8 = (int *)DAT_0068bc1c;
  ppiStack_dc = (int **)DAT_0068bc18;
  pcStack_e0 = (char *)0x40c344;
  ExceptionList = &pvStack_c;
  FUN_0044a510();
  local_9c = DAT_0066bd68;
  local_98 = DAT_0066bd6c;
  local_94 = DAT_0066bd70;
  piStack_d8 = &local_a4;
  ppiStack_dc = (int **)&local_9c;
  local_90 = PTR_DAT_0066bd74;
  pcStack_e0 = (char *)0x0;
  local_a4 = 1;
  piVar1 = (int *)FUN_004558c0(local_80);
  local_bc = (int *)0x0;
  local_b8 = 0;
  local_b4 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
    local_bc = (int *)0x0;
    local_b4 = 0;
  }
  else {
    piStack_d8 = (int *)0x40c3b4;
    iVar2 = (*(code *)**(undefined4 **)*piVar1)();
    if (iVar2 == 0xb) {
      local_bc = (int *)*piVar1;
      local_b4 = piVar1[2];
      local_bc[1] = local_bc[1] + 1;
    }
    else {
      piStack_d8 = (int *)&DAT_0066bb28;
      ppiStack_dc = (int **)0x40c3c5;
      ppiStack_dc = (int **)(**(code **)(*(int *)*piVar1 + 4))();
      pcStack_e0 = (char *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  piStack_d8 = (int *)0x40c403;
  FUN_00492340();
  if (local_bc == (int *)0x0) {
    piStack_d8 = (int *)0x1;
    ppiStack_dc = (int **)0x0;
    pcStack_e0 = (char *)0x40c411;
    FUN_004a5470();
  }
  if ((local_b4 & 0x10000) != 0) {
    piStack_d8 = (int *)0x1;
    ppiStack_dc = (int **)0x4;
    pcStack_e0 = (char *)0x40c42a;
    FUN_004a5470();
  }
  piStack_d8 = (int *)0x40c436;
  iVar2 = (**(code **)(*local_bc + 0x28))();
  if (iVar2 != 0) {
    ppiStack_dc = (int **)&local_9c;
    piStack_d8 = (int *)&DAT_0068c120;
    pcStack_e0 = s_Cannot_open_0066bb1c;
    FUN_00401010(0x17,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xa8a);
  }
  puStack_a0 = (undefined1 *)&pcStack_e0;
  FUN_00455dc0(&local_bc);
  FUN_004b4cb0(&iStack_b0,&DAT_0068aab8);
  local_4._0_1_ = 5;
  if ((uStack_a8 & 0x10000) == 0) {
    uStack_c4 = 0;
    if (iStack_b0 == 0) {
      iStack_c8 = 0;
      uStack_c0 = 0;
    }
    else {
      iStack_c8 = iStack_b0;
      uStack_c0 = uStack_a8;
      *(int *)(iStack_b0 + 4) = *(int *)(iStack_b0 + 4) + 1;
    }
  }
  else {
    uStack_c0 = uStack_a8;
    uStack_c4 = uStack_ac;
    iStack_c8 = iStack_b0;
  }
  while ((char)uStack_c0 == '\x02') {
    puStack_a0 = (undefined1 *)&pcStack_e0;
    FUN_00407e60(&pcStack_e0,&iStack_c8);
    piStack_d8 = (int *)FUN_0040b880(auStack_74,&DAT_0068aab8);
    local_4._0_1_ = 7;
    ppiStack_dc = (int **)0x40c518;
    FUN_004478f0();
    local_4._0_1_ = 5;
    piStack_d8 = (int *)0x40c528;
    FUN_0040c100();
    piStack_d8 = &iStack_c8;
    ppiStack_dc = apiStack_8c;
    pcStack_e0 = (char *)0x40c537;
    piStack_d8 = (int *)FUN_00409000();
    local_4._0_1_ = 6;
    ppiStack_dc = (int **)0x40c54c;
    FUN_0040c060();
    local_4._0_1_ = 5;
    if (((((uStack_84 & 0x10000) == 0) && (apiStack_8c[0] != (int *)0x0)) &&
        (apiStack_8c[0][1] = apiStack_8c[0][1] + -1, apiStack_8c[0][1] == 0)) &&
       (apiStack_8c[0] != (int *)0x0)) {
      piStack_d8 = (int *)0x1;
      ppiStack_dc = (int **)0x40c57e;
      (**(code **)(*apiStack_8c[0] + 0xc))();
    }
  }
  local_4._0_1_ = 4;
  piStack_d8 = (int *)0x40c59a;
  FUN_00492340();
  local_4 = CONCAT31(local_4._1_3_,3);
  piStack_d8 = (int *)0x40c5ab;
  FUN_00492340();
  local_4 = 0xffffffff;
  piStack_d8 = (int *)0x40c5bf;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}


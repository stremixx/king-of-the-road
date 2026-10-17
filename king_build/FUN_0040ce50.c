
void FUN_0040ce50(void)

{
  int *piVar1;
  int iVar2;
  char *pcStack_90;
  int **ppiStack_8c;
  int *piStack_88;
  undefined4 local_78;
  undefined1 *puStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int *local_64;
  undefined4 local_60;
  uint local_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  int *apiStack_4c [2];
  uint uStack_44;
  undefined1 local_40 [12];
  char local_34 [4];
  char local_30 [4];
  char local_2c [4];
  char local_28;
  undefined1 auStack_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ba48;
  pvStack_c = ExceptionList;
  piStack_88 = (int *)DAT_0068bb6c;
  ppiStack_8c = (int **)DAT_0068bb68;
  pcStack_90 = (char *)0x40ce81;
  ExceptionList = &pvStack_c;
  FUN_0044aab0();
  local_34[0] = s_restable_sch_0066bd78[0];
  local_34[1] = s_restable_sch_0066bd78[1];
  local_34[2] = s_restable_sch_0066bd78[2];
  local_34[3] = s_restable_sch_0066bd78[3];
  local_30[0] = s_restable_sch_0066bd78[4];
  local_30[1] = s_restable_sch_0066bd78[5];
  local_30[2] = s_restable_sch_0066bd78[6];
  local_30[3] = s_restable_sch_0066bd78[7];
  local_2c[0] = s_restable_sch_0066bd78[8];
  local_2c[1] = s_restable_sch_0066bd78[9];
  local_2c[2] = s_restable_sch_0066bd78[10];
  local_2c[3] = s_restable_sch_0066bd78[0xb];
  piStack_88 = &local_78;
  ppiStack_8c = (int **)local_34;
  local_28 = s_restable_sch_0066bd78[0xc];
  pcStack_90 = (char *)0x0;
  local_78 = 1;
  piVar1 = (int *)FUN_004559b0(local_40);
  local_64 = (int *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
    local_64 = (int *)0x0;
    local_5c = 0;
  }
  else {
    piStack_88 = (int *)0x40cef1;
    iVar2 = (*(code *)**(undefined4 **)*piVar1)();
    if (iVar2 == 0xb) {
      local_64 = (int *)*piVar1;
      local_5c = piVar1[2];
      local_64[1] = local_64[1] + 1;
    }
    else {
      piStack_88 = (int *)&DAT_0066bb28;
      ppiStack_8c = (int **)0x40cf02;
      ppiStack_8c = (int **)(**(code **)(*(int *)*piVar1 + 4))();
      pcStack_90 = (char *)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  piStack_88 = (int *)0x40cf40;
  FUN_00492340();
  if (local_64 == (int *)0x0) {
    piStack_88 = (int *)0x1;
    ppiStack_8c = (int **)0x0;
    pcStack_90 = (char *)0x40cf4e;
    FUN_004a5470();
  }
  if ((local_5c & 0x10000) != 0) {
    piStack_88 = (int *)0x1;
    ppiStack_8c = (int **)0x4;
    pcStack_90 = (char *)0x40cf67;
    FUN_004a5470();
  }
  piStack_88 = (int *)0x40cf73;
  iVar2 = (**(code **)(*local_64 + 0x28))();
  if (iVar2 != 0) {
    ppiStack_8c = (int **)local_34;
    piStack_88 = (int *)&DAT_0068c120;
    pcStack_90 = s_Cannot_open_0066bb1c;
    FUN_00401010(0x17,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xaac);
  }
  puStack_74 = (undefined1 *)&pcStack_90;
  FUN_00455dc0(&local_64);
  FUN_004b4cb0(&iStack_58,&DAT_0068aab8);
  local_4._0_1_ = 5;
  if ((uStack_50 & 0x10000) == 0) {
    uStack_6c = 0;
    if (iStack_58 == 0) {
      iStack_70 = 0;
      uStack_68 = 0;
    }
    else {
      iStack_70 = iStack_58;
      uStack_68 = uStack_50;
      *(int *)(iStack_58 + 4) = *(int *)(iStack_58 + 4) + 1;
    }
  }
  else {
    uStack_68 = uStack_50;
    uStack_6c = uStack_54;
    iStack_70 = iStack_58;
  }
  while ((char)uStack_68 == '\x02') {
    puStack_74 = (undefined1 *)&pcStack_90;
    FUN_00407e60(&pcStack_90,&iStack_70);
    piStack_88 = (int *)FUN_0040c5e0(auStack_24,&DAT_0068aab8);
    local_4._0_1_ = 7;
    ppiStack_8c = (int **)0x40d055;
    FUN_00448170();
    local_4._0_1_ = 5;
    piStack_88 = (int *)0x40d065;
    FUN_0040cac0();
    piStack_88 = &iStack_70;
    ppiStack_8c = apiStack_4c;
    pcStack_90 = (char *)0x40d074;
    piStack_88 = (int *)FUN_00409000();
    local_4._0_1_ = 6;
    ppiStack_8c = (int **)0x40d089;
    FUN_0040c060();
    local_4._0_1_ = 5;
    if (((((uStack_44 & 0x10000) == 0) && (apiStack_4c[0] != (int *)0x0)) &&
        (apiStack_4c[0][1] = apiStack_4c[0][1] + -1, apiStack_4c[0][1] == 0)) &&
       (apiStack_4c[0] != (int *)0x0)) {
      piStack_88 = (int *)0x1;
      ppiStack_8c = (int **)0x40d0bb;
      (**(code **)(*apiStack_4c[0] + 0xc))();
    }
  }
  local_4._0_1_ = 4;
  piStack_88 = (int *)0x40d0d7;
  FUN_00492340();
  local_4 = CONCAT31(local_4._1_3_,3);
  piStack_88 = (int *)0x40d0e8;
  FUN_00492340();
  local_4 = 0xffffffff;
  piStack_88 = (int *)0x40d0fc;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}


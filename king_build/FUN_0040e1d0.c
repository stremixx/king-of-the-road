
undefined1 * FUN_0040e1d0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void **ppvVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *local_18 [2];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_006897b4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bc58;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  iVar8 = DAT_006897b0;
  while ((ExceptionList = ppvVar3, iVar8 != iVar2 && (cVar4 = FUN_0040e370(iVar8), cVar4 == '\0')))
  {
    iVar8 = iVar8 + 0xc;
    ppvVar3 = ExceptionList;
  }
  if (iVar8 != DAT_006897b4) {
    piVar5 = (int *)FUN_00409000(local_18,iVar8);
    piVar9 = (int *)0x0;
    uVar7 = 0;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
      piVar9 = (int *)0x0;
      uVar7 = 0;
    }
    else {
      iVar8 = (*(code *)**(undefined4 **)*piVar5)();
      if (iVar8 == 3) {
        piVar9 = (int *)*piVar5;
        uVar7 = piVar5[2];
        piVar9[1] = piVar9[1] + 1;
      }
      else {
        uVar6 = (**(code **)(*(int *)*piVar5 + 4))(s_String_0066ba58);
        FUN_004a5670(2,1,uVar6);
      }
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if (((((local_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) &&
        (local_18[0][1] = local_18[0][1] + -1, local_18[0][1] == 0)) && (local_18[0] != (int *)0x0))
    {
      (**(code **)(*local_18[0] + 0xc))(1);
    }
    if (piVar9 == (int *)0x0) {
      FUN_004a5470(0,1);
    }
    if ((uVar7 & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    puVar1 = (undefined1 *)piVar9[3];
    local_4 = 0xffffffff;
    if ((((uVar7 & 0x10000) == 0) && (piVar9 != (int *)0x0)) &&
       (iVar8 = piVar9[1], piVar9[1] = iVar8 + -1, iVar8 + -1 == 0)) {
      (**(code **)(*piVar9 + 0xc))(1);
    }
    ExceptionList = local_c;
    return puVar1;
  }
  FUN_00401010(0x23,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xb2b,s_Cannot_find_message_0066bdd8,
               param_1,&DAT_0068c120);
  ExceptionList = local_c;
  return &DAT_0068c120;
}


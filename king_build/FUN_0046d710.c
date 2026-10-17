
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0046d710(int ***param_1,int param_2,int ***param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int ***extraout_ECX;
  int **extraout_ECX_00;
  int **extraout_ECX_01;
  int ***extraout_ECX_02;
  int ***extraout_ECX_03;
  undefined1 *puVar4;
  int **ppiStack_41c;
  int ***pppiStack_418;
  int ***local_414;
  int *local_408;
  int **local_404;
  int **local_400;
  int **local_3fc;
  int *local_3f8;
  int **local_3f4;
  undefined4 local_3f0;
  uint local_394;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f88b;
  local_c = ExceptionList;
  if ((0x3de < param_2) && (param_2 < 1000)) {
    ExceptionList = &local_c;
    if (DAT_0068c04c == '\0') {
      local_414 = (int ***)&DAT_0068c120;
      pppiStack_418 = (int ***)&DAT_0068c120;
      ppiStack_41c = (int **)s_AI_Subsystem_has_not_been_initia_0066e750;
      ExceptionList = &local_c;
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_mult_cp_0066e72c,
                   s__Id__ai_mult_cpp_2000_12_21_20_1_0066e578,0x67);
      param_1 = extraout_ECX;
    }
    switch(param_2) {
    case 0x3df:
      local_414 = (int ***)&DAT_0068c120;
      pppiStack_418 = (int ***)0x46d84a;
      iVar2 = FUN_00473470();
      local_400 = (int **)(param_3 + 1);
      if (*param_3 != DAT_0066e62c) {
        local_414 = (int ***)&DAT_0068c120;
        pppiStack_418 = (int ***)&DAT_0068c120;
        ppiStack_41c = (int **)s_Some_of_the_machines_in_the_mult_0066e674;
        FUN_00401010(0,100,s_C__Nek_Vrappl_Gi_Htai_ai_mult_cp_0066e72c,
                     s__Id__ai_mult_cpp_2000_12_21_20_1_0066e578,0x82);
      }
      local_414 = (int ***)local_400;
      ppiStack_41c = (int **)&pppiStack_418;
      pppiStack_418 = (int ***)local_400;
      FUN_004896a0();
      ppiStack_41c = extraout_ECX_00;
      FUN_004af790(&ppiStack_41c);
      FUN_00457990(&local_3f8);
      if ((int **)local_3f8 != DAT_0068a8f0) {
        local_414 = (int ***)&DAT_0068c120;
        pppiStack_418 = (int ***)local_400;
        ppiStack_41c = (int **)s_Player_already_exist_0066e65c;
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_mult_cp_0066e72c,
                     s__Id__ai_mult_cpp_2000_12_21_20_1_0066e578,0x89);
      }
      local_414 = &local_400;
      pppiStack_418 = (int ***)0x46d90f;
      FUN_004747c0();
      if (*(int *)(iVar2 + 0x2c8) == *(int *)(DAT_0068c278 + 8)) {
        uVar3 = *(uint *)(iVar2 + 0x58) & 0xfffffeff;
      }
      else {
        uVar3 = *(uint *)(iVar2 + 0x58) | 0x100;
      }
      pppiStack_418 = &local_404;
      *(uint *)(iVar2 + 0x58) = uVar3;
      ppiStack_41c = (int **)0x46d93a;
      local_414 = (int ***)iVar2;
      FUN_00422480();
      local_414 = (int ***)local_404;
      pppiStack_418 = (int ***)0x46d94e;
      FUN_004200f0();
      if ((DAT_0068c0e8 == 1) || (DAT_0068c0e8 == 2)) {
        local_414 = (int ***)local_404;
        pppiStack_418 = (int ***)0x46d972;
        FUN_00417670();
      }
      ExceptionList = local_c;
      return 1;
    case 0x3e0:
      local_414 = param_3;
      ppiStack_41c = (int **)&pppiStack_418;
      local_3fc = (int **)param_3;
      pppiStack_418 = param_1;
      FUN_004896a0();
      ppiStack_41c = extraout_ECX_01;
      FUN_004af790(&ppiStack_41c);
      FUN_00457990(&local_408);
      if ((int **)local_408 == DAT_0068a8f0) {
        local_414 = (int ***)&DAT_0068c120;
        pppiStack_418 = (int ***)local_3fc;
        ppiStack_41c = (int **)s_Can_not_find_player_with_the_nam_0066e638;
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_mult_cp_0066e72c,
                     s__Id__ai_mult_cpp_2000_12_21_20_1_0066e578,0xa2);
      }
      local_414 = (int ***)local_408;
      pppiStack_418 = (int ***)0x46da1a;
      FUN_004042b0();
      local_414 = (int ***)&DAT_0066e630;
      local_3f4 = (int **)param_3;
      pppiStack_418 = (int ***)0x46da2c;
      FUN_00472a30();
      local_414 = &local_3f4;
      local_4 = 0;
      pppiStack_418 = (int ***)0x46da45;
      FUN_004747c0();
      pppiStack_418 = extraout_ECX_02;
      if ((local_394 & 0x4000) == 0) {
        local_414 = (int ***)local_408;
        pppiStack_418 = (int ***)0x46da64;
        iVar2 = FUN_0040a950();
        pppiStack_418 = *(int ****)(iVar2 + 0x58);
        if (((uint)pppiStack_418 & 0x4000) != 0) {
          local_414 = (int ***)local_3f0;
          pppiStack_418 = (int ***)0x46da80;
          FUN_0040ac60();
          pppiStack_418 = extraout_ECX_03;
        }
      }
      local_414 = &local_3fc;
      ppiStack_41c = &local_408;
      FUN_0041d3f0();
      ppiStack_41c = (int **)0x46da9e;
      FUN_0040a950();
      pppiStack_418 = (int ***)0x46daa8;
      FUN_004747c0();
      pppiStack_418 = (int ***)&local_408;
      piVar1 = (int *)(DAT_0068c278 + 8);
      ppiStack_41c = (int **)0x46dac1;
      FUN_0041d3f0();
      pppiStack_418 = (int ***)0x46dac6;
      iVar2 = FUN_0040a950();
      if (*(int *)(iVar2 + 0x2c8) == *piVar1) {
        local_414 = (int ***)local_408;
        pppiStack_418 = (int ***)0x46db04;
        iVar2 = FUN_0040a950();
        uVar3 = *(uint *)(iVar2 + 0x58) & 0xfffffeff;
      }
      else {
        local_414 = (int ***)local_408;
        pppiStack_418 = (int ***)0x46dae8;
        iVar2 = FUN_0040a950();
        uVar3 = *(uint *)(iVar2 + 0x58) | 0x100;
      }
      *(uint *)(iVar2 + 0x58) = uVar3;
      local_4 = 0xffffffff;
      local_414 = (int ***)0x46db24;
      FUN_00473230();
    default:
      ExceptionList = local_c;
      return 1;
    case 0x3e2:
      goto switchD_0046d78a_caseD_3e2;
    }
  }
  return 0;
switchD_0046d78a_caseD_3e2:
  if (DAT_0066e62a != '\0') {
    local_414 = (int ***)&DAT_0068c120;
    pppiStack_418 = (int ***)&DAT_0068c120;
    ppiStack_41c = (int **)s_Another_station_claims_to_be_the_0066e704;
    FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_mult_cp_0066e72c,
                 s__Id__ai_mult_cpp_2000_12_21_20_1_0066e578,0x6e);
  }
  local_404 = (int **)param_3;
  local_414 = (int ***)0x46d7d5;
  iVar2 = FUN_0046ea00();
  puVar4 = DAT_0068c268;
  if (DAT_0068c268 != DAT_0068c26c) {
    do {
      if (*(int *)(puVar4 + 8) == iVar2) break;
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != DAT_0068c26c);
    if (puVar4 != DAT_0068c26c) goto LAB_0046d81c;
  }
  local_414 = (int ***)&DAT_0068c120;
  pppiStack_418 = (int ***)&DAT_0068c120;
  ppiStack_41c = (int **)s_Can_not_find_server_with_the_giv_0066e6d4;
  FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_mult_cp_0066e72c,
               s__Id__ai_mult_cpp_2000_12_21_20_1_0066e578,0x74);
LAB_0046d81c:
  _DAT_0068c274 = puVar4;
  *puVar4 = 1;
  ExceptionList = local_c;
  return 1;
}



undefined4 FUN_00404dd0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  puVar2 = param_2;
  FUN_00404d70(&param_2,param_2);
  if (param_2 != (uint *)0xffffffff) {
    FUN_00435cd0(param_1,0xffffffff,param_2,0,0,0,0,0,0xffffffff);
    return param_1;
  }
  uVar1 = *puVar2;
  uVar3 = FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3a4,
                       s_No_coordinates_defined_for_town_0066b8d0,
                       -(uint)(uVar1 != puVar2[1]) & uVar1,&DAT_0068c120);
  return uVar3;
}


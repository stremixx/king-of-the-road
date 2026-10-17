
undefined4 FUN_00601990(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puStack_c;
  undefined4 *local_8;
  
  puVar1 = param_2;
  if (DAT_00722d3c == (int *)0x0) {
    local_8 = (undefined4 *)&DAT_0068c120;
    puStack_c = (undefined4 *)0x0;
    puStack_c = (undefined4 *)FUN_006001c0();
    pcVar3 = s_Not_connected_006832ac;
    uVar2 = 0x4b9;
  }
  else {
    puStack_c = (undefined4 *)*param_2;
    local_8 = puStack_c;
    FUN_004af790(&puStack_c);
    FUN_00602140(&param_2);
    local_8 = (undefined4 *)0x10;
    puStack_c = puVar1;
    puStack_c = (undefined4 *)
                (**(code **)(*DAT_00722d3c + 0x30))(DAT_00722d3c,&DAT_00682bf8,&LAB_00601930);
    if (-1 < (int)puStack_c) {
      local_8 = puVar1;
      puStack_c = param_1;
      puVar1[1] = *(undefined4 *)*puVar1;
      uVar2 = FUN_00601960();
      return uVar2;
    }
    local_8 = (undefined4 *)&DAT_0068c120;
    puStack_c = (undefined4 *)FUN_006001c0();
    pcVar3 = s_Cannot_enum_players_00683298;
    uVar2 = 0x4c0;
  }
  FUN_00401010(8,100,s_C__Nek_Vrappl_Gi_Srmidp_D1gate_c_00683184,
               s__Id__D1gate_cpp_2001_6_25_14_48__00682bd0,uVar2,pcVar3);
  return 0xffffffff;
}


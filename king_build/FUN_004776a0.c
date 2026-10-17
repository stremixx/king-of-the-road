
void __thiscall FUN_004776a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char *local_14;
  undefined4 uStack_10;
  undefined4 *local_c;
  
  puVar1 = param_2;
  if ((uint)(param_2[2] - param_2[1]) < 2) {
    *param_2 = DAT_0068a8f0;
    return;
  }
  local_c = (undefined4 *)param_2[1];
  local_14 = (char *)&uStack_10;
  uStack_10 = param_1;
  FUN_004896a0();
  FUN_004af790(&local_14);
  FUN_00457990(&param_2);
  if (param_2 == DAT_0068a8f0) {
    uStack_10 = puVar1[1];
    local_c = (undefined4 *)&DAT_0068c120;
    local_14 = s_Player_not_found__0066d430;
    FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x668);
    *puVar1 = DAT_0068a8f0;
    return;
  }
  local_c = param_2;
  uStack_10 = 0x47773a;
  FUN_004042b0();
  *puVar1 = param_1;
  return;
}


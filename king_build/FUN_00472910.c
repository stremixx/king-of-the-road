
void __thiscall FUN_00472910(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fa78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490cf0(param_2,&local_10,&local_18,&local_14);
  local_4 = 0;
  if (local_10 == DAT_0066ea14) {
    FUN_004726f0(param_2);
    FUN_004726f0(param_2);
    *param_1 = *(undefined1 *)*param_2;
    iVar1 = *param_2;
    puVar2 = (undefined4 *)(iVar1 + 1);
    *param_2 = (int)puVar2;
    *(undefined4 *)(param_1 + 0x28) = *puVar2;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar1 + 5);
    iVar1 = *param_2;
    puVar2 = (undefined4 *)(iVar1 + 8);
    *param_2 = (int)puVar2;
    *(undefined4 *)(param_1 + 0x30) = *puVar2;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *param_2;
    puVar2 = (undefined4 *)(iVar1 + 8);
    *param_2 = (int)puVar2;
    *(undefined4 *)(param_1 + 0x38) = *puVar2;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *param_2;
    *param_2 = iVar1 + 8;
    param_1[0x40] = *(undefined1 *)(iVar1 + 8);
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    param_1[1] = *(undefined1 *)(iVar1 + 1);
    *param_2 = *param_2 + 1;
  }
  else {
    FUN_00401010(0,100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x101,s_Game_load_error_0679_0066ea1c,
                 &DAT_0068c120,&DAT_0068c120);
  }
  local_4 = 0xffffffff;
  FUN_00490d20(param_2,local_18,local_14);
  ExceptionList = local_c;
  return;
}


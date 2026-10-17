
void FUN_0043fcb0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00456c60(param_1);
  if (iVar2 != 0) {
    FUN_0061c369(&DAT_0077d540,&DAT_0066c4e4);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x412d,s_Invalid_id_0066bbf4,
                 s_PresentId_0066c64c,&DAT_0077d540);
  }
  **(undefined4 **)(param_1 + 8) = param_2;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}


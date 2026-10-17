
undefined4 FUN_0043f920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00456670(param_1);
  if (iVar1 != 0) {
    FUN_0061c369(&DAT_0077d5c0,&DAT_0066c4e4);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x40ec,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((iVar1 == DAT_0068a8f0) && (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0xa4))) {
    return 0xffffffff;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x9c);
  if (iVar1 != DAT_0068a8f0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x9c);
  }
  return uVar2;
}


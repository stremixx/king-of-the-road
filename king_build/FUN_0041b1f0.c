
void FUN_0041b1f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_80 [128];
  
  iVar1 = FUN_00456690(DAT_0068bc18,DAT_0068bc1c,param_2,param_3,&DAT_0068a928);
  if (iVar1 != DAT_0068bc1c) {
    *param_1 = (iVar1 - DAT_0068bc18) / 0x68;
    return;
  }
  FUN_0061c369(local_80,s_Can_not_find_merchandise___x__x_0066c58c,param_2,param_3);
  FUN_00401010(0,200,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1639,local_80,&DAT_0068c120,
               &DAT_0068c120);
  *param_1 = -1;
  return;
}


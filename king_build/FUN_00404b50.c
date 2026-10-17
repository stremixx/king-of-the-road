
void FUN_00404b50(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 local_20 [32];
  
  for (piVar1 = DAT_0068be20; (piVar1 != DAT_0068be24 && (*(int *)(*piVar1 + 0x18) != param_2));
      piVar1 = piVar1 + 1) {
  }
  if (piVar1 == DAT_0068be24) {
    FUN_0061c369(local_20,&DAT_0066b8cc,param_2);
    FUN_00401010(0x4e,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2f7,
                 s_Can_not_find_town_with_id_0066b8b0,local_20,&DAT_0068c120);
  }
  *param_1 = (int)piVar1 - (int)DAT_0068be20 >> 2;
  return;
}


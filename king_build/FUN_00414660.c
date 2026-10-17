
void FUN_00414660(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  piVar1 = DAT_0068bf3c;
  piVar3 = DAT_0068bf38;
  while ((piVar3 != piVar1 && (cVar2 = FUN_004b6670(*piVar3 + 8,param_2), cVar2 == '\0'))) {
    piVar3 = piVar3 + 1;
  }
  if (piVar3 == DAT_0068bf3c) {
    FUN_00401010(5,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xe5b,s_Vehicle_not_found_0066c014,
                 param_2,&DAT_0068c120);
  }
  *param_1 = (int)piVar3 - (int)DAT_0068bf38 >> 2;
  return;
}


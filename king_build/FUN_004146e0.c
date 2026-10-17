
void FUN_004146e0(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  bool bVar6;
  
  for (piVar5 = DAT_0068bf38; piVar5 != DAT_0068bf3c; piVar5 = piVar5 + 1) {
    pbVar4 = *(byte **)(*piVar5 + 0x14);
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00414722:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00414727;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00414722;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00414727:
    if ((iVar3 == 0) && (param_3 == *(int *)(*piVar5 + 0x44))) break;
  }
  if (piVar5 == DAT_0068bf3c) {
    FUN_00401010(5,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xe66,s_Vehicle_not_found_0066c014,
                 param_2,&DAT_0068c120);
  }
  *param_1 = (int)piVar5 - (int)DAT_0068bf38 >> 2;
  return;
}


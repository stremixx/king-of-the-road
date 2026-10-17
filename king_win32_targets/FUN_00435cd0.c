
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00435cd0(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_20 [2];
  double local_18;
  int local_10;
  int local_c;
  
  puVar6 = &param_2;
  puVar7 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar4 = FUN_00423b20();
  iVar3 = param_7;
  iVar5 = param_6;
  uVar2 = param_2;
  if (iVar4 == 0) {
    iVar4 = FUN_00423b50();
    if (iVar4 != 0) goto LAB_00435d0b;
LAB_00435d3d:
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,uVar2,param_4,param_5,iVar5,iVar3,param_8
                );
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3835,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  else {
LAB_00435d0b:
    if ((((local_18 < _DAT_0064a678) || (_DAT_0064a670 < local_18)) || (local_10 < 0)) ||
       (local_c < 0)) goto LAB_00435d3d;
  }
  if ((-1 < (int)uVar2) && (uVar2 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar4 = *(int *)(DAT_0068be98 + uVar2 * 4);
    iVar1 = *(int *)(iVar4 + 0x78);
    if (iVar3 < *(int *)(iVar4 + 0x7c) - iVar1 >> 2) {
      iVar4 = (**(code **)(**(int **)(iVar1 + iVar3 * 4) + 0x18))();
      if (iVar5 < iVar4) goto LAB_00435dea;
    }
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3835,s_Invalid_Position_Id_0066bbe0,
                 &DAT_0068c120,&DAT_0068c120);
  }
LAB_00435dea:
  if (param_3 != -1) {
    puVar6 = (undefined4 *)(*(int *)(DAT_0068be60 + param_3 * 4) + 0x30);
    puVar7 = param_1;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    return param_1;
  }
  (**(code **)**(undefined4 **)(*(int *)(*(int *)(DAT_0068be98 + uVar2 * 4) + 0x78) + iVar3 * 4))
            (param_1,CONCAT44(param_5,param_4),iVar5);
  return param_1;
}


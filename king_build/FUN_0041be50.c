
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041be50(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar6 = param_2;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  local_20 = 0;
  uStack_1c = 0;
  iVar7 = DAT_0068bc18 + *param_2 * 0x68;
  puVar5 = &local_20;
  puVar4 = &local_18;
  puVar2 = &local_10;
  puVar3 = puVar2;
  uVar1 = param_3;
  FUN_0041d3f0(&param_1);
  FUN_0041bd70(puVar2,puVar3,puVar4,puVar5,iVar7,uVar1);
  *(ulonglong *)(piVar6 + 0xe) = CONCAT44(uStack_1c,local_20);
  uVar1 = extraout_ECX;
  if ((double)CONCAT44(uStack_1c,local_20) < _DAT_0064a668) {
    FUN_00401010(0,0x200,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1840,&DAT_0066c624,&DAT_0068c120,
                 &DAT_0068c120);
    uVar1 = extraout_ECX_00;
  }
  uVar9 = 1;
  uVar8 = 1;
  FUN_0041d3f0(&param_1);
  FUN_00471250(uVar1,piVar6,uVar8,uVar9);
  return;
}


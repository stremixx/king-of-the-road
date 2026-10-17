
void FUN_0047ff40(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint auStack_20 [5];
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = *(int *)(param_2 + 0x7c);
  iVar1 = *(int *)(param_2 + 0x78);
  iVar2 = (**(code **)(**(int **)(iVar1 + -4 + (iVar3 - iVar1 >> 2) * 4) + 0x18))();
  auStack_20[0] = *(uint *)(param_2 + 0xc);
  auStack_20[4] = iVar2 + -1;
  auStack_20[1] = *(uint *)(*(int *)(param_2 + 0x74) + 0x10);
  iStack_c = (iVar3 - iVar1 >> 2) + -1;
  auStack_20[2] = 0;
  auStack_20[3] = 0x3ff00000;
  uStack_8 = 0;
  uStack_4 = 0xffffffff;
  if (((((int)auStack_20[0] < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= auStack_20[0])) &&
      (((int)auStack_20[1] < 0 || ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= auStack_20[1])))) ||
     (((int)auStack_20[4] < 0 || (iStack_c < 0)))) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,auStack_20[0],0,0x3ff00000,auStack_20[4],
                 iStack_c,0);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x2f,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar4 = auStack_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


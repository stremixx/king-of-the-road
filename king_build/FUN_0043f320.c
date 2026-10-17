
void FUN_0043f320(undefined4 param_1,int param_2,float *param_3)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float local_b8;
  float local_b4;
  undefined4 local_74 [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dc8b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870();
  FUN_004018b0();
  local_c = 0;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x4093,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8);
  }
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x40ae);
  }
  else {
    cVar1 = FUN_00420980();
    pfVar3 = param_3;
    if (cVar1 == '\0') {
      FUN_0041ce10();
      FUN_00405ea0((double)local_b8,(double)local_b4);
      FUN_0041d3f0(&param_2);
      FUN_0043e9a0(param_1);
      FUN_0043f270((double)*pfVar3,(double)pfVar3[1],(double)pfVar3[2],(double)pfVar3[3],
                   (double)pfVar3[4],(double)pfVar3[5],(double)pfVar3[6],(double)pfVar3[7],
                   (double)pfVar3[8],(double)pfVar3[9],(double)pfVar3[10]);
      puVar4 = local_74;
      puVar5 = (undefined4 *)(param_2 + 0x228);
      for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_0043ec70();
      if (*(int *)(param_2 + 0x5c) == 1) {
        pfVar3 = (float *)FUN_0043f690();
        FUN_00405ea0((double)*pfVar3,(double)pfVar3[1]);
        FUN_0041d3f0();
        FUN_0043e5b0();
        FUN_00428ac0();
      }
      else if (*(int *)(param_2 + 0x5c) == 9) {
        FUN_00422300();
      }
    }
    else {
      FUN_0043f270((double)*param_3,(double)param_3[1],(double)param_3[2],(double)param_3[3],
                   (double)param_3[4],(double)param_3[5],(double)param_3[6],(double)param_3[7],
                   (double)param_3[8],(double)param_3[9],(double)param_3[10]);
      puVar4 = local_74;
      puVar5 = (undefined4 *)(param_2 + 0x228);
      for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  FUN_00401870();
  FUN_004018b0();
  ExceptionList = local_14;
  return;
}


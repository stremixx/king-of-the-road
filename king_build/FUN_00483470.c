
void FUN_00483470(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *unaff_EDI;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 auStack_230 [7];
  WCHAR local_214 [238];
  void *pvStack_38;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006403a6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  MultiByteToWideChar(0,0,&DAT_0066ef3c,-1,local_214,0x104);
  piVar3 = (int *)0x11;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_214);
  if (iVar1 < 0) {
    FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                 s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x2f4,s_Can_not_create_stream_0066ef24,
                 &DAT_0068c120,&DAT_0068c120);
  }
  puVar4 = (undefined4 *)0x0;
  iVar5 = 0;
  iStack_1c = 0;
  iVar1 = FUN_004837c0(0x40000,0,0);
  uVar2 = iVar5 - (int)puVar4;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *puVar4 = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = puVar4;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(puVar4);
    }
  }
  iVar5 = iVar1;
  FUN_00490d40(&stack0xfffffdb8,&DAT_0066eec0,&stack0xfffffdcc);
  iStack_1c._0_1_ = 1;
  FUN_004807a0(&stack0xfffffdb8);
  FUN_00481160(&stack0xfffffdb8);
  FUN_00481760(&stack0xfffffdb8);
  FUN_00482020(&stack0xfffffdb8);
  FUN_00482360(&stack0xfffffdb8);
  FUN_00482750(&stack0xfffffdb8);
  FUN_00482ab0(&stack0xfffffdb8);
  iStack_1c = (uint)iStack_1c._1_3_ << 8;
  FUN_00490d90(&stack0xfffffdb8,&stack0xfffffdcc);
  puVar4 = auStack_230;
  auStack_230[0] = 0;
  iVar1 = (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,iVar1,iVar5 - iVar1);
  if (iVar1 < 0) {
    FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                 s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x307,s_Saving_failed_0066ef14,
                 &DAT_0068c120,&DAT_0068c120);
  }
  (**(code **)(*piVar3 + 8))(piVar3);
  uVar2 = (int)param_1 - (int)puVar4;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *puVar4 = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = puVar4;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(puVar4);
    }
  }
  ExceptionList = pvStack_38;
  return;
}


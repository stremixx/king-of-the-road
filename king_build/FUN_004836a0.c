
void FUN_004836a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puStack_278;
  WCHAR *pWVar5;
  WCHAR local_208 [260];
  
  MultiByteToWideChar(0,0,&DAT_0066ef3c,-1,local_208,0x104);
  pWVar5 = local_208;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 < 0) {
    puStack_278 = &DAT_0068c120;
    FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                 s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x31a,s_Can_not_open_stream_0066ef58);
  }
  piVar4 = (int *)&stack0xfffffd98;
  puStack_278 = (undefined1 *)0x1;
  (**(code **)(*param_1 + 0x30))(param_1);
  piVar2 = (int *)FUN_00631d33(pWVar5);
  puStack_278 = (undefined1 *)0x0;
  piVar3 = piVar2;
  iVar1 = (**(code **)(*piVar4 + 0xc))(piVar4,piVar2,pWVar5,&puStack_278);
  if (iVar1 < 0) {
    FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                 s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x322,
                 s_Can_not_read_the_stream_0066ef40,&DAT_0068c120,&DAT_0068c120);
  }
  (**(code **)(*piVar3 + 8))(piVar3);
  FUN_00482b40(piVar2);
  FUN_00631d5c(piVar2);
  FUN_00477820();
  FUN_004789b0();
  FUN_004789f0();
  FUN_00482df0();
  FUN_004833f0();
  return;
}


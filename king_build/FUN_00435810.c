
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00435810(LPCSTR param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  LPSTR pCVar6;
  float10 fVar7;
  undefined1 local_26;
  undefined1 local_25;
  LPSTR local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d790;
  local_c = ExceptionList;
  PTR_DAT_0066fb04 = &DAT_006852c0;
  ExceptionList = &local_c;
  FUN_004a5460(&LAB_00401310);
  DAT_0068c07c = param_3;
  DAT_0068c078 = param_2;
  param_2 = CONCAT31(param_2._1_3_,0x20);
  FUN_0044a420(0x2000,&local_26);
  local_4 = 0;
  local_20 = (char *)FUN_004693c0(local_24,0x2000,&param_2);
  local_4 = 1;
  DVar2 = GetFullPathNameA(param_1,(int)local_20 - (int)local_24,local_24,(LPSTR *)0x0);
  if ((uint)((int)local_20 - (int)local_24) <= DVar2) {
    param_3 = CONCAT31(param_3._1_3_,0x20);
    FUN_0044a420(DVar2 + 2,&local_25);
    local_4._0_1_ = 2;
    local_14 = FUN_004693c0(local_18,DVar2 + 2,&param_3);
    uVar4 = local_14 - local_18;
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((uint)((int)local_1c - (int)local_24) < uVar4) {
      pcVar3 = (char *)FUN_00458d60(uVar4,local_18,local_14);
      if ((int)local_1c - (int)local_24 != 0) {
        FUN_0044b440(local_24,(int)local_1c - (int)local_24);
      }
      local_1c = pcVar3 + uVar4;
      local_24 = pcVar3;
    }
    else if ((uint)((int)local_20 - (int)local_24) < uVar4) {
      FUN_00407250(local_18,((int)local_20 - (int)local_24) + local_18,local_24);
      FUN_00407250(local_20 + (local_18 - (int)local_24),local_14,local_20);
    }
    else {
      FUN_00407250(local_18,local_14,local_24);
    }
    local_20 = local_24 + uVar4;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0044a450();
    GetFullPathNameA(param_1,(int)local_20 - (int)local_24,local_24,(LPSTR *)0x0);
  }
  pcVar3 = local_20;
  uVar4 = 0xffffffff;
  pCVar6 = local_24;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  pcVar5 = local_24 + (~uVar4 - 1);
  FUN_0046ecd0(local_20,local_20,pcVar5,param_1,0);
  local_20 = local_20 + ((int)pcVar5 - (int)pcVar3);
  if ((local_20 != local_24) && (local_20[-1] != '\\')) {
    param_1 = (LPCSTR)CONCAT31(param_1._1_3_,0x5c);
    if (local_20 == local_1c) {
      FUN_0044be90(local_20,&param_1);
    }
    else {
      FUN_004608a0(local_20,&param_1);
      local_20 = local_20 + 1;
    }
  }
  FUN_0044c100(&local_24);
  fVar7 = (float10)FUN_00401000();
  _DAT_0068c050 = (double)fVar7;
  FUN_004031f0();
  FUN_00406560();
  FUN_00403120();
  FUN_00402be0();
  FUN_004062a0();
  if (DAT_0068be60 == DAT_0068be64) {
    FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x37e7,s_No_nodes_were_defined_0066d384
                 ,&DAT_0068c120,&DAT_0068c120);
  }
  if (DAT_0068be98 == DAT_0068be9c) {
    FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x37eb,s_No_roads_were_defined_0066d36c
                 ,&DAT_0068c120,&DAT_0068c120);
  }
  FUN_00484390();
  FUN_004062d0();
  FUN_0040d110();
  FUN_0040c310();
  FUN_0040ce50();
  FUN_0042ead0();
  FUN_0042f5a0();
  FUN_00430310();
  FUN_00430560();
  pCVar6 = local_24;
  uVar4 = (int)local_1c - (int)local_24;
  if (uVar4 != 0) {
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *(undefined4 *)pCVar6 = *(undefined4 *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(LPSTR *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = pCVar6;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(local_24);
    }
  }
  ExceptionList = local_c;
  return 0;
}


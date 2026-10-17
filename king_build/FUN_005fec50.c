
void FUN_005fec50(char *param_1)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  undefined1 local_1a9;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  LPCSTR local_19c;
  LPCSTR local_198;
  LPCSTR local_194;
  HANDLE local_190;
  int local_18c;
  undefined4 local_188;
  int local_184;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  _WIN32_FIND_DATAA local_154;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0064932d;
  local_14 = ExceptionList;
  iVar4 = DAT_00722c9c - DAT_00722c98;
  local_19c = (LPCSTR)0x0;
  local_198 = (LPCSTR)0x0;
  local_194 = (LPCSTR)0x0;
  if (iVar4 == 0) {
    local_19c = (LPCSTR)0x0;
    ExceptionList = &local_14;
  }
  else {
    ExceptionList = &local_14;
    local_19c = (LPCSTR)FUN_0044b6e0(iVar4);
  }
  local_194 = local_19c + iVar4;
  local_c = 0;
  local_198 = local_19c;
  local_198 = (LPCSTR)FUN_00407250(DAT_00722c98,DAT_00722c9c,local_19c);
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_c = 1;
  FUN_0044c1c0(local_198,param_1,param_1 + ~uVar3);
  local_190 = FindFirstFileA(local_19c,&local_154);
  if (local_190 != (HANDLE)0xffffffff) {
    do {
      iVar5 = DAT_00722c9c - DAT_00722c98;
      iVar4 = 0;
      local_1a8 = 0;
      local_1a4 = 0;
      local_1a0 = 0;
      if (iVar5 != 0) {
        iVar4 = FUN_0044b6e0(iVar5);
      }
      local_1a0 = iVar5 + iVar4;
      local_c._0_1_ = 2;
      local_1a8 = iVar4;
      local_1a4 = iVar4;
      local_1a4 = FUN_00407250(DAT_00722c98,DAT_00722c9c,iVar4);
      uVar3 = 0xffffffff;
      local_c._0_1_ = 3;
      pCVar7 = local_154.cFileName;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pCVar7;
        pCVar7 = pCVar7 + 1;
      } while (cVar1 != '\0');
      FUN_0044c1c0(local_1a4,local_154.cFileName,local_154.cFileName + ~uVar3);
      FUN_0044a420(local_1a4 - local_1a8,&local_1a9);
      local_c._0_1_ = 4;
      local_188 = FUN_00407250(local_1a8,local_1a4,local_18c);
      local_c._0_1_ = 5;
      FUN_00488150();
      local_164 = 0x9999999a;
      local_160 = 0x3fb99999;
      local_15c = 0;
      local_158 = 0;
      FUN_00488110(4);
      local_c = CONCAT31(local_c._1_3_,6);
      if (DAT_00722c8c == DAT_00722c90) {
        FUN_005ff460(DAT_00722c8c,&local_18c);
      }
      else {
        FUN_005ff840(DAT_00722c8c,&local_18c);
        DAT_00722c8c = DAT_00722c8c + 0x38;
      }
      local_c._0_1_ = 3;
      if (local_184 - local_18c != 0) {
        FUN_0044b440(local_18c,local_184 - local_18c);
      }
      local_c = CONCAT31(local_c._1_3_,1);
      if (local_1a0 - local_1a8 != 0) {
        FUN_0044b440(local_1a8,local_1a0 - local_1a8);
      }
      BVar2 = FindNextFileA(local_190,&local_154);
    } while (BVar2 != 0);
    FindClose(local_190);
  }
  local_c = 0xffffffff;
  if ((int)local_194 - (int)local_19c != 0) {
    FUN_0044b440(local_19c,(int)local_194 - (int)local_19c);
  }
  ExceptionList = local_14;
  return;
}


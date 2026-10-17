
void FUN_00413ff0(void)

{
  char cVar1;
  undefined4 *puVar2;
  HANDLE hFindFile;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  CHAR *pCVar8;
  undefined4 *puVar9;
  undefined1 local_181;
  undefined4 *local_180;
  undefined4 *local_17c;
  undefined4 *local_178;
  int local_174;
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined2 local_160;
  LPCSTR local_15c;
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  _WIN32_FIND_DATAA local_14c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063c5bc;
  local_c = ExceptionList;
  local_180 = (undefined4 *)0x0;
  local_17c = (undefined4 *)0x0;
  local_178 = (undefined4 *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0044a420(DAT_0068aa2c - DAT_0068aa28,&local_181);
  local_158 = FUN_00407250(DAT_0068aa28,DAT_0068aa2c,local_15c);
  local_168 = DAT_0066c008;
  local_164 = DAT_0066c00c;
  local_160 = DAT_0066c010;
  uVar5 = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar7 = (char *)&local_168;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_0044c1c0(local_158,&local_168,(int)&local_168 + ~uVar5);
  hFindFile = FindFirstFileA(local_15c,&local_14c);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      local_174 = 0;
      local_170 = 0;
      local_16c = 0;
      uVar5 = 0xffffffff;
      local_4 = CONCAT31(local_4._1_3_,2);
      pCVar8 = local_14c.cFileName;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pCVar8;
        pCVar8 = pCVar8 + 1;
      } while (cVar1 != '\0');
      FUN_0044c1c0(0,local_14c.cFileName,local_14c.cFileName + ~uVar5);
      if (local_17c == local_178) {
        FUN_004525d0(local_17c,&DAT_0068aa28);
      }
      else {
        FUN_004611f0();
        local_17c = local_17c + 3;
      }
      FUN_0044c1c0(local_17c[-2],local_174,local_170);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_16c - local_174 != 0) {
        FUN_0044b440(local_174,local_16c - local_174);
      }
      BVar3 = FindNextFileA(hFindFile,&local_14c);
    } while (BVar3 != 0);
    FindClose(hFindFile);
  }
  puVar2 = local_17c;
  puVar9 = local_180;
  if (local_180 != local_17c) {
    iVar4 = 0;
    for (iVar6 = ((int)local_17c - (int)local_180) / 0xc; iVar6 != 1; iVar6 = iVar6 >> 1) {
      iVar4 = iVar4 + 1;
    }
    FUN_0045b360(local_180,local_17c,0,iVar4 * 2,local_150);
    FUN_0045b470(puVar9,puVar2,local_150);
  }
  puVar9 = local_180;
  if (local_180 != local_17c) {
    do {
      FUN_004132c0(*puVar9);
      puVar9 = puVar9 + 3;
    } while (puVar9 != local_17c);
  }
  uVar5 = local_154 - (int)local_15c;
  if (uVar5 != 0) {
    if (uVar5 < 0x81) {
      FUN_00401aa0();
      *(undefined4 *)local_15c = *(undefined4 *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
      *(LPCSTR *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = local_15c;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(local_15c);
    }
  }
  puVar2 = local_17c;
  local_4 = 3;
  for (puVar9 = local_180; puVar9 != puVar2; puVar9 = puVar9 + 3) {
    FUN_004497b0();
  }
  iVar6 = ((int)local_178 - (int)local_180) / 0xc;
  local_4 = 0xffffffff;
  if (iVar6 != 0) {
    FUN_0044b440(local_180,iVar6 * 0xc);
  }
  ExceptionList = local_c;
  return;
}


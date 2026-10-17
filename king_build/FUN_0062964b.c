
int FUN_0062964b(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  undefined1 local_1008 [4064];
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  
  FUN_0061d4f0();
  iVar7 = 0;
  iVar1 = FUN_00624d95();
  if ((iVar1 == -1) || (iVar1 = FUN_00624d95(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x62971c;
        FUN_00624d95();
        uStackY_20 = param_1;
        uStackY_24 = 0x629724;
        hFile = (HANDLE)FUN_0062844d();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)FUN_006204a3();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)FUN_006204ac();
          *pDVar6 = DVar5;
        }
      }
    }
    else {
      uStackY_20 = 0x6296ab;
      _memset(local_1008,0,0x1000);
      uStackY_20 = 0x8000;
      uStackY_24 = param_1;
      uStackY_28 = 0x6296b8;
      FUN_00629ab9();
      do {
        uStackY_20 = 0x6296d6;
        iVar1 = FUN_00624ba5();
        if (iVar1 == -1) {
          piVar2 = (int *)FUN_006204ac();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)FUN_006204a3();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      FUN_00629ab9();
    }
    uStackY_20 = 0x629762;
    FUN_00624d95();
  }
  return iVar7;
}


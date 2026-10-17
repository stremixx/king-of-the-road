
undefined4 FUN_006283ce(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_0077d7e0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_0077d6e0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_006855f8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0062842a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0062842a:
      *(undefined4 *)((&DAT_0077d6e0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_006204a3();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_006204ac();
  *puVar2 = 0;
  return 0xffffffff;
}


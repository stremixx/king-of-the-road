
undefined4 FUN_00628352(uint param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_0077d7e0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_0077d6e0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_006855f8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_006283ab;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_006283ab:
      *(HANDLE *)((&DAT_0077d6e0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_006204a3();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_006204ac();
  *puVar1 = 0;
  return 0xffffffff;
}



undefined4 FUN_006209b1(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0062844d(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0062844d(2);
      iVar2 = FUN_0062844d(1);
      if (iVar2 == iVar1) goto LAB_006209ff;
    }
    hObject = (HANDLE)FUN_0062844d(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00620a01;
    }
  }
LAB_006209ff:
  DVar4 = 0;
LAB_00620a01:
  FUN_006283ce(param_1);
  *(undefined1 *)((&DAT_0077d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00620430(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


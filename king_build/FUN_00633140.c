
void FUN_00633140(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  HWND pHVar2;
  int iVar3;
  tagRECT local_14;
  
  if (((((param_3 & 0x10000000) == 0) && (uVar1 = FUN_00632d9a(), (uVar1 & 0x50000000) == 0)) &&
      (GetWindowRect((HWND)param_1[7],&local_14), *param_2 == local_14.left)) &&
     (param_2[1] == local_14.top)) {
    pHVar2 = GetWindow((HWND)param_1[7],4);
    iVar3 = FUN_00633451(pHVar2);
    if ((iVar3 != 0) && (iVar3 = FUN_00632e9c(), iVar3 != 0)) {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0xac))();
    if (iVar3 != 0) {
      FUN_006352b8(0);
    }
  }
  return;
}



undefined4 __thiscall FUN_006380ac(int param_1,HWND param_2,LPARAM param_3)

{
  LPCSTR lpString2;
  LPARAM lParam;
  int iVar1;
  CHAR local_214 [520];
  uint local_c;
  HGLOBAL local_8;
  
  UnpackDDElParam(1000,param_3,&local_c,(PUINT_PTR)&local_8);
  lpString2 = GlobalLock(local_8);
  lstrcpynA(local_214,lpString2,0x208);
  GlobalUnlock(local_8);
  lParam = ReuseDDElParam(param_3,1000,0x3e4,0x8000,(UINT_PTR)local_8);
  PostMessageA(param_2,0x3e4,*(WPARAM *)(param_1 + 0x1c),lParam);
  iVar1 = FUN_00632e9c();
  if (iVar1 != 0) {
    iVar1 = FUN_00639a37();
    (**(code **)(**(int **)(iVar1 + 4) + 0x94))(local_214);
  }
  return 0;
}


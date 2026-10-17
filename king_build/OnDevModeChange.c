
/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CWnd::OnDevModeChange(char *)
    protected: void __thiscall CWnd::OnDevModeChange(wchar_t *)
   
   Library: Visual Studio 2003 Release */

void __thiscall OnDevModeChange(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00639a37();
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(*(int *)(iVar1 + 4) + 0x1c) == param_1)) {
    FUN_00631ea7(param_2);
  }
  uVar2 = FUN_00632d9a();
  if ((uVar2 & 0x40000000) == 0) {
    iVar1 = FUN_00633383();
    FUN_00634a9e(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar1 + 4),
                 *(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),1,1);
  }
  return;
}


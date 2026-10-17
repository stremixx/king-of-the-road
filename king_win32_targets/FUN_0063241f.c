
bool __thiscall FUN_0063241f(int param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if ((iVar3 != 0) && (*(HWND *)(iVar3 + 0x1c) != (HWND)0x0)) {
      BVar1 = IsWindowVisible(*(HWND *)(iVar3 + 0x1c));
      if (BVar1 != 0) {
        FUN_00633290(iVar3,*(undefined4 *)(iVar3 + 0x1c),0x363,1,0);
        FUN_00634a9e(*(undefined4 *)(iVar3 + 0x1c),0x363,1,0,1,1);
      }
    }
    FUN_00639a37();
    iVar2 = FUN_0063a41d(&LAB_00639396);
    for (iVar2 = *(int *)(iVar2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x54)) {
      if ((*(int *)(iVar2 + 0x1c) != 0) && (iVar2 != iVar3)) {
        if (*(int *)(iVar2 + 0x88) == 0) {
          FUN_00632e75(0);
        }
        BVar1 = IsWindowVisible(*(HWND *)(iVar2 + 0x1c));
        if ((BVar1 != 0) || (-1 < *(int *)(iVar2 + 0x88))) {
          FUN_00633290(iVar2,*(undefined4 *)(iVar2 + 0x1c),0x363,1,0);
          FUN_00634a9e(*(undefined4 *)(iVar2 + 0x1c),0x363,1,0,1,1);
        }
        if (0 < *(int *)(iVar2 + 0x88)) {
          FUN_00632e75(*(int *)(iVar2 + 0x88));
        }
        *(undefined4 *)(iVar2 + 0x88) = 0xffffffff;
      }
    }
  }
  else {
    FUN_00639a37();
    iVar3 = FUN_0063a41d(&LAB_00639396);
    if (*(int *)(iVar3 + 0x10) == 0) {
      FUN_00635ed0();
      FUN_00635ed9(1);
    }
  }
  return param_2 < 0;
}


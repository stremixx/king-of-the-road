
void __thiscall FUN_006375f1(int *param_1,int param_2)

{
  HWND pHVar1;
  int iVar2;
  HWND pHVar3;
  
  if ((param_2 == 0) || ((*(byte *)(param_1 + 9) & 4) == 0)) {
    pHVar1 = GetParent((HWND)param_1[7]);
    iVar2 = FUN_00633451(pHVar1);
    if (iVar2 == 0) {
      if (param_2 == 0) {
        if (param_1[0x28] == 0) {
          *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x80;
          (**(code **)(*param_1 + 0x88))();
        }
      }
      else {
        if ((param_1[9] & 0x80U) != 0) {
          param_1[9] = param_1[9] & 0xffffff7f;
          (**(code **)(*param_1 + 0x8c))();
          pHVar1 = (HWND)param_1[7];
          pHVar3 = GetActiveWindow();
          if (pHVar3 == pHVar1) {
            SendMessageA(pHVar1,6,1,0);
          }
        }
        if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
          SendMessageA((HWND)param_1[7],0x86,1,0);
        }
      }
      FUN_006376a7((-(uint)(param_2 != 0) & 0xfffffff0) + 0x20);
    }
  }
  else {
    FUN_00632eb7(0);
    SetFocus((HWND)0x0);
  }
  return;
}


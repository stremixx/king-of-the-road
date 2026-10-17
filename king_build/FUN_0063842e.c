
void __thiscall FUN_0063842e(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  
  iVar1 = FUN_006349e4();
  if (((int *)param_1[0x1a] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x7c))(param_2,param_3,param_4), iVar2 != 0)) {
    return;
  }
  if (param_3 == 0xffff) {
    param_1[9] = param_1[9] & 0xffffffbf;
    if (*(int *)(iVar1 + 0x50) == 0) {
      param_1[0x24] = 0xe001;
    }
    else {
      param_1[0x24] = 0xe002;
    }
    SendMessageA((HWND)param_1[7],0x362,param_1[0x24],0);
    iVar1 = (**(code **)(*param_1 + 0xd4))();
    if (iVar1 != 0) {
      UpdateWindow(*(HWND *)(iVar1 + 0x1c));
    }
    goto LAB_00638505;
  }
  if ((param_2 == 0) || ((param_3 & 0x810) != 0)) {
    param_1[0x24] = 0;
  }
  else {
    if ((param_2 < 0xf000) || (0xf1ef < param_2)) {
      if (0xfeff < param_2) {
        param_1[0x24] = 0xef1f;
        goto LAB_00638501;
      }
    }
    else {
      param_2 = (param_2 - 0xf000 >> 4) + 0xef00;
    }
    param_1[0x24] = param_2;
  }
LAB_00638501:
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x40;
LAB_00638505:
  if (param_1[0x24] != param_1[0x25]) {
    pHVar3 = GetParent((HWND)param_1[7]);
    iVar1 = FUN_00633451(pHVar3);
    if (iVar1 != 0) {
      PostMessageA((HWND)param_1[7],0x36a,0,0);
    }
  }
  return;
}


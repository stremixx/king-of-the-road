
undefined4 FUN_006326ca(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HWND hWnd;
  undefined4 local_24 [7];
  int *local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 != 2) {
      return 0;
    }
    iVar1 = FUN_00633451(*param_2);
    if (((((iVar1 != 0) && (iVar1 = FUN_006349e4(), iVar1 != 0)) &&
         (iVar2 = FUN_0063580b(), iVar2 != 0)) &&
        ((*(int *)(iVar1 + 0x50) != 0 &&
         (iVar1 = FUN_0061bb81(), *(int *)((int)local_8 + 0x1c) != 0)))) &&
       (((param_2[1] == 0x100 && (param_2[2] == 0xd)) || (param_2[1] == 0x202)))) {
      hWnd = *(HWND *)(iVar1 + 0x1c);
      goto LAB_00632754;
    }
  }
  iVar1 = FUN_0061bb81();
  if (((0x332 < DAT_0072d02c) || (iVar1 == 0)) || (iVar2 = FUN_0063267f(param_2), iVar2 == 0)) {
    if ((((param_1 != 0) || (local_8[8] == 0)) || ((uint)param_2[1] < 0x100)) ||
       ((0x108 < (uint)param_2[1] ||
        (iVar1 = FUN_0063a41d(&LAB_0063949c), *(int *)(iVar1 + 0xbc) != 0)))) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0xbc) = 1;
    puVar3 = local_24;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar2 = FUN_00632e9c();
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*local_8 + 0x58))(local_24), iVar2 != 0)) {
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      return 1;
    }
    *(undefined4 *)(iVar1 + 0xbc) = 0;
    return 0;
  }
  hWnd = *(HWND *)(iVar1 + 0x1c);
LAB_00632754:
  SendMessageA(hWnd,0x111,0xe146,0);
  return 1;
}


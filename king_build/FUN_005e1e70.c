
undefined4 __thiscall FUN_005e1e70(int param_1,int param_2)

{
  HDC pHVar1;
  undefined4 uVar2;
  int iVar3;
  tagPOINT local_3c;
  tagPOINT local_34;
  uint local_28;
  HDC local_24;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006362ca();
  local_4 = 0;
  if (*(int *)(*(int *)(param_1 + 0xbc) + 4) == 0) {
    local_4 = 0xffffffff;
    FUN_006363e9();
    ExceptionList = local_c;
    return 0;
  }
  if (param_2 == 0) {
    pHVar1 = (HDC)0x0;
  }
  else {
    pHVar1 = *(HDC *)(param_2 + 4);
  }
  pHVar1 = CreateCompatibleDC(pHVar1);
  FUN_00636381(pHVar1);
  uVar2 = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4);
  }
  FUN_006364ac(local_28,uVar2);
  iVar3 = GetMapMode(*(HDC *)(param_2 + 8));
  FUN_006365a3(iVar3);
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_1c);
  local_34.x = local_1c.right - local_1c.left;
  local_34.y = local_1c.bottom - local_1c.top;
  DPtoLP(local_24,&local_34,1);
  local_3c.x = 0;
  local_3c.y = 0;
  DPtoLP(local_24,&local_3c,1);
  BitBlt(*(HDC *)(param_2 + 4),local_3c.x,local_3c.y,local_34.x,local_34.y,
         (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x2c) & local_28),local_3c.x,local_3c.y,
         0xcc0020);
  local_4 = 0xffffffff;
  FUN_006363e9();
  ExceptionList = local_c;
  return 1;
}


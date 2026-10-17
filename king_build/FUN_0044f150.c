
void __fastcall FUN_0044f150(int *param_1)

{
  int iVar1;
  int iVar2;
  LONG LVar3;
  
  switch((char)param_1[2]) {
  case '\0':
    iVar1 = param_1[4];
    if (((param_1[5] != iVar1) && (iVar1 != 0)) && (*param_1 + 1 != 0)) {
      FUN_0044b440(iVar1,*param_1 + 1);
    }
    iVar1 = param_1[5];
    iVar2 = FUN_0045a150(*param_1);
    if (iVar2 != 0) {
      FUN_0044b440(iVar1,iVar2);
    }
    FUN_0044b440(param_1,0x18);
    return;
  case '\x01':
    if ((param_1[4] != 0) && (*param_1 + 1 != 0)) {
      FUN_0044b440(param_1[4],*param_1 + 1);
    }
    LVar3 = InterlockedDecrement((LONG *)(param_1[5] + 4));
    if (LVar3 == 0) {
      FUN_0044f150();
    }
    FUN_0044b580();
    FUN_0044b440(param_1,0x1c);
    return;
  case '\x02':
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = param_1 + -1;
    }
    FUN_00459f00();
    FUN_0044b440(param_1,0x28);
    break;
  case '\x03':
    if ((param_1[4] != 0) && (*param_1 + 1 != 0)) {
      FUN_0044b440(param_1[4],*param_1 + 1);
    }
    if (((char)param_1[6] != '\0') && ((undefined4 *)param_1[5] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[5])(1);
    }
    FUN_0044b440(param_1,0x1c);
    return;
  }
  return;
}


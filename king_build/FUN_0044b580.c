
void __fastcall FUN_0044b580(int *param_1)

{
  int iVar1;
  LONG LVar2;
  
  LVar2 = InterlockedDecrement(param_1 + 1);
  if (LVar2 == 0) {
    switch((char)param_1[2]) {
    case '\0':
      iVar1 = param_1[4];
      if (((param_1[5] != iVar1) && (iVar1 != 0)) && (*param_1 + 1 != 0)) {
        FUN_0044b440(iVar1,*param_1 + 1);
      }
      FUN_0045a9e0(param_1[5],*param_1);
      FUN_0044b440(param_1,0x18);
      return;
    case '\x01':
      if ((param_1[4] != 0) && (*param_1 + 1 != 0)) {
        FUN_0044b440(param_1[4],*param_1 + 1);
      }
      FUN_0044b580();
      FUN_0044b580();
      FUN_0044b440(param_1,0x1c);
      return;
    case '\x02':
      if (param_1 != (int *)0x0) {
        FUN_00459f00();
        FUN_0044b440(param_1 + -1,0x28);
        return;
      }
      FUN_00459f00();
      FUN_0044b440(0,0x28);
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
  }
  return;
}


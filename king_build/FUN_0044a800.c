
int * __thiscall FUN_0044a800(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LONG LVar4;
  
  iVar3 = FUN_0044f2e0(*param_1,param_2,param_3);
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (LVar4 = InterlockedDecrement(piVar1 + 1), LVar4 == 0)) {
    switch((char)piVar1[2]) {
    case '\0':
      iVar2 = piVar1[4];
      if (((piVar1[5] != iVar2) && (iVar2 != 0)) && (*piVar1 + 1 != 0)) {
        FUN_0044b440(iVar2,*piVar1 + 1);
      }
      FUN_0045a9e0(piVar1[5],*piVar1);
      FUN_0044b440(piVar1,0x18);
      *param_1 = iVar3;
      return param_1;
    case '\x01':
      if ((piVar1[4] != 0) && (*piVar1 + 1 != 0)) {
        FUN_0044b440(piVar1[4],*piVar1 + 1);
      }
      FUN_0044b580();
      FUN_0044b580();
      FUN_0044b440(piVar1,0x1c);
      *param_1 = iVar3;
      return param_1;
    case '\x02':
      FUN_00459f00();
      FUN_0044b440(piVar1 + -1,0x28);
      break;
    case '\x03':
      if ((piVar1[4] != 0) && (*piVar1 + 1 != 0)) {
        FUN_0044b440(piVar1[4],*piVar1 + 1);
      }
      if (((char)piVar1[6] != '\0') && ((undefined4 *)piVar1[5] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)piVar1[5])(1);
      }
      FUN_0044b440(piVar1,0x1c);
      *param_1 = iVar3;
      return param_1;
    }
  }
  *param_1 = iVar3;
  return param_1;
}


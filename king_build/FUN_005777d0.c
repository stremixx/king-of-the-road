
int FUN_005777d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  CHAR aCStack_100 [256];
  
  iVar2 = -0x7ff8ffeb;
  if ((DAT_006f3ae8 != (int *)0x0) && (DAT_006f3ae0 != 0)) {
    if (param_1 == 0) {
      FUN_00576420(s_JOYSTICK_joySetAutoCenter___OFF_0067baa8);
    }
    else {
      FUN_00576420(s_JOYSTICK_joySetAutoCenter___ON_0067bacc);
    }
    (**(code **)(*DAT_006f3ae8 + 0x20))(DAT_006f3ae8);
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x18))(DAT_006f3ae8,9,&stack0xfffffee8);
    (**(code **)(*DAT_006f3ae8 + 0x1c))(DAT_006f3ae8);
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  uVar1 = 0;
  if (iVar2 < -0x7ff8ffea) {
    if (iVar2 == -0x7ff8ffeb) {
      uVar1 = 3;
    }
    else if (iVar2 == -0x7fffbfff) {
      uVar1 = 5;
    }
    else if (iVar2 == -0x7ff8fffe) {
      uVar1 = 4;
    }
  }
  else if (iVar2 == -0x7ff8ffa9) {
    uVar1 = 2;
  }
  else if (iVar2 == 1) {
    uVar1 = 1;
  }
  wsprintfA(aCStack_100,s_JOYSTICK_SetProperty__DIPROP_AUT_0067ba68,iVar2,uVar1);
  FUN_00576420(aCStack_100);
  return iVar2;
}


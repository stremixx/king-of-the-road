
undefined4 FUN_00577900(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_64 [100];
  
  if ((DAT_006f3ae8 != (int *)0x0) && (DAT_006f3ae0 != 0)) {
    FUN_0061c369(local_64,s_JOYSTICK_joySendFFBCommand____08_0067baec,param_1);
    FUN_00576420(local_64);
    uVar1 = (**(code **)(*DAT_006f3ae8 + 0x58))(DAT_006f3ae8,param_1);
    return uVar1;
  }
  return 0x80070015;
}


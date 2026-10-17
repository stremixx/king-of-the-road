
int FUN_00577690(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (DAT_006f3ae8 == (int *)0x0) {
    return 1;
  }
  if (DAT_006f3b04 != (code *)0x0) {
    FUN_00576420(s_JOYSTICK_AcquireJoystick___acqJo_0067ba40);
    (*DAT_006f3b04)(param_1);
  }
  if (param_1 == 0) {
    FUN_00576420(s_JOYSTICK_AcquireJoystick___UNACQ_0067b9f0);
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x20))(DAT_006f3ae8);
  }
  else {
    FUN_00576420(s_JOYSTICK_AcquireJoystick___ACQUI_0067ba18);
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x1c))(DAT_006f3ae8);
  }
  if (DAT_006f3b08 != (code *)0x0) {
    FUN_00576420(s_JOYSTICK_AcquireJoystick___acqJo_0067b9c8);
    (*DAT_006f3b08)(param_1);
  }
  FUN_0061c369(&stack0xffffff98,s_JOYSTICK_AcquireJoystick___resul_0067b9a0,iVar2);
  if (iVar2 < -0x7ff8ffa8) {
    if (iVar2 == -0x7ff8ffa9) {
      pcVar6 = s__DIERR_INVALIDPARAM__0067b954;
    }
    else if (iVar2 == -0x7ff8fffb) {
      pcVar6 = s__DIERR_OTHERAPPHASPRIO___0067b96c;
    }
    else {
      if (iVar2 != -0x7ff8ffeb) goto LAB_005777b0;
      pcVar6 = s__DIERR_NOTINITIALIZED__0067b988;
    }
  }
  else if (iVar2 == 0) {
    pcVar6 = s__DI_OK__0067b934;
  }
  else {
    if (iVar2 != 1) goto LAB_005777b0;
    pcVar6 = s__S_FALSE__DI_OK__0067b940;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = &stack0xffffff98;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
LAB_005777b0:
  FUN_00576420(&stack0xffffff98);
  return iVar2;
}



void __fastcall FUN_0053d960(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(DAT_006cdbcc + 0x524) == 0) || (*(int *)(DAT_006cdbcc + 0x524) == 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar2 = FUN_005ee8e0(0,s_GreenSvetKey_00678214);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_005ee8e0(0,s_RedSvetKey_00678208);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 0x40000000;
  *(undefined4 *)(param_1 + 0x3c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x40) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar2 = FUN_005eea00(s_alarmSound_006781fc);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  if (DAT_006d0fd8 != 0) {
    if ((*(byte *)(DAT_006d0fd8 + 0x57c) & 1) == 0) {
      if ((*(int *)(DAT_006d0fd8 + 0x268) != 0) &&
         (iVar1 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460), iVar1 != 0)) {
        *(undefined1 *)(iVar1 + 0x2700) = 2;
      }
    }
    else {
      FUN_0053dc00(0);
      if ((*(int *)(DAT_006d0fd8 + 0x268) != 0) &&
         (iVar1 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460), iVar1 != 0)) {
        *(undefined1 *)(iVar1 + 0x2700) = 0;
        *(undefined4 *)(param_1 + 0x24) = 1;
        FUN_0053dc00(1);
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  FUN_0053dc00(1);
  return;
}


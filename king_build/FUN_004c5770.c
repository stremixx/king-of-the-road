
void FUN_004c5770(void)

{
  uint uVar1;
  
  if (DAT_006951a8 != (undefined4 *)0x0) {
    uVar1 = 0;
    do {
      (**(code **)(*(int *)(uVar1 + (int)DAT_006951a8) + 0x24))();
      uVar1 = uVar1 + 0x74;
    } while (uVar1 < 0x2d50);
    if (DAT_006951a8 != (undefined4 *)0x0) {
      (**(code **)*DAT_006951a8)(3);
    }
    DAT_006951a8 = (undefined4 *)0x0;
  }
  return;
}


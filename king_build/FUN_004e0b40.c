
void FUN_004e0b40(short *param_1)

{
  int iVar1;
  
  if (*param_1 == 0x100) {
    switch(param_1[3]) {
    case 0x1b:
      FUN_004843e0();
    case 0x13:
      FUN_005dfc70(param_1);
      return;
    case 0x70:
    case 0x71:
    case 0x72:
      iVar1 = FUN_0050b9c0();
      if (iVar1 != 0) {
        return;
      }
      FUN_00532080(param_1);
      return;
    case 0x74:
    case 0x75:
    case 0x76:
      if (DAT_00695ba0 != 0) {
        FUN_005dfc70(param_1);
      }
    }
  }
  FUN_00532080(param_1);
  return;
}


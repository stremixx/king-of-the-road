
void __fastcall FUN_005f4100(undefined4 *param_1)

{
  int iVar1;
  
  switch(*param_1) {
  case 1:
  case 2:
    FUN_00631d5c(param_1[2]);
    return;
  case 3:
  case 4:
    FUN_00631d5c(param_1[2]);
    return;
  case 5:
    FUN_00631d5c(param_1[2]);
    break;
  case 6:
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      FUN_0061ccb5(iVar1,0x30,*(undefined4 *)(iVar1 + -4),&LAB_005f4190);
      FUN_00631d5c(iVar1 + -4);
      return;
    }
    break;
  case 7:
    FUN_00631d5c(param_1[2]);
    return;
  }
  return;
}



void __fastcall FUN_00565c60(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0xcb0) == 0) && (iVar1 = *(int *)(param_1 + 0xca4), iVar1 != 6)) &&
      (iVar1 != 5)) && (iVar1 != 10)) {
    iVar1 = FUN_005656f0();
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x51d0) != 0)) &&
       ((*(int *)(param_1 + 0xd10) == 0 || (*(int *)(param_1 + 0xcb0) == 0)))) {
      *(undefined4 *)(param_1 + 0xd10) = 1;
      *(int *)(param_1 + 0xcb0) = iVar1;
      *(undefined4 *)(param_1 + 0xcb4) = 0;
    }
  }
  return;
}


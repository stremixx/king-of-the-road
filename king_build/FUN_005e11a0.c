
void __fastcall FUN_005e11a0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0xa4))();
  iVar1 = param_1[0x51];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xbdc) != 0)) {
    *(undefined4 *)(iVar1 + 0xbdc) = 0;
    param_1[0x55] = 1;
  }
  param_1[0x54] = 0;
  return;
}


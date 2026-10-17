
undefined4 FUN_00630ed8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00639a37();
  *(char *)(iVar1 + 0x14) = (char)param_1;
  if (param_1 == 0) {
    FUN_0061ffca(0xfffffffd);
  }
  return 1;
}


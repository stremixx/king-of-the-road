
undefined4 __thiscall FUN_005f2c90(int param_1,undefined4 param_2)

{
  int iVar1;
  char local_40 [64];
  
  FUN_005e4d00(param_2);
  FUN_0061d8bf(local_40,0x20,1,param_2);
  iVar1 = _strncmp(local_40,&DAT_0067ea60,2);
  if (iVar1 == 0) {
    FUN_005d1d00(local_40,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    FUN_005d1d00(local_40,param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  FUN_0061d8bf(local_40,0x20,1,param_2);
  FUN_005d1d00(local_40,param_1 + 0x30);
  FUN_005f8920(param_2);
  return 1;
}


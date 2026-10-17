
undefined4 __thiscall FUN_005c2900(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((param_2 % 10) * 0x20 + param_1 + 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) == param_2) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return *(undefined4 *)(iVar1 + 0x14);
}


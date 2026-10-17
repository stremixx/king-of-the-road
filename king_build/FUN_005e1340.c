
int __thiscall FUN_005e1340(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_10 [16];
  
  iVar2 = *(int *)(param_1 + 0xf4);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(byte *)(iVar2 + 0x10) & 2) != 0) {
      FUN_005b5dc0(local_10);
      iVar1 = FUN_005b59e0(param_2,param_3);
      if (iVar1 != 0) {
        return iVar2;
      }
    }
    iVar2 = FUN_0062a160();
  } while( true );
}



void FUN_00594340(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = DAT_006f5610;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    iVar3 = FUN_00594300(param_1);
    if (iVar3 == 0) {
      puVar1 = (undefined4 *)*puVar2;
      FUN_005942a0();
      if (puVar2 != (undefined4 *)0x0) {
        FUN_005942d0();
        FUN_00631d5c(puVar2);
      }
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
    }
  }
  return;
}


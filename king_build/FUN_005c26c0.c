
void __fastcall FUN_005c26c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(param_1 + 8);
  iVar4 = 10;
  do {
    puVar1 = (undefined4 *)*puVar3;
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      FUN_005d1860();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    puVar3 = puVar3 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


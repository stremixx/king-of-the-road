
void __fastcall FUN_005d9f60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x1d4) != 0) {
    iVar1 = *(int *)(param_1 + 0x1e4);
    if (iVar1 != 0) {
      FUN_005e3a70();
      FUN_00631d5c(iVar1);
    }
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
      return;
    }
    if (*(int *)(DAT_007206b0 + 0x158) != 0) {
      FUN_005fc580();
    }
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x1d4) + 8);
    while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar3[2];
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
    if (*(undefined4 **)(param_1 + 0x1d4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1d4))(1);
    }
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    if (DAT_0071d7a4 != 0) {
      FUN_005d1a20();
    }
  }
  return;
}


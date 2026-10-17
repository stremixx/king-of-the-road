
void __thiscall FUN_00555390(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)(&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c]) {
    puVar1 = (undefined4 *)(param_1 + 0x28f0);
    do {
      FUN_00501410(iVar2 + 3,param_2,*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < (int)(&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c]);
  }
  FUN_004eaf20(0x3f800000);
  return;
}


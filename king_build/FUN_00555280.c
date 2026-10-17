
void __thiscall FUN_00555280(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (0 < (int)(&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c]) {
    puVar2 = (undefined4 *)(param_1 + 0x2930);
    iVar3 = 0x13;
    do {
      FUN_00501410(iVar3 + -8,param_2,puVar2[-8]);
      FUN_00501410(iVar3,param_2,*puVar2);
      puVar2 = puVar2 + 1;
      iVar1 = iVar3 + -0x12;
      iVar3 = iVar3 + 1;
    } while (iVar1 < (int)(&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c]);
  }
  FUN_004eaf20(0x3f800000);
  FUN_004eaf20(0x3f800000);
  return;
}


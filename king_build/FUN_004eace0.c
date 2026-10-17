
void __fastcall FUN_004eace0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    puVar2[-6] = 0;
    puVar2[-3] = 0x3f800000;
    *puVar2 = 0x3f800000;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  return;
}


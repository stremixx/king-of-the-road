
void __fastcall FUN_0052f780(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x127;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (undefined4 *)(param_1 + 0x250);
  iVar3 = 10;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0052f7b0();
  return;
}


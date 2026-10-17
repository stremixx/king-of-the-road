
void __fastcall FUN_005b9950(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined1 *)(param_1 + 0x19);
  do {
    uVar1 = (undefined1)iVar2;
    puVar3[-1] = uVar1;
    *puVar3 = uVar1;
    puVar3[1] = uVar1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar2 < 0x100);
  return;
}


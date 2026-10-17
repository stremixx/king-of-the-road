
void __thiscall FUN_005b9970(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar1 = (undefined1 *)(param_1 + 0x18);
  iVar3 = 0x100;
  puVar2 = (undefined1 *)(param_2 + 0x1a);
  do {
    *puVar1 = puVar1[param_2 - param_1];
    puVar1[1] = puVar2[-1];
    puVar1[2] = *puVar2;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 3;
  } while (iVar3 != 0);
  return;
}



void __fastcall FUN_005903e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x252c)) {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x2530) + iVar2);
      FUN_005e10c0(*puVar1,puVar1[1]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 0x252c));
  }
  return;
}


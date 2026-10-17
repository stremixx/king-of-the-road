
int __fastcall FUN_005555c0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  puVar2 = (uint *)(*(int *)(param_1 + 0x2540) + 4);
  iVar5 = 9;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 5;
    uVar3 = (int)uVar1 >> 0x1f;
    iVar4 = iVar4 + ((uVar1 ^ uVar3) - uVar3);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return iVar4;
}


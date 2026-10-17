
void __thiscall FUN_00545a30(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = 0;
  iVar5 = 9;
  do {
    pbVar1 = (byte *)(iVar4 + param_2);
    iVar4 = iVar4 + 1;
    *(uint *)(*(int *)(param_1 + 0x2540) + 4 + iVar2) = (uint)*pbVar1;
    iVar2 = iVar2 + 0x14;
  } while (iVar2 < 0xb4);
  iVar2 = 8;
  puVar3 = (uint *)(param_1 + 0x5280);
  do {
    pbVar1 = (byte *)(iVar5 + param_2);
    iVar5 = iVar5 + 1;
    *puVar3 = (uint)*pbVar1;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x28b0) = *(undefined4 *)(iVar5 + param_2);
  return;
}


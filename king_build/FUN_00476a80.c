
undefined4 FUN_00476a80(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x204) != 0) {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)(iVar2 + param_2);
      puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x204) + 0x10) + iVar2);
      iVar2 = iVar2 + 0x10;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
    } while (iVar2 < 0x130);
    return 0;
  }
  return 0xffffffff;
}


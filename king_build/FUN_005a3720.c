
void __thiscall FUN_005a3720(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_005f1800(param_2,0);
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  *puVar1 = *(undefined4 *)(param_2 + 0x24);
  puVar1[1] = *(undefined4 *)(param_2 + 0x28);
  puVar1[2] = *(undefined4 *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x20);
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  *(undefined4 *)(iVar2 + 0x14) = *puVar1;
  *(undefined4 *)(iVar2 + 0x18) = puVar1[1];
  *(undefined4 *)(iVar2 + 0x1c) = puVar1[2];
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  return;
}


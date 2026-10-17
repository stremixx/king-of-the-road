
void __thiscall FUN_00545bb0(int param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0xb;
  puVar1 = (undefined4 *)(param_1 + 0x5518);
  puVar2 = (undefined4 *)(param_1 + 0x5494);
  do {
    puVar1[-0x2c] = (uint)*param_2;
    *puVar2 = *(undefined4 *)(param_2 + 1);
    iVar3 = iVar3 + -1;
    puVar2[1] = *(undefined4 *)(param_2 + 5);
    puVar2[2] = *(undefined4 *)(param_2 + 9);
    *puVar1 = *(undefined4 *)(param_2 + 0xd);
    param_2 = param_2 + 0x11;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar3 != 0);
  return;
}



int __thiscall FUN_0044a510(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_10;
  
  local_10 = (*(int *)(param_1 + 4) - param_3) / 0x68;
  iVar3 = param_2;
  if (0 < local_10) {
    puVar2 = (undefined4 *)(param_3 + 0x18);
    do {
      FUN_0040c060(puVar2 + -6);
      *(undefined4 *)(iVar3 + 0x10) = puVar2[-2];
      *(undefined4 *)(iVar3 + 0x14) = puVar2[-1];
      *(undefined4 *)((param_2 - param_3) + (int)puVar2) = *puVar2;
      *(undefined4 *)((param_2 - param_3) + 4 + (int)puVar2) = puVar2[1];
      *(undefined4 *)(iVar3 + 0x20) = puVar2[2];
      *(undefined4 *)(iVar3 + 0x24) = puVar2[3];
      *(undefined4 *)(iVar3 + 0x28) = puVar2[4];
      *(undefined4 *)(iVar3 + 0x2c) = puVar2[5];
      *(undefined4 *)(iVar3 + 0x30) = puVar2[6];
      *(undefined4 *)(iVar3 + 0x38) = puVar2[8];
      *(undefined4 *)(iVar3 + 0x3c) = puVar2[9];
      *(undefined4 *)(iVar3 + 0x40) = puVar2[10];
      *(undefined4 *)(iVar3 + 0x44) = puVar2[0xb];
      *(undefined4 *)(iVar3 + 0x48) = puVar2[0xc];
      *(undefined4 *)(iVar3 + 0x50) = puVar2[0xe];
      *(undefined4 *)(iVar3 + 0x54) = puVar2[0xf];
      FUN_0044c100(puVar2 + 0x10);
      iVar3 = iVar3 + 0x68;
      puVar2 = puVar2 + 0x1a;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  iVar1 = *(int *)(param_1 + 4);
  for (; iVar3 != iVar1; iVar3 = iVar3 + 0x68) {
    FUN_0040c100();
  }
  iVar3 = (int)((ulonglong)((longlong)(param_3 - param_2) * -0x4ec4ec4f) >> 0x20);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + ((iVar3 >> 5) - (iVar3 >> 0x1f)) * 0x68;
  return param_2;
}


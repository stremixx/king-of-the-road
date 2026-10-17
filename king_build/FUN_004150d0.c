
void __thiscall FUN_004150d0(int param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int local_4;
  
  puVar2 = *(undefined1 **)(param_1 + 0x108);
  iVar3 = *(int *)(param_1 + 0x10c);
  local_4 = *(int *)(param_1 + 0x10c) - iVar3;
  if (0 < local_4) {
    puVar5 = puVar2;
    do {
      *puVar5 = puVar5[iVar3 - (int)puVar2];
      puVar5 = puVar5 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  *(undefined1 **)(param_1 + 0x10c) = puVar2 + (*(int *)(param_1 + 0x10c) - iVar3);
  uVar4 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_0044c1c0(*(undefined4 *)(param_1 + 0x10c),param_2,param_2 + ~uVar4);
  return;
}


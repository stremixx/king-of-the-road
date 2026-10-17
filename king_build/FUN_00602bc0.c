
undefined4 __thiscall
FUN_00602bc0(int param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  pcVar2 = (char *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18));
  cVar1 = *pcVar2;
  *param_2 = *(undefined4 *)(pcVar2 + 1);
  if (cVar1 != 'x') {
    return 3;
  }
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + 5 + *(int *)(param_1 + 0x18));
  *param_4 = uVar4;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 9 + *(int *)(param_1 + 0x18));
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = *puVar5;
    puVar5 = puVar5 + 1;
    param_3 = param_3 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_3 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  return 0;
}


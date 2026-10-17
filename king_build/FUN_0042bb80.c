
void FUN_0042bb80(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    puVar1 = *(uint **)(param_1 + 0x70);
    if (puVar1 != *(uint **)(param_1 + 0x74)) {
      do {
        FUN_00568a20(*puVar1 % 1000,0);
        puVar1 = puVar1 + 1;
      } while (puVar1 != *(uint **)(param_1 + 0x74));
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x24) == 1) &&
          (puVar1 = *(uint **)(param_1 + 0x70), puVar1 != *(uint **)(param_1 + 0x74))) {
    do {
      FUN_00568b20(*puVar1 % 1000,0);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(uint **)(param_1 + 0x74));
  }
  return;
}


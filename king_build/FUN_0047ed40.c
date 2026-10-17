
void FUN_0047ed40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_28 [8];
  int local_8;
  
  iVar2 = param_1[8];
  puVar3 = param_2;
  puVar4 = local_28;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (local_8 < iVar2) {
    puVar3 = param_2 + 10;
    iVar2 = ((int)param_2 - (int)param_1) / 0x28;
    if (0 < iVar2) {
      do {
        puVar3 = puVar3 + -10;
        param_2 = param_2 + -10;
        iVar2 = iVar2 + -1;
        puVar4 = param_2;
        puVar5 = puVar3;
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      } while (iVar2 != 0);
    }
    puVar3 = local_28;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  puVar3 = param_2;
  puVar4 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = param_2[-2];
  while (local_8 < iVar2) {
    puVar3 = param_2 + -10;
    puVar4 = param_2;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = param_2[-0xc];
    param_2 = param_2 + -10;
  }
  puVar3 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



void FUN_005fadd0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30 [12];
  
  if (param_2 != 0) {
    puVar1 = local_30 + 2;
    iVar2 = 4;
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = &DAT_00701550;
    puVar3 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = (undefined4 *)(*(int *)(param_3 + 0x202c) * 0x30 + 0x1460 + param_3);
    puVar3 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_005ab040(local_30);
  }
  return;
}



void FUN_0042c410(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [6];
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20 [8];
  
  puStack_2c = (undefined1 *)local_20;
  uStack_30 = 0x42c41f;
  FUN_00422ef0();
  puVar2 = local_20;
  puVar3 = auStack_48;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0041d3f0(&stack0x00000004);
  FUN_00478740(iVar1);
  puVar2 = local_20;
  puVar3 = auStack_48;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0041d3f0(&stack0x00000004);
  FUN_00417720(iVar1);
  return;
}



void FUN_00420c50(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 + 0x268);
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    puVar2 = (undefined4 *)(param_2 + 0x130);
  }
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


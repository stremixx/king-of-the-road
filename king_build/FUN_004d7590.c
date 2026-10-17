
void FUN_004d7590(int param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (param_2 != (char *)0x0) {
    _strncpy((char *)(iVar1 + 0x10),param_2,0x20);
  }
  puVar3 = (undefined4 *)(iVar1 + 0xf8);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(iVar1 + 0x30);
    for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


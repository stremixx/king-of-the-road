
void FUN_004e27c5(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_54 [12];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_10 = param_2 + 0x28;
  iStack_14 = param_2 + 0x20;
  iStack_18 = param_2 + 0x18;
  iStack_1c = param_2 + 0x10;
  iStack_20 = param_2 + 8;
  iStack_24 = param_2;
  puVar2 = auStack_54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_005de000();
  return;
}


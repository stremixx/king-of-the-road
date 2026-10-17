
undefined4 __thiscall FUN_005f1c30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 2;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      puVar3 = (undefined4 *)(param_1 + 0x40);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    }
    if (iVar2 != 2) {
      return 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar1 = FUN_005f1c30(param_2);
      FUN_005ab300(param_1 + 0x40);
      return uVar1;
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0x40);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


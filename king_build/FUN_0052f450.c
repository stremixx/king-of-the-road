
undefined1 * __fastcall FUN_0052f450(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 10;
  puVar2 = (undefined4 *)(param_1 + 0x250);
  do {
    *puVar2 = 0x3f000000;
    puVar2[1] = 0x3f800000;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x127;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (undefined4 *)(param_1 + 0x2c8);
  for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 600);
  iVar3 = 10;
  do {
    puVar2[-2] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x2c8) = 1;
  *(undefined4 *)(param_1 + 0x36c) = 1;
  *(undefined4 *)(param_1 + 0x2cc) = 1;
  *(undefined4 *)(param_1 + 0x2d0) = 1;
  *(undefined4 *)(param_1 + 0x2d4) = 1;
  *(undefined4 *)(param_1 + 0x2d8) = 1;
  *(undefined4 *)(param_1 + 0x31c) = 1;
  *(undefined4 *)(param_1 + 0x328) = 1;
  *(undefined4 *)(param_1 + 0x32c) = 1;
  *(undefined4 *)(param_1 + 0x330) = 1;
  *(undefined4 *)(param_1 + 0x334) = 1;
  return param_1;
}


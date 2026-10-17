
undefined4 FUN_004b32d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  FUN_004b2bf0(1);
  if (*(int *)(param_3 + 8) == *(int *)(param_3 + 0x10) + -4) {
    FUN_0061c888(*(undefined4 *)(param_3 + 0xc));
    piVar2 = (int *)(*(int *)(param_3 + 0x14) + 4);
    *(int **)(param_3 + 0x14) = piVar2;
    iVar1 = *piVar2;
    *(int *)(param_3 + 0xc) = iVar1;
    *(int *)(param_3 + 0x10) = iVar1 + 0x200;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_3 + 0xc);
  }
  else {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 4;
  }
  *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
  FUN_004b2bf0(1);
  FUN_004b2d30(param_2,param_3);
  FUN_004b2f20(param_1,param_2,param_3);
  return param_1;
}


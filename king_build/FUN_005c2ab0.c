
void __fastcall FUN_005c2ab0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0x1f0c) != 0) {
    for (iVar2 = *(int *)(param_1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      FUN_005c2b80(iVar1 + 0x2090);
    }
    if (*(int *)(DAT_00706ecc + 0x1a0) != 0) {
      FUN_00601820(*(int *)(iVar1 + 0x2094),*(int *)(iVar1 + 0x2098) - *(int *)(iVar1 + 0x2094));
    }
    if ((*(int *)(*(int *)(param_1 + 0x20) + 0x1f00) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x1ef8), iVar2 != 0)) {
      FUN_005aa830(0xffffffff,iVar2);
      FUN_005aa830(*(int *)(iVar1 + 0x2098) - *(int *)(iVar1 + 0x2094),
                   *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1ef8));
      FUN_0061d9d6(*(int *)(iVar1 + 0x2094),*(int *)(iVar1 + 0x2098) - *(int *)(iVar1 + 0x2094),1,
                   *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1ef8));
      FUN_005aa830(*(int *)(iVar1 + 0x2098) - *(int *)(iVar1 + 0x2094),
                   *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1ef8));
    }
    FUN_006024d0();
  }
  return;
}



void __fastcall FUN_005f9fa0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0071f868 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    iVar2 = FUN_00631d33(*(int *)(param_1 + 0x30) << 5);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x34) = iVar2;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar4 = iVar3 + 0x20;
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x38) + iVar5);
        iVar5 = iVar5 + 0xc;
        *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x34)) = *puVar1;
        *(undefined4 *)(iVar3 + 4 + *(int *)(param_1 + 0x34)) =
             *(undefined4 *)(*(int *)(param_1 + 0x38) + -8 + iVar5);
        *(undefined4 *)(iVar3 + 8 + *(int *)(param_1 + 0x34)) =
             *(undefined4 *)(*(int *)(param_1 + 0x38) + -4 + iVar5);
        *(undefined4 *)(*(int *)(param_1 + 0x34) + -4 + iVar4) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x34) + -8 + iVar4) = 0;
        *(undefined4 *)(iVar3 + 0x10 + *(int *)(param_1 + 0x34)) =
             *(undefined4 *)(*(int *)(param_1 + 0x3c) + -4 + iVar2 * 4);
        *(undefined4 *)(*(int *)(param_1 + 0x34) + -0xc + iVar4) = 0xff000000;
        iVar3 = iVar4;
      } while (iVar2 < *(int *)(param_1 + 0x30));
      return;
    }
  }
  return;
}



void FUN_00545fc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    iVar1 = 0;
    if (0 < param_2) {
      do {
        if ((iVar1 == 1) && (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c))) {
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          uVar3 = 2;
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 4 + iVar1 * 0x14);
          uVar2 = *(undefined4 *)(param_1 + iVar1 * 0x14);
        }
        FUN_005e10c0(uVar2,uVar3);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
  }
  return;
}


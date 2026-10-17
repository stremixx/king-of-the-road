
undefined4 __thiscall FUN_005bb2a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    if (((DAT_0071f868 == 0) || (piVar1 = *(int **)(param_1 + 0x48), piVar1 == (int *)0x0)) ||
       ((*(short *)(param_1 + 0x1a) == 0 &&
        ((*(short *)(param_1 + 0x14) != 1 || (*(short *)(param_1 + 0x16) != 1)))))) {
      if (*(short *)(param_1 + 0x1a) == 0) {
        if (*(int *)(param_1 + 0x2c) != 0) {
          FUN_005d6df0(*(int *)(param_1 + 0x2c));
        }
        iVar2 = FUN_005d6e00(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                             *(undefined4 *)(param_1 + 8));
        *(int *)(param_1 + 0x2c) = iVar2;
        if (iVar2 != 0) {
          *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
          return 1;
        }
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1);
      if (iVar2 == -0x7789fe3e) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x6c))(*(int **)(param_1 + 0x48));
      }
      FUN_005bad10(*(uint *)(param_1 + 0x34) >> 10 & 1,0,unaff_retaddr,param_2);
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00612570(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (((*(int *)(param_1 + 4) != 0) && (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14))) &&
     (DAT_00724d90 != 0)) {
    FUN_006123b0(param_2,param_3);
    FUN_00612460(*(undefined4 *)(param_1 + 0x20));
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return 1;
  }
  return 0;
}


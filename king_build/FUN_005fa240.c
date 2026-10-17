
undefined4 __thiscall FUN_005fa240(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_005e4d00(param_2);
  uVar1 = FUN_005aa810(param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_005e4d00(param_2);
  uVar2 = FUN_005aa810(param_2);
  iVar3 = 0;
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(int *)(param_1 + 0x34) = (int)uVar2 >> 1;
  FUN_005aae80(param_2);
  uVar1 = FUN_00631d33(*(int *)(param_1 + 0x48) << 2);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_00631d33(*(int *)(param_1 + 0x48) << 2);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      fVar4 = (float10)FUN_005aa860(param_2);
      *(float *)(*(int *)(param_1 + 0x4c) + iVar3 * 4) = (float)fVar4;
      uVar1 = FUN_005aa810(param_2);
      *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar3 * 4) = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  return 1;
}


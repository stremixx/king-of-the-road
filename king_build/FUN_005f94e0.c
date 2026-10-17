
void __thiscall FUN_005f94e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  
  FUN_005e4d00(param_2);
  iVar1 = FUN_005aa810(param_2);
  uVar2 = FUN_005aa810(param_2);
  uVar4 = uVar2 & 3;
  iVar5 = 0;
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else if (uVar4 == 1) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  else if (uVar4 == 2) {
    *(undefined4 *)(param_1 + 0x38) = 2;
  }
  if ((uVar2 & 8) != 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
  }
  FUN_005e4d00(param_2);
  uVar3 = FUN_00631d33(iVar1 * 4);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  if (0 < iVar1) {
    do {
      fVar6 = (float10)FUN_005aa860(param_2);
      *(float *)(*(int *)(param_1 + 0x50) + iVar5 * 4) = (float)fVar6;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  uVar3 = FUN_005aa810(param_2,iVar1,param_3,param_4);
  FUN_005f1420(param_2,uVar3,iVar1,param_3,param_4);
  return;
}



undefined4 __fastcall FUN_0060c840(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (DAT_00684a14 == 0) {
    return 0;
  }
  iVar2 = FUN_00612e90();
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = FUN_0060f0b0();
  fVar1 = *(float *)(iVar2 + 0x48);
  iVar2 = FUN_0060ee90();
  if (*(float *)(iVar2 + 0x1c) < fVar1) {
    return 0;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  uVar5 = 0;
  if (DAT_00724d88 != 0) {
    do {
      iVar2 = FUN_00612e90();
      if (iVar2 != 0) break;
      uVar4 = FUN_0060f0b0(param_1);
      FUN_00605e20(uVar4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_00724d88);
  }
  uVar5 = 0;
  if (DAT_00724d88 != 0) {
    do {
      if (uVar3 <= *(ushort *)(param_1 + 0x26)) {
        return 1;
      }
      iVar2 = FUN_0060ee90();
      FUN_00604fc0(*(undefined4 *)(iVar2 + 0x20),param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_00724d88);
  }
  return 1;
}


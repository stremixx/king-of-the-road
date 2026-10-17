
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0060b820(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if ((DAT_006849f0 != 0) && (iVar2 = FUN_00612e90(), iVar2 == 0)) {
    iVar2 = FUN_00612e90();
    for (uVar5 = 0; (iVar2 == 0 && (uVar5 < 0x32)); uVar5 = uVar5 + 1) {
      iVar2 = FUN_00612e50();
      fVar1 = *(float *)(iVar2 + 0x68);
      iVar2 = FUN_00612b80();
      if (*(float *)(iVar2 + 0x1c) <= fVar1) break;
      FUN_00612e50();
      iVar2 = FUN_00612b80();
      if ((*(float *)(iVar2 + 0x1c) < (float)_DAT_0064a930) ||
         (uVar3 = FUN_0061b830(), uVar3 < *(ushort *)(param_1 + 0x2a))) {
        uVar4 = FUN_00612e50(param_1);
        FUN_006094a0(uVar4);
      }
      else {
        iVar2 = FUN_00612b80();
        FUN_00606ad0(*(undefined4 *)(iVar2 + 0x28),param_1);
      }
      iVar2 = FUN_00612e90();
    }
    iVar2 = FUN_00612e90();
    if (iVar2 == 0) {
      iVar2 = FUN_00612e50();
      fVar1 = *(float *)(iVar2 + 0x68);
      iVar2 = FUN_00612b80();
      if (fVar1 < *(float *)(iVar2 + 0x1c)) {
        return 1;
      }
    }
  }
  return 0;
}


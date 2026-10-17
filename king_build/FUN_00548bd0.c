
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00548bd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00549300();
  if ((iVar1 != 1) && (iVar1 = FUN_00549300(), iVar1 != 2)) {
    return;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x5398) == 0) {
      return;
    }
    fVar3 = (float10)FUN_004eae60();
    if (fVar3 <= (float10)_DAT_0064b254) {
      return;
    }
    FUN_004eaf60(0x3f800000);
    fVar3 = (float10)FUN_004eae60();
    if (fVar3 <= (float10)_DAT_0064b254) {
      uVar2 = FUN_005d2500(100);
      FUN_0056a570(uVar2);
    }
  }
  FUN_005492a0();
  if (*(int *)(DAT_006d0fd8 + 0x268) == param_1) {
    FUN_0052f0a0(DAT_006ee1c0,0x3f800000);
  }
  return;
}


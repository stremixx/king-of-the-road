
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00567d90(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xcd4) != 0) {
    FUN_005672c0();
  }
  fVar2 = (float10)FUN_004e2035();
  fVar2 = fVar2 - (float10)*(float *)(param_1 + 0xcd8);
  if (*(float *)(param_1 + 0xcd8) < *(float *)(param_1 + 0xcdc)) {
    fVar2 = (float10)FUN_004e2035();
    fVar2 = fVar2 - (float10)*(float *)(param_1 + 0xcdc);
  }
  local_4 = (float)fVar2;
  if (local_4 < _DAT_0064b240) {
    if ((local_4 < (float)_DAT_0064a5a8) || (iVar1 = *(int *)(param_1 + 0xce0), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xce0) = 1;
      goto LAB_00567e5a;
    }
    if ((local_4 < (float)_DAT_0064a830) || (iVar1 == 1)) {
      *(undefined4 *)(param_1 + 0xce0) = 2;
      goto LAB_00567e5a;
    }
    if ((local_4 < (float)_DAT_0064c0e0) || (iVar1 == 2)) {
      *(undefined4 *)(param_1 + 0xce0) = 3;
      goto LAB_00567e5a;
    }
  }
  *(undefined4 *)(param_1 + 0xce0) = 0;
LAB_00567e5a:
  if (*(float *)(param_1 + 0xcd8) < *(float *)(param_1 + 0xcdc)) {
    FUN_005e10c0(*(undefined4 *)(param_1 + 0xce8),*(undefined4 *)(param_1 + 0xce0));
    FUN_005e10c0(*(undefined4 *)(param_1 + 0xce4),0);
    return;
  }
  FUN_005e10c0(*(undefined4 *)(param_1 + 0xce8),0);
  FUN_005e10c0(*(undefined4 *)(param_1 + 0xce4),*(undefined4 *)(param_1 + 0xce0));
  return;
}


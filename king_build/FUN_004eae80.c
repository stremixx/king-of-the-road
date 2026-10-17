
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004eae80(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  fVar1 = *(float *)(param_1 + iVar2 * 4);
  if (*(float *)(param_1 + 0xc + iVar2 * 4) <= *(float *)(param_1 + iVar2 * 4)) {
    if (fVar1 < param_2) {
      param_2 = *(float *)(param_1 + iVar2 * 4);
    }
    if (*(float *)(param_1 + 0xc + iVar2 * 4) <= param_2) goto LAB_004eaecc;
  }
  else {
    if (param_2 < fVar1) {
      param_2 = *(float *)(param_1 + iVar2 * 4);
    }
    if (param_2 <= *(float *)(param_1 + 0xc + iVar2 * 4)) goto LAB_004eaecc;
  }
  param_2 = *(float *)(param_1 + 0xc + iVar2 * 4);
LAB_004eaecc:
  fVar1 = *(float *)(param_1 + 0xc + iVar2 * 4) - *(float *)(param_1 + iVar2 * 4);
  if (fVar1 != _DAT_0064b254) {
    *(float *)(param_1 + 0x24) = (param_2 - *(float *)(param_1 + iVar2 * 4)) / fVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  return;
}


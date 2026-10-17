
int __fastcall FUN_004d4580(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  
  uVar1 = FUN_0043f700(*(undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c));
  if ((uVar1 & 0x4000) != 0) {
    iVar2 = FUN_004d4300(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40c0) + 0x509c) + 0x2d8));
    return iVar2;
  }
  iVar2 = __ftol();
  if (iVar2 == 0) {
    *(double *)(param_1 + 0x40a8) = (double)extraout_ST0;
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + -1;
    *(double *)(param_1 + 0x40a8) = (double)(extraout_ST0 / (float10)iVar2);
  }
  uVar1 = FUN_0043f700(*(undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c));
  if ((uVar1 & 0x80000) != 0) {
    return iVar3 + 1;
  }
  uVar1 = FUN_0043f700(*(undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c));
  if ((uVar1 & 0x8000000) != 0) {
    return iVar3 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x407c);
  if (iVar3 < *(int *)(param_1 + 0x407c)) {
    iVar2 = iVar3;
  }
  return iVar2;
}


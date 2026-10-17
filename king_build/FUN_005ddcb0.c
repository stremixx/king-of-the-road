
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ddcb0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)thunk_FUN_00603580();
  fVar2 = (float10)_DAT_0064a648;
  iVar1 = *(int *)(param_1 + 0xbd8);
  fVar4 = fVar3 * fVar2 - (float10)*(double *)(param_1 + 0x250);
  *(double *)(param_1 + 0xba0) = (double)fVar4;
  if (iVar1 < 1) {
    fVar4 = (fVar4 - (float10)*(double *)(param_1 + 600)) -
            (float10)*(double *)(DAT_007206b0 + 0x168) * (float10)_DAT_0064a648;
    *(double *)(param_1 + 0xb90) = (double)fVar4;
    if (((float10)_DAT_0064c0e0 < fVar4) && (iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xb90) = 0x9999999a;
      *(undefined4 *)(param_1 + 0xb94) = 0x3fa99999;
    }
  }
  else {
    *(double *)(param_1 + 0xb90) = (double)iVar1 * _DAT_0064a648;
  }
  *(double *)(param_1 + 0xb98) = *(double *)(param_1 + 0xb98) + *(double *)(param_1 + 0xb90);
  if ((*(double *)(param_1 + 0xb90) < _DAT_0064a668) ||
     (_DAT_0064a690 < *(double *)(param_1 + 0xb90))) {
    *(undefined4 *)(param_1 + 0xb90) = 0;
    *(undefined4 *)(param_1 + 0xb94) = 0;
  }
  *(undefined4 *)(param_1 + 600) = 0;
  *(double *)(param_1 + 0x250) = (double)(fVar3 * fVar2);
  *(undefined4 *)(param_1 + 0x25c) = 0;
  FUN_005ae0c0(0xffffffff);
  iVar1 = *(int *)(param_1 + 0x1d0);
  *(undefined4 *)(iVar1 + 0x2130) = *(undefined4 *)(param_1 + 0xbf8);
  *(undefined4 *)(iVar1 + 0x2134) = *(undefined4 *)(param_1 + 0xbfc);
  iVar1 = *(int *)(param_1 + 0x1d0);
  *(undefined4 *)(iVar1 + 0x2138) = *(undefined4 *)(param_1 + 0xc00);
  *(undefined4 *)(iVar1 + 0x213c) = *(undefined4 *)(param_1 + 0xc04);
  *(undefined4 *)(*(int *)(param_1 + 0x1d0) + 0x2104) =
       *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x94);
  *(int *)(*(int *)(param_1 + 0x1d4) + 0x94) = *(int *)(*(int *)(param_1 + 0x1d4) + 0x94) + 1;
  DAT_00701df0 = 0;
  FUN_005b9970(*(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1d4) + 100) +
                *(int *)(*(int *)(param_1 + 0x1d4) + 0x8c) * 4));
  iVar1 = *(int *)(*(int *)(param_1 + 0x1d4) + 0x8c);
  if (*(int *)(param_1 + 0x220) != iVar1) {
    *(int *)(param_1 + 0x220) = iVar1;
    *(undefined4 *)(param_1 + 0xc14) = 1;
    DAT_00701dec = *(undefined4 *)(param_1 + 0xbcc);
    return;
  }
  DAT_00701dec = *(undefined4 *)(param_1 + 0xbcc);
  return;
}


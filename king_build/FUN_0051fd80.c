
void __fastcall FUN_0051fd80(int param_1)

{
  undefined2 uVar1;
  float10 fVar2;
  
  FUN_0050b5a0();
  FUN_005d7cc0();
  fVar2 = (float10)FUN_004eaf00();
  *(double *)(param_1 + 0x180) = (double)fVar2;
  fVar2 = (float10)FUN_004eaf10();
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(double *)(param_1 + 0x178) = (double)(fVar2 * (float10)*(double *)(param_1 + 0x180));
  uVar1 = __ftol();
  *(undefined2 *)(param_1 + 400) = uVar1;
  *(uint *)(*(int *)(param_1 + 0x194) + 0x11c) =
       *(uint *)(*(int *)(param_1 + 0x194) + 0x11c) & 0xfffffffd;
  *(undefined1 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2700) = 0;
  *(undefined4 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 10000) = 0x3f000000;
  *(undefined4 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x270c) = 0;
  *(undefined2 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2714) = 0;
  *(undefined2 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2716) = 1;
  *(undefined2 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2746) = 0x15;
  FUN_0052f780();
  FUN_004e1230(0);
  return;
}


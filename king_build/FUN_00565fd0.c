
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00565fd0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_30 [48];
  
  *(undefined4 *)(param_1 + 0xd3c) = 0;
  fVar1 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 100) +
          *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x40) +
          *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0xd78) = -fVar1 / (ABS(fVar1) + (float)_DAT_0064a770);
  uVar2 = __ftol();
  *(undefined4 *)(param_1 + 0xd6c) = uVar2;
  iVar3 = FUN_00565950();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0xd88) = 1;
    iVar3 = FUN_0057d570(local_30);
    *(undefined4 *)(param_1 + 0xd8c) = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(param_1 + 0xd90) = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)(param_1 + 0xd94) = *(undefined4 *)(iVar3 + 0x2c);
  }
  return;
}


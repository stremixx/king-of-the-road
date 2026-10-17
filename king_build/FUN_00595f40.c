
void __thiscall FUN_00595f40(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  
  if (DAT_006f5870 != 0) {
    FUN_005f1c30(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x13c) = param_2;
  fVar4 = (float10)FUN_004e2035();
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(float *)(param_1 + 0xe0) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x144) = 0;
  puVar2 = param_3;
  puVar3 = (undefined4 *)(param_1 + 0x10c);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x20);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


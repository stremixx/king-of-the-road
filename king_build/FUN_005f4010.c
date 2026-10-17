
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005f4010(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return 0;
  }
  iVar1 = FUN_005f1850(1,param_2,param_3);
  if (iVar1 == 0) {
    if ((*(float *)(param_3 + 0x4c) * *(float *)(param_3 + 4) +
         *(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x54) +
         *(float *)(param_3 + 0x10) * *(float *)(param_3 + 0x50) + *(float *)(param_3 + 0x28)) *
        *(float *)(param_1 + 0x38) +
        (*(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x54) +
         *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x50) +
         *(float *)(param_3 + 0xc) * *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0x30)) *
        *(float *)(param_1 + 0x40) +
        (*(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x54) +
         *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x50) +
         *(float *)(param_3 + 8) * *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0x2c)) *
        *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x44) <= (float)_DAT_0064a668) {
      iVar1 = FUN_005f1850(2,param_2,param_3);
      if (iVar1 == 0) {
        iVar1 = FUN_005f1850(0,param_2,param_3);
      }
    }
    else {
      iVar1 = FUN_005f1850(0,param_2,param_3);
      if (iVar1 == 0) {
        iVar1 = FUN_005f1850(2,param_2,param_3);
        return iVar1;
      }
    }
  }
  return iVar1;
}


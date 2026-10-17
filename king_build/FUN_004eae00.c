
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004eae00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_2 < 3)) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (param_2 <= iVar1) {
      if (param_2 == iVar1) {
        *(int *)(param_1 + 0x2c) = iVar1 + 1;
      }
      *(undefined4 *)(param_1 + param_2 * 4) = param_3;
      *(undefined4 *)(param_1 + 0xc + param_2 * 4) = param_4;
      if (param_5 != _DAT_0064b254) {
        *(float *)(param_1 + 0x18 + param_2 * 4) = _DAT_0064b240 / param_5;
        return;
      }
      *(undefined4 *)(param_1 + 0x18 + param_2 * 4) = 0;
    }
  }
  return;
}


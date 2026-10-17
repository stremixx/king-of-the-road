
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005555f0(int param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (_DAT_0064b240 < *param_2) {
    *param_2 = 1.0;
  }
  iVar1 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x28c0);
  do {
    FUN_00588b90(param_2,*puVar2);
    iVar1 = iVar1 + 0x14;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xb4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00555640(int param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (_DAT_0064b240 < *param_2) {
    *param_2 = 1.0;
  }
  if (*(int *)(param_1 + 0x5460) != 0) {
    FUN_00501410(0,param_2,*(undefined4 *)(param_1 + 0x28e4));
    FUN_00501410(1,param_2,*(undefined4 *)(param_1 + 0x28e8));
    if (0 < (int)(&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c]) {
      puVar2 = (undefined4 *)(param_1 + 0x2910);
      iVar3 = 0xb;
      do {
        FUN_00501410(iVar3 + -8,param_2,puVar2[-8]);
        FUN_00501410(iVar3,param_2,*puVar2);
        FUN_00501410(iVar3 + 8,param_2,puVar2[8]);
        puVar2 = puVar2 + 1;
        iVar1 = iVar3 + -10;
        iVar3 = iVar3 + 1;
      } while (iVar1 < (int)(&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c]);
    }
    FUN_00501410(2,param_2,*(undefined4 *)(param_1 + 0x28ec));
    if (_DAT_0064b254 < *param_2) {
      return 1;
    }
  }
  return 0;
}


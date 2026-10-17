
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005ad500(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined4 *)(param_1 + 0x2140) = param_2;
  *(undefined4 *)(param_1 + 0x2144) = param_3;
  piVar2 = DAT_0071f868;
  if (DAT_0071f868 != (int *)0x0) {
    iVar1 = *DAT_0071f868;
    uVar3 = __ftol();
    uVar4 = __ftol();
    uVar5 = __ftol();
    (**(code **)(iVar1 + 0x50))(piVar2,0x8b,((uVar3 | 0xffffff00) << 8 | uVar4) << 8 | uVar5);
    return;
  }
  return;
}


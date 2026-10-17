
uint FUN_00490c50(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = param_1;
  iVar1 = FUN_0061d8bf(param_2,4,1,param_1);
  if (iVar1 != 1) {
    return 0xffffffff;
  }
  iVar1 = FUN_0061d8bf(&param_1,4,1,uVar2);
  uVar3 = (uint)(iVar1 != 1);
  *param_4 = param_1;
  if (uVar3 == 0) {
    uVar2 = FUN_0061db0f(uVar2);
    *param_3 = uVar2;
    uVar3 = 0;
  }
  return uVar3;
}



int __thiscall FUN_005c4320(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1ef8);
  uVar2 = FUN_0061db0f(uVar1);
  iVar3 = FUN_005c4080(1);
  if (iVar3 == -1) {
    iVar3 = FUN_005c4080(0);
  }
  iVar4 = iVar3;
  while( true ) {
    while (uVar6 = uVar2, iVar5 = iVar4, uVar2 = FUN_0061db0f(uVar1),
          ((param_2 <= iVar3) - 1U & 2) == 2) {
      iVar4 = FUN_005c4080(1);
      if (iVar4 == -1) goto LAB_005c43d3;
      if (param_2 < iVar4) {
        *param_3 = iVar4;
        FUN_0061dd53(uVar1,uVar6,0);
        return iVar5;
      }
    }
    iVar4 = FUN_005c4080(0);
    if (iVar4 == -1) break;
    if (iVar4 < param_2) {
      *param_3 = iVar5;
      return iVar4;
    }
  }
LAB_005c43d3:
  *param_3 = iVar5;
  return iVar5;
}


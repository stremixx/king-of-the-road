
void FUN_00528810(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_stack_00000028;
  
  uVar1 = __ftol();
  uVar2 = __ftol();
  uVar3 = __ftol();
  uVar4 = __ftol();
  if (in_stack_00000028 != 0) {
    iVar5 = FUN_00528790(param_1,uVar1,uVar3);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = FUN_00528790(param_1,uVar2,uVar4);
    if (iVar5 != 0) {
      return;
    }
  }
  uVar6 = FUN_005b58c0(0,0xff,0x78,1);
  FUN_005b6a50(param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



void __thiscall FUN_005f35a0(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_40 [64];
  
  uVar1 = param_2;
  FUN_005e4d00(param_2);
  FUN_0061d8bf(local_40,0x20,1,uVar1);
  param_2 = local_40;
  iVar2 = FUN_005aa880(&param_2);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x4072c000;
  }
  else {
    fVar5 = (float10)FUN_0061f358(iVar2);
    *(double *)(param_1 + 0x38) = (double)fVar5;
  }
  iVar2 = FUN_005aa880(&param_2);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x40a77000;
  }
  else {
    fVar5 = (float10)FUN_0061f358(iVar2);
    *(double *)(param_1 + 0x40) = (double)fVar5;
  }
  iVar2 = FUN_005aa880(&param_2);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 8;
  }
  else {
    uVar3 = FUN_0061f2c2(iVar2);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
  }
  iVar2 = FUN_005aa880(&param_2);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0x33333333;
    *(undefined4 *)(param_1 + 0x4c) = 0x3fd33333;
  }
  else {
    fVar5 = (float10)FUN_0061f358(iVar2);
    *(double *)(param_1 + 0x48) = (double)fVar5;
  }
  uVar6 = 1;
  uVar3 = param_3;
  uVar7 = param_4;
  uVar4 = FUN_005aa810(uVar1,1,param_3,param_4);
  FUN_005f1420(uVar1,uVar4,uVar6,uVar3,uVar7);
  return;
}


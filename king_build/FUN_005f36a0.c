
void __thiscall FUN_005f36a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  FUN_005e4d00(param_2);
  fVar2 = (float10)FUN_005aa860(param_2);
  *(double *)(param_1 + 0x48) = (double)fVar2;
  FUN_005aa810(param_2);
  fVar2 = (float10)FUN_005aa860(param_2);
  *(double *)(param_1 + 0x38) = (double)fVar2;
  fVar2 = (float10)FUN_005aa860(param_2);
  *(double *)(param_1 + 0x40) = (double)fVar2;
  uVar1 = FUN_005aa810(param_2);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar3 = 1;
  uVar1 = FUN_005aa810(param_2,1,param_3,param_4);
  FUN_005f1420(param_2,uVar1,uVar3,param_3,param_4);
  return;
}


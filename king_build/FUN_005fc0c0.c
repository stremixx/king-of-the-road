
void __thiscall FUN_005fc0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  fVar5 = (float10)FUN_005aa860(param_2);
  *(double *)(param_1 + 0x120) = (double)fVar5;
  fVar5 = (float10)FUN_005aa860(param_2);
  *(double *)(param_1 + 0x128) = (double)fVar5;
  fVar5 = (float10)FUN_005aa860(param_2);
  *(double *)(param_1 + 0x130) = (double)fVar5;
  fVar5 = (float10)FUN_005aa860(param_2);
  *(double *)(param_1 + 0x138) = (double)fVar5;
  iVar1 = FUN_005aa810(param_2);
  iVar3 = 0;
  *(int *)(param_1 + 0x11c) = iVar1;
  if (0 < iVar1) {
    puVar4 = (undefined4 *)(param_1 + 0x114);
    do {
      uVar2 = FUN_005aa810(param_2);
      *puVar4 = uVar2;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x11c));
  }
  uVar6 = 1;
  uVar2 = FUN_005aa810(param_2,1,param_3,param_4);
  FUN_005f1420(param_2,uVar2,uVar6,param_3,param_4);
  return;
}


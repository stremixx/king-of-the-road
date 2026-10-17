
void FUN_0046a940(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  while ((param_1 != param_2 && (param_3 != param_4))) {
    fVar4 = (float10)FUN_00418960(param_3,param_6);
    fVar5 = (float10)FUN_00418960(param_1,param_6);
    if (fVar5 <= (float10)(double)fVar4) {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_5 = uVar1;
    }
    else {
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      *param_5 = uVar1;
    }
    param_5 = param_5 + 1;
  }
  iVar2 = (int)param_2 - (int)param_1 >> 2;
  if (0 < iVar2) {
    iVar3 = (int)param_1 - (int)param_5;
    do {
      *param_5 = *(undefined4 *)(iVar3 + (int)param_5);
      param_5 = param_5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (int)param_4 - (int)param_3 >> 2;
  if (0 < iVar2) {
    iVar3 = (int)param_3 - (int)param_5;
    do {
      *param_5 = *(undefined4 *)(iVar3 + (int)param_5);
      param_5 = param_5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


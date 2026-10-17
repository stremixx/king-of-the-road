
void FUN_0046a3a0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar2 = param_4;
  puVar5 = param_2;
  param_2 = (undefined4 *)*param_2;
  fVar6 = (float10)FUN_00418960(&param_2,param_4);
  fVar7 = (float10)FUN_00418960(param_1,uVar2);
  if ((float10)(double)fVar6 < fVar7) {
    iVar4 = (int)puVar5 - (int)param_1 >> 2;
    if (0 < iVar4) {
      puVar3 = puVar5 + 1;
      do {
        puVar1 = (undefined4 *)((int)puVar5 + (-4 - (int)(puVar5 + 1)) + (int)puVar3);
        puVar3 = puVar3 + -1;
        iVar4 = iVar4 + -1;
        *puVar3 = *puVar1;
      } while (iVar4 != 0);
    }
    *param_1 = param_2;
    return;
  }
  param_4 = param_2;
  while( true ) {
    puVar3 = puVar5 + -1;
    fVar6 = (float10)FUN_00418960(&param_4,uVar2);
    fVar7 = (float10)FUN_00418960(puVar3,uVar2);
    if (fVar7 <= (float10)(double)fVar6) break;
    *puVar5 = *puVar3;
    puVar5 = puVar3;
  }
  *puVar5 = param_4;
  return;
}


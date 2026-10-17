
void FUN_0046aee0(undefined4 *param_1,int *param_2,double param_3,double param_4,double param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  while( true ) {
    iVar1 = *param_2;
    piVar2 = (int *)param_1[-1];
    dVar4 = *(double *)(iVar1 + 0x38) - param_3;
    dVar6 = *(double *)(iVar1 + 0x40) - param_4;
    iVar3 = *piVar2;
    dVar7 = *(double *)(iVar1 + 0x48) - param_5;
    dVar5 = *(double *)(iVar3 + 0x38) - param_3;
    dVar8 = *(double *)(iVar3 + 0x40) - param_4;
    dVar9 = *(double *)(iVar3 + 0x48) - param_5;
    if (SQRT(dVar5 * dVar5 + dVar9 * dVar9 + dVar8 * dVar8) <=
        SQRT(dVar4 * dVar4 + dVar7 * dVar7 + dVar6 * dVar6)) break;
    *param_1 = piVar2;
    param_1 = param_1 + -1;
  }
  *param_1 = param_2;
  return;
}


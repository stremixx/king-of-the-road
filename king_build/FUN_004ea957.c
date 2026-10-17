
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea957(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = _rand();
  fVar1 = (float)iVar3 / _DAT_0064c958;
  iVar3 = _rand();
  fVar2 = (float)iVar3 / _DAT_0064c958;
  dVar6 = (double)param_1;
  dVar5 = (double)param_2;
  fVar4 = (float10)FUN_0061ef04((double)fVar1);
  fVar4 = (float10)FUN_0061ed94((double)(fVar4 * (float10)_DAT_0064c950));
  FUN_0061ee54((double)(fVar2 * (float)_DAT_0064c8f8),(double)(fVar4 * (float10)dVar5),dVar5,dVar6);
  return;
}


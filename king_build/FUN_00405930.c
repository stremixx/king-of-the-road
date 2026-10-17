
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00405930(double param_1,double param_2,double param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  
  piVar5 = DAT_0068be60;
  if (DAT_0068be60 != DAT_0068be64) {
    do {
      iVar1 = *piVar5;
      dVar3 = param_1 - *(double *)(iVar1 + 0x30);
      dVar2 = param_2 - *(double *)(iVar1 + 0x38);
      dVar4 = param_3 - *(double *)(iVar1 + 0x40);
      if ((SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2) < _DAT_0064a5a8) &&
         ((*(byte *)(iVar1 + 0xc) & 8) == 0)) break;
      piVar5 = piVar5 + 1;
    } while (piVar5 != DAT_0068be64);
    if (piVar5 != DAT_0068be64) {
      return *piVar5;
    }
  }
  return 0;
}


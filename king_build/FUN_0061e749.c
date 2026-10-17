
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0061e749(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_0062573a(DAT_00685558,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_00625602();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_0062573a(uVar2,0xffff);
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)FUN_00624e8f();
        return fVar4;
      }
    }
    dVar1 = param_1 + _DAT_0064a660;
    uVar5 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar1 = (double)fVar4;
    if ((dVar1 == param_1) || ((uVar2 & 0x20) != 0)) {
      FUN_0062573a(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = (float10)FUN_00624ee3(uVar5,0xb,param_1,dVar1,uVar2);
  return fVar4;
}


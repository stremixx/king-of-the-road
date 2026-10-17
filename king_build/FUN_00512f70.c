
/* WARNING: Removing unreachable block (ram,0x00513019) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00512f70(void)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  float10 fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_8;
  
  bVar2 = FUN_005d16e0();
  if (bVar2 < 5) {
    return (float10)_DAT_0064a668;
  }
  fVar4 = (float10)thunk_FUN_00603580();
  lVar5 = FUN_00513050();
  dVar1 = (double)fVar4 + _DAT_0064a690;
  fVar4 = (float10)thunk_FUN_00603580();
  if (fVar4 < (float10)dVar1) {
    do {
      fVar4 = (float10)thunk_FUN_00603580();
    } while (fVar4 < (float10)dVar1);
  }
  lVar6 = FUN_00513050();
  lVar5 = __alldiv(lVar6 - lVar5,100000,0);
  uVar3 = (uint)lVar5;
  FUN_005d2250(&DAT_006758f4,uVar3);
  if (lVar5 < 0x100000000) {
    if ((lVar5 < 0) || (uVar3 < 300)) {
      return (float10)_DAT_0064a668;
    }
    if (lVar5 < 0x2bd) {
      local_8 = CONCAT44((int)((ulonglong)lVar5 >> 0x20) - (uint)(uVar3 < 300),uVar3 - 300);
      return (float10)local_8 * (float10)_DAT_0064cdf8;
    }
  }
  return (float10)_DAT_0064a660;
}


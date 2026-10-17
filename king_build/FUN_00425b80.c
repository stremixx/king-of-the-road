
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00425b80(undefined4 param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_0068c0c4 + (DAT_006898e4 - DAT_006898e0 >> 2);
  uVar2 = CONCAT31((int3)(DAT_0068c0c0 >> 8),uVar3 < DAT_0068c0c0);
  if (uVar3 >= DAT_0068c0c0) {
    if (uVar3 < DAT_0068c0bc) {
      dVar1 = SQRT((_DAT_0068aa10 - *param_2) * (_DAT_0068aa10 - *param_2) +
                   (_DAT_0068aa20 - param_2[2]) * (_DAT_0068aa20 - param_2[2]) +
                   (_DAT_0068aa18 - param_2[1]) * (_DAT_0068aa18 - param_2[1]));
      uVar2 = CONCAT22((short)((uint)param_2 >> 0x10),
                       (ushort)(dVar1 < _DAT_0066b6b0) << 8 |
                       (ushort)(NAN(dVar1) || NAN(_DAT_0066b6b0)) << 10 |
                       (ushort)(dVar1 == _DAT_0066b6b0) << 0xe);
      if (dVar1 >= _DAT_0066b6b0 && (dVar1 == _DAT_0066b6b0) == 0) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}


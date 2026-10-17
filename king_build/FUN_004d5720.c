
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004d5720(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    double param_5,undefined4 param_6,undefined4 param_7,uint param_8,double param_9
                    ,undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13,
                    double *param_14,uint *param_15,uint *param_16,int *param_17,undefined4 param_18
                    )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = 0;
  *param_15 = *param_15 & 0xfffffff7;
  *(undefined4 *)param_14 = 0;
  *(undefined4 *)((int)param_14 + 4) = 0xbff00000;
  uStack_24 = 0x408f4000;
  uVar9 = FUN_004d49f0(param_1,param_10,param_11,param_12,param_13,param_3,param_4,param_6,param_7,
                       param_14,&local_28,param_18);
  *param_16 = uVar9;
  bVar4 = (byte)param_2;
  if (((*param_15 & 2) == 0) && ((uVar9 & 3 << (bVar4 + 4 & 0x1f)) != 0)) {
    *param_15 = *param_15 | 2;
  }
  uVar9 = *param_15;
  if ((uVar9 & 2) != 0) {
    iVar1 = param_2 + 4;
    uVar3 = *param_16;
    if ((uVar3 & 3 << ((byte)iVar1 & 0x1f)) != 0) {
      if (((param_13 != 0) && (_DAT_0064a6c0 < *param_14)) || ((uVar9 & 0x10) != 0)) {
        *param_15 = uVar9 | 8;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if ((0 < param_2) && ((uVar3 & 3 << (bVar4 + 3 & 0x1f)) == 0)) {
        *param_17 = param_2 + -1;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if ((1 < param_2) && ((uVar3 & 3 << (bVar4 + 2 & 0x1f)) == 0)) {
        *param_17 = param_2 + -2;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if ((2 < param_2) && ((uVar3 & 3 << (bVar4 + 1 & 0x1f)) == 0)) {
        *param_17 = param_2 + -3;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if ((3 < param_2) && ((uVar3 & 3 << (bVar4 & 0x1f)) == 0)) {
        *param_17 = param_2 + -4;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      iVar2 = param_2 + 3;
      dVar5 = (double)iVar2 * (double)CONCAT44(param_7,param_6) * _DAT_0064a6d0;
      if ((dVar5 <= (double)CONCAT44(param_4,param_3)) && ((uVar3 & 3 << (bVar4 + 5 & 0x1f)) == 0))
      {
        *param_17 = param_2 + 1;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      dVar6 = (double)iVar1 * (double)CONCAT44(param_7,param_6) * _DAT_0064a6d0;
      if ((dVar6 < (double)CONCAT44(param_4,param_3)) && ((uVar3 & 3 << (bVar4 + 6 & 0x1f)) == 0)) {
        *param_17 = param_2 + 2;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      dVar7 = (double)(param_2 + 5) * (double)CONCAT44(param_7,param_6) * _DAT_0064a6d0;
      if ((dVar7 < (double)CONCAT44(param_4,param_3)) && ((uVar3 & 3 << (bVar4 + 7 & 0x1f)) == 0)) {
        *param_17 = iVar2;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      dVar8 = (double)(param_2 + 6) * (double)CONCAT44(param_7,param_6) * _DAT_0064a6d0;
      if ((dVar8 < (double)CONCAT44(param_4,param_3)) && ((uVar3 & 3 << (bVar4 + 8 & 0x1f)) == 0)) {
        *param_17 = iVar1;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if ((((param_8 & 0xc) == 0) && ((uVar3 & 3 << ((byte)iVar2 & 0x1f)) == 0)) &&
         (param_9 < _DAT_0064a668)) {
        *param_17 = param_2 + -1;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if ((param_8 & 0xc) == 0) {
        if (((uVar3 & 3 << (bVar4 + 2 & 0x1f)) == 0) && (param_9 < _DAT_0064a668)) {
          *param_17 = param_2 + -2;
          return (float10)(double)CONCAT44(uStack_24,local_28);
        }
        if (((uVar3 & 3 << (bVar4 + 1 & 0x1f)) == 0) && (param_9 < _DAT_0064a668)) {
          *param_17 = param_2 + -3;
          return (float10)(double)CONCAT44(uStack_24,local_28);
        }
        if (((uVar3 & 3 << (bVar4 & 0x1f)) == 0) && (param_9 < _DAT_0064a668)) {
          *param_17 = param_2 + -4;
          return (float10)(double)CONCAT44(uStack_24,local_28);
        }
      }
      param_5 = (double)CONCAT44(param_4,param_3) + param_5;
      if (((dVar5 < param_5) && ((uVar3 & 3 << ((byte)(param_2 + 5) & 0x1f)) == 0)) &&
         (param_9 < _DAT_0064a668)) {
        *param_17 = param_2 + 1;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if (((dVar6 < param_5) && ((uVar3 & 3 << ((byte)(param_2 + 6) & 0x1f)) == 0)) &&
         (param_9 < _DAT_0064a668)) {
        *param_17 = param_2 + 2;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if (((dVar7 < param_5) && ((uVar3 & 3 << (bVar4 + 7 & 0x1f)) == 0)) &&
         (param_9 < _DAT_0064a668)) {
        *param_17 = iVar2;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      if (((dVar8 < param_5) && ((uVar3 & 3 << (bVar4 + 8 & 0x1f)) == 0)) &&
         (param_9 < _DAT_0064a668)) {
        *param_17 = iVar1;
        return (float10)(double)CONCAT44(uStack_24,local_28);
      }
      *param_15 = uVar9 | 8;
      return (float10)(double)CONCAT44(uStack_24,local_28);
    }
    *param_15 = uVar9 & 0xfffffffd;
  }
  *param_17 = param_2;
  return (float10)(double)CONCAT44(uStack_24,local_28);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00507030(float param_1,undefined4 param_2,int *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float *local_14;
  
  iVar3 = (int)param_1;
  iVar5 = *param_3;
  if ((-1 < iVar5) && (iVar5 < 0xf)) {
    if ((*(float *)(&DAT_00696898 + (iVar5 + (int)param_1 * 0x25c) * 4) != _DAT_0064b254) &&
       (iVar5 = (int)param_1 * 0x970, *(float *)(&DAT_00696894 + iVar5) != _DAT_0064b254)) {
      iVar4 = (&DAT_00696858)[(int)param_1 * 0x25c];
      fVar1 = (float)(&DAT_006968d4)[(int)param_1 * 0x25c];
      if (2 < iVar4) {
        local_14 = (float *)(&DAT_00696898 + ((int)param_1 * 0x25c + iVar4) * 4);
        do {
          fVar2 = ((*(float *)(&DAT_0069682c + iVar5) * (float)_DAT_0064c8f8) /
                  ABS(*local_14 * *(float *)(&DAT_00696894 + iVar5))) * fVar1;
          fVar6 = (float10)FUN_00506d50(iVar3,fVar2,param_2);
          fVar7 = (float10)FUN_00506be0(fVar1,(&DAT_0069688c)[iVar3 * 0x25c],0,0);
          param_1 = 0.0;
          do {
            fVar8 = (float10)FUN_00506cc0(iVar3,(&DAT_00696888)[iVar3 * 0x25c],(float)fVar7,param_1)
            ;
            fVar8 = (float10)FUN_00506d10(iVar3,(float)fVar8,iVar4);
            if ((float10)(float)fVar6 < ABS(fVar8)) {
              *param_3 = iVar4;
              *param_4 = fVar1;
              *param_5 = param_1;
              return (float10)fVar2;
            }
            param_1 = param_1 + (float)_DAT_0064c328;
          } while (param_1 < _DAT_0064b240);
          iVar4 = iVar4 + -1;
          local_14 = local_14 + -1;
        } while (2 < iVar4);
      }
      fVar6 = (float10)_DAT_0064b254;
      *param_5 = 0.0;
      *param_3 = 0;
      *param_4 = 0.0;
      return fVar6;
    }
  }
  fVar6 = (float10)_DAT_0064b254;
  *param_4 = 0.0;
  *param_5 = 0.0;
  return fVar6;
}


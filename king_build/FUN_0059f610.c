
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0059f610(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float local_48 [6];
  float afStack_30 [6];
  float afStack_18 [6];
  
  pfVar3 = (float *)(param_1 + 0xc);
  uVar4 = 0;
  pfVar5 = (float *)&stack0xffffffb4;
  do {
    fVar1 = -(*pfVar3 * param_2[1] + pfVar3[-1] * *param_2 + pfVar3[1] * param_2[2] + pfVar3[2]);
    *(float *)((int)afStack_30 + uVar4) = fVar1;
    fVar2 = -(pfVar3[1] * param_3[2] + pfVar3[-1] * *param_3 + *pfVar3 * param_3[1] + pfVar3[2]);
    *(float *)((int)afStack_18 + uVar4) = fVar2;
    if (fVar1 <= _DAT_0064b254) {
      *param_4 = 0.0;
      return 0;
    }
    if (fVar2 < _DAT_0064b254) {
      *(float *)((int)local_48 + uVar4) = fVar1 / (fVar1 - fVar2);
    }
    else {
      *(undefined4 *)((int)local_48 + uVar4) = 0x3f800000;
    }
    uVar4 = uVar4 + 4;
    pfVar3 = pfVar3 + 4;
  } while (uVar4 < 0x18);
  iVar6 = 6;
  *param_4 = 2.0;
  do {
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar5;
    if (*param_4 <= *pfVar5) {
      pfVar3 = param_4;
    }
    iVar6 = iVar6 + -1;
    *param_4 = *pfVar3;
  } while (iVar6 != 0);
  return 1;
}


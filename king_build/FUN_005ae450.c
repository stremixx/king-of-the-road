
void __thiscall
FUN_005ae450(int param_1,byte param_2,undefined4 *param_3,int param_4,int param_5,double param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *param_3 = *(undefined4 *)(param_1 + 0x78c);
  iVar3 = param_4 * 3 + 0x132;
  iVar4 = param_5 * 3 + 0x132;
  fVar5 = *(float *)(param_1 + iVar3 * 4);
  fVar8 = *(float *)(param_1 + 4 + iVar3 * 4);
  fVar6 = *(float *)(param_1 + 4 + iVar4 * 4);
  pfVar1 = (float *)(param_1 + iVar4 * 4);
  fVar9 = *(float *)(param_1 + iVar3 * 4 + 8);
  fVar7 = pfVar1[2];
  pfVar2 = (float *)(param_1 + (*(int *)(param_1 + 0x78c) + 0x66) * 0xc);
  *pfVar2 = fVar5 + (*pfVar1 - fVar5) * (float)param_6;
  fVar5 = (float)param_6;
  pfVar2[1] = (fVar6 - fVar8) * fVar5 + fVar8;
  pfVar2[2] = (fVar7 - fVar9) * fVar5 + fVar9;
  if ((param_2 & 0x20) != 0) {
    *(float *)(param_1 + 0x5d0 + *(int *)(param_1 + 0x78c) * 4) =
         (*(float *)(param_1 + 0x5d0 + param_5 * 4) - *(float *)(param_1 + 0x5d0 + param_4 * 4)) *
         fVar5 + *(float *)(param_1 + 0x5d0 + param_4 * 4);
    *(float *)(param_1 + 0x628 + *(int *)(param_1 + 0x78c) * 4) =
         (*(float *)(param_1 + 0x628 + param_5 * 4) - *(float *)(param_1 + 0x628 + param_4 * 4)) *
         fVar5 + *(float *)(param_1 + 0x628 + param_4 * 4);
  }
  if ((param_2 & 0x80) != 0) {
    *(float *)(param_1 + 0x680 + *(int *)(param_1 + 0x78c) * 4) =
         (*(float *)(param_1 + 0x680 + param_5 * 4) - *(float *)(param_1 + 0x680 + param_4 * 4)) *
         fVar5 + *(float *)(param_1 + 0x680 + param_4 * 4);
    *(int *)(param_1 + 0x78c) = *(int *)(param_1 + 0x78c) + 1;
    return;
  }
  *(int *)(param_1 + 0x78c) = *(int *)(param_1 + 0x78c) + 1;
  return;
}


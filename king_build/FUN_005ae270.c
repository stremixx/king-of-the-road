
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005ae270(int param_1,byte param_2,undefined4 *param_3,int param_4,int param_5,undefined4 param_6
            )

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  *param_3 = *(undefined4 *)(param_1 + 0x78c);
  iVar3 = param_4 * 3 + 0x132;
  iVar4 = param_5 * 3 + 0x132;
  fVar5 = *(float *)(param_1 + iVar3 * 4);
  iVar3 = param_1 + iVar3 * 4;
  iVar1 = param_1 + iVar4 * 4;
  fVar8 = *(float *)(param_1 + iVar4 * 4) - fVar5;
  fVar6 = *(float *)(iVar3 + 4);
  fVar7 = *(float *)(iVar3 + 8);
  fVar9 = *(float *)(iVar1 + 4) - fVar6;
  fVar10 = *(float *)(iVar1 + 8) - fVar7;
  switch(param_6) {
  case 1:
    fVar11 = ((float)_DAT_0064a660 - fVar6) / fVar9;
    break;
  case 2:
    fVar11 = -((fVar6 + fVar5) / (fVar9 + fVar8));
    break;
  default:
    fVar11 = fVar6;
    break;
  case 4:
    fVar11 = -((fVar6 - fVar7) / (fVar9 - fVar10));
    break;
  case 8:
    fVar11 = -((fVar7 + fVar6) / (fVar10 + fVar9));
    break;
  case 0x10:
    fVar11 = -((fVar6 - fVar5) / (fVar9 - fVar8));
  }
  pfVar2 = (float *)(param_1 + (*(int *)(param_1 + 0x78c) + 0x66) * 0xc);
  *pfVar2 = fVar11 * fVar8 + fVar5;
  pfVar2[1] = fVar11 * fVar9 + fVar6;
  pfVar2[2] = fVar11 * fVar10 + fVar7;
  if ((param_2 & 0x20) != 0) {
    *(float *)(param_1 + 0x5d0 + *(int *)(param_1 + 0x78c) * 4) =
         (*(float *)(param_1 + 0x5d0 + param_5 * 4) - *(float *)(param_1 + 0x5d0 + param_4 * 4)) *
         fVar11 + *(float *)(param_1 + 0x5d0 + param_4 * 4);
    *(float *)(param_1 + 0x628 + *(int *)(param_1 + 0x78c) * 4) =
         (*(float *)(param_1 + 0x628 + param_5 * 4) - *(float *)(param_1 + 0x628 + param_4 * 4)) *
         fVar11 + *(float *)(param_1 + 0x628 + param_4 * 4);
  }
  if ((param_2 & 0x80) != 0) {
    *(float *)(param_1 + 0x680 + *(int *)(param_1 + 0x78c) * 4) =
         (*(float *)(param_1 + 0x680 + param_5 * 4) - *(float *)(param_1 + 0x680 + param_4 * 4)) *
         fVar11 + *(float *)(param_1 + 0x680 + param_4 * 4);
  }
  *(int *)(param_1 + 0x78c) = *(int *)(param_1 + 0x78c) + 1;
  return;
}


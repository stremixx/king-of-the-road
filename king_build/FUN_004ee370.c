
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ee370(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float local_20 [8];
  
  FUN_004eed00();
  fVar1 = *(float *)(param_1 + 0x2640);
  *(undefined4 *)(param_1 + 0x2788) = param_2;
  fVar2 = -DAT_00701598;
  iVar7 = *(int *)(param_1 + 0xdd4);
  fVar3 = -DAT_00701594 * fVar1 * _DAT_0064c980;
  *(float *)(param_1 + 0xc54) = -DAT_00701590 * fVar1 * _DAT_0064c980;
  fVar1 = fVar2 * fVar1 * _DAT_0064c980;
  *(float *)(param_1 + 0xc58) = fVar3;
  *(float *)(param_1 + 0xc5c) = fVar1;
  iVar6 = 0;
  if (0 < iVar7) {
    pfVar4 = (float *)(param_1 + 0x1f7c);
    pfVar5 = local_20;
    do {
      fVar1 = ABS(pfVar4[0x1b5] * *(float *)(param_1 + 0xc5c));
      *pfVar5 = fVar1;
      if (1 < iVar6) {
        *pfVar5 = *(float *)(param_1 + 0x2788) / (float)(iVar7 + -2) + fVar1;
      }
      fVar1 = *pfVar5;
      iVar6 = iVar6 + 1;
      fVar2 = *pfVar4 - _DAT_0067338c * pfVar4[8];
      pfVar4[0x10] = *pfVar5 / ((fVar2 / *pfVar4 + _DAT_0064b240) * fVar2);
      pfVar4[-0x90] = fVar1;
      pfVar4[-0xb9] = *pfVar5 * (float)_DAT_0064a658;
      iVar7 = *(int *)(param_1 + 0xdd4);
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar6 < iVar7);
  }
  return;
}


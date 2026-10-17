
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058fc20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(byte *)(param_1 + 0x4ac) & 1) != 0) {
    iVar5 = *(int *)(param_1 + 0xf88);
    if ((iVar5 == 0) || (iVar5 == 1)) {
      pfVar6 = (float *)&DAT_00695900;
      pfVar7 = local_30;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      fVar1 = local_30[3] * *(float *)(param_1 + 0x21c) +
              local_18 * *(float *)(param_1 + 0x220) + local_30[0] * *(float *)(param_1 + 0x218) +
              local_c;
      fVar2 = local_20 * *(float *)(param_1 + 0x21c) +
              local_14 * *(float *)(param_1 + 0x220) + local_30[1] * *(float *)(param_1 + 0x218) +
              local_8;
      fVar3 = local_1c * *(float *)(param_1 + 0x21c) +
              local_10 * *(float *)(param_1 + 0x220) + local_30[2] * *(float *)(param_1 + 0x218) +
              local_4;
      fVar4 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
      if ((fVar4 < _DAT_0064f808) ||
         ((fVar4 < _DAT_0064ca64 && ((ABS(fVar1) < fVar2 || (ABS(fVar3) < fVar2)))))) {
        *(undefined4 *)(param_1 + 0xf8c) = 3;
      }
    }
    else if (iVar5 == 2) {
      pfVar6 = (float *)&DAT_00695900;
      pfVar7 = local_30;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      fVar1 = local_30[3] * *(float *)(param_1 + 0x21c) +
              local_18 * *(float *)(param_1 + 0x220) + local_30[0] * *(float *)(param_1 + 0x218) +
              local_c;
      fVar2 = local_20 * *(float *)(param_1 + 0x21c) +
              local_14 * *(float *)(param_1 + 0x220) + local_30[1] * *(float *)(param_1 + 0x218) +
              local_8;
      fVar3 = local_1c * *(float *)(param_1 + 0x21c) +
              local_10 * *(float *)(param_1 + 0x220) + local_30[2] * *(float *)(param_1 + 0x218) +
              local_4;
      fVar4 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
      if (_DAT_0064e758 <= fVar4) {
        if ((fVar4 < _DAT_0064e720) && ((ABS(fVar1) < fVar2 || (ABS(fVar3) < fVar2)))) {
          *(undefined4 *)(param_1 + 0xf88) = 3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xf88) = 3;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0xf8c);
  if ((iVar5 == 3) || (iVar5 == 2)) {
    if (iVar5 != *(int *)(param_1 + 0xf88)) {
      if (iVar5 == 3) {
        *(undefined4 *)(param_1 + 0xe04) = 1;
        FUN_0058c660(0);
        iVar5 = *(int *)(param_1 + 0xe04);
      }
      else {
        if (iVar5 == *(int *)(param_1 + 0xf88)) {
          return;
        }
        if (iVar5 != 2) {
          return;
        }
        iVar5 = FUN_0058ea20();
      }
      if (iVar5 == 0) {
        if (*(int *)(param_1 + 0xf8c) == 2) {
          *(undefined4 *)(param_1 + 0xf88) = 2;
        }
        if (*(int *)(param_1 + 0xf8c) == 3) {
          *(undefined4 *)(param_1 + 0xf88) = 3;
        }
        *(undefined4 *)(param_1 + 0xf8c) = 0;
      }
    }
  }
  else if ((iVar5 != 0) && (iVar5 != 1)) {
    FUN_004e1e9c(s__MovingBox__check_box_modes___tr_0067ce70);
    return;
  }
  return;
}



void __thiscall FUN_006143a0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unkbyte10 Var5;
  float10 fVar6;
  float10 fVar7;
  
  FUN_006068e0(param_2,param_3,param_4);
  fVar1 = (*param_2 - *(float *)(param_1 + 0x9cc8)) / *(float *)(param_1 + 0x9cd8);
  fVar3 = (param_2[1] - *(float *)(param_1 + 0x9cd4)) / *(float *)(param_1 + 0x9cdc);
  fVar2 = ABS(fVar1 - *(float *)(param_1 + 0x9cf8));
  if (*(float *)(param_1 + 0x34) <= fVar2) {
    if (fVar2 < *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x34)) {
      if (*(float *)(param_1 + 0x9cf8) < fVar1) {
        *(undefined4 *)(param_1 + 0x9cb4) = 1;
        *(float *)(param_1 + 0x9cf8) = *(float *)(param_1 + 0x9cf8) + *(float *)(param_1 + 0x34);
        goto LAB_0061443e;
      }
      fVar1 = *(float *)(param_1 + 0x9cf8) - *(float *)(param_1 + 0x34);
    }
    *(float *)(param_1 + 0x9cf8) = fVar1;
    *(undefined4 *)(param_1 + 0x9cb4) = 1;
  }
LAB_0061443e:
  fVar1 = ABS(fVar3 - *(float *)(param_1 + 0x9cfc));
  if (*(float *)(param_1 + 0x38) <= fVar1) {
    if (*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x38) <= fVar1) {
      *(undefined4 *)(param_1 + 0x9cb4) = 1;
      *(float *)(param_1 + 0x9cfc) = fVar3;
    }
    else if (fVar3 <= *(float *)(param_1 + 0x9cfc)) {
      *(undefined4 *)(param_1 + 0x9cb4) = 1;
      *(float *)(param_1 + 0x9cfc) = *(float *)(param_1 + 0x9cfc) - *(float *)(param_1 + 0x38);
    }
    else {
      *(undefined4 *)(param_1 + 0x9cb4) = 1;
      *(float *)(param_1 + 0x9cfc) = *(float *)(param_1 + 0x9cfc) + *(float *)(param_1 + 0x38);
    }
  }
  fVar2 = *(float *)(param_1 + 0x14);
  fVar1 = *(float *)(param_1 + 0x10);
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  fVar1 = fVar1 / fVar3;
  fVar2 = fVar2 / fVar3;
  Var5 = FUN_0061b800();
  fVar6 = (float10)fcos(Var5);
  Var5 = FUN_0061b800();
  fVar7 = (float10)fsin(Var5);
  fVar3 = (float)fVar6 * fVar1;
  *(float *)(param_1 + 0x3c) = fVar3 + (float)(fVar7 * (float10)fVar2);
  fVar4 = (float)fVar6 * fVar2;
  *(float *)(param_1 + 0x40) = (float)((float10)fVar4 - fVar7 * (float10)fVar1);
  *(float *)(param_1 + 0x44) = -(fVar3 - (float)(fVar7 * (float10)fVar2));
  *(float *)(param_1 + 0x48) = (float)-(fVar7 * (float10)fVar1 + (float10)fVar4);
  Var5 = FUN_0061b810();
  fVar6 = (float10)fcos(Var5);
  Var5 = FUN_0061b810();
  fVar7 = (float10)fsin(Var5);
  fVar3 = (float)fVar6 * fVar1;
  *(float *)(param_1 + 0x4c) = fVar3 + (float)(fVar7 * (float10)fVar2);
  fVar4 = (float)fVar6 * fVar2;
  *(float *)(param_1 + 0x50) = (float)((float10)fVar4 - fVar7 * (float10)fVar1);
  *(float *)(param_1 + 0x54) = -(fVar3 - (float)(fVar7 * (float10)fVar2));
  *(float *)(param_1 + 0x58) = (float)-(fVar7 * (float10)fVar1 + (float10)fVar4);
  return;
}


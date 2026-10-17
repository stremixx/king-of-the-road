
void __thiscall FUN_004f1770(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined1 local_c [12];
  
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_2[1];
  *(undefined4 *)(param_1 + 0x60) = param_2[2];
  pfVar7 = (float *)FUN_004e2984(local_c,(undefined4 *)(param_1 + 0x58),param_1 + 0x1f48);
  fVar1 = pfVar7[1];
  fVar2 = *pfVar7;
  fVar3 = pfVar7[2];
  fVar4 = pfVar7[1];
  fVar5 = *pfVar7;
  fVar6 = pfVar7[2];
  *(float *)(param_1 + 0x4c) =
       *pfVar7 * *(float *)(param_1 + 0x10) +
       *(float *)(param_1 + 0x28) * pfVar7[2] + *(float *)(param_1 + 0x1c) * pfVar7[1];
  *(float *)(param_1 + 0x50) =
       *(float *)(param_1 + 0x2c) * fVar3 +
       *(float *)(param_1 + 0x14) * fVar2 + *(float *)(param_1 + 0x20) * fVar1;
  *(float *)(param_1 + 0x54) =
       *(float *)(param_1 + 0x30) * fVar6 +
       *(float *)(param_1 + 0x18) * fVar5 + *(float *)(param_1 + 0x24) * fVar4;
  FUN_004843e0();
  FUN_004f0060();
  return;
}


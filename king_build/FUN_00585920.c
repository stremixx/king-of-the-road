
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00585920(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_1[300] == 0) {
    FUN_005d29a0(1);
    param_1[300] = 1;
    (**(code **)(*param_1 + 0xd0))();
    fVar4 = (float10)FUN_005aabc0(param_1 + 0x68);
    fVar4 = fVar4 * (float10)_DAT_0064a830;
    if ((float10)_DAT_0064a6d0 < fVar4) {
      fVar4 = (float10)_DAT_0064a6d0;
    }
    fVar4 = fVar4 + (float10)_DAT_0064c328;
    fStack_24 = (float)((float10)DAT_00701590 * fVar4);
    fStack_20 = (float)((float10)DAT_00701594 * fVar4);
    fStack_1c = (float)((float10)DAT_00701598 * fVar4);
    fStack_18 = fStack_24;
    fStack_14 = fStack_20;
    fStack_10 = fStack_1c;
    FUN_005aae00(&fStack_24,&fStack_18);
    (**(code **)(*param_1 + 0x90))(param_1 + 0x68,s__MovingBox__receiveHit__1_0067c74c);
  }
  uVar1 = param_1[0xdf];
  param_1[0x12a] = 0;
  param_1[0xdf] = uVar1 | 2;
  param_1[0xe0] = uVar1 | 2;
  fVar4 = (float10)FUN_004e2035();
  param_1[0xe2] = (int)(float)fVar4;
  param_1[0xf1] = *(int *)(param_2 + 0x34);
  param_1[0xf2] = *(int *)(param_2 + 0x38);
  param_1[0xf3] = *(int *)(param_2 + 0x3c);
  fStack_24 = -*(float *)(param_2 + 0x40);
  fStack_20 = -*(float *)(param_2 + 0x44);
  fStack_1c = -*(float *)(param_2 + 0x48);
  param_1[0xf4] = (int)fStack_24;
  param_1[0xf5] = (int)fStack_20;
  param_1[0xf6] = (int)fStack_1c;
  iVar3 = FUN_00588ac0(param_3);
  param_1[0x101] = iVar3;
  fVar2 = (float)param_1[99];
  fStack_14 = (float)param_1[0x69] - (float)param_1[0x72];
  fStack_10 = (float)param_1[0x6a] - (float)param_1[0x73];
  fStack_24 = ((float)param_1[0x68] - (float)param_1[0x71]) * fVar2;
  fStack_20 = fStack_14 * fVar2;
  fStack_1c = fStack_10 * fVar2;
  fStack_c = fStack_24;
  fStack_8 = fStack_20;
  fStack_4 = fStack_1c;
  (**(code **)(*param_1 + 0xa4))((int *)(param_2 + 0x34),&fStack_c);
  param_1[0x313] = (int)(fVar2 * (float)param_1[0x68]);
  param_1[0x314] = (int)(fVar2 * (float)param_1[0x69]);
  param_1[0x315] = (int)(fVar2 * (float)param_1[0x6a]);
  fStack_24 = fVar2 * (float)param_1[0x6d];
  param_1[0x316] = (int)(fVar2 * (float)param_1[0x6b]);
  param_1[0x317] = (int)(fVar2 * (float)param_1[0x6c]);
  param_1[0x318] = (int)fStack_24;
  (**(code **)(*param_1 + 0x50))(fVar2,1);
  fVar4 = (float10)FUN_004e2035();
  param_1[0x312] = (int)(float)fVar4;
  (**(code **)(*param_1 + 0xa0))(param_1 + 0xe4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00585bb0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [8];
  float fStack_4;
  
  local_24 = *param_6;
  local_20 = param_6[1];
  local_1c = param_6[2];
  if (param_1[300] == 0) {
    FUN_005d29a0(1);
    param_1[300] = 1;
    (**(code **)(*param_1 + 0xd0))();
    fVar4 = (float10)FUN_005aabc0(param_6);
    fVar4 = fVar4 * (float10)_DAT_0064a830 + (float10)_DAT_0064c328;
    fStack_18 = (float)((float10)DAT_00701590 * fVar4);
    fStack_14 = (float)((float10)DAT_00701594 * fVar4);
    fStack_10 = (float)((float10)DAT_00701598 * fVar4);
    FUN_005aae00(auStack_c,&fStack_18);
  }
  param_1[0x12a] = 0;
  param_1[0xdf] = param_1[0xdf] | 2;
  fVar4 = (float10)FUN_004e2035();
  param_1[0xe2] = (int)(float)fVar4;
  param_1[0xf1] = *(int *)(param_2 + 0x34);
  param_1[0xf2] = *(int *)(param_2 + 0x38);
  param_1[0xf3] = *(int *)(param_2 + 0x3c);
  fVar1 = *(float *)(param_2 + 0x44);
  fVar2 = *(float *)(param_2 + 0x48);
  param_1[0xf4] = (int)-*(float *)(param_2 + 0x40);
  param_1[0xf5] = (int)-fVar1;
  param_1[0xf6] = (int)-fVar2;
  iVar3 = FUN_00588ac0(param_3);
  param_1[0x101] = iVar3;
  (**(code **)(*param_1 + 0x90))(&local_24,s__MovingBox__receiveHit_2_0067c784);
  (**(code **)(*param_1 + 0x94))(param_5,s__MovingBox__receiveHit_3_0067c768);
  param_1[0x313] = (int)(fStack_4 * (float)param_1[0x68]);
  param_1[0x314] = (int)(fStack_4 * (float)param_1[0x69]);
  param_1[0x315] = (int)(fStack_4 * (float)param_1[0x6a]);
  param_1[0x316] = (int)(fStack_4 * (float)param_1[0x6b]);
  param_1[0x317] = (int)(fStack_4 * (float)param_1[0x6c]);
  param_1[0x318] = (int)(fStack_4 * (float)param_1[0x6d]);
  (**(code **)(*param_1 + 0x50))(fStack_4,1);
  (**(code **)(*param_1 + 0xa0))(param_1 + 0xe4);
  fVar4 = (float10)FUN_004e2035();
  param_1[0x312] = (int)(float)fVar4;
  return;
}



int FUN_00591bd0(int param_1,float *param_2,undefined4 param_3,int param_4,float *param_5,
                undefined4 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 local_28 [12];
  undefined1 local_1c [16];
  undefined1 local_c [12];
  
  *param_7 = 0.0;
  local_58 = *(float *)(param_4 + 0xd74) * param_5[6] +
             *(float *)(param_4 + 0xd70) * param_5[3] + *param_5 * *(float *)(param_4 + 0xd6c) +
             param_5[9];
  local_54 = *(float *)(param_4 + 0xd70) * param_5[4] +
             param_5[1] * *(float *)(param_4 + 0xd6c) + *(float *)(param_4 + 0xd74) * param_5[7] +
             param_5[10];
  local_50 = *(float *)(param_4 + 0xd6c) * param_5[2] +
             param_5[5] * *(float *)(param_4 + 0xd70) + param_5[8] * *(float *)(param_4 + 0xd74) +
             param_5[0xb];
  FUN_0041ce10(*param_2 * *(float *)(param_1 + 0xd6c) +
               param_2[3] * *(float *)(param_1 + 0xd70) + param_2[6] * *(float *)(param_1 + 0xd74) +
               param_2[9],
               param_2[4] * *(float *)(param_1 + 0xd70) +
               param_2[1] * *(float *)(param_1 + 0xd6c) + param_2[7] * *(float *)(param_1 + 0xd74) +
               param_2[10],
               param_2[5] * *(float *)(param_1 + 0xd70) +
               param_2[2] * *(float *)(param_1 + 0xd6c) + param_2[8] * *(float *)(param_1 + 0xd74) +
               param_2[0xb]);
  FUN_0041ce10(local_34 - local_58,local_30 - local_54,local_2c - local_50);
  fVar1 = local_50 * local_50 + local_54 * local_54 + local_58 * local_58;
  fVar2 = *(float *)(param_1 + 0xcc8) + *(float *)(param_4 + 0xcc8);
  if (fVar2 * fVar2 < fVar1) {
    return 0;
  }
  fVar2 = *(float *)(param_4 + 0xcd0) + *(float *)(param_1 + 0xcd0);
  if (fVar2 * fVar2 <= fVar1) {
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_64 = 0.0;
    local_60 = 0.0;
    local_5c = 0.0;
    FUN_0041ce10(*(float *)(param_4 + 0xd74) * param_5[6] +
                 *param_5 * *(float *)(param_4 + 0xd6c) + *(float *)(param_4 + 0xd70) * param_5[3] +
                 param_5[9],
                 param_5[1] * *(float *)(param_4 + 0xd6c) +
                 *(float *)(param_4 + 0xd70) * param_5[4] + *(float *)(param_4 + 0xd74) * param_5[7]
                 + param_5[10],
                 param_5[2] * *(float *)(param_4 + 0xd6c) +
                 param_5[5] * *(float *)(param_4 + 0xd70) + param_5[8] * *(float *)(param_4 + 0xd74)
                 + param_5[0xb]);
    fVar1 = *(float *)(param_4 + 0xcd0);
    iVar6 = 0;
    iVar4 = FUN_0058c820(&local_4c);
    if (iVar4 != 0) {
      do {
        pfVar5 = (float *)FUN_0043f690(local_28,&local_4c,param_2);
        local_64 = *pfVar5;
        local_60 = pfVar5[1];
        local_5c = pfVar5[2];
        FUN_0041ce10(local_64 - local_40,local_60 - local_3c,local_5c - local_38);
        local_58 = local_34;
        local_54 = local_30;
        local_50 = local_2c;
        fVar7 = (float10)FUN_004e1080(&local_58,&local_58);
        if (fVar7 < (float10)(fVar1 * fVar1)) {
          iVar6 = 1;
        }
        iVar4 = FUN_0058c820(&local_4c);
      } while (iVar4 != 0);
      if (iVar6 != 0) {
        return iVar6;
      }
    }
    FUN_0058abf0();
    pfVar5 = (float *)FUN_0043f690(local_28,&local_40,param_3);
    local_64 = *pfVar5;
    local_60 = pfVar5[1];
    local_5c = pfVar5[2];
    bVar3 = true;
    iVar4 = FUN_0058c8f0(local_1c);
    if (iVar4 != 0) {
      do {
        FUN_004bde20(&local_34,&local_64,local_c);
        fVar7 = (float10)FUN_004e1080(&local_34,local_1c);
        if ((float10)fVar1 < fVar7) {
          bVar3 = false;
        }
        iVar4 = FUN_0058c8f0(local_1c);
      } while (iVar4 != 0);
      if (!bVar3) {
        return 0;
      }
    }
    return 1;
  }
  *param_7 = -*(float *)(param_1 + 0xcd0);
  return 1;
}


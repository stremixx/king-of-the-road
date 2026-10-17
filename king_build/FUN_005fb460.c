
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_005fb460(int param_1,uint param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 uVar6;
  float *pfVar7;
  float local_54;
  float fStack_50;
  double local_48;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  if ((*(int *)(param_1 + 0x6c) == 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    pfVar7 = param_3 + 0x16;
    pfVar5 = param_3 + 0x13;
    iVar3 = FUN_005aad90(pfVar5,pfVar7);
    if (iVar3 == 0) {
      local_30 = param_3[1] * *pfVar5 + param_3[4] * param_3[0x14] + param_3[7] * param_3[0x15] +
                 param_3[10];
      local_2c = param_3[2] * *pfVar5 + param_3[5] * param_3[0x14] + param_3[8] * param_3[0x15] +
                 param_3[0xb];
      fVar1 = param_3[3] * *pfVar5 + param_3[6] * param_3[0x14] + param_3[9] * param_3[0x15] +
              param_3[0xc];
      local_24 = *pfVar7 * param_3[1] + param_3[7] * param_3[0x18] + param_3[4] * param_3[0x17] +
                 param_3[10];
      local_20 = param_3[8] * param_3[0x18] + param_3[2] * *pfVar7 + param_3[5] * param_3[0x17] +
                 param_3[0xb];
      local_1c = param_3[9] * param_3[0x18] + param_3[3] * *pfVar7 + param_3[6] * param_3[0x17] +
                 param_3[0xc];
      pfVar7 = (float *)(param_1 + 0x30);
      fVar2 = (local_24 - local_30) * *pfVar7 +
              (local_20 - local_2c) * *(float *)(param_1 + 0x34) +
              (local_1c - fVar1) * *(float *)(param_1 + 0x38);
      local_48 = (double)fVar2;
      if (((float)_DAT_0064a668 <= fVar2) && (_DAT_0064a738 < local_48)) {
        fVar2 = -(((*pfVar7 * local_30 +
                   *(float *)(param_1 + 0x34) * local_2c + *(float *)(param_1 + 0x38) * fVar1) -
                  (*(float *)(param_1 + 0x3c) * *pfVar7 +
                  *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x34) +
                  *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x38))) / fVar2);
        local_28 = fVar1;
        if (((float)_DAT_00650700 < fVar2) && (fVar2 < (float)_DAT_00651cf0)) {
          FUN_0041ce10(local_24 - local_30,local_20 - local_2c,local_1c - fVar1);
          FUN_0041ce10(local_18 * fVar2,local_14 * fVar2,local_10 * fVar2);
          fStack_50 = (float)((ulonglong)(double)fVar2 >> 0x20);
          local_54 = SUB84((double)fVar2,0);
          FUN_0041ce10(local_54 + local_30,fStack_50 + local_2c,fVar1 + local_28);
          local_38 = local_8;
          local_34 = local_4;
          local_3c = local_c;
          iVar3 = FUN_005fae40(local_c,*(undefined4 *)(param_1 + 0x3c),
                               *(undefined4 *)(param_1 + 0x54));
          if (((iVar3 != 0) &&
              (iVar3 = FUN_005fae40(local_38,*(undefined4 *)(param_1 + 0x40),
                                    *(undefined4 *)(param_1 + 0x58)), iVar3 != 0)) &&
             (iVar3 = FUN_005fae40(local_34,*(undefined4 *)(param_1 + 0x44),
                                   *(undefined4 *)(param_1 + 0x5c)), iVar3 != 0)) {
            if (*(int **)(param_1 + 0x80) == (int *)0x0) {
              *(undefined1 *)(param_3 + 0x1f) = 0;
              return 4;
            }
            uVar4 = (**(code **)(**(int **)(param_1 + 0x80) + 0x34))(param_2,param_3);
            if ((uVar4 & 2) == 0) {
              param_3[0x1a] = *(float *)(param_1 + 0x80);
            }
            return uVar4 | 2;
          }
        }
        if ((*(int *)(param_1 + 0x80) != 0) && ((param_2 & 2) != 0)) {
          fVar1 = -((((*pfVar7 * local_30 +
                      *(float *)(param_1 + 0x38) * local_28 + *(float *)(param_1 + 0x34) * local_2c)
                     - (*(float *)(param_1 + 0x3c) * *pfVar7 +
                       *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x34) +
                       *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x38))) + *param_3) /
                   (float)local_48);
          if ((float)_DAT_0064a668 <= fVar1) {
            if ((float)_DAT_0064a660 < fVar1) {
              return 0;
            }
          }
          else {
            fVar1 = 0.0;
          }
          FUN_0041ce10(local_24 - local_30,local_20 - local_2c,local_1c - local_28);
          FUN_0041ce10(local_c * fVar1,local_8 * fVar1,local_4 * fVar1);
          local_24 = local_18;
          local_20 = local_14;
          local_1c = local_10;
          pfVar5 = (float *)FUN_004bddd0(&local_48,&local_30,&local_24);
          local_3c = *pfVar5;
          local_38 = pfVar5[1];
          local_34 = pfVar5[2];
          uVar6 = FUN_004bdd80(&local_c,pfVar7,*param_3);
          pfVar7 = (float *)FUN_004bddd0(&local_18,&local_3c,uVar6);
          local_3c = *pfVar7;
          local_38 = pfVar7[1];
          local_34 = pfVar7[2];
          iVar3 = FUN_005fae40(local_3c,*(undefined4 *)(param_1 + 0x3c),
                               *(undefined4 *)(param_1 + 0x54));
          if (((iVar3 != 0) &&
              (iVar3 = FUN_005fae40(local_38,*(undefined4 *)(param_1 + 0x40),
                                    *(undefined4 *)(param_1 + 0x58)), iVar3 != 0)) &&
             (iVar3 = FUN_005fae40(local_34,*(undefined4 *)(param_1 + 0x44),
                                   *(undefined4 *)(param_1 + 0x5c)), iVar3 != 0)) {
            uVar4 = (**(code **)(**(int **)(param_1 + 0x80) + 0x34))(param_2,param_3);
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}


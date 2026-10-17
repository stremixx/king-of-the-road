
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00556370(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(int *)(param_1 + 0x4c4) == 0) &&
     ((iVar2 = *(int *)(param_1 + 0x5460), iVar2 == 0 ||
      (((((*(float *)(iVar2 + 0x270c) <= (float)_DAT_0064a590 && (*(int *)(iVar2 + 0x3468) == 0)) &&
         (*(float *)(param_1 + 0x5030) == *(float *)(iVar2 + 0x270c))) &&
        ((*(float *)(param_1 + 0x5034) == *(float *)(iVar2 + 0x271c) &&
         (*(float *)(param_1 + 0x5038) == *(float *)(iVar2 + 10000))))) &&
       ((*(int *)(param_1 + 0x503c) == (int)*(short *)(iVar2 + 0x2714) &&
        (*(int *)(param_1 + 0x5040) == (int)*(short *)(iVar2 + 0x2716))))))))) {
    local_30 = *(float *)(param_1 + 0x5044) - *(float *)(param_1 + 0x50c4);
    local_2c = *(float *)(param_1 + 0x5048) - *(float *)(param_1 + 0x50c8);
    local_28 = *(float *)(param_1 + 0x504c) - *(float *)(param_1 + 0x50cc);
    fVar4 = (float10)FUN_004e221b(&local_30);
    if (fVar4 <= (float10)_DAT_0064a648) {
      local_30 = *(float *)(param_1 + 0x5050) - *(float *)(param_1 + 0x228);
      local_2c = *(float *)(param_1 + 0x5054) - *(float *)(param_1 + 0x22c);
      local_28 = *(float *)(param_1 + 0x5058) - *(float *)(param_1 + 0x230);
      fVar4 = (float10)FUN_004e221b(&local_30);
      if (fVar4 <= (float10)_DAT_0064a648) {
        local_30 = *(float *)(param_1 + 0x505c) - *(float *)(param_1 + 0x1b0);
        local_2c = *(float *)(param_1 + 0x5060) - *(float *)(param_1 + 0x1b4);
        local_28 = *(float *)(param_1 + 0x5064) - *(float *)(param_1 + 0x1b8);
        fVar4 = (float10)FUN_004e221b(&local_30);
        if (fVar4 <= (float10)_DAT_0064a590) {
          local_30 = *(float *)(param_1 + 0x5068) - *(float *)(param_1 + 0x1bc);
          local_2c = *(float *)(param_1 + 0x506c) - *(float *)(param_1 + 0x1c0);
          local_28 = *(float *)(param_1 + 0x5070) - *(float *)(param_1 + 0x1c4);
          fVar4 = (float10)FUN_004e221b(&local_30);
          if ((fVar4 <= (float10)_DAT_0064e7a8) &&
             (fVar4 = (float10)FUN_004e221b((float *)(param_1 + 0x1b0)),
             fVar4 <= (float10)_DAT_0064a590)) {
            iVar2 = 0;
            piVar3 = (int *)(param_1 + 0xdc4);
            do {
              iVar1 = *piVar3;
              if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4b4) != 0)) {
                local_18 = *(float *)(iVar1 + 0xd2c) - *(float *)(param_1 + 0x228);
                local_14 = *(float *)(iVar1 + 0xd30) - *(float *)(param_1 + 0x22c);
                local_10 = *(float *)(iVar1 + 0xd34) - *(float *)(param_1 + 0x230);
                local_20 = *(float *)(iVar1 + 0xce8) - *(float *)(param_1 + 0x1b4);
                local_1c = *(float *)(iVar1 + 0xcec) - *(float *)(param_1 + 0x1b8);
                local_28 = (float)*(double *)(DAT_006ee15c + 0xb90);
                local_30 = (*(float *)(iVar1 + 0xce4) - *(float *)(param_1 + 0x1b0)) * local_28;
                local_2c = local_20 * local_28;
                local_28 = local_1c * local_28;
                local_c = local_30;
                local_8 = local_2c;
                local_4 = local_28;
                fVar4 = (float10)FUN_005aabc0(&local_18);
                fVar5 = (float10)FUN_005aabc0(&local_c);
                if ((float10)(float)fVar4 <
                    fVar5 + (float10)*(float *)(*piVar3 + 0xcc8) +
                    (float10)*(float *)(param_1 + 0xcd8)) {
                  return 0;
                }
              }
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < 6);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


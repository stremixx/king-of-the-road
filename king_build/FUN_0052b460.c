
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052b460(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar4 = param_2;
  if (((*(int *)(param_1 + 0x174) == 0) && (*(int *)(param_1 + 0x2530) != 0)) &&
     (*(int *)(param_1 + 0x252c) != 0)) {
    local_c = *param_3;
    local_8 = param_3[1];
    local_4 = param_3[2];
    fVar6 = (float10)FUN_005aabc0(&local_c);
    fVar6 = fVar6 / (float10)*(float *)(param_1 + 0x18c);
    if ((float10)_DAT_0064b3fc <= fVar6) {
      fVar6 = fVar6 - (float10)_DAT_0064b3fc;
      fVar7 = (fVar6 - (float10)_DAT_0064b440) * (float10)_DAT_0064dd78;
      fVar8 = (float10)1.4426950408889634 * -(fVar7 * fVar7);
      fVar7 = ROUND(fVar8);
      fVar8 = (float10)f2xm1(fVar8 - fVar7);
      fVar7 = (float10)fscale((float10)1 + fVar8,fVar7);
      local_40 = (float)(((fVar6 * (float10)_DAT_0064c4d8) / (fVar6 + (float10)_DAT_0064b310) +
                         (float10)_DAT_0064b240) *
                         ((float10)_DAT_0064a660 - fVar7 * (float10)_DAT_0064dd70) * fVar6);
      local_3c = *(float *)(param_1 + 0x254) * *param_2 +
                 *(float *)(param_1 + 0x26c) * param_2[2] + *(float *)(param_1 + 0x260) * param_2[1]
                 + *(float *)(param_1 + 0x278);
      local_38 = *(float *)(param_1 + 0x270) * param_2[2] +
                 *(float *)(param_1 + 0x264) * param_2[1] + *(float *)(param_1 + 600) * *param_2 +
                 *(float *)(param_1 + 0x27c);
      local_34 = *(float *)(param_1 + 0x274) * param_2[2] +
                 *(float *)(param_1 + 0x268) * param_2[1] + *(float *)(param_1 + 0x25c) * *param_2 +
                 *(float *)(param_1 + 0x280);
      FUN_005aaad0(&local_24,&local_3c);
      if ((local_34 <= ABS(local_38)) || (local_34 <= ABS(local_3c))) {
        local_44 = 0;
        param_3 = (undefined4 *)0x0;
        if (_DAT_0064b254 < local_20) {
          fVar1 = local_20 * local_20 * local_40;
          FUN_00590d60(1,fVar1,&local_44,&param_3);
          FUN_00590d60(2,fVar1,&local_44,&param_3);
          FUN_00590d60(3,fVar1,&local_44,&param_3);
        }
        fVar1 = (local_24 + local_20) * (float)_DAT_0064dd68;
        if (_DAT_0064b254 < fVar1) {
          FUN_00590d60(2,fVar1 * fVar1 * local_40,&local_44,&param_3);
        }
        if (local_44 != 0) {
          fVar1 = *(float *)(param_1 + 0x1b0) * local_34 - *(float *)(param_1 + 0x1b4) * local_38;
          fVar3 = *(float *)(param_1 + 0x1b4) * local_3c - *(float *)(param_1 + 0x1ac) * local_34;
          fVar2 = *(float *)(param_1 + 0x1ac) * local_38 - *(float *)(param_1 + 0x1b0) * local_3c;
          local_30 = fVar1 * *(float *)(param_1 + 500) +
                     fVar3 * *(float *)(param_1 + 0x200) + fVar2 * *(float *)(param_1 + 0x20c) +
                     *(float *)(param_1 + 0x1a0);
          local_2c = fVar1 * *(float *)(param_1 + 0x1f8) +
                     fVar3 * *(float *)(param_1 + 0x204) + fVar2 * *(float *)(param_1 + 0x210) +
                     *(float *)(param_1 + 0x1a4);
          local_28 = fVar1 * *(float *)(param_1 + 0x1fc) +
                     fVar3 * *(float *)(param_1 + 0x208) + fVar2 * *(float *)(param_1 + 0x214) +
                     *(float *)(param_1 + 0x1a8);
          if (local_44 < 2) {
            iVar5 = 4;
          }
          else {
            iVar5 = ((2 < local_44) - 1 & 0xfffffffd) + 10;
          }
          if (param_3 != (undefined4 *)0x0) {
            iVar5 = iVar5 * 2;
          }
          local_40 = 0.15;
          local_18 = local_30;
          local_14 = local_2c;
          local_10 = local_28;
          fVar6 = (float10)FUN_005aabc0(&local_30);
          param_2 = (float *)(float)fVar6;
          if (param_3 != (undefined4 *)0x0) {
            local_40 = 0.22500001;
            param_2 = (float *)((SQRT((float)(int)param_3) + (float)_DAT_0064a660) * (float)param_2)
            ;
          }
          FUN_005aad10(&local_18,0x3f000000);
          if (local_28 < (float)param_2 * (float)_DAT_0064a5a8) {
            local_28 = (float)param_2 * (float)_DAT_0064a5a8;
          }
          FUN_004bb510(pfVar4,param_1 + 0x3d0,&local_30,param_2,iVar5,local_40,1);
          return;
        }
      }
    }
  }
  return;
}


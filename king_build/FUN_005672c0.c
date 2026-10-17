
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005672c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [48];
  
  param_1[0x335] = 1.4013e-45;
  fVar5 = (float10)FUN_004e2035();
  if ((float10)_DAT_0064ed30 <= fVar5 - (float10)param_1[0x336]) {
    fVar5 = (float10)FUN_004e2035();
    if ((float10)_DAT_0064ed30 <= fVar5 - (float10)param_1[0x337]) {
      if (param_1[0x32c] == 0.0) {
        fVar5 = (float10)FUN_004e2035();
        param_1[0x336] = (float)fVar5;
      }
      else {
        iVar4 = FUN_0057d570(local_30);
        local_68 = param_1[0x10] * *(float *)(iVar4 + 0x28) +
                   param_1[0x13] * *(float *)(iVar4 + 0x2c) +
                   param_1[0xd] * *(float *)(iVar4 + 0x24) + param_1[0x16];
        local_64 = param_1[0x11] * *(float *)(iVar4 + 0x28) +
                   param_1[0x14] * *(float *)(iVar4 + 0x2c) +
                   param_1[0xe] * *(float *)(iVar4 + 0x24) + param_1[0x17];
        local_6c = *(float *)(iVar4 + 0x24) * param_1[0xc] +
                   param_1[0xf] * *(float *)(iVar4 + 0x28) +
                   param_1[0x12] * *(float *)(iVar4 + 0x2c) + param_1[0x15];
        iVar4 = _rand();
        local_6c = ((float)iVar4 * (float)_PTR_DAT_0064ed28 + (float)_DAT_0064a660) * local_6c *
                   (float)_DAT_0064a830;
        FUN_005aaad0(&local_60,&local_6c);
        fVar1 = ABS(local_68);
        local_54 = local_60 * fVar1;
        local_50 = local_5c * fVar1;
        local_3c = param_1[9];
        local_38 = param_1[10];
        fVar2 = local_54 + local_54;
        local_34 = param_1[0xb];
        fVar3 = local_50 + local_50;
        fVar1 = fVar1 * local_58 + fVar1 * local_58;
        local_48 = fVar2 * *param_1 + fVar3 * param_1[3] + fVar1 * param_1[6] + param_1[9];
        local_44 = fVar2 * param_1[1] + fVar3 * param_1[4] + fVar1 * param_1[7] + param_1[10];
        local_40 = fVar2 * param_1[2] + fVar3 * param_1[5] + fVar1 * param_1[8] + param_1[0xb];
        FUN_00566b50(param_1[0x18],&local_3c,&local_48,param_1[0x366],0x40000000);
        if (param_1[0x336] <= param_1[0x337]) {
          fVar5 = (float10)FUN_004e2035();
          param_1[0x336] = (float)fVar5;
          param_1[0x335] = 0.0;
          return;
        }
      }
      fVar5 = (float10)FUN_004e2035();
      param_1[0x337] = (float)fVar5;
      param_1[0x335] = 0.0;
    }
  }
  return;
}


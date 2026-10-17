
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fcc60(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  double in_stack_00000010;
  double in_stack_00000018;
  undefined4 in_stack_00000020;
  double local_70;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [52];
  
  fVar5 = (float10)FUN_005aabc0(&stack0x00000004);
  if (fVar5 < (float10)in_stack_00000010 * (float10)_DAT_0064a6c0) {
    pfVar4 = (float *)FUN_005ab7d0(local_38,0x3ec90fda);
    local_44 = DAT_007015a0 * *pfVar4 + DAT_007015a4 * pfVar4[3] + DAT_007015a8 * pfVar4[6] +
               pfVar4[9];
    local_40 = DAT_007015a0 * pfVar4[1] + DAT_007015a4 * pfVar4[4] + DAT_007015a8 * pfVar4[7] +
               pfVar4[10];
    local_3c = DAT_007015a0 * pfVar4[2] + DAT_007015a4 * pfVar4[5] + DAT_007015a8 * pfVar4[8] +
               pfVar4[0xb];
    fVar1 = -DAT_007015a0;
    fVar2 = -DAT_007015a4;
    fVar3 = -DAT_007015a8;
    pfVar4 = (float *)FUN_005ab7d0(local_38,0xbec90fda);
    local_50 = fVar1 * *pfVar4 + fVar2 * pfVar4[3] + fVar3 * pfVar4[6] + pfVar4[9];
    local_4c = fVar1 * pfVar4[1] + fVar2 * pfVar4[4] + fVar3 * pfVar4[7] + pfVar4[10];
    local_48 = fVar1 * pfVar4[2] + fVar2 * pfVar4[5] + fVar3 * pfVar4[8] + pfVar4[0xb];
    FUN_005aaad0(&local_5c,&stack0x00000004);
    fVar6 = (float10)in_stack_00000010;
    if (fVar6 < (float10)_DAT_0064a660) {
      fVar6 = (float10)_DAT_0064a660;
    }
    fVar5 = (float10)(double)fVar5 / fVar6 + (float10)_DAT_0064a660;
    local_70 = (double)((((float10)local_50 * (float10)local_5c +
                          (float10)local_58 * (float10)local_4c +
                          (float10)local_54 * (float10)local_48 + (float10)_DAT_0064a660) *
                         (float10)_DAT_00651d50 + (float10)_DAT_00650680) / fVar5);
    fVar5 = (((float10)local_5c * (float10)local_44 +
              (float10)local_58 * (float10)local_40 + (float10)local_54 * (float10)local_3c +
             (float10)_DAT_0064a660) * (float10)_DAT_00651d50 + (float10)_DAT_00650680) / fVar5;
    if (_DAT_0064a668 <= local_70) {
      if (_DAT_0064a660 < local_70) {
        local_70 = 1.0;
      }
    }
    else {
      local_70 = 0.0;
    }
    if ((float10)_DAT_0064a668 <= fVar5) {
      if ((float10)_DAT_0064a660 < fVar5) {
        fVar5 = (float10)_DAT_0064a660;
      }
    }
    else {
      fVar5 = (float10)_DAT_0064a668;
    }
    FUN_005fcaa0((float)((float10)local_70 * (float10)in_stack_00000018),
                 (float)(fVar5 * (float10)in_stack_00000018),in_stack_00000020);
  }
  return;
}


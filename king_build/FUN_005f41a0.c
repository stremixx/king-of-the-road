
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005f41a0(undefined4 param_1,int param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  int local_d4;
  int local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  double local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  double local_68;
  float local_5c;
  float local_58;
  float local_54;
  double local_50;
  double local_48;
  undefined1 local_3c [12];
  double local_30;
  double local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_b8 = *param_4 - *param_3;
  local_b4 = param_4[1] - param_3[1];
  local_b0 = param_4[2] - param_3[2];
  if (local_b8 * *(float *)(param_2 + 0x20) +
      local_b4 * *(float *)(param_2 + 0x24) + local_b0 * *(float *)(param_2 + 0x28) <=
      (float)_DAT_0064a738) {
    local_bc = *(float *)(param_2 + 0x28);
    local_c0 = *(float *)(param_2 + 0x24);
    local_c4 = *(float *)(param_2 + 0x20);
    if (((float)_DAT_00650700 <=
         *(float *)(param_2 + 0x2c) +
         *param_3 * local_c4 + local_c0 * param_3[1] + local_bc * param_3[2]) &&
       ((*(float *)(param_2 + 0x2c) +
        param_4[1] * local_c0 + param_4[2] * local_bc + *param_4 * local_c4) - param_5 <=
        (float)_DAT_0064a738)) {
      local_48 = (double)param_5;
      local_80 = local_b8;
      local_7c = local_b4;
      local_78 = local_b0;
      fVar10 = (float10)FUN_005aabc0(&local_80);
      local_28 = (double)fVar10;
      local_b8 = *param_4 - *param_3;
      local_b4 = param_4[1] - param_3[1];
      local_b0 = param_4[2] - param_3[2];
      local_80 = local_b8;
      local_7c = local_b4;
      local_78 = local_b0;
      pfVar6 = (float *)FUN_005aaad0(&local_ac,&local_80);
      local_c4 = *pfVar6;
      local_c0 = pfVar6[1];
      local_bc = pfVar6[2];
      uVar7 = (uint)*(ushort *)(param_2 + 2);
      if (uVar7 != 0) {
        local_30 = local_48 * local_48;
        local_c8 = 0;
        local_d4 = 1;
        do {
          iVar9 = local_d4;
          if ((int)uVar7 <= local_d4) {
            iVar9 = 0;
          }
          iVar4 = *(int *)(param_2 + 4);
          iVar9 = iVar9 * 0xc;
          local_80 = *(float *)(iVar9 + iVar4) - *(float *)(iVar4 + local_c8);
          local_7c = *(float *)(iVar9 + 4 + iVar4) - *(float *)(iVar4 + 4 + local_c8);
          local_78 = *(float *)(iVar9 + 8 + iVar4) - *(float *)(iVar4 + 8 + local_c8);
          local_14 = local_80;
          local_10 = local_7c;
          local_c = local_78;
          pfVar6 = (float *)FUN_005aaad0(local_3c,&local_14);
          local_8c = *pfVar6;
          local_88 = pfVar6[1];
          local_84 = pfVar6[2];
          pfVar6 = (float *)(local_c8 + *(int *)(param_2 + 4));
          fVar11 = (float10)local_88 * (float10)local_c0 +
                   (float10)local_84 * (float10)local_bc + (float10)local_8c * (float10)local_c4;
          fVar14 = ((float10)local_bc * (float10)local_bc +
                   (float10)local_c0 * (float10)local_c0 + (float10)local_c4 * (float10)local_c4) -
                   fVar11 * fVar11;
          fVar10 = (float10)*param_3 - (float10)*pfVar6;
          local_b4 = param_3[1] - pfVar6[1];
          local_b0 = param_3[2] - pfVar6[2];
          fVar12 = (float10)local_b4 * (float10)local_88 +
                   (float10)local_b0 * (float10)local_84 + fVar10 * (float10)local_8c;
          fVar13 = (float10)local_b4 * (float10)local_c0 +
                   (float10)local_b0 * (float10)local_bc + fVar10 * (float10)local_c4;
          dVar2 = (double)((fVar13 + fVar13) -
                          (fVar12 * (float10)(double)fVar11 + fVar12 * (float10)(double)fVar11));
          local_68 = (double)fVar10;
          local_50 = (double)local_b0;
          local_a0 = dVar2 * dVar2;
          fVar10 = ((((float10)local_68 * (float10)local_68 +
                     (float10)local_b0 * (float10)local_b0 + (float10)local_b4 * (float10)local_b4)
                    - fVar12 * fVar12) - (float10)local_30) * fVar14 * (float10)_DAT_0064a7b0;
          if (fVar10 < (float10)local_a0) {
            dVar3 = (double)SQRT((float10)local_a0 - fVar10);
            local_50 = (double)(fVar14 + fVar14);
            fVar11 = (-(float10)dVar2 - (float10)dVar3) / (fVar14 + fVar14);
            fVar10 = ((float10)dVar3 - (float10)dVar2) / (float10)local_50;
            local_68 = (double)fVar10;
            if (fVar10 < fVar11) {
              fVar11 = (float10)local_68;
            }
            if (((float10)_DAT_0064a668 <= fVar11) && (fVar11 <= (float10)local_28)) {
              FUN_0041ce10((float)(fVar11 * (float10)local_c4),(float)((float10)local_c0 * fVar11),
                           (float)((float10)local_bc * fVar11));
              FUN_0041ce10(local_20 + *param_3,local_1c + param_3[1],local_18 + param_3[2]);
              pfVar6 = (float *)(local_c8 + *(int *)(param_2 + 4));
              FUN_0041ce10(local_5c - *pfVar6,local_58 - pfVar6[1],
                           local_54 - *(float *)(local_c8 + 8 + *(int *)(param_2 + 4)));
              fVar1 = local_70 * local_88 + local_6c * local_84 + local_74 * local_8c;
              if (_DAT_0064b254 <= fVar1) {
                iVar4 = *(int *)(param_2 + 4);
                FUN_0041ce10(*(float *)(iVar9 + iVar4) - *(float *)(iVar4 + local_c8),
                             *(float *)(iVar9 + 4 + iVar4) - *(float *)(iVar4 + 4 + local_c8),
                             *(float *)(iVar9 + 8 + iVar4) - *(float *)(iVar4 + 8 + local_c8));
                local_ac = local_98;
                local_a8 = local_94;
                local_a4 = local_90;
                fVar10 = (float10)FUN_005aabc0(&local_ac);
                if ((float10)fVar1 <= fVar10) {
                  *param_3 = local_5c;
                  param_3[1] = local_58;
                  param_3[2] = local_54;
                  FUN_0041ce10(local_8c * fVar1,local_88 * fVar1,local_84 * fVar1);
                  FUN_0041ce10(local_5c - local_ac,local_58 - local_a8,local_54 - local_a4);
                  local_74 = local_98;
                  local_70 = local_94;
                  local_6c = local_90;
                  pfVar6 = (float *)FUN_005aaad0(local_3c,&local_74);
                  *param_4 = *pfVar6;
                  param_4[1] = pfVar6[1];
                  param_4[2] = pfVar6[2];
                  FUN_0041ce10(param_5 * *param_4,param_5 * param_4[1],param_5 * param_4[2]);
                  local_98 = local_ac;
                  local_94 = local_a8;
                  local_90 = local_a4;
                  FUN_005aae40(local_3c,&local_98);
                  return 1;
                }
              }
            }
          }
          uVar7 = (uint)*(ushort *)(param_2 + 2);
          local_c8 = local_c8 + 0xc;
          bVar5 = local_d4 < (int)uVar7;
          local_d4 = local_d4 + 1;
        } while (bVar5);
      }
      iVar9 = 0;
      local_d4 = 0;
      if (*(short *)(param_2 + 2) != 0) {
        local_30 = local_48 * local_48;
        while( true ) {
          pfVar6 = (float *)(iVar9 + *(int *)(param_2 + 4));
          FUN_0041ce10(*param_3 - *pfVar6,param_3[1] - pfVar6[1],
                       param_3[2] - *(float *)(iVar9 + 8 + *(int *)(param_2 + 4)));
          pfVar6 = (float *)(iVar9 + *(int *)(param_2 + 4));
          fVar1 = local_ac * local_c4 + local_a8 * local_c0 + local_a4 * local_bc;
          fVar1 = fVar1 + fVar1;
          dVar2 = (double)fVar1;
          FUN_0041ce10(*param_3 - *pfVar6,param_3[1] - pfVar6[1],param_3[2] - pfVar6[2]);
          local_74 = local_98;
          local_70 = local_94;
          local_6c = local_90;
          uVar8 = FUN_004bde20(local_3c,param_3,iVar9 + *(int *)(param_2 + 4),&local_74);
          fVar10 = (float10)FUN_004e1080(uVar8);
          local_a0 = dVar2 * dVar2;
          fVar10 = (fVar10 - (float10)local_30) * (float10)_DAT_0064a7b0;
          if (((fVar10 <= (float10)local_a0) &&
              (fVar1 = (float)((-(float10)fVar1 - SQRT((float10)local_a0 - fVar10)) *
                              (float10)_DAT_0064a6d0), _DAT_0064b254 <= fVar1)) &&
             (fVar1 <= (float)local_28)) break;
          local_d4 = local_d4 + 1;
          iVar9 = iVar9 + 0xc;
          if ((int)(uint)*(ushort *)(param_2 + 2) <= local_d4) {
            return 0;
          }
        }
        uVar8 = FUN_004bdd80(local_3c,&local_c4,fVar1);
        pfVar6 = (float *)FUN_004bddd0(&local_ac,param_3,uVar8);
        *param_3 = *pfVar6;
        param_3[1] = pfVar6[1];
        param_3[2] = pfVar6[2];
        uVar8 = FUN_004bde20(local_3c,param_3,*(int *)(param_2 + 4) + local_d4 * 0xc);
        pfVar6 = (float *)FUN_005aaad0(&local_ac,uVar8);
        *param_4 = *pfVar6;
        param_4[1] = pfVar6[1];
        param_4[2] = pfVar6[2];
        uVar8 = FUN_004bdd80(local_3c,param_4,param_5);
        FUN_005aae40(&local_ac,uVar8);
        return 1;
      }
    }
  }
  return 0;
}


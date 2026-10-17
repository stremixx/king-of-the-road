
int __fastcall FUN_0058ec60(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  int local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  FUN_004e1fd9();
  piVar7 = (int *)(param_1 + 0xdb4);
  local_148 = 0;
  do {
    iVar2 = local_148;
    iVar6 = *piVar7;
    if (iVar6 == 0) {
      return 0;
    }
    if (*(int *)(iVar6 + 0x188) == 2) {
      iVar2 = *(int *)(iVar6 + 0xf88);
      if ((iVar2 == 3) || (iVar2 == 2)) {
        bVar1 = false;
        local_170 = 0.0;
        local_16c = 0.0;
        local_168 = 0.0;
        local_144 = 0.0;
        local_140 = 0.0;
        local_13c = 0.0;
        if (iVar2 == 2) {
          pfVar3 = (float *)FUN_0057d570(local_60);
          local_144 = *(float *)(iVar6 + 0xd6c) * *pfVar3 +
                      pfVar3[3] * *(float *)(iVar6 + 0xd70) + pfVar3[6] * *(float *)(iVar6 + 0xd74)
                      + pfVar3[9];
          local_140 = pfVar3[4] * *(float *)(iVar6 + 0xd70) +
                      pfVar3[1] * *(float *)(iVar6 + 0xd6c) + pfVar3[7] * *(float *)(iVar6 + 0xd74)
                      + pfVar3[10];
          local_13c = pfVar3[5] * *(float *)(iVar6 + 0xd70) +
                      pfVar3[2] * *(float *)(iVar6 + 0xd6c) + pfVar3[8] * *(float *)(iVar6 + 0xd74)
                      + pfVar3[0xb];
          local_14c = *(float *)(iVar6 + 0xcc8) * *(float *)(iVar6 + 0xcc8);
          local_120 = local_144;
          local_11c = local_140;
          local_118 = local_13c;
          iVar2 = FUN_0058c820(&local_170);
          if (iVar2 != 0) {
            do {
              if (!bVar1) {
                FUN_0041ce10(local_170 * *(float *)(param_1 + 500) +
                             local_16c * *(float *)(param_1 + 0x200) +
                             local_168 * *(float *)(param_1 + 0x20c) + *(float *)(param_1 + 0x218),
                             local_170 * *(float *)(param_1 + 0x1f8) +
                             local_16c * *(float *)(param_1 + 0x204) +
                             local_168 * *(float *)(param_1 + 0x210) + *(float *)(param_1 + 0x21c),
                             local_170 * *(float *)(param_1 + 0x1fc) +
                             local_16c * *(float *)(param_1 + 0x208) +
                             local_168 * *(float *)(param_1 + 0x214) + *(float *)(param_1 + 0x220));
                local_170 = local_114;
                local_16c = local_110;
                local_168 = local_10c;
                FUN_005aae40(local_e4,&local_144);
                if (local_168 * local_168 + local_16c * local_16c + local_170 * local_170 <
                    local_14c) {
                  bVar1 = true;
                }
              }
              iVar2 = FUN_0058c820(&local_170);
            } while (iVar2 != 0);
            if (bVar1) {
              bVar1 = false;
              iVar2 = FUN_0058c820(&local_170);
              if (iVar2 != 0) {
                do {
                  if (!bVar1) {
                    FUN_0041ce10(local_170 * *(float *)(param_1 + 500) +
                                 local_16c * *(float *)(param_1 + 0x200) +
                                 local_168 * *(float *)(param_1 + 0x20c) +
                                 *(float *)(param_1 + 0x218),
                                 local_170 * *(float *)(param_1 + 0x1f8) +
                                 local_16c * *(float *)(param_1 + 0x204) +
                                 local_168 * *(float *)(param_1 + 0x210) +
                                 *(float *)(param_1 + 0x21c),
                                 local_170 * *(float *)(param_1 + 0x1fc) +
                                 local_16c * *(float *)(param_1 + 0x208) +
                                 local_168 * *(float *)(param_1 + 0x214) +
                                 *(float *)(param_1 + 0x220));
                    uVar4 = FUN_0057d5a0(local_90);
                    pfVar3 = (float *)FUN_004cb300(local_cc,local_108,uVar4);
                    local_170 = *pfVar3;
                    local_16c = pfVar3[1];
                    local_168 = pfVar3[2];
                    iVar2 = FUN_0058eb80(&local_170);
                    if (iVar2 != 0) {
                      bVar1 = true;
                    }
                  }
                  iVar2 = FUN_0058c820(&local_170);
                } while (iVar2 != 0);
                if (bVar1) {
                  return iVar6;
                }
              }
            }
          }
        }
        else if ((iVar2 == 3) && (iVar2 = FUN_0058c820(&local_170), iVar2 != 0)) {
          do {
            if (!bVar1) {
              local_158 = local_170 * *(float *)(param_1 + 500) +
                          local_16c * *(float *)(param_1 + 0x200) +
                          local_168 * *(float *)(param_1 + 0x20c) + *(float *)(param_1 + 0x218);
              local_154 = local_170 * *(float *)(param_1 + 0x1f8) +
                          local_16c * *(float *)(param_1 + 0x204) +
                          local_168 * *(float *)(param_1 + 0x210) + *(float *)(param_1 + 0x21c);
              local_150 = local_170 * *(float *)(param_1 + 0x1fc) +
                          local_16c * *(float *)(param_1 + 0x208) +
                          local_168 * *(float *)(param_1 + 0x214) + *(float *)(param_1 + 0x220);
              pfVar3 = (float *)FUN_0057d5a0(local_c0);
              local_170 = local_158 * *pfVar3 + local_154 * pfVar3[3] + local_150 * pfVar3[6];
              local_16c = local_158 * pfVar3[1] + local_154 * pfVar3[4] + local_150 * pfVar3[7];
              local_168 = local_158 * pfVar3[2] + local_154 * pfVar3[5] + local_150 * pfVar3[8];
              local_12c = local_170;
              local_128 = local_16c;
              local_124 = local_168;
              iVar2 = FUN_0058eb80(&local_170);
              if (iVar2 != 0) {
                bVar1 = true;
              }
            }
            iVar2 = FUN_0058c820(&local_170);
          } while (iVar2 != 0);
          if (bVar1) {
            return iVar6;
          }
        }
      }
    }
    else if (*(int *)(iVar6 + 0x188) == 1) {
      local_164 = 0;
      local_160 = 0;
      local_15c = 0;
      local_138 = 0;
      local_134 = 0;
      local_130 = 0;
      uVar4 = FUN_0057d570(local_30);
      puVar5 = (undefined4 *)FUN_0043f690(local_d8,*piVar7 + 0xd6c,uVar4);
      local_138 = *puVar5;
      local_134 = puVar5[1];
      local_130 = puVar5[2];
      local_14c = *(float *)(*piVar7 + 0xcc8) * *(float *)(*piVar7 + 0xcc8);
      iVar6 = FUN_0058c820(&local_164);
      if (iVar6 != 0) {
        do {
          puVar5 = (undefined4 *)FUN_0043f690(local_fc,&local_164,param_1 + 500);
          local_164 = *puVar5;
          local_160 = puVar5[1];
          local_15c = puVar5[2];
          FUN_005aae40(local_f0,&local_138);
          fVar8 = (float10)FUN_004e1080(&local_164,&local_164);
          if (fVar8 < (float10)local_14c) {
            return *(int *)(param_1 + 0xdb4 + iVar2 * 4);
          }
          iVar6 = FUN_0058c820(&local_164);
        } while (iVar6 != 0);
      }
    }
    piVar7 = piVar7 + 1;
    local_148 = local_148 + 1;
    if (5 < local_148) {
      return 0;
    }
  } while( true );
}


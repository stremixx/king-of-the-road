
undefined4 __thiscall FUN_00503340(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  int local_168;
  int *local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 *local_144;
  float local_140 [24];
  float local_e0 [24];
  int local_80 [10];
  undefined4 local_58 [22];
  
  pfVar2 = local_140 + 2;
  iVar6 = 8;
  do {
    pfVar2[-2] = 0.0;
    pfVar2[-1] = 0.0;
    *pfVar2 = 0.0;
    pfVar2 = pfVar2 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  pfVar2 = local_e0 + 2;
  iVar6 = 8;
  do {
    pfVar2[-2] = 0.0;
    pfVar2[-1] = 0.0;
    *pfVar2 = 0.0;
    pfVar2 = pfVar2 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = local_58;
  iVar6 = 8;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_160 = (float)param_1[0x375];
  iVar9 = 0;
  iVar6 = 0;
  local_168 = 0;
  if (0 < (int)local_160) {
    local_164 = param_1 + 0x6fd;
    piVar7 = local_80;
    iVar4 = 0;
    puVar3 = param_1;
    do {
      iVar5 = iVar4;
      if ((*local_164 != 0) && (*(short *)(puVar3 + 0x44) != 0)) {
        *piVar7 = iVar6;
        piVar7 = piVar7 + 1;
        *(undefined4 *)((int)local_140 + iVar4) = puVar3[0x3e];
        *(undefined4 *)((int)local_140 + iVar4 + 4) = puVar3[0x3f];
        *(undefined4 *)((int)local_140 + iVar4 + 8) = puVar3[0x40];
        iVar5 = iVar4 + 0xc;
        *(undefined4 *)((int)local_e0 + iVar4) = puVar3[0x41];
        *(undefined4 *)((int)local_e0 + iVar4 + 4) = puVar3[0x42];
        *(undefined4 *)((int)local_e0 + iVar4 + 8) = puVar3[0x43];
        iVar9 = local_168 + 1;
        local_168 = iVar9;
      }
      iVar6 = iVar6 + 1;
      local_164 = local_164 + 1;
      iVar4 = iVar5;
      puVar3 = puVar3 + 0x3e;
    } while (iVar6 < (int)local_160);
    if (iVar9 != 0) {
      local_174 = DAT_007015b0;
      local_170 = DAT_007015b4;
      local_16c = DAT_007015b8;
      local_180 = DAT_007015b0;
      local_17c = DAT_007015b4;
      local_178 = DAT_007015b8;
      local_144 = param_1;
      if (iVar9 == 1) {
        local_174 = local_140[0];
        local_170 = local_140[1];
        local_16c = local_140[2];
        local_180 = local_e0[0];
        local_17c = local_e0[1];
        local_178 = local_e0[2];
      }
      else {
        if (0 < iVar9) {
          iVar6 = 0;
          do {
            local_174 = local_174 + *(float *)((int)local_140 + iVar6);
            iVar9 = iVar9 + -1;
            local_170 = local_170 + *(float *)((int)local_140 + iVar6 + 4);
            local_16c = local_16c + *(float *)((int)local_140 + iVar6 + 8);
            local_180 = local_180 + *(float *)((int)local_e0 + iVar6);
            local_17c = local_17c + *(float *)((int)local_e0 + iVar6 + 4);
            local_178 = local_178 + *(float *)((int)local_e0 + iVar6 + 8);
            iVar6 = iVar6 + 0xc;
            local_15c = local_180;
            local_158 = local_17c;
            local_154 = local_178;
            local_150 = local_174;
            local_14c = local_170;
            local_148 = local_16c;
          } while (iVar9 != 0);
        }
        fVar1 = (float)local_168;
        local_160 = fVar1;
        FUN_005aad50(&local_15c,fVar1);
        FUN_005aad50(&local_15c,fVar1);
      }
      if (local_144[local_80[0] * 0x3e + 0x5f] == 0) {
        param_2[0x19] = 0;
        param_2[0x1b] = 0;
        *param_2 = 0;
        puVar8 = &DAT_00701550;
        puVar3 = param_2;
        for (iVar6 = 0xc; puVar3 = puVar3 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar3 = *puVar8;
          puVar8 = puVar8 + 1;
        }
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        *(undefined1 *)(param_2 + 0x1f) = 0;
      }
      else {
        puVar3 = local_144 + local_80[0] * 0x3e + 0x46;
        puVar8 = param_2;
        for (iVar6 = 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar3 = (undefined4 *)
               FUN_004e5c4e(&local_15c,&local_174,&local_180,param_2 + 0x13,param_2 + 0x16);
      param_2[0xd] = *puVar3;
      param_2[0xe] = puVar3[1];
      param_2[0xf] = puVar3[2];
      param_2[0x10] = local_180;
      param_2[0x11] = local_17c;
      param_2[0x12] = local_178;
      return 1;
    }
  }
  return 0;
}


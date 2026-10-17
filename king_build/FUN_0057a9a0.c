
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0057a9a0(int param_1,undefined4 param_2,uint param_3,float *param_4,uint param_5,float param_6,
            int param_7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  uint local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  undefined1 local_78 [12];
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [12];
  float local_54;
  float local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [44];
  
  if (((param_3 != 0) && (param_3 < 0x10)) && (param_7 != 0)) {
    *(int *)(param_1 + 0x1b08) = param_7;
    *(undefined4 *)(param_1 + 0x1b0c) = 1;
    local_c4 = *param_4;
    local_c0 = param_4[1];
    local_9c = param_4[3];
    local_98 = param_4[4];
    local_90 = param_4[6];
    local_8c = param_4[7];
    local_6c = param_4[9];
    local_68 = param_4[10];
    local_a8 = *param_4;
    fStack_a4 = param_4[1];
    local_a0 = param_4[2];
    local_d0 = param_4[6];
    fStack_cc = param_4[7];
    local_c8 = param_4[8];
    local_f8 = param_4[9];
    local_f4 = param_4[10];
    local_f0 = param_4[0xb];
    local_bc = 0.0;
    local_94 = 0.0;
    local_88 = 0.0;
    local_64 = 0.0;
    FUN_0041ce10(local_90 - local_c4,local_8c - local_c0,0);
    fVar11 = (float10)FUN_004bff80(local_60);
    FUN_004bff50(&local_84,local_60,(float)SQRT(fVar11));
    FUN_0041ce10(local_9c - local_c4,local_98 - local_c0,local_94 - local_bc);
    fVar11 = (float10)FUN_004bff80(local_78);
    FUN_004bff50(&local_104,local_78,(float)SQRT(fVar11));
    FUN_0041ce10(-(local_7c * local_100 - fStack_80 * local_fc),
                 -(local_84 * local_fc - local_104 * local_7c),
                 -(local_104 * fStack_80 - local_84 * local_100));
    fVar11 = (float10)FUN_0061d420();
    local_84 = (float)fVar11;
    bVar2 = local_48 <= _DAT_0064f3d0;
    bVar10 = local_c8 < local_a0;
    bVar1 = local_a0 < local_c8;
    if (!bVar2) {
      bVar10 = !bVar10;
      bVar1 = !bVar1;
    }
    fVar12 = local_a0 - local_c8;
    FUN_0041ce10(local_a8 - local_d0,fStack_a4 - fStack_cc,fVar12);
    fVar11 = (float10)FUN_004bff80(local_78);
    fVar11 = (float10)ABS(fVar12) / SQRT(fVar11);
    if (bVar10) {
      local_ac = (float)(fVar11 * (float10)param_6);
    }
    else {
      local_ac = 0.0;
    }
    if (bVar1) {
      local_b0 = (float)(fVar11 * (float10)param_6);
    }
    else {
      local_b0 = 0.0;
    }
    bVar10 = local_c8 <= local_f0;
    bVar1 = local_f0 <= local_c8;
    if (!bVar2) {
      bVar10 = !bVar10;
      bVar1 = !bVar1;
    }
    fVar12 = local_c8 - local_f0;
    FUN_0041ce10(local_d0 - local_f8,fStack_cc - local_f4,fVar12);
    fVar11 = (float10)FUN_004bff80(local_78);
    fVar11 = (float10)ABS(fVar12) / SQRT(fVar11);
    if (bVar1) {
      local_b4 = (float)(fVar11 * (float10)param_6);
    }
    else {
      local_b4 = 0.0;
    }
    if (bVar10) {
      local_b8 = (float)(fVar11 * (float10)param_6);
    }
    else {
      local_b8 = 0.0;
    }
    FUN_0041ce10(local_9c - local_c4,local_98 - local_c0,local_94 - local_bc);
    FUN_0041ce10(local_90 - local_c4,local_8c - local_c0,local_88 - local_bc);
    fVar11 = (float10)FUN_004bff80(&local_dc);
    local_ec = (float)SQRT(fVar11);
    fVar11 = (float10)FUN_004bff80(&local_e8);
    fVar12 = (float)SQRT(fVar11);
    if (_DAT_0064b240 <= local_ec) {
      local_dc = local_dc / local_ec;
      local_d8 = local_d8 / local_ec;
      local_d4 = local_d4 / local_ec;
    }
    else {
      local_104 = local_e4 - _DAT_0064b254;
      local_f8 = local_104;
      if (bVar2) {
        local_fc = 0.0;
        local_100 = _DAT_0064b254 - local_e8;
        local_f0 = 0.0;
        local_f4 = local_100;
        fVar11 = (float10)FUN_004bff80(&local_f8);
        local_ec = (float)SQRT(fVar11);
        FUN_004bff50(&local_104,&local_f8,local_ec);
        local_dc = local_104;
        local_d8 = local_100;
        local_d4 = local_fc;
      }
      else {
        local_100 = _DAT_0064b254 - local_e8;
        local_fc = 0.0;
        local_f0 = 0.0;
        local_f4 = local_100;
        fVar11 = (float10)FUN_004bff80(&local_f8);
        local_ec = (float)SQRT(fVar11);
        FUN_004bff50(&local_104,&local_f8,local_ec);
        FUN_0041ce10(-local_104,-local_100,-local_fc);
        local_dc = local_d0;
        local_d8 = fStack_cc;
        local_d4 = local_c8;
      }
    }
    if (_DAT_0064b240 <= fVar12) {
      local_e8 = local_e8 / fVar12;
      local_e4 = local_e4 / fVar12;
      local_e0 = local_e0 / fVar12;
    }
    else {
      local_104 = local_d8 - _DAT_0064b254;
      local_f8 = local_104;
      if (bVar2) {
        local_fc = 0.0;
        local_100 = _DAT_0064b254 - local_dc;
        local_f0 = 0.0;
        local_f4 = local_100;
        fVar11 = (float10)FUN_004bff80(&local_f8);
        FUN_004bff50(&local_104,&local_f8,(float)SQRT(fVar11));
        local_e8 = local_104;
        local_e4 = local_100;
        local_e0 = local_fc;
      }
      else {
        local_fc = 0.0;
        local_100 = _DAT_0064b254 - local_dc;
        local_f0 = 0.0;
        local_f4 = local_100;
        fVar11 = (float10)FUN_004bff80(&local_f8);
        FUN_004bff50(&local_104,&local_f8,(float)SQRT(fVar11));
        FUN_0041ce10(-local_104,-local_100,-local_fc);
        local_e8 = local_d0;
        local_e4 = fStack_cc;
        local_e0 = local_c8;
      }
    }
    FUN_0041ce10(local_dc * local_b4,local_d8 * local_b4,local_d4 * local_b4);
    FUN_0041ce10(local_e8 * local_ac,local_e4 * local_ac,local_e0 * local_ac);
    FUN_0041ce10(local_c4 - local_104,local_c0 - local_100,local_bc - local_fc);
    FUN_0041ce10(local_f8 - local_d0,local_f4 - fStack_cc,local_f0 - local_c8);
    local_c4 = local_a8;
    local_c0 = fStack_a4;
    local_bc = local_a0;
    FUN_0041ce10(local_dc * local_b8,local_d8 * local_b8,local_d4 * local_b8);
    FUN_0041ce10(local_e8 * local_ac,local_e4 * local_ac,local_e0 * local_ac);
    FUN_0041ce10(local_9c - local_104,local_98 - local_100,local_94 - local_fc);
    FUN_0041ce10(local_f8 + local_d0,local_f4 + fStack_cc,local_f0 + local_c8);
    local_9c = local_a8;
    local_98 = fStack_a4;
    local_94 = local_a0;
    FUN_0041ce10(local_dc * local_b4,local_d8 * local_b4,local_d4 * local_b4);
    FUN_0041ce10(local_e8 * local_b0,local_e4 * local_b0,local_e0 * local_b0);
    FUN_0041ce10(local_104 + local_90,local_100 + local_8c,local_fc + local_88);
    FUN_0041ce10(local_f8 - local_d0,local_f4 - fStack_cc,local_f0 - local_c8);
    local_90 = local_a8;
    local_8c = fStack_a4;
    local_88 = local_a0;
    FUN_0041ce10(local_dc * local_b8,local_d8 * local_b8,local_d4 * local_b8);
    FUN_0041ce10(local_e8 * local_b0,local_e4 * local_b0,local_e0 * local_b0);
    FUN_0041ce10(local_104 + local_6c,local_100 + local_68,local_fc + local_64);
    FUN_0041ce10(local_f8 + local_d0,local_f4 + fStack_cc,local_f0 + local_c8);
    local_6c = local_a8;
    local_68 = fStack_a4;
    local_64 = local_a0;
    FUN_0041ce10(local_9c - local_c4,local_98 - local_c0,local_94 - local_bc);
    local_dc = local_104;
    local_d8 = local_100;
    local_d4 = local_fc;
    FUN_0041ce10(local_90 - local_c4,local_8c - local_c0,local_88 - local_bc);
    local_e0 = local_fc;
    local_e8 = local_104;
    local_e4 = local_100;
    if (local_84 < (float)_DAT_0064f3c8) {
      uVar3 = FUN_004bff20(local_78,0x3d75c28f,&local_e8);
      uVar3 = FUN_004bff20(local_60,0x3df5c28f,&local_dc,uVar3);
      uVar3 = FUN_004be230(&local_104,&local_c4,uVar3);
      pfVar4 = (float *)FUN_004be230(&local_f8,uVar3);
      local_c4 = *pfVar4;
      local_c0 = pfVar4[1];
      local_bc = pfVar4[2];
      uVar3 = FUN_004bff20(local_78,0x3d75c28f,&local_e8);
      uVar3 = FUN_004bff20(local_60,0x3df5c28f,&local_dc,uVar3);
      uVar3 = FUN_004bfef0(&local_104,&local_9c,uVar3);
      pfVar4 = (float *)FUN_004be230(&local_f8,uVar3);
      local_9c = *pfVar4;
      local_98 = pfVar4[1];
      local_94 = pfVar4[2];
      uVar3 = FUN_004bff20(local_78,0x3d75c28f,&local_e8);
      uVar3 = FUN_004bff20(local_60,0x3df5c28f,&local_dc,uVar3);
      uVar3 = FUN_004be230(&local_104,&local_90,uVar3);
      pfVar4 = (float *)FUN_004bfef0(&local_f8,uVar3);
      local_90 = *pfVar4;
      local_8c = pfVar4[1];
      local_88 = pfVar4[2];
      uVar3 = FUN_004bff20(local_78,0x3d75c28f,&local_e8);
      uVar3 = FUN_004bff20(local_60,0x3df5c28f,&local_dc,uVar3);
      uVar3 = FUN_004bfef0(&local_104,&local_6c,uVar3);
      pfVar4 = (float *)FUN_004bfef0(&local_f8,uVar3);
      local_6c = *pfVar4;
      local_68 = pfVar4[1];
      local_64 = pfVar4[2];
      pfVar4 = (float *)FUN_004be230(local_78,&local_9c,&local_c4);
      local_dc = *pfVar4;
      local_d8 = pfVar4[1];
      local_d4 = pfVar4[2];
      pfVar4 = (float *)FUN_004be230(local_78,&local_90,&local_c4);
      local_e8 = *pfVar4;
      local_e4 = pfVar4[1];
      local_e0 = pfVar4[2];
    }
    fVar11 = (float10)FUN_004bff80(&local_dc);
    local_ec = (float)SQRT(fVar11);
    fVar11 = (float10)FUN_004bff80(&local_e8);
    FUN_0057b930(local_ec);
    FUN_0057b930((float)SQRT(fVar11));
    local_54 = local_ec * _DAT_0064b8f8;
    fStack_80 = 0.0;
    local_ec = 0.0;
    local_b0 = (float)(param_5 - 1);
    *(uint *)(param_1 + 0x1b04) = param_5 * 6;
    local_ac = (float)SQRT(fVar11) / local_b0;
    *(uint *)(param_1 + 0x1b00) = param_5 * 0x1e + -0x1e;
    if (param_5 != 0) {
      pfVar4 = (float *)(param_1 + 8);
      do {
        fStack_a4 = 0.0;
        local_a8 = local_ec;
        local_108 = 0;
        local_b8 = (float)(uint)local_ec;
        local_84 = local_b8 / local_b0;
        pfVar8 = pfVar4;
        do {
          fStack_cc = 0.0;
          local_d0 = (float)local_108;
          local_b4 = (float)local_108;
          pfVar4 = pfVar8 + -2;
          fVar12 = local_b4 * _DAT_0064b8f8;
          fVar13 = local_84;
          uVar3 = FUN_0041ce10(0,0,0x3f800000);
          uVar5 = FUN_004c03a0(local_60,&local_e8,local_ac,local_b8,uVar3,fVar12,fVar13);
          uVar5 = FUN_004c03a0(&local_104,uVar5);
          uVar5 = FUN_004c03a0(&local_f8,&local_dc,local_54,local_b4,uVar5);
          uVar5 = FUN_004c03a0(local_2c,uVar5);
          uVar5 = FUN_004bfef0(local_44,&local_c4,uVar5);
          uVar5 = FUN_004bfef0(local_38,uVar5);
          pfVar6 = (float *)FUN_004bded0(uVar5,uVar3,fVar12,fVar13);
          pfVar9 = pfVar4;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar9 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar9 = pfVar9 + 1;
          }
          if (*(int *)(DAT_006cdbf8 + 0x180) == 1) {
            fVar11 = (float10)FUN_00615f10(*pfVar4,pfVar8[-1]);
          }
          else {
            fVar11 = (float10)FUN_0057bf80(*pfVar4,pfVar8[-1],param_2,param_3);
          }
          pfVar4 = pfVar8 + 8;
          local_108 = local_108 + 1;
          *pfVar8 = (float)(fVar11 + (float10)_DAT_0064b2f4);
          pfVar8 = pfVar4;
        } while (local_108 < 6);
        local_ec = (float)((int)local_ec + 1);
      } while ((uint)local_ec < param_5);
    }
    return 1;
  }
  return 0;
}


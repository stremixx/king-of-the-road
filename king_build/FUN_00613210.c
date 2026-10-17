
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00613210(undefined4 *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
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
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_1c;
  float local_10;
  float local_4;
  
  if (param_2 != 3) {
    FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_terrain_tdata_cp_00684c3c,0x3b,s_Mar_19_2002_006714f8);
    return 0;
  }
  iVar3 = FUN_00613140(*param_1);
  if (iVar3 == 0) {
    FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_terrain_tdata_cp_00684c3c,0x40,s_Mar_19_2002_006714f8);
    return 0;
  }
  iVar3 = FUN_00613140(param_1[1]);
  if (iVar3 == 0) {
    FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_terrain_tdata_cp_00684c3c,0x45,s_Mar_19_2002_006714f8);
    return 0;
  }
  iVar3 = FUN_00613140(param_1[2]);
  if (iVar3 == 0) {
    FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_terrain_tdata_cp_00684c3c,0x4a,s_Mar_19_2002_006714f8);
    return 0;
  }
  local_c4 = 0;
  do {
    local_ac = (float)(int)local_c4;
    local_e0 = 0;
    local_b0 = (local_ac - _DAT_0064b240) * _DAT_00652224;
    local_a0 = (local_ac + _DAT_0064b240) * _DAT_00652224;
    local_ac = local_ac * _DAT_00652224;
    uVar7 = local_c4;
    local_9c = local_ac;
    do {
      fVar2 = (float)(int)local_e0;
      fVar5 = fVar2 * _DAT_00652224;
      local_a8 = local_ac;
      local_a4 = (fVar2 + _DAT_0064b240) * _DAT_00652224;
      local_98 = (fVar2 - _DAT_0064b240) * _DAT_00652224;
      local_94 = fVar5;
      if (local_e0 == 0) {
        iVar3 = FUN_00608170(uVar7,0);
        local_10 = *(float *)(iVar3 + (uVar7 % 0x101) * 0x1010);
        iVar3 = (uVar7 % 0x101) * 0x101;
        iVar4 = FUN_00608170(uVar7,1);
        FUN_0041ce10(local_a8 - local_9c,local_a4 - local_98,
                     *(float *)(iVar4 + (iVar3 + 1) * 0x10) - local_10);
        local_c0 = local_54;
        local_bc = local_50;
        local_b8 = local_4c;
      }
      else {
        iVar3 = (uVar7 % 0x101) * 0x101;
        iVar4 = FUN_00608170(uVar7,local_e0 - 1);
        local_28 = *(float *)(iVar4 + ((local_e0 - 1) % 0x101 + iVar3) * 0x10);
        iVar4 = FUN_00608170(uVar7,local_e0 + 1);
        local_c0 = local_a8 - local_9c;
        local_bc = local_a4 - local_98;
        local_b8 = *(float *)(iVar4 + ((local_e0 + 1) % 0x101 + iVar3) * 0x10) - local_28;
        local_78 = local_c0;
        local_74 = local_bc;
        local_70 = local_b8;
      }
      if (uVar7 == 0) {
        uVar9 = 1;
        uVar6 = local_e0;
        FUN_00608170(1,local_e0);
        fVar8 = (float10)FUN_00608530(uVar9,uVar6);
        uVar9 = 0;
        local_4 = (float)fVar8;
        uVar6 = local_e0;
        FUN_00608170(0,local_e0);
        fVar8 = (float10)FUN_00608530(uVar9,uVar6);
        FUN_0041ce10(local_b0 - local_a0,local_94 - fVar5,(float)(fVar8 - (float10)local_4));
        local_d0 = local_60;
        local_cc = local_5c;
        fVar5 = local_58;
      }
      else {
        uVar6 = uVar7 + 1;
        iVar4 = FUN_00608170(uVar6,local_e0);
        uVar7 = local_c4;
        local_1c = *(float *)(iVar4 + ((uVar6 % 0x101) * 0x101 + local_e0 % 0x101) * 0x10);
        iVar4 = local_c4 - 1;
        uVar6 = local_e0;
        FUN_00608170(iVar4,local_e0);
        fVar8 = (float10)FUN_00608530(iVar4,uVar6);
        FUN_0041ce10(local_b0 - local_a0,local_94 - fVar5,(float)(fVar8 - (float10)local_1c));
        local_d0 = local_48;
        local_cc = local_44;
        fVar5 = local_40;
      }
      local_84 = fVar5 * local_bc - local_cc * local_b8;
      local_80 = local_d0 * local_b8 - local_c0 * fVar5;
      local_7c = local_c0 * local_cc - local_d0 * local_bc;
      local_6c = local_84;
      local_68 = local_80;
      local_64 = local_7c;
      fVar8 = (float10)FUN_004bff80(&local_6c);
      FUN_004bff50(&local_90,&local_6c,(float)SQRT(fVar8));
      local_dc = local_90;
      local_d8 = local_8c;
      local_d4 = local_88;
      if ((((_DAT_0064c680 < local_90) && (local_90 < _DAT_0064b2f4)) && (_DAT_0064c680 < local_8c))
         && (local_8c < _DAT_0064b2f4)) {
        iVar4 = _rand();
        fVar5 = (float)iVar4 * _DAT_0064b244;
        iVar4 = _rand();
        local_dc = ((float)iVar4 * _DAT_0064b244 - fVar5) * _DAT_0064b248;
        iVar4 = _rand();
        fVar5 = (float)iVar4 * _DAT_0064b244;
        iVar4 = _rand();
        local_d8 = ((float)iVar4 * _DAT_0064b244 - fVar5) * _DAT_0064b248;
        fVar8 = (float10)FUN_004bff80(&local_dc);
        fVar8 = SQRT(fVar8);
        FUN_0041ce10((float)((float10)local_dc / fVar8),(float)((float10)local_d8 / fVar8),
                     (float)((float10)local_d4 / fVar8));
        local_dc = local_3c;
        local_d8 = local_38;
        local_d4 = local_34;
      }
      iVar4 = FUN_00608170(uVar7,local_e0);
      uVar6 = local_e0 % 0x101;
      local_e0 = local_e0 + 1;
      pfVar1 = (float *)((uVar6 + iVar3) * 0x10 + 4 + iVar4);
      *pfVar1 = local_dc;
      pfVar1[1] = local_d8;
      pfVar1[2] = local_d4;
    } while ((int)local_e0 < 0x303);
    local_c4 = uVar7 + 1;
  } while ((int)local_c4 < 0x303);
  return 1;
}


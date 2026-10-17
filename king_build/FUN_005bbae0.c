
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005bbae0(int param_1,int param_2,int *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  double local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c [9];
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c [9];
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_a0 = *(float *)(param_2 + 0x24);
  local_9c = *(float *)(param_2 + 0x28);
  local_98 = *(float *)(param_2 + 0x2c);
  iVar2 = *param_3;
  if ((iVar2 < *(int *)(param_1 + 4) + -1) && (-1 < iVar2)) {
    iVar3 = *(int *)(param_1 + 8);
    puVar7 = (undefined4 *)(iVar2 * 0x30 + iVar3);
    puVar8 = local_6c;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_ac = local_48;
    local_a8 = local_44;
    local_a4 = local_40;
    puVar7 = (undefined4 *)((iVar2 * 3 + 3) * 0x10 + iVar3);
    puVar8 = local_3c;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_d0 = local_18 - local_48;
    local_cc = local_14 - local_44;
    local_80 = local_18;
    local_7c = local_14;
    local_c8 = local_10 - local_40;
    local_78 = local_10;
    local_8c = local_d0;
    local_88 = local_cc;
    local_84 = local_c8;
    fVar9 = (float10)FUN_005aabc0(&local_8c);
    local_8c = (float)((float10)local_8c / fVar9);
    local_88 = (float)((float10)local_88 / fVar9);
    local_84 = (float)((float10)local_84 / fVar9);
    fVar1 = (float)((float10)local_a0 - (float10)local_ac);
    local_94 = (double)CONCAT44(local_94._4_4_,fVar1);
    local_70 = (float)((float10)local_9c - (float10)local_a8);
    local_74 = (float)((float10)local_98 - (float10)local_a4);
    fVar10 = (float10)local_8c * ((float10)local_a0 - (float10)local_ac) +
             ((float10)local_9c - (float10)local_a8) * (float10)local_88 +
             ((float10)local_98 - (float10)local_a4) * (float10)local_84;
    local_c4 = (float)((float10)local_8c * fVar10);
    local_c0 = (float)((float10)local_88 * fVar10);
    local_d0 = local_c4 + local_ac;
    local_cc = local_c0 + local_a8;
    local_c8 = (float)(fVar10 * (float10)local_84 + (float10)local_a4);
    local_b8 = local_d0;
    local_b4 = local_cc;
    local_b0 = local_c8;
    if ((float10)_DAT_0064a668 <= fVar10) {
      if (fVar10 <= fVar9) {
        if (param_4 != (float *)0x0) {
          *param_4 = local_d0;
          param_4[1] = local_cc;
          param_4[2] = local_c8;
        }
        FUN_0041ce10(local_a0 - local_d0,local_9c - local_cc,local_98 - local_c8);
        local_b8 = local_c4;
        local_b4 = local_c0;
        local_b0 = 0.0;
        fVar9 = (float10)FUN_005aabc0(&local_b8);
        local_94 = (double)fVar9;
      }
      else {
        if (param_4 != (float *)0x0) {
          *param_4 = local_80;
          param_4[1] = local_7c;
          param_4[2] = local_78;
        }
        FUN_0041ce10(local_a0 - local_80,local_9c - local_7c,local_98 - local_78);
        local_b8 = local_c4;
        local_b4 = local_c0;
        local_b0 = 0.0;
        fVar9 = (float10)FUN_005aabc0(&local_b8);
        local_94 = (double)fVar9;
        *param_3 = -1 - *param_3;
      }
    }
    else {
      if (param_4 != (float *)0x0) {
        *param_4 = local_ac;
        param_4[1] = local_a8;
        param_4[2] = local_a4;
      }
      FUN_0041ce10(fVar1,local_70,local_74);
      local_b8 = local_c4;
      local_b4 = local_c0;
      local_b0 = 0.0;
      fVar9 = (float10)FUN_005aabc0(&local_b8);
      local_94 = (double)fVar9;
      *param_3 = -1 - *param_3;
    }
    FUN_0041ce10(local_a0 - local_ac,local_9c - local_a8,local_98 - local_a4);
    local_d0 = local_c4;
    local_cc = local_c0;
    local_c8 = (float)local_bc;
    uVar4 = FUN_004bde20(&local_a0,&local_80,&local_ac,&local_d0);
    pfVar5 = (float *)FUN_004bde70(local_c,uVar4);
    fVar9 = (float10)local_94;
    if (*pfVar5 * DAT_00701590 + pfVar5[1] * DAT_00701594 + pfVar5[2] * DAT_00701598 <
        (float)_DAT_0064a668) {
      return -fVar9;
    }
  }
  else {
    fVar9 = (float10)_DAT_0064a668;
    *param_3 = -1;
  }
  return fVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bba50(undefined4 param_1,float *param_2,float *param_3,float param_4,uint param_5,
                 float param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float local_b8;
  float local_b4;
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
  uint local_88;
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
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644822;
  local_c = ExceptionList;
  local_b8 = 0.0;
  local_b4 = 0.0;
  local_b0 = 0.0;
  if ((_DAT_0064b338 < *param_2) || (_DAT_0064b338 < param_2[1])) {
    local_8c = DAT_00701594 * *param_2 - DAT_00701590 * param_2[1];
    local_90 = DAT_00701590 * param_2[2] - DAT_00701598 * *param_2;
    local_94 = DAT_00701598 * param_2[1] - DAT_00701594 * param_2[2];
    pfVar7 = &local_94;
    pfVar9 = &local_3c;
  }
  else {
    local_a4 = DAT_007015a4 * *param_2 - DAT_007015a0 * param_2[1];
    local_a8 = DAT_007015a0 * param_2[2] - DAT_007015a8 * *param_2;
    local_ac = DAT_007015a8 * param_2[1] - DAT_007015a4 * param_2[2];
    pfVar7 = &local_ac;
    pfVar9 = &local_64;
  }
  ExceptionList = &local_c;
  pfVar7 = (float *)FUN_005aaad0(pfVar9,pfVar7);
  fVar1 = pfVar7[1];
  fVar2 = *pfVar7;
  fVar3 = pfVar7[2];
  local_a4 = fVar1 * *param_2 - fVar2 * param_2[1];
  local_a8 = fVar2 * param_2[2] - fVar3 * *param_2;
  local_ac = fVar3 * param_2[1] - fVar1 * param_2[2];
  local_a0 = local_ac;
  local_9c = local_a8;
  local_98 = local_a4;
  pfVar7 = (float *)FUN_005aaad0(&local_64,&local_ac);
  local_a0 = *pfVar7;
  local_88 = 0;
  local_9c = pfVar7[1];
  local_98 = pfVar7[2];
  if (param_5 == 0) {
    ExceptionList = local_c;
    return;
  }
  do {
    iVar8 = _rand();
    fVar4 = (float)iVar8 * _DAT_0064b244;
    iVar8 = _rand();
    fVar4 = (((float)iVar8 * _DAT_0064b244 - fVar4) * _DAT_0064b1c0 + _DAT_0064b240) * param_6;
    iVar8 = _rand();
    fVar5 = (float)iVar8 * _DAT_0064b244;
    local_78 = local_98 * fVar5;
    local_68 = local_9c * fVar5;
    fVar5 = fVar5 * local_a0;
    iVar8 = _rand();
    fVar6 = (float)iVar8 * _DAT_0064b244;
    local_4c = fVar1 * fVar6;
    local_b0 = fVar3 * fVar6 + local_78;
    local_b4 = local_4c + local_68;
    local_b8 = fVar6 * fVar2 + fVar5;
    local_74 = local_b8;
    local_70 = local_b4;
    local_6c = local_b0;
    iVar8 = _rand();
    fVar5 = (float)iVar8 * _DAT_0064b244;
    iVar8 = _rand();
    FUN_005aad10(local_24,(((float)iVar8 * _DAT_0064b244 - fVar5) * _DAT_0064b340 + _DAT_0064b240) *
                          param_4);
    iVar8 = _rand();
    fVar5 = (float)iVar8 * _DAT_0064b244;
    iVar8 = _rand();
    local_58 = ((float)iVar8 * _DAT_0064b244 - fVar5) * _DAT_0064b340 + _DAT_0064b240;
    local_50 = local_58 * param_3[2];
    local_54 = local_58 * param_3[1];
    local_58 = local_58 * *param_3;
    local_3c = local_58;
    local_38 = local_54;
    local_34 = local_50;
    FUN_005aae00(local_18,&local_3c);
    if (param_10 == 0) {
LAB_004bc025:
      if (((param_9 != 0) && (param_10 == 0)) &&
         ((_DAT_0064b248 < _DAT_00694fdc &&
          (iVar8 = _rand(), _DAT_0064b320 < (float)iVar8 * _DAT_0064b244)))) {
        iVar8 = FUN_00578a50(0xd4,DAT_006f5a10);
        local_4 = 2;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(DAT_006d0fd8 + 0x268);
          local_94 = *(float *)(iVar8 + 0x1b0);
          local_90 = *(float *)(iVar8 + 0x1b4);
          local_8c = *(float *)(iVar8 + 0x1b8);
          local_a4 = local_8c + local_b0;
          local_a8 = local_90 + local_b4;
          local_ac = local_94 + local_b8;
          local_30 = local_ac;
          local_2c = local_a8;
          local_28 = local_a4;
          iVar8 = FUN_0059e090(DAT_00695184,param_1,&local_30,fVar4 * _DAT_0064b33c,
                               &DAT_00693958 + DAT_00695174 * 4,1,0);
        }
        local_4 = 0xffffffff;
        if (iVar8 == 0) {
          ExceptionList = local_c;
          return;
        }
        *(undefined4 *)(iVar8 + 0xc0) = param_7;
        *(undefined4 *)(iVar8 + 200) = param_8;
      }
    }
    else if (param_9 != 0) {
      if ((((_DAT_0064b248 < _DAT_00694fdc) && (iVar8 = FUN_0060d7c0(), iVar8 == 0)) &&
          (iVar8 = FUN_004b86c0(), iVar8 == 0)) && (iVar8 = FUN_004b8710(), iVar8 == 0)) {
        iVar8 = FUN_00578a50(0xcc,DAT_006f5a04);
        local_4 = 0;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_0059d9e0(DAT_00695184,param_1,&local_b8,fVar4,&DAT_006950ec,DAT_0069517c);
        }
        local_4 = 0xffffffff;
        if (iVar8 == 0) {
          ExceptionList = local_c;
          return;
        }
        *(undefined4 *)(iVar8 + 0xc0) = param_7;
      }
      if ((_DAT_0064b248 < _DAT_00694f98) &&
         (iVar8 = _rand(), _DAT_0064b320 < (float)iVar8 * _DAT_0064b244)) {
        iVar8 = FUN_00578a50(0xd4,DAT_006f5a10);
        local_4 = 1;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(DAT_006d0fd8 + 0x268);
          local_48 = *(float *)(iVar8 + 0x1b0);
          local_44 = *(float *)(iVar8 + 0x1b4);
          local_40 = *(float *)(iVar8 + 0x1b8);
          local_7c = local_40 + local_b0;
          local_80 = local_44 + local_b4;
          local_84 = local_48 + local_b8;
          local_64 = local_84;
          local_60 = local_80;
          local_5c = local_7c;
          iVar8 = FUN_0059e090(DAT_00695184,param_1,&local_64,fVar4 * _DAT_0064b33c,
                               &DAT_00693958 + DAT_00695178 * 4,1,1);
        }
        local_4 = 0xffffffff;
        if (iVar8 == 0) {
          ExceptionList = local_c;
          return;
        }
        *(undefined4 *)(iVar8 + 0xc0) = param_7;
        *(undefined4 *)(iVar8 + 200) = param_8;
      }
      goto LAB_004bc025;
    }
    local_88 = local_88 + 1;
    if (param_5 <= local_88) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


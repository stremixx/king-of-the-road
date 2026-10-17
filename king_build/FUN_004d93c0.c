
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004d93c0(undefined4 *param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 *local_7c;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [48];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645076;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_7c = param_1;
  FUN_005d2890(0x69,s__Blow_00671c50);
  pfVar1 = (float *)(param_1 + 9);
  local_4 = 0;
  *pfVar1 = 0.0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_0064c3f4;
  local_e8 = 0;
  local_e4 = 0;
  *pfVar1 = *param_3;
  local_e0 = 0;
  local_f8 = 10;
  param_1[10] = param_3[1];
  param_1[0xb] = param_3[2];
  param_1[8] = param_2;
  do {
    iVar6 = _rand();
    fVar2 = (float)iVar6 * _DAT_0064b47c;
    iVar6 = _rand();
    fVar3 = _DAT_0064c3e4 * (float)iVar6 * _DAT_0064b244;
    pfVar7 = (float *)FUN_005ab7d0(local_3c,fVar3 + fVar3);
    fVar3 = DAT_007015a0 * *pfVar7 + DAT_007015a4 * pfVar7[3] + DAT_007015a8 * pfVar7[6] + pfVar7[9]
    ;
    fVar4 = DAT_007015a0 * pfVar7[1] + DAT_007015a4 * pfVar7[4] + DAT_007015a8 * pfVar7[7] +
            pfVar7[10];
    fVar5 = DAT_007015a0 * pfVar7[2] + DAT_007015a4 * pfVar7[5] + DAT_007015a8 * pfVar7[8] +
            pfVar7[0xb];
    FUN_0041ce10(DAT_00701590 * _DAT_0064b310 + fVar3,DAT_00701594 * _DAT_0064b310 + fVar4,
                 DAT_00701598 * _DAT_0064b310 + fVar5);
    local_e8 = local_a0;
    local_e4 = local_9c;
    local_e0 = local_98;
    FUN_0041ce10(fVar3 * fVar2,fVar4 * fVar2,fVar5 * fVar2);
    iVar6 = FUN_00631d33(0x6c);
    local_4._0_1_ = 1;
    if (iVar6 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      FUN_0041ce10(local_dc + *pfVar1,local_d8 + (float)param_1[10],local_d4 + (float)param_1[0xb]);
      local_c4 = local_ac;
      local_c0 = local_a8;
      local_bc = local_a4;
      iVar6 = _rand();
      piVar8 = (int *)FUN_004d9a50(param_1[8],&local_c4,&local_e8,
                                   (float)iVar6 * _DAT_0064c3f0 + _DAT_0064b2f4);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*piVar8 + 0x18))(1);
    iVar6 = _rand();
    if (_DAT_0064b2f8 < (float)iVar6 * _DAT_0064b244) {
      FUN_0041ce10(local_dc * _DAT_0064b310,local_d8 * _DAT_0064b310,local_d4 * _DAT_0064b310);
      FUN_0041ce10(fStack_b8 + DAT_00701590,fStack_b4 + DAT_00701594,fStack_b0 + DAT_00701598);
      FUN_0041ce10(fStack_d0 * _DAT_0064c3ec,fStack_cc * _DAT_0064c3ec,fStack_c8 * _DAT_0064c3ec);
      uStack_94 = uStack_88;
      uStack_90 = uStack_84;
      uStack_8c = uStack_80;
      uVar9 = FUN_005aaad0(auStack_78,&local_e8,&uStack_94,0x40400000,2,0x3e99999a,1);
      FUN_004bb510(pfVar1,uVar9);
    }
    local_f8 = local_f8 + -1;
  } while (local_f8 != 0);
  param_1[0xd] = 0;
  uVar9 = FUN_005db380(local_3c);
  FUN_005aba00(auStack_6c,uVar9);
  _rand();
  if (DAT_00695680 != 0) {
    uVar13 = 0x3ff00000;
    uVar12 = 0;
    uVar11 = 0x40490000;
    uVar9 = 0;
    puVar10 = (undefined4 *)FUN_0043f690(auStack_78,pfVar1,auStack_6c,0,0x40490000,0,0x3ff00000);
    FUN_004dd880(*puVar10,puVar10[1],puVar10[2],uVar9,uVar11,uVar12,uVar13);
  }
  FUN_005d2c20(param_1);
  ExceptionList = pvStack_c;
  return param_1;
}


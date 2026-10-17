
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004dc370(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  float fVar7;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  undefined4 *local_44;
  float fStack_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00645229;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064c4fc;
  local_4 = 0;
  local_44 = param_1;
  if (*(int *)(DAT_006cdbcc + 0x514) != 2) {
    iVar3 = _rand();
    local_50 = (float)iVar3 * _DAT_0064c51c + _DAT_0064b3f4;
    local_48 = FUN_00631d33(0x6c);
    local_4._0_1_ = 1;
    if (local_48 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      fVar7 = DAT_00701598 * _DAT_0064b3f8;
      fVar1 = DAT_00701594 * _DAT_0064b3f8;
      fVar2 = DAT_00701590 * _DAT_0064b3f8;
      local_3c = fVar2 * (float)param_1[0x14] +
                 fVar7 * (float)param_1[0x1a] + fVar1 * (float)param_1[0x17];
      local_38 = fVar7 * (float)param_1[0x1b] +
                 fVar1 * (float)param_1[0x18] + fVar2 * (float)param_1[0x15];
      local_34 = fVar7 * (float)param_1[0x1c] +
                 fVar1 * (float)param_1[0x19] + fVar2 * (float)param_1[0x16];
      fVar7 = (float)param_1[0x13] - DAT_00701598;
      fVar2 = (float)param_1[0x12] - DAT_00701594;
      fVar1 = (float)param_1[0x11] - DAT_00701590;
      local_54 = fVar7 * (float)param_1[0x1b] +
                 fVar2 * (float)param_1[0x18] + fVar1 * (float)param_1[0x15] + (float)param_1[0x1e];
      local_4c = fVar7 * (float)param_1[0x1c] +
                 fVar2 * (float)param_1[0x19] + fVar1 * (float)param_1[0x16] + (float)param_1[0x1f];
      FUN_0041ce10(fVar1 * (float)param_1[0x14] +
                   fVar7 * (float)param_1[0x1a] + fVar2 * (float)param_1[0x17] +
                   (float)param_1[0x1d],local_54,local_4c);
      piVar4 = (int *)FUN_004d9a50(param_1[10],local_30,&local_3c,local_50);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    piVar4[0x19] = 1;
    piVar4[0x1a] = 0x3f333333;
    (**(code **)(*piVar4 + 0x18))(1);
    local_50 = (float)_rand();
    fVar7 = (float)(int)local_50 * _DAT_0064b680 + _DAT_0064b654;
    local_44 = (undefined4 *)FUN_00631d33(0x6c);
    puStack_8._0_1_ = 2;
    if (local_44 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_0041ce10(DAT_00701590 * _DAT_0064b3f8,DAT_00701594 * _DAT_0064b3f8,
                   DAT_00701598 * _DAT_0064b3f8);
      local_4c = fStack_40 * (float)param_1[0x14] +
                 local_38 * (float)param_1[0x1a] + local_3c * (float)param_1[0x17];
      local_50 = local_38 * (float)param_1[0x1c] +
                 local_3c * (float)param_1[0x19] + fStack_40 * (float)param_1[0x16];
      FUN_0041ce10(local_4c,local_38 * (float)param_1[0x1b] +
                            local_3c * (float)param_1[0x18] + fStack_40 * (float)param_1[0x15],
                   local_50);
      pfVar6 = &local_34;
      uVar5 = FUN_004bde20(auStack_28,param_1 + 0x11,&DAT_00701590,param_1 + 0x14,pfVar6,fVar7);
      uVar5 = FUN_0043f690(auStack_1c,uVar5);
      piVar4 = (int *)FUN_004d9a50(param_1[10],uVar5,pfVar6,fVar7);
    }
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    (**(code **)(*piVar4 + 0x18))(1);
    piVar4[0x1a] = 0x3f333333;
    fStack_40 = (float)FUN_00631d33(0x38);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (fStack_40 != 0.0) {
      pfVar6 = &local_54;
      if (local_54 <= local_50) {
        pfVar6 = &local_50;
      }
      FUN_004dc6e0(param_1[10],param_1[0x26],param_1[0x24],param_1[0x25],*pfVar6);
    }
  }
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}


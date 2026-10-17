
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_00489150(int param_1,undefined4 ****param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 ****ppppuVar4;
  undefined4 ****local_18c;
  undefined4 ****ppppuStack_188;
  undefined4 ****local_170;
  undefined4 ****local_16c;
  undefined4 ***local_168;
  undefined4 *local_164;
  undefined4 ****local_160;
  int local_15c;
  undefined4 ***local_158;
  undefined4 *local_154;
  undefined4 ****local_150;
  undefined4 ****local_14c;
  undefined4 ***local_148;
  undefined4 *local_144;
  undefined4 ****local_140;
  undefined4 ****local_13c;
  int *local_138;
  undefined4 ***local_134 [10];
  undefined4 ***local_10c [32];
  undefined4 ***local_8c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640792;
  local_c = ExceptionList;
  local_164 = &param_2;
  ppppuStack_188 = &local_160;
  local_18c = &local_158;
  ExceptionList = &local_c;
  FUN_00490c50(param_2);
  local_4 = 0;
  if (local_158 == (undefined4 ***)DAT_0066f3dc) {
    ppppuStack_188 = (undefined4 ****)0x4891c3;
    iVar2 = FUN_0061db0f();
    for (iVar2 = (int)local_160 + (local_15c - iVar2); iVar2 != 0;
        iVar2 = (int)local_160 + (local_15c - iVar2)) {
      local_144 = &param_2;
      ppppuStack_188 = &local_13c;
      local_18c = &local_140;
      FUN_00490c50(param_2,&local_138);
      local_4._0_1_ = 1;
      if (local_138 == DAT_0066f3d4) {
        ppppuStack_188 = param_2;
        local_18c = (undefined4 ****)0x1;
        FUN_0061d8bf(local_10c,local_13c);
        uVar3 = 0xffffffff;
        ppppuVar4 = local_10c;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *(char *)ppppuVar4;
          ppppuVar4 = (undefined4 ****)((int)ppppuVar4 + 1);
        } while (cVar1 != '\0');
        local_18c = local_10c;
        ppppuStack_188 = (undefined4 ****)((int)local_10c + ~uVar3);
        FUN_0044c1c0(*(undefined4 *)(param_1 + 4));
      }
      else if (local_138 == DAT_0066f3cc) {
        ppppuStack_188 = (undefined4 ****)*local_144;
        local_18c = (undefined4 ****)0x48927d;
        iVar2 = FUN_0061db0f();
        for (iVar2 = ((int)local_140 - iVar2) + (int)local_13c; iVar2 != 0;
            iVar2 = ((int)local_140 - iVar2) + (int)local_13c) {
          ppppuStack_188 = &local_16c;
          local_18c = &local_170;
          FUN_00490c50(param_2,&local_168);
          local_4._0_1_ = 2;
          if (local_168 == (undefined4 ***)DAT_0066f3c4) {
            local_154 = &param_2;
            ppppuStack_188 = &local_14c;
            local_18c = &local_150;
            FUN_00490c50(param_2,&local_148);
            if (local_148 == (undefined4 ***)DAT_0066f3bc) {
              ppppuStack_188 = param_2;
              local_18c = (undefined4 ****)0x1;
              FUN_0061d8bf(local_8c,local_14c);
            }
            ppppuStack_188 = local_14c;
            local_18c = local_150;
            FUN_00490cb0(*local_154);
            ppppuStack_188 = local_8c;
            local_18c = (undefined4 ****)0x489354;
            ppppuStack_188 = (undefined4 ****)FUN_00488490();
            local_4._0_1_ = 3;
            FUN_004896a0(&local_18c);
            FUN_00489830(local_134);
            local_4._0_1_ = 2;
            ppppuStack_188 = (undefined4 ****)0x489385;
            FUN_004884f0();
            ppppuStack_188 = param_2;
            local_18c = (undefined4 ****)0x489391;
            iVar2 = FUN_0061db0f();
            for (iVar2 = ((int)local_170 - iVar2) + (int)local_16c; iVar2 != 0;
                iVar2 = ((int)local_170 - iVar2) + (int)local_16c) {
              local_18c = (undefined4 ****)0x4893b7;
              ppppuStack_188 = param_2;
              FUN_00488b30();
              ppppuStack_188 = param_2;
              local_18c = (undefined4 ****)0x4893c3;
              iVar2 = FUN_0061db0f();
            }
          }
          ppppuStack_188 = local_16c;
          local_18c = local_170;
          local_4._0_1_ = 1;
          FUN_00490cb0(param_2);
          iVar2 = FUN_0061db0f(*local_144);
        }
      }
      ppppuStack_188 = local_13c;
      local_18c = local_140;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00490cb0(*local_144);
      iVar2 = FUN_0061db0f(*local_164);
    }
  }
  else if (local_158 == (undefined4 ***)DAT_0066f3cc) {
    ppppuStack_188 = (undefined4 ****)0x489470;
    iVar2 = FUN_0061db0f();
    for (iVar2 = (int)local_160 + (local_15c - iVar2); iVar2 != 0;
        iVar2 = (int)local_160 + (local_15c - iVar2)) {
      ppppuStack_188 = &local_170;
      local_18c = &local_168;
      FUN_00490c50(param_2);
      local_4._0_1_ = 4;
      if (local_168 == (undefined4 ***)DAT_0066f3c4) {
        local_154 = &param_2;
        ppppuStack_188 = &local_150;
        local_18c = &local_148;
        FUN_00490c50(param_2);
        if (local_148 == (undefined4 ***)DAT_0066f3bc) {
          ppppuStack_188 = (undefined4 ****)0x1;
          local_18c = local_14c;
          FUN_0061d8bf(local_8c);
        }
        local_18c = (undefined4 ****)*local_154;
        ppppuStack_188 = local_150;
        FUN_00490cb0();
        ppppuStack_188 = (undefined4 ****)0x489549;
        FUN_00488490();
        local_18c = &ppppuStack_188;
        local_4._0_1_ = 5;
        FUN_004896a0();
        local_18c = local_134;
        FUN_00489830();
        local_4._0_1_ = 4;
        FUN_004884f0();
        ppppuStack_188 = (undefined4 ****)0x489586;
        iVar2 = FUN_0061db0f();
        for (iVar2 = ((int)local_170 - iVar2) + (int)local_16c; iVar2 != 0;
            iVar2 = ((int)local_170 - iVar2) + (int)local_16c) {
          ppppuStack_188 = (undefined4 ****)0x4895ac;
          FUN_00488b30();
          ppppuStack_188 = (undefined4 ****)0x4895b8;
          iVar2 = FUN_0061db0f();
        }
      }
      local_18c = param_2;
      ppppuStack_188 = local_170;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00490cb0();
      iVar2 = FUN_0061db0f(*local_164);
    }
  }
  local_18c = (undefined4 ****)*local_164;
  ppppuStack_188 = local_160;
  local_4 = 0xffffffff;
  FUN_00490cb0();
  ExceptionList = local_c;
  return 0;
}


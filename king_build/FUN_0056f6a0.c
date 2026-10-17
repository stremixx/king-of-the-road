
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0056f6a0(uint *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined1 **ppuVar10;
  int iVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined1 **extraout_ECX_07;
  undefined4 extraout_ECX_08;
  uint uVar12;
  int iVar13;
  float10 extraout_ST0;
  float10 fVar14;
  undefined1 *puStack_4d8;
  undefined1 **ppuStack_4d4;
  undefined1 **local_4d0;
  undefined8 local_4cc;
  undefined1 *local_4b8;
  undefined1 *local_4b4;
  double local_4b0;
  double local_4a8;
  undefined8 local_4a0;
  float local_498;
  float local_48c;
  float local_488;
  float local_484;
  undefined1 *local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float local_470;
  float local_46c;
  float local_468;
  undefined1 local_464 [4];
  undefined1 auStack_460 [4];
  int local_45c;
  undefined1 *local_458 [12];
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined1 local_40c [192];
  undefined4 local_34c;
  undefined4 local_348;
  undefined1 *local_344 [20];
  undefined1 local_2f4 [48];
  undefined1 local_2c4 [48];
  undefined1 local_294 [48];
  undefined1 local_264 [48];
  undefined1 local_234 [48];
  undefined1 auStack_204 [48];
  undefined1 local_1d4 [48];
  undefined1 auStack_1a4 [48];
  undefined1 local_174 [48];
  undefined4 local_144 [64];
  int local_44;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00646e22;
  local_14 = ExceptionList;
  uVar12 = *param_1;
  if (0xcc0 < uVar12) {
    return 0;
  }
  if (uVar12 == 0xcc0) {
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    DAT_006f2388 = 1;
    return 1;
  }
  switch(uVar12) {
  case 3:
    break;
  case 4:
    if (DAT_006f23f8 != 0) {
      *(uint *)(DAT_006f23f8 + 0xa4) = *(uint *)(DAT_006f23f8 + 0xa4) & 0xffffffed;
    }
    if ((DAT_006f230c != 0) && (*(int *)(DAT_006f230c + 500) != 0)) {
      *(uint *)(DAT_006f230c + 0x23c) = *(uint *)(DAT_006f230c + 0x23c) | 0x80;
    }
    return 1;
  case 5:
    if ((DAT_006f230c != 0) && (*(int *)(DAT_006f230c + 500) != 0)) {
      *(uint *)(DAT_006f230c + 0x23c) = *(uint *)(DAT_006f230c + 0x23c) | 0x80;
      return 1;
    }
    break;
  case 6:
    ExceptionList = &local_14;
    *(uint *)(DAT_006f230c + 0x240) = param_1[1];
    if (param_1[1] == 0) {
      if (DAT_006f2404 != (int *)0x0) {
        local_4cc = (double)CONCAT44(0x56f7ac,(undefined1 *)local_4cc);
        (**(code **)(*DAT_006f2404 + 0x28))();
        ExceptionList = local_14;
        return 1;
      }
    }
    else if (DAT_006f2408 != (int *)0x0) {
      local_4cc = (double)CONCAT44(0x56f7d9,(undefined1 *)local_4cc);
      (**(code **)(*DAT_006f2408 + 0x28))();
      ExceptionList = local_14;
      return 1;
    }
    break;
  case 7:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    if (DAT_0066b6e0 == 1) {
      local_4b8 = (undefined1 *)((int)&local_4cc + 4);
      local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
      local_4cc._4_4_ = DAT_006cdbcc;
      local_4d0 = (undefined1 **)0x56f81e;
      ExceptionList = &local_14;
      FUN_00568670();
      local_4cc = (double)CONCAT44(local_4cc._4_4_,0x56f826);
      uVar12 = FUN_0043f700();
      if ((uVar12 & 0x4000) != 0) {
        uVar12 = param_1[1];
        if (uVar12 == (int)DAT_006f2318 + 1U) {
          local_4cc = (double)CONCAT44(uVar12,0x56f84c);
          FUN_00438e00();
          DAT_006f2318 = (undefined1 **)param_1[1];
          ppuVar10 = (undefined1 **)0x4;
          iVar13 = 3;
          if ((DAT_006cdbcc[0x149] != (undefined1 *)0x0) && (*(int *)(DAT_006cdbf8 + 0x180) == 1)) {
            iVar13 = 1;
            ppuVar10 = (undefined1 **)0x2;
          }
          if (DAT_006f2318 == ppuVar10) {
            iVar11 = DAT_006f231c + 1;
            if (iVar11 == iVar13) {
              local_4b8 = (undefined1 *)((int)&local_4cc + 4);
              local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
              DAT_006f231c = 0;
              local_4d0 = (undefined1 **)0x56f8b7;
              local_4cc._4_4_ = (undefined1 **)iVar11;
              FUN_00568670();
              local_4cc = (double)CONCAT44(local_4cc._4_4_,0x56f8bf);
              FUN_00426be0();
              DAT_006f2318 = (undefined1 **)0xffffffff;
              ExceptionList = local_14;
              return 1;
            }
            local_4cc = (double)CONCAT44(iVar13,iVar11);
            local_4d0 = (undefined1 **)0x0;
            ppuStack_4d4 = (undefined1 **)0x3;
            puStack_4d8 = (undefined1 *)0x56f8f1;
            DAT_006f231c = iVar11;
            FUN_0056a5a0();
            DAT_006f2318 = (undefined1 **)0xffffffff;
            ExceptionList = local_14;
            return 1;
          }
          if (0 < (int)DAT_006f2318) {
            local_4cc = 0.0;
            local_4d0 = (undefined1 **)0x0;
            ppuStack_4d4 = (undefined1 **)0x7;
            puStack_4d8 = (undefined1 *)0x56f92d;
            FUN_0056a5a0();
            ExceptionList = local_14;
            return 1;
          }
        }
        else if ((uVar12 == 2) && (DAT_006f2318 == (undefined1 **)0x0)) {
          local_4cc = 0.0;
          local_4d0 = DAT_006f2318;
          ppuStack_4d4 = (undefined1 **)0x6;
          puStack_4d8 = (undefined1 *)0x56f965;
          FUN_0056a5a0();
          ExceptionList = local_14;
          return 1;
        }
      }
    }
    break;
  default:
    return 0;
  case 0xe:
  case 0x15:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    if (DAT_006cdbcc[0x146] == (undefined1 *)0x0) {
      if (DAT_006f2354 == 0) {
        if (((DAT_006f2390 != 0) && (*(int *)(DAT_006f2390 + 0x3c) == 0)) &&
           (DAT_006957a8 != DAT_006cdc0c)) {
          local_4cc = 6.49333528283664e-312;
          ExceptionList = &local_14;
          uVar4 = FUN_005d2500();
          local_4cc = (double)CONCAT44(uVar4,8);
          local_4d0 = (undefined1 **)0x56fa47;
          FUN_0056a6f0();
          ExceptionList = local_14;
          return 1;
        }
      }
      else if (*(float *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x332c) <
               (float)_DAT_0064a6d0) {
        local_4cc = (double)CONCAT44(0x56f9de,(undefined1 *)local_4cc);
        ExceptionList = &local_14;
        (**(code **)(*DAT_006cdc0c + 0x24))();
        *(undefined4 *)(DAT_006f2390 + 0x3c) = 0;
        ExceptionList = local_14;
        return 1;
      }
      return 1;
    }
    local_4cc = (double)CONCAT44(0x56fa7b,(undefined1 *)local_4cc);
    ExceptionList = &local_14;
    fVar14 = (float10)FUN_004eaf00();
    local_4a0 = (double)fVar14;
    local_4cc = (double)CONCAT44(0x56fa9c,(undefined1 *)local_4cc);
    fVar14 = (float10)FUN_004eaf10();
    fVar14 = ((float10)_DAT_0064b240 - fVar14) * (float10)local_4a0;
    local_4a8 = (double)fVar14;
    if ((float10)_DAT_0064a6c0 < fVar14) {
      local_4cc = (double)CONCAT44(0x56fac6,(undefined1 *)local_4cc);
      puVar5 = (undefined1 *)__ftol();
      local_4b4 = (undefined1 *)((int)&local_4cc + 4);
      local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
      local_4d0 = (undefined1 **)0x56fad9;
      local_4b8 = puVar5;
      local_4cc._4_4_ = (undefined1 **)extraout_ECX;
      FUN_00568670();
      local_4cc = (double)CONCAT44(local_4cc._4_4_,0x56fae1);
      fVar14 = (float10)FUN_0043f840();
      local_4b0 = (double)fVar14;
      if ((float10)_DAT_0064a660 < fVar14) {
        if ((double)(int)local_4b8 <= local_4b0) {
          fVar14 = (float10)_DAT_0064a668;
        }
        else {
          local_4cc = (double)CONCAT44(0x56fb1f,(undefined1 *)local_4cc);
          puVar5 = (undefined1 *)__ftol();
          fVar14 = extraout_ST0;
          local_4b8 = puVar5;
        }
        local_4cc = (double)CONCAT44((float)((float10)local_4a0 - fVar14),0x56fb52);
        FUN_004eae80();
        local_4cc = local_4b0 - (double)(int)local_4b8;
        local_4b8 = (undefined1 *)&local_4d0;
        ppuStack_4d4 = (undefined1 **)&local_4d0;
        puStack_4d8 = (undefined1 *)0x56fb6d;
        FUN_00568670();
        ppuStack_4d4 = (undefined1 **)0x56fb75;
        FUN_0043f8a0();
        local_4cc._0_4_ = (undefined1 *)0xb;
        local_4d0 = (undefined1 **)0x56fb80;
        local_4cc._4_4_ = (undefined1 **)puVar5;
        uVar4 = FUN_005d2500();
        local_4d0 = local_344;
        local_4cc = (double)CONCAT44(local_4cc._4_4_,uVar4);
        ppuStack_4d4 = (undefined1 **)0x56fb91;
        FUN_0061c369();
        ppuStack_4d4 = local_344;
        puStack_4d8 = (undefined1 *)0x56fb9e;
        FUN_00568e30();
        local_4cc = 3.0517585287270776e-05;
        local_4d0 = (undefined1 **)s_refuelSound_00676978;
        ppuStack_4d4 = (undefined1 **)0x56fbb5;
        FUN_005eea00();
        local_4d0 = (undefined1 **)0x56fbbf;
        FUN_005fd160();
        ExceptionList = local_14;
        return 1;
      }
    }
    break;
  case 0xf:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    if (DAT_006cdbcc[0x146] == (undefined1 *)0x0) {
      if (DAT_006f2354 != 0) {
        if (*(float *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x332c) <
            (float)_DAT_0064a6d0) {
          local_4cc = (double)CONCAT44(0x56fc32,(undefined1 *)local_4cc);
          ExceptionList = &local_14;
          (**(code **)(*DAT_006cdc10 + 0x24))();
          *(undefined4 *)(DAT_006f2390 + 0x3c) = 0;
          ExceptionList = local_14;
          return 1;
        }
        return 1;
      }
      if (DAT_006f2390 == 0) {
        return 1;
      }
      if (*(int *)(DAT_006f2390 + 0x3c) != 0) {
        return 1;
      }
      if (DAT_006957a8 != DAT_006cdc10) {
        local_4cc = 6.49333528569728e-312;
        ExceptionList = &local_14;
        uVar4 = FUN_005d2500();
        local_4cc = (double)CONCAT44(uVar4,8);
        local_4d0 = (undefined1 **)0x56fc8a;
        FUN_0056a6f0();
        ExceptionList = local_14;
        return 1;
      }
      return 1;
    }
    if (DAT_006f2354 == 0) {
      ExceptionList = &local_14;
      if (((DAT_006f2390 != 0) && (ExceptionList = &local_14, *(int *)(DAT_006f2390 + 0x3c) == 0))
         && (ExceptionList = &local_14, DAT_006957a8 != DAT_006cdc10)) {
        local_4cc = 6.49333528639392e-312;
        ExceptionList = &local_14;
        uVar4 = FUN_005d2500();
        local_4cc = (double)CONCAT44(uVar4,8);
        local_4d0 = (undefined1 **)0x56fd17;
        FUN_0056a6f0();
      }
    }
    else {
      ExceptionList = &local_14;
      if (*(float *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x332c) <
          (float)_DAT_0064a6d0) {
        local_4cc = (double)CONCAT44(0x56fcd4,(undefined1 *)local_4cc);
        ExceptionList = &local_14;
        (**(code **)(*DAT_006cdc10 + 0x24))();
        *(undefined4 *)(DAT_006f2390 + 0x3c) = 0;
      }
    }
    DAT_006f235c = DAT_006f235c | 0x8000;
    local_4cc = (double)CONCAT44(0x56fd34,(undefined1 *)local_4cc);
    fVar14 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x54))();
    local_4b0 = (double)fVar14;
    if ((float10)_DAT_0064a590 < fVar14) {
      local_4b8 = (undefined1 *)((int)&local_4cc + 4);
      local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
      local_4d0 = (undefined1 **)0x56fd56;
      local_4cc._4_4_ = (undefined1 **)extraout_ECX_00;
      FUN_00568670();
      local_4cc = (double)CONCAT44(local_4cc._4_4_,0x56fd5e);
      fVar14 = (float10)FUN_0043f840();
      local_4a8 = (double)fVar14;
      local_4cc = (double)CONCAT44(0x56fd74,(undefined1 *)local_4cc);
      local_4b8 = (undefined1 *)__ftol();
      local_4cc = (double)CONCAT44(0x56fd89,(undefined1 *)local_4cc);
      (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x74))();
      local_4cc = (double)CONCAT44(0x56fd99,(undefined1 *)local_4cc);
      (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x78))();
      local_4b4 = (undefined1 *)((int)&local_4cc + 4);
      local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
      local_4a0 = 0.0;
      local_4d0 = (undefined1 **)0x56fdb6;
      local_4cc._4_4_ = (undefined1 **)extraout_ECX_01;
      FUN_00568670();
      local_4cc = (double)CONCAT44(local_4cc._4_4_,0x56fdbe);
      uVar12 = FUN_0043f700();
      if ((uVar12 & 0x2000000) == 0) {
        fVar14 = (float10)local_4a0;
      }
      else {
        local_4b4 = (undefined1 *)((int)&local_4cc + 4);
        local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
        local_4d0 = (undefined1 **)0x56fdd5;
        local_4cc._4_4_ = (undefined1 **)extraout_ECX_02;
        FUN_00568670();
        local_4cc = (double)CONCAT44(local_4cc._4_4_,0x56fddd);
        fVar14 = (float10)FUN_004773b0();
      }
      if (fVar14 + (float10)(int)local_4b8 <= (float10)local_4a8) {
        local_4b0 = local_4b0 + _DAT_0064a5a8;
        local_4cc = (double)CONCAT44(0x56fe2b,(undefined1 *)local_4cc);
        puVar5 = (undefined1 *)__ftol();
        local_4b4 = (undefined1 *)((int)&local_4cc + 4);
        local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
        local_4d0 = (undefined1 **)0x56fe3e;
        local_4b8 = puVar5;
        local_4cc._4_4_ = (undefined1 **)extraout_ECX_03;
        FUN_00568670();
        local_4cc = (double)CONCAT44(local_4cc._4_4_,0x56fe46);
        uVar12 = FUN_0043f700();
        if ((uVar12 & 0x2000000) != 0) {
          local_4cc._4_4_ = (undefined1 **)0x77;
          local_4cc._0_4_ = (undefined1 *)0x56fe57;
          local_4cc._0_4_ = (undefined1 *)FUN_005d2500();
          local_4d0 = (undefined1 **)0x56fe5d;
          FUN_0056a570();
          local_4d0 = (undefined1 **)0x56fe6c;
          local_4b4 = (undefined1 *)((int)&local_4cc + 4);
          local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
          FUN_00568670();
          local_4cc = (double)CONCAT44(local_4cc._4_4_,0x56fe74);
          FUN_004773a0();
        }
        fVar14 = (float10)local_4b0;
      }
      else {
        local_4cc = (double)CONCAT44(0x56fe02,(undefined1 *)local_4cc);
        puVar5 = (undefined1 *)__ftol();
        fVar14 = (float10)local_4b0 - (float10)local_4a8 * (float10)_DAT_0064a930;
        local_4b8 = puVar5;
      }
      local_4cc = (double)CONCAT44((float)fVar14,0x56fe8a);
      FUN_0053aaf0();
      if (DAT_006cdbcc[0x149] == (undefined1 *)0x0) {
        local_4cc = local_4a8 - (double)(int)local_4b8;
        local_4b8 = (undefined1 *)&local_4d0;
        ppuStack_4d4 = (undefined1 **)&local_4d0;
        local_4d0 = DAT_006cdbcc;
        puStack_4d8 = (undefined1 *)0x56feb3;
        FUN_00568670();
        ppuStack_4d4 = (undefined1 **)0x56febb;
        FUN_0043f8a0();
        local_4cc._0_4_ = (undefined1 *)0xa;
        local_4d0 = (undefined1 **)0x56fec6;
        local_4cc._4_4_ = (undefined1 **)puVar5;
        uVar4 = FUN_005d2500();
        local_4cc = (double)CONCAT44(local_4cc._4_4_,uVar4);
        local_4d0 = local_344;
        ppuStack_4d4 = (undefined1 **)0x56fed7;
        FUN_0061c369();
        ppuStack_4d4 = local_344;
        puStack_4d8 = (undefined1 *)0x56fee4;
        FUN_00568e30();
      }
      local_4cc = 3.0517585287270776e-05;
      local_4d0 = (undefined1 **)s_repairSound_0067220c;
      ppuStack_4d4 = (undefined1 **)0x56fefb;
      FUN_005eea00();
      local_4d0 = (undefined1 **)0x56ff05;
      FUN_005fd160();
      ExceptionList = local_14;
      return 1;
    }
    break;
  case 0x10:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    local_4b8 = *(undefined1 **)param_1[3];
    local_4cc = (double)CONCAT44(local_2f4,0x56ff55);
    ExceptionList = &local_14;
    iVar13 = FUN_0057d570();
    if (*(float *)(iVar13 + 0x2c) < (float)local_4b8) {
      DAT_006f2388 = 1;
      ExceptionList = local_14;
      return 1;
    }
    break;
  case 0x11:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    uVar12 = param_1[1];
    ExceptionList = &local_14;
    if ((int)uVar12 % 100 == 0) {
      local_480 = (undefined1 *)&local_4cc;
      local_4d0 = (undefined1 **)&local_4cc;
      local_4cc = (double)CONCAT44((int)uVar12 / 100,-((int)uVar12 >> 0x1f));
      ppuStack_4d4 = (undefined1 **)0x5706c4;
      ExceptionList = &local_14;
      FUN_00568670();
      local_4d0 = (undefined1 **)0x5706cc;
      cVar3 = FUN_00443a90();
      if (cVar3 != '\0') {
        local_4cc = (double)CONCAT44(0x5706ea,(undefined1 *)local_4cc);
        fVar14 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0xa4))();
        if ((float10)_DAT_0064b254 < fVar14) {
          puStack_4d8 = (undefined1 *)param_1[1];
          local_4cc = (double)CONCAT44(&local_4b0,&local_4a0);
          local_4d0 = (undefined1 **)((int)puStack_4d8 % 100);
          local_4a0 = -10.0;
          ppuStack_4d4 = (undefined1 **)((int)puStack_4d8 / 100);
          local_4b0 = (double)CONCAT44(local_4b0._4_4_,&puStack_4d8);
          FUN_00568670(&puStack_4d8);
          FUN_00443d20();
          local_4cc = (double)CONCAT44(0x570749,(undefined1 *)local_4cc);
          FUN_0056eda0();
          local_4cc = (double)CONCAT44(0x57074e,(undefined1 *)local_4cc);
          FUN_005686a0();
        }
        *(uint *)(DAT_006f2394 + 0x20) = *param_1;
        *(uint *)(DAT_006f2394 + 0x24) = param_1[1];
        ExceptionList = local_14;
        return 1;
      }
    }
    local_4cc = (double)CONCAT44(0x570787,(undefined1 *)local_4cc);
    FUN_004184d0();
    uVar12 = param_1[1];
    local_c = 4;
    local_4cc = (double)CONCAT44(&local_45c,(int)uVar12 % 100);
    local_4d0 = (undefined1 **)((int)uVar12 / 100);
    ppuStack_4d4 = (undefined1 **)-((int)uVar12 >> 0x1f);
    local_4b0._0_4_ = &ppuStack_4d4;
    puStack_4d8 = (undefined1 *)&ppuStack_4d4;
    FUN_00568670();
    puStack_4d8 = (undefined1 *)0x5707cc;
    FUN_00441920();
    if (local_45c == -1) {
      local_c = 7;
      local_4cc = (double)CONCAT44(0x5707f1,(undefined1 *)local_4cc);
      FUN_0044a450();
      local_c._0_1_ = 6;
      local_4cc = (double)CONCAT44(0x570805,(undefined1 *)local_4cc);
      FUN_0044a450();
      local_c = CONCAT31(local_c._1_3_,5);
    }
    else {
      piVar6 = *(int **)(DAT_006d0fd8 + 0x268);
      if (DAT_006f2354 != 0) {
        local_4cc = (double)CONCAT44(0x570834,(undefined1 *)local_4cc);
        fVar14 = (float10)(**(code **)(*piVar6 + 0xa4))();
        local_4b8 = (undefined1 *)(float)fVar14;
        local_4cc = (double)CONCAT44(0x570842,(undefined1 *)local_4cc);
        fVar14 = (float10)(**(code **)(*piVar6 + 0x88))();
        if ((float10)(float)local_4b8 < fVar14) {
          local_4cc = (double)CONCAT44(0x57085b,(undefined1 *)local_4cc);
          fVar14 = (float10)(**(code **)(*piVar6 + 0x94))();
          local_4b8 = (undefined1 *)(float)fVar14;
          local_4cc = (double)CONCAT44(0x570869,(undefined1 *)local_4cc);
          fVar14 = (float10)(**(code **)(*piVar6 + 0x8c))();
          if ((float10)(float)local_4b8 < fVar14) {
            uVar12 = param_1[1];
            local_4cc = (double)CONCAT44(&local_4b0,&local_4a0);
            local_4d0 = (undefined1 **)((int)uVar12 % 100);
            local_4a0 = 10.0;
            ppuStack_4d4 = (undefined1 **)((int)uVar12 / 100);
            puStack_4d8 = (undefined1 *)-((int)uVar12 >> 0x1f);
            local_4b0._0_4_ = (undefined1 ***)&puStack_4d8;
            FUN_00568670(&puStack_4d8);
            FUN_00443d20();
            local_4cc = (double)CONCAT44(0x5708cf,(undefined1 *)local_4cc);
            FUN_0056eda0();
            local_4cc = 3.0517585287270776e-05;
            local_4d0 = (undefined1 **)s_orderSound_0067b0ec;
            ppuStack_4d4 = (undefined1 **)0x5708e3;
            FUN_005eea00();
            local_4d0 = (undefined1 **)0x5708ed;
            FUN_005fd160();
            local_4cc = (double)CONCAT44(0x5708f2,(undefined1 *)local_4cc);
            FUN_005686a0();
            DAT_006f2354 = 0;
          }
        }
      }
      if ((DAT_006f2390 != 0) && (*(int *)(DAT_006f2390 + 0x3c) == 0)) {
        local_4cc = 1.20956578213231e-312;
        uVar4 = FUN_005d2500();
        local_4cc = (double)CONCAT44(uVar4,8);
        local_4d0 = (undefined1 **)0x570924;
        FUN_0056a6f0();
      }
      *(uint *)(DAT_006f2394 + 0x20) = *param_1;
      *(uint *)(DAT_006f2394 + 0x24) = param_1[1];
      local_c = 10;
      local_4cc = (double)CONCAT44(0x570951,(undefined1 *)local_4cc);
      FUN_0044a450();
      local_c._0_1_ = 9;
      local_4cc = (double)CONCAT44(0x570965,(undefined1 *)local_4cc);
      FUN_0044a450();
      local_c = CONCAT31(local_c._1_3_,8);
    }
    local_4cc = (double)CONCAT44(0x570979,(undefined1 *)local_4cc);
    FUN_0044a450();
    local_c = 0xffffffff;
    local_4cc = (double)CONCAT44(0x57098c,(undefined1 *)local_4cc);
    FUN_004497b0();
    ExceptionList = local_14;
    return 1;
  case 0x13:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    if (_DAT_0064b3fc < *(float *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x332c)) {
      return 0;
    }
    *(uint *)(DAT_006f2394 + 0x20) = uVar12;
    *(uint *)(DAT_006f2394 + 0x24) = param_1[1];
    return 1;
  case 0x14:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    local_4cc = (double)CONCAT44(&local_4b4,0x570246);
    ExceptionList = &local_14;
    FUN_004364f0();
    if (local_4b4 != DAT_0068becc) {
      do {
        local_4cc = (double)CONCAT44(local_4b4,0x570269);
        local_4b0._0_4_ = (undefined1 ***)((int)&local_4cc + 4);
        uVar12 = FUN_0043f7e0();
        if (((uVar12 & 0x40) != 0) && ((uVar12 & 0x20) == 0)) {
          local_4cc = (double)CONCAT44(**(undefined4 **)(local_4b4 + 8),0x57029c);
          iVar13 = FUN_005e4980();
          if (iVar13 == 0) {
            local_4cc = (double)CONCAT44(**(undefined4 **)(local_4b4 + 8),
                                         s_present_absent__in_my_opinion_0067b0f8);
            local_4d0 = (undefined1 **)0x5702b4;
            FUN_005d2250();
          }
          else if (*(int *)(iVar13 + 0x1c) != 0) {
            local_4cc = (double)CONCAT44(local_294,0x5702d6);
            iVar13 = FUN_0057d570();
            local_48c = *(float *)(iVar13 + 0x24);
            local_488 = *(float *)(iVar13 + 0x28);
            local_484 = *(float *)(iVar13 + 0x2c);
            local_4cc = (double)CONCAT44(local_1d4,0x570309);
            iVar13 = FUN_0057d570();
            local_498 = local_484 - *(float *)(iVar13 + 0x2c);
            local_46c = local_488 - *(float *)(iVar13 + 0x28);
            local_470 = local_48c - *(float *)(iVar13 + 0x24);
            local_4a0 = (double)CONCAT44(local_46c,local_470);
            local_4cc = (double)CONCAT44(&local_470,0x57034c);
            local_468 = local_498;
            fVar14 = (float10)FUN_005aabc0();
            if (fVar14 < (float10)_DAT_0064b31c) {
              if (local_4b4 == DAT_0068becc) {
                ExceptionList = local_14;
                return 1;
              }
              local_4cc = 1.8090132949743256e-307;
              ppuStack_4d4 = local_458;
              local_4d0 = (undefined1 **)0xc;
              local_45c = 0;
              puStack_4d8 = (undefined1 *)0x5703d1;
              FUN_004011e0();
              puVar9 = &DAT_00701550;
              ppuVar10 = local_458;
              for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
                *ppuVar10 = (undefined1 *)*puVar9;
                puVar9 = puVar9 + 1;
                ppuVar10 = ppuVar10 + 1;
              }
              local_428 = 0;
              local_424 = 0;
              local_420 = 0;
              local_41c = 0;
              local_418 = 0;
              local_414 = 0xffffffff;
              local_410 = 0xffffffff;
              local_4cc = (double)CONCAT44(0x57042f,(undefined1 *)local_4cc);
              FUN_004184d0();
              local_34c = 0xffffffff;
              local_348 = 0xffffffff;
              local_4d0 = &local_4b4;
              local_4b0._0_4_ = (undefined1 ***)&local_4cc;
              local_4cc = (double)CONCAT44(&local_45c,extraout_ECX_06);
              local_c = 0;
              ppuStack_4d4 = (undefined1 **)0x57045a;
              FUN_0041d3f0();
              local_4b0._0_4_ = &local_4d0;
              ppuStack_4d4 = (undefined1 **)&local_4d0;
              puStack_4d8 = (undefined1 *)0x570467;
              local_4d0 = extraout_ECX_07;
              FUN_00568670();
              ppuStack_4d4 = (undefined1 **)0x57046f;
              FUN_0041bf30();
              piVar6 = *(int **)(DAT_006d0fd8 + 0x268);
              if (DAT_006f2354 != 0) {
                local_4cc = (double)CONCAT44(0x570495,(undefined1 *)local_4cc);
                fVar14 = (float10)(**(code **)(*piVar6 + 0xa4))();
                local_4b8 = (undefined1 *)(float)fVar14;
                local_4cc = (double)CONCAT44(0x5704a3,(undefined1 *)local_4cc);
                fVar14 = (float10)(**(code **)(*piVar6 + 0x88))();
                if ((float10)(float)local_4b8 < fVar14) {
                  local_4cc = (double)CONCAT44(0x5704bc,(undefined1 *)local_4cc);
                  fVar14 = (float10)(**(code **)(*piVar6 + 0x94))();
                  local_4b8 = (undefined1 *)(float)fVar14;
                  local_4cc = (double)CONCAT44(0x5704ca,(undefined1 *)local_4cc);
                  fVar14 = (float10)(**(code **)(*piVar6 + 0x8c))();
                  if ((float10)(float)local_4b8 < fVar14) {
                    local_4d0 = &local_4b4;
                    local_4b0._0_4_ = (undefined1 ***)&local_4cc;
                    local_4cc = (double)CONCAT44(&local_4b0,extraout_ECX_08);
                    ppuStack_4d4 = (undefined1 **)0x5704ef;
                    FUN_0041d3f0();
                    ppuStack_4d4 = (undefined1 **)&local_4d0;
                    puStack_4d8 = (undefined1 *)0x5704fc;
                    local_4a8._0_4_ = &local_4d0;
                    FUN_00568670();
                    ppuStack_4d4 = (undefined1 **)0x570504;
                    FUN_00442de0();
                    local_4cc = (double)CONCAT44(0x57050c,(undefined1 *)local_4cc);
                    FUN_0056eda0();
                    local_4cc = 3.0517585287270776e-05;
                    local_4d0 = (undefined1 **)s_orderSound_0067b0ec;
                    ppuStack_4d4 = (undefined1 **)0x570520;
                    FUN_005eea00();
                    local_4d0 = (undefined1 **)0x57052a;
                    FUN_005fd160();
                    local_4cc = (double)CONCAT44(0x57052f,(undefined1 *)local_4cc);
                    FUN_005686a0();
                    DAT_006f2354 = 0;
                    local_4cc = (double)CONCAT44(**(undefined4 **)(local_4b4 + 8),0x57054f);
                    uVar12 = FUN_005e4980();
                    local_4d0 = (undefined1 **)&local_4cc;
                    local_4a8 = (double)CONCAT44(local_4a8._4_4_,&local_4cc);
                    local_4cc = (double)CONCAT44(local_4b4,local_4b4);
                    ppuStack_4d4 = (undefined1 **)0x57056b;
                    FUN_00568670();
                    local_4d0 = (undefined1 **)0x570573;
                    FUN_0041f6d0();
                    if (uVar12 == 0) {
                      local_4cc = 3.35741123873869e-317;
                      local_4d0 = (undefined1 **)0x570585;
                      FUN_005d2520();
                    }
                    if (*(int **)(uVar12 + 0x1c) != (int *)0x0) {
                      local_4cc = 2.81768701030267e-317;
                      (**(code **)(**(int **)(uVar12 + 0x1c) + 0x1c))();
                      local_4cc = (double)(ulonglong)uVar12;
                      local_4d0 = (undefined1 **)0x0;
                      ppuStack_4d4 = (undefined1 **)0x5705ac;
                      FUN_005e4ad0();
                      local_4cc = (double)CONCAT44(*(undefined4 *)(uVar12 + 4),0x5705c0);
                      FUN_005e4820();
                    }
                    DAT_006f1e68 = DAT_0068becc;
                    goto LAB_005705fe;
                  }
                }
              }
              if ((DAT_006f2390 != 0) && (*(int *)(DAT_006f2390 + 0x3c) == 0)) {
                local_4cc = 1.20956577808098e-312;
                uVar4 = FUN_005d2500();
                local_4cc = (double)CONCAT44(uVar4,8);
                local_4d0 = (undefined1 **)0x5705f0;
                FUN_0056a6f0();
              }
              *(uint *)(DAT_006f2394 + 0x20) = *param_1;
              DAT_006f1e68 = local_4b4;
LAB_005705fe:
              local_4b0 = (double)CONCAT44(local_4b0._4_4_,local_40c);
              local_c = 3;
              local_4cc = (double)CONCAT44(0x570626,(undefined1 *)local_4cc);
              FUN_0044a450();
              local_c._0_1_ = 2;
              local_4cc = (double)CONCAT44(0x57063a,(undefined1 *)local_4cc);
              FUN_0044a450();
              local_c = CONCAT31(local_c._1_3_,1);
              local_4cc = (double)CONCAT44(0x57064e,(undefined1 *)local_4cc);
              FUN_0044a450();
              local_c = 0xffffffff;
              local_4cc = (double)CONCAT44(0x570665,(undefined1 *)local_4cc);
              FUN_004497b0();
              ExceptionList = local_14;
              return 1;
            }
          }
        }
        local_4b0 = (double)CONCAT44(local_4b0._4_4_,(int)&local_4cc + 4);
        local_4cc = (double)CONCAT44(local_4b4,&local_480);
        local_4d0 = (undefined1 **)0x570373;
        piVar6 = (int *)FUN_00436520();
        local_4b4 = (undefined1 *)*piVar6;
        if (local_4b4 == DAT_0068becc) {
          ExceptionList = local_14;
          return 1;
        }
      } while( true );
    }
    break;
  case 0x16:
    if (DAT_006f23f8 != 0) {
      *(uint *)(DAT_006f23f8 + 0xa4) = *(uint *)(DAT_006f23f8 + 0xa4) & 0xffffffed;
    }
    if (DAT_006f230c != 0) {
      if (*(int *)(DAT_006f230c + 500) != 0) {
        *(uint *)(DAT_006f230c + 0x23c) = *(uint *)(DAT_006f230c + 0x23c) | 0x80;
      }
      if (DAT_006f230c != 0) {
        *(uint *)(DAT_006f230c + 0x23c) = *(uint *)(DAT_006f230c + 0x23c) | 0x40;
      }
    }
    DAT_006f2320 = 1;
    return 1;
  case 0x17:
    if ((DAT_006f230c != 0) && (pfVar7 = (float *)param_1[3], pfVar7 != (float *)0x0)) {
      local_4cc = (double)CONCAT44(local_234,0x570aa3);
      ExceptionList = &local_14;
      iVar13 = FUN_0057d570();
      local_48c = *(float *)(iVar13 + 0x24);
      local_488 = *(float *)(iVar13 + 0x28);
      local_484 = *(float *)(iVar13 + 0x2c);
      fVar1 = (local_48c * *pfVar7 + local_488 * pfVar7[1] + local_484 * pfVar7[2] + pfVar7[3]) *
              _DAT_0064ef10;
      fVar2 = _DAT_0064b254;
      if ((_DAT_0064b254 <= fVar1) && (fVar2 = fVar1, _DAT_0064b240 < fVar1)) {
        fVar2 = _DAT_0064b240;
      }
      local_4cc = (double)CONCAT44(_DAT_0064b240 - fVar2,param_1[1] - 1);
      local_4d0 = (undefined1 **)0x570b1f;
      FUN_005a8540();
      ExceptionList = local_14;
      return 1;
    }
    break;
  case 0x19:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    DAT_006f1e68 = DAT_0068becc;
    local_4cc = (double)CONCAT44(0x56ffb5,(undefined1 *)local_4cc);
    ExceptionList = &local_14;
    iVar13 = (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 4))();
    if ((iVar13 == 1) && (*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5578) == 0)) {
      local_4b8 = DAT_0068becc;
      local_4b0 = 1000.0;
      local_4cc = (double)CONCAT44(&local_4b4,0x56fffa);
      FUN_004364f0();
      if (local_4b4 != DAT_0068becc) {
        do {
          local_4a8 = (double)CONCAT44(local_4a8._4_4_,(int)&local_4cc + 4);
          local_4cc = (double)CONCAT44(local_4b4,0x57001d);
          uVar12 = FUN_0043f7e0();
          if ((uVar12 & 0x20) != 0) {
            local_4cc = (double)CONCAT44(**(undefined4 **)(local_4b4 + 8),0x570048);
            iVar13 = FUN_005e4980();
            if (*(int *)(iVar13 + 0x1c) != 0) {
              local_4cc = (double)CONCAT44(auStack_204,0x570063);
              iVar13 = FUN_0057d570();
              local_4a0 = *(double *)(iVar13 + 0x24);
              local_498 = *(float *)(iVar13 + 0x2c);
              local_4cc = (double)CONCAT44(auStack_1a4,0x570096);
              iVar13 = FUN_0057d570();
              local_48c = (float)local_4a0 - *(float *)(iVar13 + 0x24);
              local_488 = local_4a0._4_4_ - *(float *)(iVar13 + 0x28);
              local_484 = local_498 - *(float *)(iVar13 + 0x2c);
              local_4cc = (double)CONCAT44(&fStack_47c,0x5700dc);
              fStack_47c = local_48c;
              fStack_478 = local_488;
              fStack_474 = local_484;
              fVar14 = (float10)FUN_005aabc0();
              if ((fVar14 < (float10)_DAT_0064c0b0) && (fVar14 < (float10)local_4b0)) {
                local_4b0 = (double)fVar14;
                local_4b8 = local_4b4;
              }
            }
          }
          local_4a8 = (double)CONCAT44(local_4a8._4_4_,(int)&local_4cc + 4);
          local_4cc = (double)CONCAT44(local_4b4,auStack_460);
          local_4d0 = (undefined1 **)0x57011e;
          piVar6 = (int *)FUN_00436520();
          local_4b4 = (undefined1 *)*piVar6;
        } while (local_4b4 != DAT_0068becc);
      }
      if (local_4b8 != DAT_0068becc) {
        local_4cc = (double)CONCAT44(local_4b8,0x57014f);
        local_4a8._0_4_ = (undefined1 ***)((int)&local_4cc + 4);
        uVar12 = FUN_0043f7e0();
        if ((uVar12 & 0x40) != 0) {
          *(uint *)(DAT_006f2394 + 0x20) = *param_1;
          DAT_006f1e68 = local_4b8;
        }
        if (DAT_006f2360 != 0) {
          DAT_006f2360 = 0;
          local_4cc = (double)(ulonglong)*(uint *)(DAT_006d0fd8 + 0x268);
          local_4d0 = (undefined1 **)0x570198;
          iVar13 = FUN_0055ebf0();
          if (iVar13 == 0) {
            uVar4 = extraout_ECX_04;
            if ((uVar12 & 0x40) != 0) {
              local_4d0 = &local_4b8;
              local_4a8._0_4_ = (undefined1 ***)&local_4cc;
              local_4cc = (double)CONCAT44(&local_4a8,extraout_ECX_04);
              ppuStack_4d4 = (undefined1 **)0x5701bd;
              FUN_0041d3f0();
              ppuStack_4d4 = (undefined1 **)&local_4d0;
              local_4b0 = (double)CONCAT44(local_4b0._4_4_,&local_4d0);
              puStack_4d8 = (undefined1 *)0x5701ca;
              FUN_00568670();
              ppuStack_4d4 = (undefined1 **)0x5701d2;
              FUN_00442de0();
              local_4cc = (double)CONCAT44(0x5701da,(undefined1 *)local_4cc);
              FUN_0056eda0();
              local_4cc = (double)CONCAT44(0x5701df,(undefined1 *)local_4cc);
              FUN_005686a0();
              uVar4 = extraout_ECX_05;
            }
            local_4d0 = (undefined1 **)&local_4cc;
            local_4cc = (double)CONCAT44(local_4b8,uVar4);
            local_4b0 = (double)CONCAT44((int)((ulonglong)local_4b0 >> 0x20),&local_4cc);
            ppuStack_4d4 = (undefined1 **)0x5701f9;
            FUN_00568670();
            local_4d0 = (undefined1 **)0x570201;
            FUN_0041f6d0();
            DAT_006f1e68 = DAT_0068becc;
            ExceptionList = local_14;
            return 1;
          }
        }
      }
    }
    break;
  case 0x1a:
    if (1 < (int)DAT_006cdbcc[0x145]) {
      return 0;
    }
    if (param_1[1] == 0) {
      if (DAT_0068c0c8 != '\0') {
        local_4cc = (double)CONCAT44(0x570b72,(undefined1 *)local_4cc);
        ExceptionList = &local_14;
        FUN_0053dbc0();
        ExceptionList = local_14;
        return 1;
      }
    }
    else {
      local_480 = (undefined1 *)((int)&local_4cc + 4);
      local_4cc._0_4_ = (undefined1 *)((int)&local_4cc + 4);
      local_4d0 = (undefined1 **)0x570b99;
      ExceptionList = &local_14;
      local_4cc._4_4_ = (undefined1 **)uVar12;
      FUN_00568670();
      local_4cc = (double)CONCAT44(local_4cc._4_4_,0x570ba1);
      uVar12 = FUN_0043f700();
      if ((uVar12 & 0x4000) != 0) {
        local_4cc = (double)CONCAT44(0x570bb2,(undefined1 *)local_4cc);
        FUN_00427510();
        ExceptionList = local_14;
        return 1;
      }
    }
    break;
  case 0x1c:
    _DAT_006f2428 = 0x9999999a;
    _DAT_006f242c = 0x3fd99999;
    return 1;
  case 0x1d:
    if ((int)param_1[1] % 10 == 0) {
      uVar12 = *(uint *)(DAT_00695298 + 0x24);
    }
    else {
      uVar12 = *(uint *)(DAT_00695298 + 0x24) ^ 1;
    }
    iVar13 = (int)param_1[1] / 10;
    if ((iVar13 == 1) || (iVar13 == 3)) {
      uVar12 = uVar12 ^ 1;
    }
    else if (iVar13 == 4) {
      if (DAT_006f2430 != 0) {
        DAT_006f2430 = 1;
        return 1;
      }
      local_4cc = (double)CONCAT44(local_174,0x570c71);
      ExceptionList = &local_14;
      iVar13 = FUN_0057d570();
      local_4d0 = *(undefined1 ***)(iVar13 + 0x24);
      local_4cc = *(double *)(iVar13 + 0x28);
      ppuStack_4d4 = (undefined1 **)0x570c8e;
      iVar13 = FUN_004cfd30();
      if (iVar13 != 0) {
        local_4cc = (double)CONCAT44(local_464,0x570c9f);
        piVar6 = (int *)FUN_00568670();
        *(double *)(*piVar6 + 0xf8) = *(double *)(*piVar6 + 0xf8) + _DAT_0064ef08;
        DAT_006f2430 = 1;
        ExceptionList = local_14;
        return 1;
      }
      DAT_006f2430 = 1;
      ExceptionList = local_14;
      return 1;
    }
    if (uVar12 == 0) {
      DAT_006f2430 = 0;
      return 1;
    }
    DAT_006f2430 = 1;
    return 1;
  case 0x1e:
    if (*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) != 0) {
      if (param_1[1] == 0xffffffff) {
        local_4cc = (double)CONCAT44(local_2c4,0x570d53);
        ExceptionList = &local_14;
        pfVar7 = (float *)FUN_0057d570();
        uVar12 = param_1[3];
        if ((float)_DAT_0064a668 <
            *(float *)(uVar12 + 4) *
            (DAT_00701580 * *pfVar7 + DAT_00701584 * pfVar7[3] + DAT_00701588 * pfVar7[6]) +
            (DAT_00701580 * pfVar7[1] + DAT_00701584 * pfVar7[4] + DAT_00701588 * pfVar7[7]) *
            *(float *)(uVar12 + 8) +
            (DAT_00701580 * pfVar7[2] + DAT_00701584 * pfVar7[5] + DAT_00701588 * pfVar7[8]) *
            *(float *)(uVar12 + 0xc)) {
          *(undefined4 *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x51d8) = 0x3f000000;
          ExceptionList = local_14;
          return 1;
        }
      }
      else {
        pfVar7 = (float *)param_1[3];
        local_4a8 = (double)*(float *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x332c);
        local_4cc = (double)CONCAT44(local_264,0x570e3c);
        ExceptionList = &local_14;
        pfVar8 = (float *)FUN_0057d570();
        iVar13 = 0x13;
        local_48c = DAT_00701580 * *pfVar8 + DAT_00701584 * pfVar8[3] + DAT_00701588 * pfVar8[6];
        local_488 = DAT_00701580 * pfVar8[1] + DAT_00701584 * pfVar8[4] + DAT_00701588 * pfVar8[7];
        puVar9 = local_144;
        local_484 = DAT_00701580 * pfVar8[2] + DAT_00701584 * pfVar8[5] + DAT_00701588 * pfVar8[8];
        do {
          puVar9[2] = 0;
          *puVar9 = 0;
          puVar9[3] = 0x3ff00000;
          puVar9 = puVar9 + 4;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        local_4b0._0_4_ = (undefined1 ***)&local_4cc;
        local_4d0 = (undefined1 **)&local_4cc;
        local_4cc = (double)(ZEXT48(local_144) << 0x20);
        ppuStack_4d4 = (undefined1 **)0x570eda;
        FUN_00568670();
        local_4d0 = (undefined1 **)0x570ee2;
        FUN_004769d0();
        if ((local_44 == 0) &&
           ((float)_DAT_0064a668 <
            local_488 * pfVar7[2] + pfVar7[3] * local_484 + local_48c * pfVar7[1])) {
          *(undefined4 *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x51d8) = 0x3f000000;
          local_4cc = (double)CONCAT44(param_1[1],0x570f4b);
          iVar13 = FUN_005e4980();
          local_4a0 = local_4a8 * _DAT_0064c0d0;
          if ((*pfVar7 < (float)local_4a0) &&
             ((((iVar13 != 0 && (iVar13 = *(int *)(iVar13 + 0x1c), iVar13 != 0)) &&
               ((*(byte *)(iVar13 + 0x128) & 1) == 0)) && (*(int *)(iVar13 + 0x198) == 0)))) {
            *(undefined4 *)(iVar13 + 0x198) = 1;
            iVar11 = DAT_00695c00;
            *(undefined4 *)(iVar13 + 0x170) = *(undefined4 *)(DAT_00695c00 + 0xb98);
            local_4cc = (double)(ulonglong)*(uint *)(iVar13 + 0x158);
            *(undefined4 *)(iVar13 + 0x174) = *(undefined4 *)(iVar11 + 0xb9c);
            local_4d0 = (undefined1 **)0x570fd0;
            FUN_005688d0();
            local_4d0 = *(undefined1 ***)(iVar13 + 0x198);
            ppuStack_4d4 = *(undefined1 ***)(iVar13 + 0x158);
            puStack_4d8 = (undefined1 *)0x570fe3;
            FUN_005688d0();
            local_4cc = (double)CONCAT44(0x570fed,(undefined1 *)local_4cc);
            _DAT_006f23e8 = __ftol();
            _DAT_006f23e8 = _DAT_006f23e8 + -5;
            local_4cc = (double)CONCAT44(0x570ffe,(undefined1 *)local_4cc);
            _DAT_006f23ec = __ftol();
            local_4b8 = (undefined1 *)0x1;
            if ((float)local_4a8 <=
                ((*pfVar7 - _DAT_0064b310) + _DAT_0064ed18) * (float)_DAT_0064c0d8) {
              if (((*pfVar7 - _DAT_0064b310) + _DAT_0064b31c) * (float)_DAT_0064c0d8 <
                  (float)local_4a8) {
                local_4b8 = (undefined1 *)0x2;
              }
            }
            else {
              local_4b8 = (undefined1 *)0x3;
            }
            local_4cc = (double)(int)local_4b8 * _DAT_0064a858;
            ppuStack_4d4 = (undefined1 **)&local_4d0;
            local_4b0 = (double)CONCAT44(local_4b0._4_4_,&local_4d0);
            puStack_4d8 = (undefined1 *)0x57106f;
            FUN_00568670();
            ppuStack_4d4 = (undefined1 **)0x571077;
            FUN_00431250();
            ExceptionList = local_14;
            return 1;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 1;
}


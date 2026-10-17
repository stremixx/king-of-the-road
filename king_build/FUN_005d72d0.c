
int FUN_005d72d0(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                undefined4 *param_6,undefined4 *param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  int iVar3;
  int *piVar4;
  int *piStack_3e0;
  code *pcStack_3dc;
  int **ppiStack_3d8;
  int *local_3c8;
  int *local_3c4;
  int *local_3c0;
  int *local_3bc;
  int *piStack_3b8;
  int *piStack_3b4;
  undefined4 local_3b0;
  int *local_3ac;
  int *local_3a8;
  int *local_3a4;
  int *local_3a0;
  int *local_39c;
  int *local_398;
  int *local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  int *piStack_37c;
  undefined4 local_378;
  undefined4 uStack_370;
  undefined4 local_364;
  int *piStack_35c;
  undefined4 local_350;
  undefined1 auStack_34c [64];
  byte bStack_30c;
  int iStack_308;
  undefined4 auStack_304 [2];
  int *local_2fc;
  undefined4 auStack_2f8 [90];
  byte bStack_190;
  undefined4 auStack_188 [3];
  undefined4 auStack_17c [95];
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((param_4 == (int *)0x0) &&
     (((param_3 == (int *)0x1 || (param_3 == (int *)0x2)) || (param_3 == (int *)0x4)))) {
    return 1;
  }
  if (((uint)param_4 & 0x100) != 0) {
    return 0;
  }
  local_3ac = (int *)0x0;
  local_3c8 = param_1;
  local_3b0 = 0;
  local_3a0 = (int *)0x0;
  local_39c = (int *)0x0;
  local_398 = (int *)0x0;
  local_394 = (int *)0x0;
  local_388 = 0;
  local_38c = 0;
  local_390 = 0;
  local_350 = 0;
  local_364 = 0;
  local_3a8 = (int *)0x0;
  local_378 = 0;
  local_3a4 = (int *)0x0;
  local_3c4 = param_2;
  local_3c0 = param_3;
  local_3bc = param_4;
  local_2fc = (int *)0x80070057;
  if (((uint)param_4 & 0x1000) != 0) {
    iVar3 = 1;
    DAT_0071f88c = DAT_0071f844;
    if ((DAT_0071f870 != (int *)0x0) && (DAT_0071f84c == 2)) {
      ppiStack_3d8 = (int **)0x8;
      pcStack_3dc = (code *)DAT_0071f880;
      piStack_3e0 = DAT_0071f870;
      (**(code **)(*DAT_0071f870 + 0x50))();
    }
    ppiStack_3d8 = &local_3c8;
    pcStack_3dc = FUN_005d6950;
    piStack_3e0 = (int *)0x5d73cd;
    DirectDrawEnumerateA();
    if (local_2fc == (int *)0x0) {
      ppiStack_3d8 = (int **)auStack_17c;
      auStack_2f8[0] = 0x17c;
      auStack_17c[0] = 0x17c;
      pcStack_3dc = (code *)auStack_2f8;
      piStack_3e0 = local_3a0;
      (**(code **)(*local_3a0 + 0x2c))();
      if ((int)local_3a8 < 0x200000) {
        iVar3 = 0;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 5;
        }
      }
      else if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_3a8;
        ppiStack_3d8 = (int **)local_39c;
        pcStack_3dc = (code *)0x5d745f;
        uVar2 = FUN_005d68a0();
        *param_7 = uVar2;
      }
    }
    else {
      pcStack_3dc = (code *)auStack_34c;
      ppiStack_3d8 = (int **)0x0;
      piStack_3e0 = local_2fc;
      pcStack_3dc = (code *)FUN_005d42c0();
      piStack_3e0 = (int *)0x5d73f0;
      FUN_005d2250();
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 3;
      }
      iVar3 = 0;
    }
    if (local_3a0 != (int *)0x0) {
      if (local_39c != (int *)0x0) {
        ppiStack_3d8 = (int **)0x8;
        pcStack_3dc = (code *)DAT_0071f880;
        piStack_3e0 = local_3a0;
        (**(code **)(*local_3a0 + 0x50))();
        if (local_3a0 != (int *)0x0) {
          (**(code **)(*local_3a0 + 8))(local_3a0);
          local_3a0 = (int *)0x0;
        }
        if (piStack_35c != (int *)0x0) {
          (**(code **)(*piStack_35c + 8))(piStack_35c);
          piStack_35c = (int *)0x0;
        }
        if (local_394 != (int *)0x0) {
          (**(code **)(*local_394 + 8))(local_394);
          local_394 = (int *)0x0;
        }
        if (local_398 != (int *)0x0) {
          (**(code **)(*local_398 + 8))(local_398);
          local_398 = (int *)0x0;
        }
        if (local_39c != (int *)0x0) {
          (**(code **)(*local_39c + 8))(local_39c);
          local_39c = (int *)0x0;
        }
        if (local_3a4 != (int *)0x0) {
          (**(code **)(*local_3a4 + 8))(local_3a4);
          local_3a4 = (int *)0x0;
        }
        if (local_3a8 != (int *)0x0) {
          (**(code **)(*local_3a8 + 8))(local_3a8);
          local_3a8 = (int *)0x0;
        }
        if (local_3ac != (int *)0x0) {
          (**(code **)(*local_3ac + 8))(local_3ac);
          local_3ac = (int *)0x0;
        }
        uStack_370 = 0;
        piStack_3b8 = (int *)0x0;
        local_3bc = (int *)0x0;
        piStack_3b4 = (int *)0x0;
        local_3b0 = 0;
        uStack_384 = 0;
        if ((DAT_0071f84c == 2) && (DAT_0071f870 != (int *)0x0)) {
          (**(code **)(*DAT_0071f870 + 0x50))(DAT_0071f870,DAT_0071f880,0x5b);
          (**(code **)(*DAT_0071f86c + 0x54))
                    (DAT_0071f86c,DAT_0071f7fc,DAT_0071f800,DAT_0071f7f0 << 3,0,0);
        }
        return iVar3;
      }
      ppiStack_3d8 = (int **)0x0;
      pcStack_3dc = (code *)s_DirectDraw4_7_not_found_00681914;
      piStack_3e0 = (int *)0x5d749e;
      FUN_005d2250();
      return 0;
    }
    ppiStack_3d8 = (int **)0x0;
    pcStack_3dc = (code *)s_DirectDraw_not_found_0068192c;
    piStack_3e0 = (int *)0x5d747e;
    FUN_005d2250();
    return 0;
  }
  if (((uint)param_4 & 0x600) == 0) {
    return 0;
  }
  piVar4 = DAT_0071f86c;
  if (DAT_0071f86c == (int *)0x0) {
    ppiStack_3d8 = &local_3c8;
    pcStack_3dc = FUN_005d6950;
    DAT_0071f88c = DAT_0071f844;
    piStack_3e0 = (int *)0x5d75ef;
    DirectDrawEnumerateA();
    if (local_3a0 == (int *)0x0) {
      ppiStack_3d8 = (int **)0x0;
      pcStack_3dc = (code *)s_DirectDraw_not_found_0068192c;
      piStack_3e0 = (int *)0x5d7602;
      FUN_005d2250();
      return 0;
    }
    ppiStack_3d8 = (int **)0x8;
    pcStack_3dc = (code *)DAT_0071f880;
    piStack_3e0 = local_3a0;
    (**(code **)(*local_3a0 + 0x50))();
    if (iStack_308 != 0) goto LAB_005d778d;
  }
  else {
    ppiStack_3d8 = (int **)DAT_0071f86c;
    pcStack_3dc = (code *)0x5d76ae;
    (**(code **)(*DAT_0071f86c + 4))();
    local_3a8 = piVar4;
  }
  piVar4 = local_3a8;
  if (local_3a8 != (int *)0x0) {
    auStack_304[0] = 0x17c;
    auStack_188[0] = 0x17c;
    (**(code **)(*local_3a8 + 0x2c))(local_3a8,auStack_304,auStack_188);
    if (((bStack_30c & 0x40) == 0) && ((bStack_190 & 0x40) == 0)) {
      (**(code **)(*piVar4 + 8))(piVar4);
      FUN_005d2250(s_noblt_0068190c,0);
      if (param_5 == (undefined4 *)0x0) {
        return 0;
      }
      *param_5 = 2;
      return 0;
    }
    iVar3 = (**(code **)(*piVar4 + 0x20))(piVar4,0,0,&piStack_3e0,&LAB_005d4240);
    if (iVar3 != 0) {
      FUN_005d2250(s_Enum_Fail_00681900,0);
    }
    pcVar1 = pcStack_3dc;
    if ((param_5 != (undefined4 *)0x0) && (pcStack_3dc == (code *)0x0)) {
      *param_5 = 3;
    }
    if (local_3c0 != (int *)0x0) {
      (**(code **)(*local_3c0 + 8))(local_3c0);
      local_3c0 = (int *)0x0;
    }
    if (piStack_37c != (int *)0x0) {
      (**(code **)(*piStack_37c + 8))(piStack_37c);
      piStack_37c = (int *)0x0;
    }
    if (piStack_3b4 != (int *)0x0) {
      (**(code **)(*piStack_3b4 + 8))(piStack_3b4);
      piStack_3b4 = (int *)0x0;
    }
    if (piStack_3b8 != (int *)0x0) {
      (**(code **)(*piStack_3b8 + 8))(piStack_3b8);
      piStack_3b8 = (int *)0x0;
    }
    if (local_3bc != (int *)0x0) {
      (**(code **)(*local_3bc + 8))(local_3bc);
      local_3bc = (int *)0x0;
    }
    if (local_3c4 != (int *)0x0) {
      (**(code **)(*local_3c4 + 8))(local_3c4);
      local_3c4 = (int *)0x0;
    }
    if (local_3c8 != (int *)0x0) {
      (**(code **)(*local_3c8 + 8))(local_3c8);
      local_3c8 = (int *)0x0;
    }
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    return (int)pcVar1;
  }
LAB_005d778d:
  if (local_3a0 != (int *)0x0) {
    (**(code **)(*local_3a0 + 8))(local_3a0);
    local_3a0 = (int *)0x0;
  }
  if (piStack_35c != (int *)0x0) {
    (**(code **)(*piStack_35c + 8))(piStack_35c);
    piStack_35c = (int *)0x0;
  }
  if (local_394 != (int *)0x0) {
    (**(code **)(*local_394 + 8))(local_394);
    local_394 = (int *)0x0;
  }
  if (local_398 != (int *)0x0) {
    (**(code **)(*local_398 + 8))(local_398);
    local_398 = (int *)0x0;
  }
  if (local_39c != (int *)0x0) {
    (**(code **)(*local_39c + 8))(local_39c);
    local_39c = (int *)0x0;
  }
  if (local_3a4 != (int *)0x0) {
    (**(code **)(*local_3a4 + 8))(local_3a4);
    local_3a4 = (int *)0x0;
  }
  if (local_3a8 != (int *)0x0) {
    (**(code **)(*local_3a8 + 8))(local_3a8);
    local_3a8 = (int *)0x0;
  }
  if (local_3ac != (int *)0x0) {
    (**(code **)(*local_3ac + 8))(local_3ac);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 1;
  }
  return 0;
}



void FUN_005103f0(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00645886;
  local_c = ExceptionList;
  local_10 = 1;
  ExceptionList = &local_c;
  FUN_00603230(s_EFFECTS_00671998,s_slarge_00675730,1,&local_10,DAT_006957c8);
  if ((((byte)*(undefined4 *)(DAT_006cdbd0 + 0x198) & 0xf0) == 0x40) && (local_10 != 0)) {
    if (param_2 != 0) {
      if (param_1 == (char *)0x0) {
        DAT_006cdcc8 = (char *)0x0;
        FUN_00518e90(0);
        ExceptionList = local_c;
        return;
      }
      uVar5 = 0xffffffff;
      DAT_006cdcc8 = (char *)&DAT_006cdabc;
      do {
        pcVar8 = param_1;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar8 + -uVar5;
      pcVar7 = (char *)&DAT_006cdabc;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_00518e90(0);
      ExceptionList = local_c;
      return;
    }
  }
  else {
    DAT_006cdcc8 = param_1;
  }
  if (DAT_006cdcc8 == (char *)0x0) {
    DAT_006f1c78._0_1_ = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar8 = DAT_006cdcc8;
    do {
      pcVar7 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar7 + -uVar5;
    pcVar7 = (char *)&DAT_006f1c78;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  FUN_005126d0(DAT_00695c00,1);
  if (DAT_006cdbc8 == 0) {
    FUN_005d2520(s_Accelerator_not_activated_00675714,0);
  }
  uVar2 = FUN_005d3160();
  *(undefined4 *)(DAT_006cdbd0 + 0x1a0) = uVar2;
  *(undefined4 *)(DAT_00695c00 + 0x218) = 0;
  FUN_005b62a0();
  FUN_005b64b0(0xff000000,1);
  FUN_005d7f70();
  FUN_005b64b0(0xff000000,1);
  FUN_005d7f70();
  FUN_00510240(s_COMMON__00675708,&DAT_00675710);
  if ((int *)DAT_006cdbe0[0x5d] != (int *)0x0) {
    (**(code **)(*(int *)DAT_006cdbe0[0x5d] + 0x20))();
  }
  DAT_006cdbe0[0x5d] = 0;
  (**(code **)(*DAT_006cdbe0 + 0x20))();
  FUN_0050fde0();
  iVar3 = FUN_005686e0();
  if (iVar3 == 2) {
    DAT_006f1e30 = FUN_005eea00(s_m_15_tip1_left_msk_006756f4);
    DAT_006f1e34 = FUN_005eea00(s_m_15_tip1_midd_msk_006756e0);
    pcVar8 = s_m_15_tip1_right_msk_006756cc;
  }
  else {
    DAT_006f1e30 = FUN_005eea00(s_m_16_tip1_left_msk_006756b8);
    DAT_006f1e34 = FUN_005eea00(s_m_16_tip1_midd_msk_006756a4);
    pcVar8 = s_m_16_tip1_right_msk_00675690;
  }
  DAT_006f1e38 = FUN_005eea00(pcVar8);
  if (DAT_006cdbc4 != (undefined4 *)0x0) {
    FUN_00631d5c(DAT_006cdbc4);
  }
  puVar4 = (undefined4 *)FUN_00631d33(0xc);
  uStack_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_005686e0();
    pcVar8 = s_m_15_cursor_a_msk_0067567c;
    if (iVar3 != 2) {
      pcVar8 = s_m_16_cursor_a_msk_00675668;
    }
    uVar2 = FUN_005eea00(pcVar8);
    *puVar4 = uVar2;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  uStack_4 = 0xffffffff;
  DAT_006cdbc4 = puVar4;
  if ((((byte)*(undefined4 *)(DAT_006cdbd0 + 0x198) & 0xf0) == 0x40) && (local_10 != 0)) {
    if (DAT_006cdc18 != (int *)0x0) {
      FUN_005db0f0(DAT_006cdc18);
    }
    iVar3 = FUN_00631d33(0x180);
    uStack_4 = 1;
    if (iVar3 == 0) {
      DAT_006cdc18 = (int *)0x0;
    }
    else {
      DAT_006cdc18 = (int *)FUN_005224d0(DAT_006957ac);
    }
    uStack_4 = 0xffffffff;
    FUN_005e3810(DAT_006cdc18);
    (**(code **)(*DAT_006cdc18 + 0x24))();
    ExceptionList = local_c;
    return;
  }
  FUN_00510750(0);
  ExceptionList = local_c;
  return;
}


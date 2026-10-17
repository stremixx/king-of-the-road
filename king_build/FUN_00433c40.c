
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00433c40(undefined4 ****param_1,int param_2,undefined4 ****param_3)

{
  uint *puVar1;
  char cVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  undefined4 auStack_c8 [4];
  undefined4 uStack_b8;
  undefined4 *puStack_b4;
  undefined4 *puStack_b0;
  char ****ppppcStack_ac;
  char ****ppppcStack_a8;
  char ****local_a4;
  int local_94;
  undefined1 *local_90;
  undefined4 uStack_8c;
  undefined4 ****local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  char *local_7c [9];
  undefined *local_58;
  undefined4 ****local_54 [2];
  int local_4c;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d620;
  local_c = ExceptionList;
  local_a4 = (char ****)0x8;
  ppppcStack_a8 = (char ****)s_START__0066b830;
  local_7c[8] = s_orderVehicle_PlayerId_player__Pl_0066d168;
  local_58 = &DAT_0071d768;
  ppppcStack_ac = (char ****)0x433c7f;
  ExceptionList = &local_c;
  FUN_00401870();
  local_a4 = (char ****)s_orderVehicle_PlayerId_player__Pl_0066d168;
  ppppcStack_a8 = (char ****)0x433c8e;
  FUN_004018b0();
  ppppuVar3 = param_3;
  ppppcStack_a8 = (char ****)&local_88;
  local_a4 = (char ****)param_3;
  local_4 = 0;
  ppppcStack_ac = (char ****)0x433ca9;
  FUN_00414660();
  local_a4 = (char ****)0x433cb5;
  FUN_00434040();
  local_2c = 0;
  uStack_28 = 0;
  local_20 = 0xffffffff;
  local_1c = -1;
  ppppcStack_ac = (char ****)local_54;
  puStack_b0 = &param_2;
  ppppcStack_a8 = (char ****)ppppuVar3;
  local_90 = (undefined1 *)&ppppcStack_ac;
  local_4._0_1_ = 1;
  puStack_b4 = (undefined4 *)0x433cf0;
  local_a4 = ppppcStack_ac;
  FUN_0041d3f0();
  local_90 = (undefined1 *)&puStack_b0;
  puStack_b4 = &param_1;
  uStack_b8 = 0x433d04;
  FUN_0041d3f0();
  puStack_b4 = (undefined4 *)0x433d09;
  iVar4 = FUN_00433740();
  if (iVar4 == 0) {
    local_90 = (undefined1 *)&local_a4;
    *(double *)(param_1 + 0x22) = *(double *)(param_1 + 0x22) - (double)CONCAT44(uStack_28,local_2c)
    ;
    local_a4 = (char ****)param_1;
    ppppcStack_a8 = (char ****)0x433d75;
    FUN_00427000();
    if (*(int *)(param_2 + 0x5c) == 6) {
      uStack_80 = DAT_0066b78c;
      local_a4 = (char ****)0xf4240;
      local_84 = DAT_0066b788;
      ppppcStack_a8 = (char ****)0x433da7;
      local_90 = (undefined1 *)FUN_004155e0();
      uStack_8c = 0;
      if ((double)CONCAT44(uStack_80,local_84) * _DAT_0064a6a0 <= (double)local_90) {
        local_4 = (uint)local_4._1_3_ << 8;
        local_a4 = (char ****)0x433dd6;
        FUN_004497b0();
        local_a4 = (char ****)0x8;
        ppppcStack_a8 = (char ****)s_COMPL__0066b7ec;
        ppppcStack_ac = (char ****)0x433de7;
        FUN_00401870();
        local_a4 = (char ****)s_orderVehicle_PlayerId_player__Pl_0066d168;
        ppppcStack_a8 = (char ****)0x433df6;
        FUN_004018b0();
        ExceptionList = local_c;
        return 2;
      }
    }
    local_a4 = *(char *****)(local_18 + 8);
    if (local_a4 != (char ****)DAT_0068a8f0) {
      local_90 = (undefined1 *)&local_a4;
      ppppcStack_a8 = (char ****)0x433e21;
      FUN_00446670();
    }
    local_a4 = (char ****)local_88;
    ppppcStack_a8 = (char ****)0x0;
    local_7c[0] = (char *)0xffffffff;
    local_7c[7] = (char *)0xffffffff;
    local_7c[1] = (char *)local_20;
    local_7c[2] = (char *)0x0;
    local_7c[3] = (char *)0x0;
    local_7c[4] = (char *)0x0;
    local_7c[5] = (char *)0x0;
    local_7c[6] = (char *)0x0;
    ppcVar7 = local_7c;
    puVar8 = auStack_c8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *ppcVar7;
      ppcVar7 = ppcVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_00421b10(&local_94);
    *(undefined4 *)(local_94 + 100) = 0x100;
    DAT_0068be34 = DAT_0068be34 + 1;
    *(int *)(local_94 + 0x78) = local_1c;
    *(int *)(local_94 + 0x7c) = local_14;
    local_14 = local_14 * 0x24;
    *(int *)(local_14 + 8 + *(int *)(*(int *)(DAT_0068bbf8 + local_1c * 4) + 0x1c)) = local_94;
    iVar4 = *(int *)(DAT_0068bbf8 + local_1c * 4);
    *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1;
    *(undefined4 **)(local_94 + 0x3cc) = &DAT_0068be30;
    *(uint *)(local_94 + 0x60) = *(uint *)(local_94 + 0x60) | 0x40;
    iVar4 = *(int *)(*(int *)(DAT_0068bbf8 + local_1c * 4) + 0x1c);
    *(uint *)(local_14 + 4 + iVar4) = *(uint *)(local_14 + 4 + iVar4) | 1;
    *(int *)(*(int *)(local_94 + 0x3cc) + 0xc) = *(int *)(*(int *)(local_94 + 0x3cc) + 0xc) + 1;
    if (*(int *)(param_2 + 0x5c) == 6) {
      puVar1 = (uint *)(*(int *)(local_94 + 0x204) + 0x28);
      *puVar1 = *puVar1 | 2;
    }
    if (local_10 != '\0') {
      puVar1 = (uint *)(*(int *)(local_94 + 0x204) + 0x28);
      *puVar1 = *puVar1 | 1;
    }
    uVar5 = local_4c - (int)local_54[0];
    local_4 = (uint)local_4._1_3_ << 8;
    if (uVar5 != 0) {
      if (uVar5 < 0x81) {
        local_a4 = (char ****)0x433f86;
        FUN_00401aa0();
        *local_54[0] = *(undefined4 ****)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
        *(undefined4 *****)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = local_54[0];
        local_a4 = (char ****)0x433f96;
        FUN_00434030();
      }
      else {
        local_a4 = (char ****)local_54[0];
        ppppcStack_a8 = (char ****)0x433f6a;
        FUN_0061c888();
      }
    }
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar6 = s_orderVehicle_PlayerId_player__Pl_0066d168;
    cVar2 = s_orderVehicle_PlayerId_player__Pl_0066d168[0];
    if (DAT_0071d774 != 0) {
      for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
        cVar2 = *pcVar6;
      }
    }
    iVar4 = 0;
  }
  else {
    local_4 = (uint)local_4._1_3_ << 8;
    local_a4 = (char ****)0x433d22;
    FUN_004497b0();
    local_a4 = (char ****)0x8;
    ppppcStack_a8 = (char ****)s_COMPL__0066b7ec;
    ppppcStack_ac = (char ****)0x433d33;
    FUN_00401870();
    local_a4 = (char ****)s_orderVehicle_PlayerId_player__Pl_0066d168;
    ppppcStack_a8 = (char ****)0x433d42;
    FUN_004018b0();
  }
  ExceptionList = local_c;
  return iVar4;
}


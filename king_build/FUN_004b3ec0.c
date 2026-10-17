
int * FUN_004b3ec0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_164;
  undefined4 uStack_160;
  uint uStack_15c;
  int local_158;
  int iStack_154;
  uint local_150;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  char *local_148;
  int *apiStack_144 [2];
  uint uStack_13c;
  int *apiStack_138 [2];
  uint uStack_130;
  undefined1 local_12c [16];
  undefined1 local_11c [12];
  undefined1 local_110 [12];
  undefined1 local_104 [12];
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined1 local_e0 [12];
  undefined1 local_d4 [12];
  undefined1 local_c8 [12];
  undefined1 local_bc [12];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643f4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
LAB_004b3ef6:
  FUN_004b2bf0(1);
  FUN_004b2d30(param_2,param_3);
  puVar4 = (undefined4 *)FUN_004b27c0(local_8c,0);
  switch(*(undefined4 *)*puVar4) {
  default:
    goto switchD_004b3f2f_caseD_0;
  case 0x22:
    piVar6 = (int *)FUN_004b3360(local_ec,param_2,param_3);
    if ((piVar6[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      if (*piVar6 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = *piVar6;
        param_1[2] = piVar6[2];
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
      }
    }
    else {
      param_1[2] = piVar6[2];
      *param_1 = *piVar6;
      param_1[1] = piVar6[1];
    }
    break;
  case 0x23:
    FUN_004b2bf0(2);
    puVar4 = (undefined4 *)FUN_004b27c0(local_6c,1);
    switch(*(undefined4 *)*puVar4) {
    case 0x28:
      uVar7 = FUN_004b3960(local_a4,param_2,param_3);
      FUN_00455dc0(uVar7);
      break;
    default:
      FUN_00478a20(&local_14a);
      local_4 = 0xb;
      FUN_004b2a90(&local_164);
      FUN_004a5670(0x14,0x300,s_Unexpected_symbol_006704b0,local_164);
      local_4 = local_4 & 0xffffff00;
      FUN_004497b0();
      goto switchD_004b3f2f_caseD_0;
    case 0x5c:
      uVar7 = FUN_004b3ba0(local_f8,param_2,param_3);
      FUN_00455dc0(uVar7);
      break;
    case 0x62:
    case 100:
    case 0x65:
    case 0x69:
    case 0x6f:
    case 0x78:
      uVar7 = FUN_004b3700(local_e0,param_2,param_3);
      FUN_00455dc0(uVar7);
      break;
    case 0x66:
      FUN_004b36a0();
      FUN_004b36a0();
      FUN_00492320(param_1,0,0);
      ExceptionList = local_c;
      return param_1;
    case 0x74:
      FUN_004b36a0();
      FUN_004b36a0();
      FUN_00492320(param_1,0,0xffffffff);
      ExceptionList = local_c;
      return param_1;
    case 0x7c:
      while( true ) {
        FUN_004b2bf0(2);
        puVar4 = (undefined4 *)FUN_004b27c0(local_2c,0);
        if ((*(int *)*puVar4 == 0x7c) &&
           (puVar4 = (undefined4 *)FUN_004b27c0(local_4c,1), *(int *)*puVar4 == 0x23)) break;
        puVar4 = (undefined4 *)FUN_004b27c0(local_7c,0);
        if (*(int *)*puVar4 == -1) {
          FUN_00478a20(&local_14b);
          local_4 = 10;
          FUN_004b2a90(&local_164);
          FUN_004a5670(0x14,0x300,s_Unclosed_comment_00670490,local_164);
          FUN_004042a0();
          local_4 = local_4 & 0xffffff00;
          FUN_004497b0();
          ExceptionList = local_c;
          return param_1;
        }
        FUN_004b36a0();
      }
switchD_004b3f2f_caseD_0:
      puVar4 = (undefined4 *)FUN_004b27c0(local_5c,0);
      iVar5 = FUN_0061dc94(*(undefined4 *)*puVar4);
      if (iVar5 == 0) {
        puVar4 = (undefined4 *)FUN_004b27c0(local_3c,0);
        iVar5 = FUN_0061dce4(*(undefined4 *)*puVar4);
        if (iVar5 == 0) {
          puVar4 = (undefined4 *)FUN_004b27c0(local_12c,0);
          iVar5 = FUN_004b2a30(*(undefined4 *)*puVar4);
          if (iVar5 == 0) {
            FUN_00478a20(&local_149);
            local_4 = 0xc;
            FUN_004b2a90(&local_158);
            FUN_004a5670(0x14,0x300,s_Unexpected_symbol_006704b0,local_158);
            local_4 = local_4 & 0xffffff00;
            FUN_004497b0();
            goto LAB_004b3ef6;
          }
        }
        uVar7 = FUN_004b3730(local_110,param_2,param_3);
        FUN_00455dc0(uVar7);
      }
      else {
        uVar7 = FUN_004b3700(local_c8,param_2,param_3);
        FUN_00455dc0(uVar7);
      }
    }
    break;
  case 0x27:
  case 0x60:
    FUN_004a2a10(&local_158,0,*(undefined4 *)(param_3 + 0x48));
    local_4 = 1;
    puVar4 = (undefined4 *)FUN_004b27c0(local_12c,0);
    local_148 = "quote";
    if (*(int *)*puVar4 != 0x27) {
      local_148 = s_quasiquote_006704a4;
    }
    piVar6 = (int *)FUN_004b51d0(local_104,0,&local_148);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_158 == 0) {
      FUN_004a5470(0,1);
    }
    if ((local_150 & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    iVar2 = local_158;
    iVar5 = *(int *)(local_158 + 0x14);
    piVar1 = (int *)(local_158 + 0x14);
    if ((((iVar5 != 0) && ((*(uint *)(local_158 + 0x1c) & 0x10000) == 0)) &&
        (*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar1 + 4) == 0)) &&
       ((cVar3 = FUN_00408fd0(piVar1,piVar6), cVar3 == '\0' && ((int *)*piVar1 != (int *)0x0)))) {
      (**(code **)(*(int *)*piVar1 + 0xc))(1);
    }
    if ((piVar6[2] & 0x10000U) == 0) {
      *(undefined4 *)(iVar2 + 0x18) = 0;
      if (*piVar6 == 0) {
        *piVar1 = 0;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
      }
      else {
        *piVar1 = *piVar6;
        *(int *)(iVar2 + 0x1c) = piVar6[2];
        *(int *)(*piVar1 + 4) = *(int *)(*piVar1 + 4) + 1;
      }
    }
    else {
      *(int *)(iVar2 + 0x1c) = piVar6[2];
      *piVar1 = *piVar6;
      *(int *)(iVar2 + 0x18) = piVar6[1];
    }
    local_4._0_1_ = 1;
    FUN_00492340();
    FUN_004b2bf0(1);
    FUN_004b2770();
    *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
    FUN_004a2a10(&local_164,0,*(undefined4 *)(param_3 + 0x48));
    local_4 = CONCAT31(local_4._1_3_,3);
    if (local_158 == 0) {
      FUN_004a5470(0,1);
    }
    if ((local_150 & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    iVar2 = local_158;
    piVar6 = (int *)(local_158 + 0x20);
    iVar5 = *(int *)(local_158 + 0x20);
    if (((iVar5 != 0) && ((*(uint *)(local_158 + 0x28) & 0x10000) == 0)) &&
       ((*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar6 + 4) == 0 &&
        ((cVar3 = FUN_00408fd0(piVar6,&local_164), cVar3 == '\0' && ((int *)*piVar6 != (int *)0x0)))
        ))) {
      (**(code **)(*(int *)*piVar6 + 0xc))(1);
    }
    if ((uStack_15c & 0x10000) == 0) {
      *(undefined4 *)(iVar2 + 0x24) = 0;
      if (local_164 == 0) {
        *piVar6 = 0;
        *(undefined4 *)(iVar2 + 0x28) = 0;
      }
      else {
        *piVar6 = local_164;
        *(uint *)(iVar2 + 0x28) = uStack_15c;
        *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + 1;
      }
    }
    else {
      *(uint *)(iVar2 + 0x28) = uStack_15c;
      *piVar6 = local_164;
      *(undefined4 *)(iVar2 + 0x24) = uStack_160;
    }
    piVar6 = (int *)FUN_004b3ec0(apiStack_138,param_2,param_3);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (local_164 == 0) {
      FUN_004a5470(0,1);
    }
    if ((uStack_15c & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    piVar1 = (int *)(local_164 + 0x14);
    iVar5 = *(int *)(local_164 + 0x14);
    if ((((iVar5 != 0) && ((*(uint *)(local_164 + 0x1c) & 0x10000) == 0)) &&
        (*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar1 + 4) == 0)) &&
       ((cVar3 = FUN_00408fd0(piVar1,piVar6), cVar3 == '\0' && ((int *)*piVar1 != (int *)0x0)))) {
      (**(code **)(*(int *)*piVar1 + 0xc))(1);
    }
    if ((piVar6[2] & 0x10000U) == 0) {
      *(undefined4 *)(local_164 + 0x18) = 0;
      iVar5 = *piVar6;
      if (iVar5 == 0) {
        *piVar1 = 0;
        *(undefined4 *)(local_164 + 0x1c) = 0;
      }
      else {
        *piVar1 = iVar5;
        *(int *)(local_164 + 0x1c) = piVar6[2];
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      }
    }
    else {
      *(int *)(local_164 + 0x1c) = piVar6[2];
      *piVar1 = *piVar6;
      *(int *)(local_164 + 0x18) = piVar6[1];
    }
    local_4._0_1_ = 3;
    if ((((uStack_130 & 0x10000) == 0) && (apiStack_138[0] != (int *)0x0)) &&
       ((apiStack_138[0][1] = apiStack_138[0][1] + -1, apiStack_138[0][1] == 0 &&
        (apiStack_138[0] != (int *)0x0)))) {
      (**(code **)(*apiStack_138[0] + 0xc))(1);
    }
    if ((local_150 & 0x10000) == 0) {
      param_1[1] = 0;
      if (local_158 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = local_158;
        param_1[2] = local_150;
        *(int *)(local_158 + 4) = *(int *)(local_158 + 4) + 1;
      }
    }
    else {
      param_1[2] = local_150;
      param_1[1] = iStack_154;
      *param_1 = local_158;
    }
    local_4._0_1_ = 1;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 0x28:
    piVar6 = (int *)FUN_004b32d0(local_bc,param_2,param_3);
    if ((piVar6[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      iVar5 = *piVar6;
      if (iVar5 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = iVar5;
        param_1[2] = piVar6[2];
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      }
    }
    else {
      param_1[2] = piVar6[2];
      *param_1 = *piVar6;
      param_1[1] = piVar6[1];
    }
    break;
  case 0x2b:
  case 0x2d:
  case 0x2e:
    FUN_004b2bf0(2);
    puVar4 = (undefined4 *)FUN_004b27c0(local_12c,1);
    iVar5 = FUN_0061dc94(*(undefined4 *)*puVar4);
    if (iVar5 == 0) {
      uVar7 = FUN_004b3730(local_d4,param_2,param_3);
      FUN_00455dc0(uVar7);
    }
    else {
      uVar7 = FUN_004b3700(local_11c);
      FUN_00455dc0(uVar7);
    }
    break;
  case 0x2c:
    FUN_004a2a10(&local_158,0,*(undefined4 *)(param_3 + 0x48));
    local_4 = 5;
    FUN_004b2bf0(2);
    puVar4 = (undefined4 *)FUN_004b27c0(local_12c,1);
    if (*(int *)*puVar4 == 0x40) {
      piVar6 = (int *)FUN_004b52b0(local_b0,0,"unquote-splicing");
      local_4 = CONCAT31(local_4._1_3_,6);
      if (local_158 == 0) {
        FUN_004a5470(0,1);
      }
      if ((local_150 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iVar2 = local_158;
      iVar5 = *(int *)(local_158 + 0x14);
      piVar1 = (int *)(local_158 + 0x14);
      if (((iVar5 != 0) && ((*(uint *)(local_158 + 0x1c) & 0x10000) == 0)) &&
         ((*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar1 + 4) == 0 &&
          ((cVar3 = FUN_00408fd0(piVar1,piVar6), cVar3 == '\0' && ((int *)*piVar1 != (int *)0x0)))))
         ) {
        (**(code **)(*(int *)*piVar1 + 0xc))(1);
      }
      if ((piVar6[2] & 0x10000U) == 0) {
        *(undefined4 *)(iVar2 + 0x18) = 0;
        if (*piVar6 == 0) {
          *piVar1 = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
        }
        else {
          *piVar1 = *piVar6;
          *(int *)(iVar2 + 0x1c) = piVar6[2];
          *(int *)(*piVar1 + 4) = *(int *)(*piVar1 + 4) + 1;
        }
      }
      else {
        *(int *)(iVar2 + 0x1c) = piVar6[2];
        *piVar1 = *piVar6;
        *(int *)(iVar2 + 0x18) = piVar6[1];
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_00492340();
      FUN_004b2bf0(1);
      FUN_004b2770();
      *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
    }
    else {
      piVar6 = (int *)FUN_004b5390(local_98,0,"unquote");
      local_4 = CONCAT31(local_4._1_3_,7);
      if (local_158 == 0) {
        FUN_004a5470(0,1);
      }
      if ((local_150 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iVar2 = local_158;
      iVar5 = *(int *)(local_158 + 0x14);
      piVar1 = (int *)(local_158 + 0x14);
      if ((((iVar5 != 0) && ((*(uint *)(local_158 + 0x1c) & 0x10000) == 0)) &&
          (*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar1 + 4) == 0)) &&
         ((cVar3 = FUN_00408fd0(piVar1,piVar6), cVar3 == '\0' && ((int *)*piVar1 != (int *)0x0)))) {
        (**(code **)(*(int *)*piVar1 + 0xc))(1);
      }
      if ((piVar6[2] & 0x10000U) == 0) {
        *(undefined4 *)(iVar2 + 0x18) = 0;
        iVar5 = *piVar6;
        if (iVar5 == 0) {
          *piVar1 = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
        }
        else {
          *piVar1 = iVar5;
          *(int *)(iVar2 + 0x1c) = piVar6[2];
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        }
      }
      else {
        *(int *)(iVar2 + 0x1c) = piVar6[2];
        *piVar1 = *piVar6;
        *(int *)(iVar2 + 0x18) = piVar6[1];
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_00492340();
    }
    FUN_004b2bf0(1);
    FUN_004b2770();
    *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
    FUN_004a2a10(&local_164,0,*(undefined4 *)(param_3 + 0x48));
    local_4 = CONCAT31(local_4._1_3_,8);
    if (local_158 == 0) {
      FUN_004a5470(0,1);
    }
    if ((local_150 & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    iVar5 = *(int *)(local_158 + 0x20);
    piVar6 = (int *)(local_158 + 0x20);
    if ((((iVar5 != 0) && ((*(uint *)(local_158 + 0x28) & 0x10000) == 0)) &&
        (*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar6 + 4) == 0)) &&
       ((cVar3 = FUN_00408fd0(piVar6,&local_164), cVar3 == '\0' && ((int *)*piVar6 != (int *)0x0))))
    {
      (**(code **)(*(int *)*piVar6 + 0xc))(1);
    }
    if ((uStack_15c & 0x10000) == 0) {
      *(undefined4 *)(local_158 + 0x24) = 0;
      if (local_164 == 0) {
        *piVar6 = 0;
        *(undefined4 *)(local_158 + 0x28) = 0;
      }
      else {
        *piVar6 = local_164;
        *(uint *)(local_158 + 0x28) = uStack_15c;
        *(int *)(local_164 + 4) = *(int *)(local_164 + 4) + 1;
      }
    }
    else {
      *(uint *)(local_158 + 0x28) = uStack_15c;
      *piVar6 = local_164;
      *(undefined4 *)(local_158 + 0x24) = uStack_160;
    }
    uVar7 = FUN_004b3ec0(apiStack_144,param_2,param_3);
    local_4 = CONCAT31(local_4._1_3_,9);
    if (local_164 == 0) {
      FUN_004a5470(0,1);
    }
    if ((uStack_15c & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    FUN_0040c060(uVar7);
    local_4._0_1_ = 8;
    if ((((uStack_13c & 0x10000) == 0) && (apiStack_144[0] != (int *)0x0)) &&
       ((apiStack_144[0][1] = apiStack_144[0][1] + -1, apiStack_144[0][1] == 0 &&
        (apiStack_144[0] != (int *)0x0)))) {
      (**(code **)(*apiStack_144[0] + 0xc))(1);
    }
    FUN_00455dc0(&local_158);
    local_4._0_1_ = 5;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 0x3b:
    goto switchD_004b3f2f_caseD_3b;
  case 0xffffffff:
    FUN_004b2bf0(1);
    FUN_004b2770();
    *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    ExceptionList = local_c;
    return param_1;
  }
  FUN_00492340();
  ExceptionList = local_c;
  return param_1;
switchD_004b3f2f_caseD_3b:
  while( true ) {
    puVar4 = (undefined4 *)FUN_004b27c0(local_1c,0);
    cVar3 = *(char *)*puVar4;
    FUN_004b2bf0(1);
    FUN_004b2770();
    *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
    if (cVar3 == '\n') break;
    if (cVar3 == -1) {
      FUN_004042a0();
      ExceptionList = local_c;
      return param_1;
    }
    FUN_004b2bf0(2);
  }
  goto LAB_004b3ef6;
}



void FUN_004b7000(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int *local_ec;
  uint local_e4;
  int *local_e0;
  uint uStack_d8;
  int *piStack_d4;
  uint uStack_cc;
  int *piStack_c8;
  uint uStack_c0;
  int *piStack_bc;
  uint uStack_b4;
  int *piStack_b0;
  uint uStack_a8;
  int *piStack_a4;
  uint uStack_9c;
  int *piStack_98;
  uint uStack_90;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644347;
  local_c = ExceptionList;
  puVar3 = (undefined4 *)*param_2;
  if (((puVar3 == (undefined4 *)0x0) && (param_2[2] == 0)) && (param_2[1] == 0)) {
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
    goto LAB_004b7f97;
  }
  switch(param_2[2] & 0xff) {
  case 2:
    local_ec = (int *)0x0;
    local_e4 = 0;
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      local_ec = (int *)0x0;
      local_e4 = 0;
      ExceptionList = &local_c;
    }
    else {
      ExceptionList = &local_c;
      iVar5 = (**(code **)*puVar3)();
      if (iVar5 == 2) {
        local_ec = (int *)*param_2;
        local_e4 = param_2[2];
        *(int *)((int)local_ec + 4) = *(int *)((int)local_ec + 4) + 1;
      }
      else {
        (**(code **)(*(int *)*param_2 + 4))();
        FUN_004a5670();
      }
    }
    local_4 = 1;
    param_4[1] = param_4[1] + 1;
    FUN_004b6b10();
    FUN_00455dc0();
    FUN_004b1450();
    if (local_ec == (int *)0x0) {
      FUN_004a5470();
    }
    if ((local_e4 & 0x10000) != 0) {
      FUN_004a5470();
    }
    FUN_004b7000();
    if ((((uStack_90 & 0x10000) == 0) && (piStack_98 != (int *)0x0)) &&
       ((piStack_98[1] = piStack_98[1] + -1, piStack_98[1] == 0 && (piStack_98 != (int *)0x0)))) {
      (**(code **)(*piStack_98 + 0xc))();
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_ec == (int *)0x0) {
      FUN_004a5470();
    }
    if ((local_e4 & 0x10000) != 0) {
      FUN_004a5470();
    }
    if (((*(int *)((int)local_ec + 0x20) == 0) && (*(int *)((int)local_ec + 0x28) == 0)) &&
       (*(int *)((int)local_ec + 0x24) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (bVar4) {
LAB_004b7331:
      FUN_00455dc0();
      FUN_004b1450();
      param_4[1] = param_4[1] + -1;
    }
    else {
      if (local_ec == (int *)0x0) {
        FUN_004a5470();
      }
      if ((local_e4 & 0x10000) != 0) {
        FUN_004a5470();
      }
      if (*(char *)((int)local_ec + 0x28) != '\x02') {
        FUN_00455dc0();
        FUN_004b14e0();
        if (local_ec == (int *)0x0) {
          FUN_004a5470();
        }
        if ((local_e4 & 0x10000) != 0) {
          FUN_004a5470();
        }
        FUN_004b7000();
        if ((((uStack_a8 & 0x10000) == 0) && (piStack_b0 != (int *)0x0)) &&
           ((piStack_b0[1] = piStack_b0[1] + -1, piStack_b0[1] == 0 && (piStack_b0 != (int *)0x0))))
        {
          (**(code **)(*piStack_b0 + 0xc))();
        }
        goto LAB_004b7331;
      }
      if (local_ec == (int *)0x0) {
        FUN_004a5470();
      }
      if ((local_e4 & 0x10000) != 0) {
        FUN_004a5470();
      }
      FUN_004b6c20();
      if ((((uStack_cc & 0x10000) == 0) && (piStack_d4 != (int *)0x0)) &&
         ((piStack_d4[1] = piStack_d4[1] + -1, piStack_d4[1] == 0 && (piStack_d4 != (int *)0x0)))) {
        (**(code **)(*piStack_d4 + 0xc))();
      }
    }
    local_4 = 0xffffffff;
    FUN_00492340();
    break;
  case 3:
    local_ec = (int *)0x0;
    local_e4 = 0;
    local_4 = 3;
    if (puVar3 == (undefined4 *)0x0) {
      local_ec = (int *)0x0;
      local_e4 = 0;
      ExceptionList = &local_c;
    }
    else {
      ExceptionList = &local_c;
      iVar5 = (**(code **)*puVar3)();
      if (iVar5 == 3) {
        local_ec = (int *)*param_2;
        local_e4 = param_2[2];
        *(int *)((int)local_ec + 4) = *(int *)((int)local_ec + 4) + 1;
      }
      else {
        (**(code **)(*(int *)*param_2 + 4))();
        FUN_004a5670();
      }
    }
    local_4 = 4;
    FUN_00455dc0();
    FUN_004b1450();
    FUN_00455dc0();
    FUN_004b1450();
    if (local_ec == (int *)0x0) {
      FUN_004a5470();
    }
    if ((local_e4 & 0x10000) != 0) {
      FUN_004a5470();
    }
    pcVar6 = *(char **)((int)local_ec + 0xc);
    while( true ) {
      if (local_ec == (int *)0x0) {
        FUN_004a5470();
      }
      if ((local_e4 & 0x10000) != 0) {
        FUN_004a5470();
      }
      if (pcVar6 == *(char **)((int)local_ec + 0x10)) break;
      cVar2 = *pcVar6;
      if (cVar2 == '\n') {
        FUN_00455dc0();
        FUN_004b1450();
        FUN_00455dc0();
        FUN_004b1450();
        pcVar6 = pcVar6 + 1;
      }
      else if (cVar2 == '\\') {
        FUN_00455dc0();
        FUN_004b1450();
        FUN_00455dc0();
        FUN_004b1450();
        pcVar6 = pcVar6 + 1;
      }
      else if (cVar2 == '\"') {
        FUN_00455dc0();
        FUN_004b1450();
        FUN_00455dc0();
        FUN_004b1450();
        pcVar6 = pcVar6 + 1;
      }
      else {
        if (cVar2 == '\0') break;
        FUN_00455dc0();
        FUN_004b1450();
        pcVar6 = pcVar6 + 1;
      }
    }
    FUN_00455dc0();
    FUN_004b1450();
    FUN_00455dc0();
    FUN_004b1450();
    local_4 = 0xffffffff;
    FUN_00492340();
    break;
  case 4:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
    local_ec = (int *)0x0;
    local_e4 = 0;
    local_4 = 0xc;
    if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
      local_ec = (int *)0x0;
      local_e4 = 0;
    }
    else {
      iVar5 = (*(code *)**(undefined4 **)*param_2)();
      if (iVar5 == 4) {
        local_ec = (int *)*param_2;
        local_e4 = param_2[2];
        local_ec[1] = local_ec[1] + 1;
      }
      else {
        (**(code **)(*(int *)*param_2 + 4))();
        FUN_004a5670();
      }
    }
    local_4 = 0xd;
    if (local_ec == (int *)0x0) {
      FUN_004a5470();
    }
    if ((local_e4 & 0x10000) != 0) {
      FUN_004a5470();
    }
    iVar5 = (**(code **)(*local_ec + 0x14))();
    if (iVar5 == 1) {
      local_4._0_1_ = 0xe;
      if (local_ec != (int *)0x0) {
        iVar5 = (**(code **)*local_ec)();
        if (iVar5 == 4) {
          local_ec[1] = local_ec[1] + 1;
        }
        else {
          (**(code **)(*local_ec + 4))();
          FUN_004a5670();
        }
      }
      FUN_00455dc0();
      local_4._0_1_ = 0xf;
      FUN_004b8250();
      FUN_004b14e0();
LAB_004b7dcd:
      local_4 = CONCAT31(local_4._1_3_,0xd);
      FUN_00492340();
    }
    else {
      if (local_ec == (int *)0x0) {
        FUN_004a5470();
      }
      if ((local_e4 & 0x10000) != 0) {
        FUN_004a5470();
      }
      iVar5 = (**(code **)(*local_ec + 0x14))();
      if ((iVar5 == 2) && ((*(byte *)*param_4 & 1) != 0)) {
        local_e0 = (int *)0x0;
        uStack_d8 = 0;
        local_4._0_1_ = 0x11;
        if (local_ec == (int *)0x0) {
          local_e0 = (int *)0x0;
          uStack_d8 = 0;
        }
        else {
          iVar5 = (**(code **)*local_ec)();
          if (iVar5 == 4) {
            local_e0 = local_ec;
            uStack_d8 = local_e4;
            local_ec[1] = local_ec[1] + 1;
          }
          else {
            (**(code **)(*local_ec + 4))();
            FUN_004a5670();
          }
        }
        local_4 = CONCAT31(local_4._1_3_,0x12);
        if (local_e0 == (int *)0x0) {
          FUN_004a5470();
        }
        if ((uStack_d8 & 0x10000) != 0) {
          FUN_004a5470();
        }
        FUN_004b7000();
        if (((((uStack_b4 & 0x10000) == 0) && (piStack_bc != (int *)0x0)) &&
            (piStack_bc[1] = piStack_bc[1] + -1, piStack_bc[1] == 0)) && (piStack_bc != (int *)0x0))
        {
          (**(code **)(*piStack_bc + 0xc))();
        }
        if (local_e0 == (int *)0x0) {
          FUN_004a5470();
        }
        if ((uStack_d8 & 0x10000) != 0) {
          FUN_004a5470();
        }
        FUN_004b7000();
        if ((((uStack_9c & 0x10000) == 0) && (piStack_a4 != (int *)0x0)) &&
           ((piStack_a4[1] = piStack_a4[1] + -1, piStack_a4[1] == 0 && (piStack_a4 != (int *)0x0))))
        {
          (**(code **)(*piStack_a4 + 0xc))();
        }
        goto LAB_004b7dcd;
      }
    }
    FUN_00455dc0();
    FUN_004b14e0();
    local_4 = 0xffffffff;
    FUN_00492340();
    break;
  case 5:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
    break;
  case 6:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b1450();
    FUN_00455640(param_2);
    FUN_004b6eb0();
    goto LAB_004b7641;
  case 7:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b1450();
    FUN_004a1a40();
    local_4 = 5;
    if (local_e0 == (int *)0x0) {
      FUN_00455dc0();
    }
    else {
      FUN_00455dc0();
    }
    FUN_004b14e0();
    local_4 = 0xffffffff;
    FUN_00492340();
LAB_004b7641:
    FUN_00455dc0();
    FUN_004b1450();
    break;
  case 8:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b1450();
    FUN_004a1ac0();
    local_4 = 6;
    if (local_e0 == (int *)0xa) {
      FUN_00455dc0();
      FUN_004b14e0();
    }
    else if (local_e0 == (int *)0x20) {
      FUN_00455dc0();
      FUN_004b14e0();
    }
    else {
      FUN_00455dc0();
      FUN_004b1450();
      FUN_00455dc0();
      FUN_004b1450();
      FUN_00455dc0();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_00405e90();
      FUN_004b1450();
    }
    FUN_00455dc0();
    FUN_004b1450();
    local_4 = 0xffffffff;
    FUN_00492340();
    break;
  case 9:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b1450();
    local_ec = (int *)0x0;
    local_e4 = 0;
    local_4 = 8;
    if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
      local_ec = (int *)0x0;
      local_e4 = 0;
    }
    else {
      iVar5 = (*(code *)**(undefined4 **)*param_2)();
      if (iVar5 == 9) {
        local_ec = (int *)*param_2;
        local_e4 = param_2[2];
        *(int *)((int)local_ec + 4) = *(int *)((int)local_ec + 4) + 1;
      }
      else {
        (**(code **)(*(int *)*param_2 + 4))();
        FUN_004a5670();
      }
    }
    local_4 = 9;
    if (local_ec == (int *)0x0) {
      FUN_004a5470();
    }
    if ((local_e4 & 0x10000) != 0) {
      FUN_004a5470();
    }
    pcVar6 = *(char **)((int)local_ec + 0xc);
    while( true ) {
      if (local_ec == (int *)0x0) {
        FUN_004a5470();
      }
      if ((local_e4 & 0x10000) != 0) {
        FUN_004a5470();
      }
      if ((pcVar6 == *(char **)((int)local_ec + 0x10)) || (*pcVar6 == '\0')) break;
      FUN_00455dc0();
      FUN_004b1450();
      pcVar6 = pcVar6 + 1;
    }
    FUN_00455dc0();
    FUN_004b1450();
    local_4 = 0xffffffff;
    FUN_00492340();
    break;
  case 10:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b1450();
    FUN_00455dc0();
    FUN_004b1450();
    FUN_00455dc0();
    FUN_004b1450();
    local_ec = (int *)0x0;
    local_e4 = 0;
    local_4 = 10;
    if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
      local_ec = (int *)0x0;
      local_e4 = 0;
    }
    else {
      iVar5 = (*(code *)**(undefined4 **)*param_2)();
      if (iVar5 == 10) {
        local_ec = (int *)*param_2;
        local_e4 = param_2[2];
        *(int *)((int)local_ec + 4) = *(int *)((int)local_ec + 4) + 1;
      }
      else {
        (**(code **)(*(int *)*param_2 + 4))();
        FUN_004a5670();
      }
    }
    local_4 = 0xb;
    if (local_ec == (int *)0x0) {
      FUN_004a5470();
    }
    if ((local_e4 & 0x10000) != 0) {
      FUN_004a5470();
    }
    iVar5 = *(int *)((int)local_ec + 0x14);
    while( true ) {
      if (local_ec == (int *)0x0) {
        FUN_004a5470();
      }
      if ((local_e4 & 0x10000) != 0) {
        FUN_004a5470();
      }
      if (iVar5 == *(int *)((int)local_ec + 0x18)) break;
      FUN_004b7000();
      if ((((uStack_c0 & 0x10000) == 0) && (piStack_c8 != (int *)0x0)) &&
         ((piStack_c8[1] = piStack_c8[1] + -1, piStack_c8[1] == 0 && (piStack_c8 != (int *)0x0)))) {
        (**(code **)(*piStack_c8 + 0xc))();
      }
      iVar5 = iVar5 + 0xc;
    }
    FUN_00455dc0();
    FUN_004b1450();
    FUN_00455dc0();
    FUN_004b1450();
    local_4 = 0xffffffff;
    FUN_00492340();
    break;
  case 0xb:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
    break;
  case 0xc:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
    break;
  default:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
    FUN_00455dc0();
    local_4 = 0xffffffff;
    FUN_004a69e0();
    FUN_004b14e0();
    if (((param_3[2] & 0x10000U) == 0) && (*param_3 != 0)) {
      piVar1 = (int *)(*param_3 + 4);
      *piVar1 = *piVar1 + 1;
    }
    FUN_004b14e0();
    if ((param_2[2] & 0x10000U) == 0) {
      (**(code **)(*(int *)*param_2 + 4))();
    }
    FUN_004a55b0();
    break;
  case 0x21:
    ExceptionList = &local_c;
    FUN_0061c369(local_8c);
    FUN_00455dc0();
    FUN_004b14e0();
    break;
  case 0x22:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
    FUN_00455dc0();
    local_4 = 0xffffffff;
    FUN_004a69e0();
    FUN_004b14e0();
    FUN_00455dc0();
    FUN_004b14e0();
    break;
  case 0x40:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
    break;
  case 0xff:
    ExceptionList = &local_c;
    FUN_00455dc0();
    FUN_004b14e0();
  }
LAB_004b7f97:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


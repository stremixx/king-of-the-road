
int * FUN_00495e50(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int *piStack_18;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064142f;
  local_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_4 = 1;
  local_38 = 1;
  local_34 = 0;
  ExceptionList = &local_c;
  FUN_00457490(&local_24,0,&local_34,&local_38);
  local_4._0_1_ = 2;
  iVar6 = *param_3;
  if ((param_3[1] - iVar6) / 0xc == 1) {
    if ((local_1c & 0x10000) == 0) {
      param_1[1] = 0;
      if (local_24 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = local_24;
        param_1[2] = local_1c;
        *(int *)(local_24 + 4) = *(int *)(local_24 + 4) + 1;
      }
    }
    else {
      param_1[2] = local_1c;
      param_1[1] = local_20;
      *param_1 = local_24;
    }
    local_4._0_1_ = 1;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) {
      local_30[1] = local_30[1] + -1;
      if ((local_30[1] == 0) && (local_30 != (int *)0x0)) {
        (**(code **)(*local_30 + 0xc))(1);
      }
    }
  }
  else {
    piVar1 = (int *)(iVar6 + 0xc);
    if (((local_30 != (int *)0x0) && ((local_28 & 0x10000) == 0)) &&
       (local_30[1] = local_30[1] + -1, local_30[1] == 0)) {
      cVar2 = FUN_00408fd0(&local_30,piVar1);
      if ((cVar2 == '\0') && (local_30 != (int *)0x0)) {
        (**(code **)(*local_30 + 0xc))(1);
      }
    }
    local_28 = *(uint *)(iVar6 + 0x14);
    if ((local_28 & 0x10000) == 0) {
      local_2c = 0;
      local_30 = (int *)*piVar1;
      if (local_30 == (int *)0x0) {
        local_30 = (int *)0x0;
        local_28 = 0;
      }
      else {
        local_28 = *(uint *)(iVar6 + 0x14);
        local_30[1] = local_30[1] + 1;
      }
    }
    else {
      local_30 = (int *)*piVar1;
      local_2c = *(undefined4 *)(iVar6 + 0x10);
    }
    iVar6 = 2;
    if ((param_3[1] - *param_3) / 0xc == 2) {
      if ((char)local_28 == '\x06') {
        FUN_004042a0();
        local_4._0_1_ = 3;
        if (local_30 == (int *)0x0) {
          piStack_18 = (int *)0x0;
          uStack_10 = 0;
        }
        else {
          iVar6 = (**(code **)*local_30)();
          if (iVar6 == 6) {
            piStack_18 = local_30;
            uStack_10 = local_28;
            local_30[1] = local_30[1] + 1;
          }
          else {
            uVar3 = (**(code **)(*local_30 + 4))(s_Number_0066ba60);
            FUN_004a5670(2,1,uVar3);
          }
        }
        local_4._0_1_ = 4;
        FUN_004b0ff0(piStack_18);
        local_4._0_1_ = 2;
        FUN_00492340();
      }
      else {
        FUN_004a5cd0(param_2,0xf,s_Number_0066ba60,&DAT_0066f570);
      }
      if ((local_1c & 0x10000) == 0) {
        param_1[1] = 0;
        if (local_24 == 0) {
          *param_1 = 0;
          param_1[2] = 0;
        }
        else {
          *param_1 = local_24;
          param_1[2] = local_1c;
          *(int *)(local_24 + 4) = *(int *)(local_24 + 4) + 1;
        }
      }
      else {
        param_1[2] = local_1c;
        param_1[1] = local_20;
        *param_1 = local_24;
      }
      local_4._0_1_ = 1;
      FUN_00492340();
      local_4 = (uint)local_4._1_3_ << 8;
      if (((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) {
        local_30[1] = local_30[1] + -1;
        if ((local_30[1] == 0) && (local_30 != (int *)0x0)) {
          (**(code **)(*local_30 + 0xc))(1);
        }
      }
    }
    else {
      if ((char)local_28 == '\x06') {
        FUN_00455640(&local_30);
        FUN_004955c0(piStack_18);
        FUN_00492340();
      }
      else {
        FUN_004a5cd0(param_2,0xf,s_Number_0066ba60,&DAT_0066f570);
      }
      iVar4 = *param_3;
      if ((param_3[1] - iVar4) / 0xc != 2) {
        iVar5 = 0x18;
        do {
          FUN_0040c060(iVar4 + iVar5);
          if ((char)local_28 == '\x06') {
            FUN_00455640(&local_30);
            local_4._0_1_ = 5;
            FUN_004b0ff0(piStack_18);
            local_4._0_1_ = 2;
            FUN_00492340();
          }
          else {
            FUN_004a5cd0(param_2,0xf,s_Number_0066ba60,&DAT_0066f570);
          }
          iVar4 = *param_3;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0xc;
        } while (iVar6 != (param_3[1] - iVar4) / 0xc);
      }
      FUN_00455dc0(&local_24);
      local_4._0_1_ = 1;
      FUN_00492340();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00492340();
    }
  }
  ExceptionList = local_c;
  return param_1;
}


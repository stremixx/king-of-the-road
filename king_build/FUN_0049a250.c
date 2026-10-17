
int * FUN_0049a250(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int *local_58;
  undefined4 local_54;
  uint local_50;
  int *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [12];
  undefined1 local_34 [24];
  int iStack_1c;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_2;
  puStack_8 = &LAB_00641c47;
  local_c = ExceptionList;
  local_58 = (int *)0x0;
  local_54 = 0;
  local_50 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_00491cd0(param_2,&local_58,param_3,s_string_>number_0066f7d0);
  if (iVar2 == 0) {
    if ((char)local_50 == '\x03') {
      FUN_004042a0();
      local_4._0_1_ = 2;
      if (local_58 == (int *)0x0) {
        local_4c = (int *)0x0;
        local_44 = 0;
      }
      else {
        iVar2 = (**(code **)*local_58)();
        if (iVar2 == 3) {
          local_4c = local_58;
          local_44 = local_50;
          local_58[1] = local_58[1] + 1;
        }
        else {
          uVar3 = (**(code **)(*local_58 + 4))(s_String_0066ba58);
          FUN_004a5670(2,1,uVar3);
        }
      }
      local_4._0_1_ = 3;
      FUN_004a1a00(&param_3,0);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (local_4c == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((local_44 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      pcVar5 = (char *)local_4c[3];
      while( true ) {
        if (local_4c == (int *)0x0) {
          FUN_004a5470(0,1);
        }
        if ((local_44 & 0x10000) != 0) {
          FUN_004a5470(4,1);
        }
        if (pcVar5 == (char *)local_4c[4]) break;
        param_2 = (int)*pcVar5;
        if (iStack_1c == iStack_14 + -4) {
          FUN_004a21f0(&param_2);
          pcVar5 = pcVar5 + 1;
        }
        else {
          FUN_00460970(iStack_1c,&param_2);
          iStack_1c = iStack_1c + 4;
          pcVar5 = pcVar5 + 1;
        }
      }
      piVar4 = (int *)FUN_004b2160(local_40,iVar1,local_34);
      if ((piVar4[2] & 0x10000U) == 0) {
        param_1[1] = 0;
        iVar1 = *piVar4;
        if (iVar1 == 0) {
          *param_1 = 0;
          param_1[2] = 0;
        }
        else {
          *param_1 = iVar1;
          param_1[2] = piVar4[2];
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
      }
      else {
        param_1[2] = piVar4[2];
        *param_1 = *piVar4;
        param_1[1] = piVar4[1];
      }
      FUN_00492340();
      local_4._0_1_ = 3;
      FUN_004a1810();
      local_4._0_1_ = 1;
    }
    else {
      FUN_004a5cd0(iVar1,0xf,s_String_0066ba58,s_string_>number_0066f7d0);
      uVar3 = FUN_004042a0();
      FUN_00455dc0(uVar3);
    }
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
  }
  else {
    local_4c = (int *)0x0;
    local_48 = 0;
    local_44 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_50 & 0x10000) == 0) && (local_58 != (int *)0x0)) {
      local_58[1] = local_58[1] + -1;
      if ((local_58[1] == 0) && (local_58 != (int *)0x0)) {
        (**(code **)(*local_58 + 0xc))(1);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}


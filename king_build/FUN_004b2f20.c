
undefined4 * FUN_004b2f20(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_28 [2];
  uint local_20;
  int *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar2 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643d97;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b2bf0(1);
  puVar4 = (undefined4 *)FUN_004b27c0(&local_1c,0);
  if (*(int *)*puVar4 == 0x29) {
    FUN_004b2bf0(1);
    FUN_004b2770();
    local_1c = (int *)0x0;
    local_18 = 0;
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
    local_14 = 0;
    local_4 = 1;
    FUN_004042a0();
    *param_1 = 0;
    param_1[2] = 0;
    ExceptionList = local_c;
    return param_1;
  }
  FUN_004a2a10(local_28,0,*(undefined4 *)(iVar2 + 0x48));
  local_4 = 3;
  piVar5 = (int *)FUN_004b3ec0(&local_1c,param_2,iVar2);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_28[0] == 0) {
    FUN_004a5470(0,1);
  }
  if ((local_20 & 0x10000) != 0) {
    FUN_004a5470(4,1);
  }
  iVar6 = *(int *)(local_28[0] + 0x14);
  piVar1 = (int *)(local_28[0] + 0x14);
  if (((iVar6 != 0) && ((*(uint *)(local_28[0] + 0x1c) & 0x10000) == 0)) &&
     (*(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1, *(int *)(*piVar1 + 4) == 0)) {
    cVar3 = FUN_00408fd0(piVar1,piVar5);
    if ((cVar3 == '\0') && ((int *)*piVar1 != (int *)0x0)) {
      (**(code **)(*(int *)*piVar1 + 0xc))(1);
    }
  }
  if ((piVar5[2] & 0x10000U) == 0) {
    *(undefined4 *)(local_28[0] + 0x18) = 0;
    iVar6 = *piVar5;
    if (iVar6 == 0) {
      *piVar1 = 0;
      *(undefined4 *)(local_28[0] + 0x1c) = 0;
    }
    else {
      *piVar1 = iVar6;
      *(int *)(local_28[0] + 0x1c) = piVar5[2];
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
    }
  }
  else {
    *(int *)(local_28[0] + 0x1c) = piVar5[2];
    *piVar1 = *piVar5;
    *(int *)(local_28[0] + 0x18) = piVar5[1];
  }
  local_4._0_1_ = 3;
  if (((local_14 & 0x10000) == 0) && (local_1c != (int *)0x0)) {
    local_1c[1] = local_1c[1] + -1;
    if ((local_1c[1] == 0) && (local_1c != (int *)0x0)) {
      (**(code **)(*local_1c + 0xc))(1);
    }
  }
  uVar8 = param_2;
  FUN_004b2d30(param_2,iVar2);
  FUN_004b2bf0(2);
  puVar4 = (undefined4 *)FUN_004b27c0(&local_1c,0);
  if (*(int *)*puVar4 == -1) {
    FUN_00478a20(&param_2);
    local_4._0_1_ = 5;
    FUN_004b2a90(&local_1c);
    FUN_004a5670(0x14,0x300,s_Unexpected_EOF_00670470,local_1c);
    FUN_00455dc0(local_28);
    local_4._0_1_ = 3;
    FUN_0044a450();
    goto LAB_004b32ae;
  }
  puVar4 = (undefined4 *)FUN_004b27c0(&local_1c,0);
  if (*(int *)*puVar4 == 0x2e) {
    puVar4 = (undefined4 *)FUN_004b27c0(&local_1c,1);
    iVar6 = FUN_004b2a10(*(undefined4 *)*puVar4);
    if (iVar6 == 0) goto LAB_004b3260;
    FUN_004b2bf0(1);
    FUN_004b2770();
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
    uVar7 = FUN_004b3ec0(&local_1c,uVar8,iVar2);
    local_4._0_1_ = 6;
    FUN_004b8250(uVar7);
    FUN_0040c060(uVar7);
    local_4._0_1_ = 3;
    FUN_00492340();
    FUN_004b2d30(uVar8,iVar2);
    FUN_004b2bf0(1);
    puVar4 = (undefined4 *)FUN_004b27c0(&local_1c,0);
    if (*(int *)*puVar4 == 0x29) {
      FUN_004b2bf0(1);
      FUN_004b2770();
      *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
    }
    else {
      FUN_00478a20(&param_2);
      local_4._0_1_ = 7;
      FUN_004b2a90(&local_1c);
      FUN_004a5670(0x14,0x300,s_Expected___00670464,local_1c);
      local_4._0_1_ = 3;
      FUN_004497b0();
    }
  }
  else {
LAB_004b3260:
    uVar8 = FUN_004b2f20(&local_1c,uVar8,iVar2);
    local_4._0_1_ = 8;
    FUN_004b8250(uVar8);
    FUN_0040c060(uVar8);
    local_4._0_1_ = 3;
    FUN_00492340();
  }
  FUN_00455dc0(local_28);
LAB_004b32ae:
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  ExceptionList = local_c;
  return param_1;
}


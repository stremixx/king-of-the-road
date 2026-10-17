
void __thiscall FUN_0044c6b0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *unaff_FS_OFFSET;
  int *local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e4e8;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc8;
  iVar5 = param_1[1];
  if (iVar5 != param_1[2]) {
    local_14 = &stack0xffffffc8;
    if (iVar5 != 0) {
      local_14 = &stack0xffffffc8;
      FUN_00455dc0(iVar5 + -0xc);
    }
    param_1[1] = param_1[1] + 0xc;
    local_24 = param_3[2];
    if ((local_24 & 0x10000) == 0) {
      local_2c = (int *)*param_3;
      local_28 = 0;
      if (local_2c == (int *)0x0) {
        local_2c = (int *)0x0;
        local_24 = 0;
      }
      else {
        local_2c[1] = local_2c[1] + 1;
      }
    }
    else {
      local_2c = (int *)*param_3;
      local_28 = param_3[1];
    }
    local_8 = 0;
    FUN_00462430(param_2,param_1[1] + -0x18,param_1[1] + -0xc,param_2,0);
    iVar5 = *param_2;
    if ((((iVar5 != 0) && ((param_2[2] & 0x10000U) == 0)) &&
        (*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*param_2 + 4) == 0)) &&
       ((cVar4 = FUN_00408fd0(param_2,&local_2c), cVar4 == '\0' && ((int *)*param_2 != (int *)0x0)))
       ) {
      (**(code **)(*(int *)*param_2 + 0xc))(1);
    }
    if ((local_24 & 0x10000) == 0) {
      param_2[1] = 0;
      if (local_2c == (int *)0x0) {
        *param_2 = 0;
        param_2[2] = 0;
      }
      else {
        *param_2 = (int)local_2c;
        param_2[2] = local_24;
        local_2c[1] = local_2c[1] + 1;
      }
    }
    else {
      param_2[2] = local_24;
      *param_2 = (int)local_2c;
      param_2[1] = local_28;
    }
    local_8 = 0xffffffff;
    if ((((local_24 & 0x10000) == 0) && (local_2c != (int *)0x0)) &&
       ((local_2c[1] = local_2c[1] + -1, local_2c[1] == 0 && (local_2c != (int *)0x0)))) {
      (**(code **)(*local_2c + 0xc))(1);
    }
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_1c = (iVar5 - *param_1) / 0xc;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_18 = 0;
      local_14 = &stack0xffffffc8;
      goto LAB_0044c84d;
    }
  }
  local_18 = FUN_0044b6e0(local_1c * 0xc);
LAB_0044c84d:
  local_8 = 1;
  local_20 = local_18;
  iVar5 = FUN_004a2e60(*param_1,param_2,local_18,param_2);
  local_20 = iVar5;
  FUN_00460920(iVar5,param_3);
  local_20 = iVar5 + 0xc;
  iVar5 = FUN_004a2e60(param_2,param_1[1],local_20,param_2);
  piVar1 = (int *)param_1[1];
  piVar7 = (int *)*param_1;
  local_8 = 0xffffffff;
  for (; piVar7 != piVar1; piVar7 = piVar7 + 3) {
    if (((piVar7[2] & 0x10000U) == 0) && (iVar2 = *piVar7, iVar2 != 0)) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
      piVar3 = (int *)*piVar7;
      if ((piVar3[1] == 0) && (piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0xc))(1);
      }
    }
  }
  piVar1 = (int *)*param_1;
  iVar2 = (param_1[2] - (int)piVar1) / 0xc;
  if (iVar2 != 0) {
    uVar6 = iVar2 * 0xc;
    if (uVar6 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  *param_1 = local_18;
  param_1[1] = iVar5;
  param_1[2] = local_18 + local_1c * 0xc;
  *unaff_FS_OFFSET = local_10;
  return;
}


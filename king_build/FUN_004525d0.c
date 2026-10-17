
void __thiscall FUN_004525d0(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *unaff_FS_OFFSET;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e879;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc4;
  local_24 = param_1[1];
  if (local_24 != param_1[2]) {
    local_8 = 0;
    local_20 = local_24;
    local_14 = &stack0xffffffc4;
    if (local_24 != 0) {
      local_14 = &stack0xffffffc4;
      FUN_0044dd30(local_24 + -0xc);
    }
    param_1[1] = param_1[1] + 0xc;
    local_15 = param_2._3_1_;
    local_8 = 0xffffffff;
    FUN_0044a420(param_3[1] - *param_3,&local_15);
    iVar3 = local_30;
    iVar4 = param_3[1];
    iVar5 = *param_3;
    FUN_0061c980(local_30,iVar5,iVar4 - iVar5);
    local_2c = (iVar3 - iVar5) + iVar4;
    local_8 = 1;
    FUN_00463b50(param_2,param_1[1] + -0x18,param_1[1] + -0xc,param_2,0);
    if (&local_30 != param_2) {
      iVar4 = *param_2;
      uVar6 = local_2c - local_30;
      if ((uint)(param_2[2] - iVar4) < uVar6) {
        iVar4 = FUN_00458d60(uVar6,local_30,local_2c);
        iVar5 = param_2[2] - *param_2;
        if (iVar5 != 0) {
          FUN_0044b440(*param_2,iVar5);
        }
        *param_2 = iVar4;
        param_2[2] = iVar4 + uVar6;
      }
      else if ((uint)(param_2[1] - iVar4) < uVar6) {
        FUN_00407250(local_30,(param_2[1] - iVar4) + local_30,iVar4);
        FUN_00407250((param_2[1] - *param_2) + local_30,local_2c,param_2[1]);
      }
      else {
        FUN_00407250(local_30,local_2c,iVar4);
      }
      param_2[1] = *param_2 + uVar6;
    }
    local_8 = 0xffffffff;
    FUN_0044a450();
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_20 = (local_24 - *param_1) / 0xc;
  if (local_20 == 0) {
    local_20 = 1;
  }
  else {
    local_20 = local_20 * 2;
    if (local_20 == 0) {
      local_24 = 0;
      local_14 = &stack0xffffffc4;
      goto LAB_0045277f;
    }
  }
  local_24 = FUN_0044b6e0(local_20 * 0xc);
LAB_0045277f:
  local_8 = 2;
  local_1c = local_24;
  iVar4 = FUN_004672d0(*param_1,param_2,local_24,param_2);
  local_24 = iVar4;
  FUN_004611f0(iVar4,param_3);
  local_24 = iVar4 + 0xc;
  iVar4 = FUN_004672d0(param_2,param_1[1],local_24,param_2);
  puVar1 = (undefined4 *)param_1[1];
  puVar7 = (undefined4 *)*param_1;
  local_8 = 0xffffffff;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 3) {
    FUN_004030a0(*puVar7,puVar7[1]);
    FUN_0044a450();
  }
  piVar2 = (int *)*param_1;
  iVar5 = (param_1[2] - (int)piVar2) / 0xc;
  if (iVar5 != 0) {
    uVar6 = iVar5 * 0xc;
    if (uVar6 < 0x81) {
      FUN_00401aa0();
      *piVar2 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar2);
    }
  }
  param_1[1] = iVar4;
  *param_1 = local_1c;
  param_1[2] = local_1c + local_20 * 0xc;
  *unaff_FS_OFFSET = local_10;
  return;
}



void __thiscall FUN_0045b500(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_658 [144];
  int local_418;
  undefined1 local_410 [24];
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0 [145];
  undefined4 local_1ac [49];
  undefined4 local_e8 [50];
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar8 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063efeb;
  local_10 = ExceptionList;
  puVar7 = (undefined4 *)param_1[1];
  local_14 = &stack0xfffff99c;
  if (puVar7 != (undefined4 *)param_1[2]) {
    ExceptionList = &local_10;
    if (puVar7 != (undefined4 *)0x0) {
      puVar6 = puVar7 + -0x18e;
      ExceptionList = &local_10;
      for (iVar4 = 0x18e; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    iVar4 = param_1[1];
    param_1[1] = iVar4 + 0x638;
    puVar7 = local_658;
    for (iVar5 = 0x18e; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    }
    param_2 = (undefined4 *)(((iVar4 + -0x638) - (int)param_2) / 0x638);
    local_8 = 0;
    if (0 < (int)param_2) {
      iVar5 = (iVar4 + -0x638) - iVar4;
      do {
        iVar4 = iVar4 + -0x638;
        FUN_00461a90(iVar5 + iVar4);
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
    }
    puVar7 = local_658;
    puVar6 = puVar8;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00405ed0(local_410);
    puVar8[0x98] = local_3f8;
    puVar8[0x99] = local_3f4;
    local_8 = 0xffffffff;
    puVar7 = local_3f0;
    puVar6 = puVar8 + 0x9a;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar7 = local_1ac;
    puVar6 = puVar8 + 299;
    for (iVar4 = 0x31; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar7 = local_e8;
    puVar8 = puVar8 + 0x15c;
    for (iVar4 = 0x31; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_004030a0();
    FUN_004030a0();
    FUN_004030a0();
    for (puVar7 = local_658; puVar7 != local_658 + local_418 * 6; puVar7 = puVar7 + 6) {
      FUN_004030a0(puVar7);
    }
    ExceptionList = local_10;
    return;
  }
  local_18 = ((int)puVar7 - *param_1) / 0x638;
  if (local_18 == 0) {
    local_18 = 1;
  }
  else {
    local_18 = local_18 * 2;
    if (local_18 == 0) {
      local_1c = 0;
      ExceptionList = &local_10;
      goto LAB_0045b6d8;
    }
  }
  ExceptionList = &local_10;
  local_1c = FUN_0044b6e0(local_18 * 0x638);
LAB_0045b6d8:
  local_8 = 1;
  local_20 = (undefined4 *)local_1c;
  local_20 = (undefined4 *)FUN_004698a0(*param_1,param_2,local_1c,param_2);
  if (local_20 != (undefined4 *)0x0) {
    puVar7 = local_20;
    for (iVar4 = 0x18e; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  local_20 = local_20 + 0x18e;
  iVar2 = FUN_004698a0(param_2,param_1[1],local_20,param_2);
  iVar4 = param_1[1];
  for (iVar5 = *param_1; iVar5 != iVar4; iVar5 = iVar5 + 0x638) {
    FUN_004030a0();
    FUN_004030a0();
    FUN_004030a0();
    FUN_004030a0();
  }
  piVar1 = (int *)*param_1;
  iVar4 = (param_1[2] - (int)piVar1) / 0x638;
  if (iVar4 != 0) {
    uVar3 = iVar4 * 0x638;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  param_1[1] = iVar2;
  *param_1 = local_1c;
  param_1[2] = local_1c + local_18 * 0x638;
  ExceptionList = local_10;
  return;
}


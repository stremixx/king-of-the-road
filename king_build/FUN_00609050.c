
undefined4 __thiscall FUN_00609050(int param_1,int param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [40];
  undefined1 local_84 [40];
  undefined1 local_5c [40];
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00649656;
  local_c = ExceptionList;
  iVar9 = *(int *)(param_1 + 0xc);
  uVar1 = **(ushort **)(param_2 + 0x10);
  uVar2 = **(ushort **)(param_2 + 0x18);
  ExceptionList = &local_c;
  uVar5 = __ftol();
  local_b0 = __ftol();
  iVar3 = *(int *)(param_2 + 0x24);
  iVar8 = *(int *)(param_2 + 0x48);
  local_b4 = uVar5;
  if (iVar8 != 0) {
    if (**(int **)(iVar8 + 8) != 0) {
      *(undefined4 *)(*(int *)(**(int **)(iVar8 + 8) + 0xc) + 0x48) = 0;
    }
    iVar4 = *(int *)(*(int *)(iVar8 + 8) + 4);
    if (iVar4 != 0) {
      *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x48) = 0;
    }
    if (*(int **)(iVar8 + 0xc) != (int *)0x0) {
      iVar4 = **(int **)(iVar8 + 0xc);
      if (iVar4 != 0) {
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x48) = 0;
      }
      iVar4 = *(int *)(*(int *)(iVar8 + 0xc) + 4);
      if (iVar4 != 0) {
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x48) = 0;
      }
    }
    if (iVar8 == *(int *)(param_1 + 0x38)) {
      uVar5 = FUN_00606110(iVar8);
      *(undefined4 *)(param_1 + 0x38) = uVar5;
    }
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    *(undefined4 *)(*(int *)(**(int **)(iVar8 + 8) + 0xc) + 0x48) = 0;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar8 + 8) + 4) + 0xc) + 0x48) = 0;
    if (*(int **)(iVar8 + 0xc) != (int *)0x0) {
      *(undefined4 *)(*(int *)(**(int **)(iVar8 + 0xc) + 0xc) + 0x48) = 0;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar8 + 0xc) + 4) + 0xc) + 0x48) = 0;
    }
    FUN_00612db0(iVar8);
    *(undefined ***)(iVar8 + 0x6c) = &PTR_LAB_00651ee4;
    *(undefined ***)(iVar8 + 0x3c) = &PTR_LAB_00651ee4;
    *(undefined ***)(iVar8 + 0x10) = &PTR_LAB_00651ee4;
    FUN_00631d5c(iVar8);
  }
  if (param_2 == *(int *)(param_1 + 0x34)) {
    uVar5 = FUN_006093c0(param_2);
    *(undefined4 *)(param_1 + 0x34) = uVar5;
  }
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_2);
  uVar5 = FUN_006085b0(local_5c,*(undefined4 *)((uint)uVar2 * 0x10 + iVar9));
  local_4 = 0;
  uVar6 = FUN_006085b0(local_84,*(undefined4 *)((uint)uVar1 * 0x10 + iVar9));
  local_4._0_1_ = 1;
  uVar5 = FUN_0061b910(local_34,uVar6,uVar5);
  local_4._0_1_ = 2;
  puVar7 = (ushort *)FUN_00609420(&local_b4);
  iVar9 = *(int *)(param_1 + 0xc);
  uVar1 = *puVar7;
  iVar8 = FUN_00631d33(0x68);
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = FUN_006085b0(local_ac,puVar7);
    local_4 = CONCAT31(local_4._1_3_,4);
    uVar5 = FUN_0060e7b0(*(undefined4 *)(param_1 + 0x30),(uint)uVar1 * 0x10 + iVar9,uVar5,uVar6,
                         iVar3 + 1,param_1);
  }
  local_4 = 2;
  if (iVar8 != 0) {
    FUN_004030a0();
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
  }
  else {
    FUN_006093a0(uVar5,*(int *)(param_1 + 0x2c));
  }
  local_4 = 0xffffffff;
  iVar9 = FUN_00607bf0(*(undefined4 *)(param_2 + 0x14),puVar7,*(undefined4 *)(param_2 + 0x10),
                       *(int *)(param_2 + 0x24) + 1);
  *param_3 = iVar9;
  iVar9 = FUN_00607bf0(*(undefined4 *)(param_2 + 0x18),puVar7,*(undefined4 *)(param_2 + 0x14),
                       *(int *)(param_2 + 0x24) + 1);
  *param_4 = iVar9;
  *(int *)(*param_3 + 0x40) = iVar9;
  *(int *)(*param_4 + 0x44) = *param_3;
  *(undefined4 *)(*param_3 + 0x44) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(*param_4 + 0x40) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(*param_3 + 0x3c) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(*param_4 + 0x3c) = *(undefined4 *)(param_2 + 0x44);
  iVar9 = *(int *)(param_2 + 0x40);
  if (iVar9 != 0) {
    if (*(int *)(iVar9 + 0x3c) == param_2) {
      *(int *)(iVar9 + 0x3c) = *param_3;
    }
    else {
      *(int *)(iVar9 + 0x44) = *param_3;
    }
  }
  iVar9 = *(int *)(param_2 + 0x44);
  if (iVar9 != 0) {
    if (*(int *)(iVar9 + 0x3c) == param_2) {
      *(int *)(iVar9 + 0x3c) = *param_4;
    }
    else {
      *(int *)(iVar9 + 0x40) = *param_4;
    }
  }
  ExceptionList = local_c;
  return 1;
}


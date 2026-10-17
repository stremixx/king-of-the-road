
undefined4 * __thiscall
FUN_005a3bb0(undefined4 *param_1,int param_2,int *param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_stack_0000004c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647b11;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005a3810(param_2,param_5,0,param_6,param_7);
  local_4 = 0;
  iVar6 = param_4;
  if (in_stack_0000004c != 0) {
    iVar6 = *(int *)(param_4 + 0x40);
  }
  puVar1 = param_1 + 0x40;
  FUN_005eed00(&DAT_0068c120,0x11);
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *puVar1 = &PTR_FUN_0064b7cc;
  param_1[0x50] = iVar6;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0xffffffff;
  param_1[0x49] = *(undefined4 *)(iVar6 + 0x24);
  param_1[0x56] = 0xffffffff;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00650348;
  *puVar1 = &PTR_LAB_006502fc;
  if (in_stack_0000004c == 1) {
    if (*(int *)(param_4 + 0x10) != 0x11) {
      FUN_005d2520(s_Node_is_not_call_AO_BY_OBJECT__0067d858,0);
    }
    FUN_005f1c30(&stack0x0000001c);
    param_3 = (int *)FUN_005eec70();
    *(byte *)(param_4 + 0x28) = *(byte *)(param_4 + 0x28) | 1;
  }
  puVar4 = (undefined4 *)FUN_00631d33(0x70);
  local_4._0_1_ = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005f1020(&DAT_0068c120,6,1);
    iVar6 = 4;
    puVar5 = puVar4 + 0x12;
    do {
      puVar5[-2] = 0;
      puVar5[-1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar5 = &DAT_00701550;
    puVar7 = puVar4 + 0x10;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    *puVar4 = &PTR_FUN_0064c7c0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x51] = puVar4;
  FUN_005f1800(&stack0x0000001c,0);
  if (in_stack_0000004c == 0) {
    if (param_3 != *(int **)(param_2 + 0x20c)) {
      (**(code **)(*param_3 + 0x1c))(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1);
      goto LAB_005a3d7a;
    }
    iVar6 = *param_3;
  }
  else {
    iVar6 = **(int **)(param_4 + 0x2c);
  }
  (**(code **)(iVar6 + 0x14))(0,-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1);
LAB_005a3d7a:
  iVar6 = param_3[6];
  iVar2 = param_3[7];
  iVar3 = param_3[8];
  param_1[0x45] = param_3[5];
  param_1[0x48] = iVar3;
  param_1[0x46] = iVar6;
  param_1[0x47] = iVar2;
  FUN_005a3940(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1);
  ExceptionList = pvStack_10;
  return param_1;
}


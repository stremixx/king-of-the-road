
undefined8 * __thiscall FUN_0048c6d0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006408a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  iVar1 = (param_2[1] - *param_2) / 0x18;
  *(int *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0044b6e0(iVar1 * 0x18);
  }
  *(int *)(param_1 + 4) = iVar2;
  *(int *)((int)param_1 + 0x24) = iVar2;
  *(int *)(param_1 + 5) = iVar2 + iVar1 * 0x18;
  local_4 = 0;
  uVar3 = FUN_0048a7d0(*param_2,param_2[1],iVar2,param_2);
  *(undefined4 *)((int)param_1 + 0x24) = uVar3;
  local_4 = 1;
  puVar4 = (undefined8 *)FUN_00490ad0(local_2c,param_1 + 4);
  *param_1 = *puVar4;
  param_1[1] = puVar4[1];
  param_1[2] = puVar4[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar4 + 3);
  *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)puVar4 + 0x1c);
  ExceptionList = local_c;
  return param_1;
}


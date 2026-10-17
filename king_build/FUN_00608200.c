
ushort * __thiscall
FUN_00608200(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_5c [40];
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00649602;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_00608330(local_5c,param_2);
  puVar8 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x28) * 0x28);
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar1 = *(ushort *)(param_1 + 0x28);
  puVar2 = (undefined4 *)((uint)uVar1 * 0x10 + *(int *)(param_1 + 0xc));
  puVar3 = (ushort *)FUN_00631d33(2);
  if (puVar3 == (ushort *)0x0) {
    puVar3 = (ushort *)0x0;
  }
  else {
    *puVar3 = uVar1;
  }
  *puVar2 = puVar3;
  puVar2[2] = *param_2;
  puVar2[3] = param_2[1];
  puVar2[1] = 0;
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  uVar1 = *puVar3;
  iVar7 = *(int *)(param_1 + 0xc);
  iVar4 = FUN_00631d33(0x68);
  piVar5 = (int *)0x0;
  local_4 = 0;
  if (iVar4 != 0) {
    uVar6 = FUN_006085b0(local_34,puVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar5 = (int *)FUN_0060e7b0(*(undefined4 *)(param_1 + 0x30),(uint)uVar1 * 0x10 + iVar7,param_3,
                                 uVar6,param_4,param_1);
  }
  iVar7 = *(int *)(param_1 + 0x2c);
  if (iVar7 == 0) {
    *(int **)(param_1 + 0x2c) = piVar5;
  }
  else {
    *piVar5 = iVar7;
    piVar5[1] = *(int *)(iVar7 + 4);
    **(undefined4 **)(iVar7 + 4) = piVar5;
    *(int **)(iVar7 + 4) = piVar5;
  }
  ExceptionList = local_c;
  return puVar3;
}


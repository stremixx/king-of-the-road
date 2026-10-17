
void __thiscall FUN_0060bcb0(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00649676;
  local_c = ExceptionList;
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  ExceptionList = &local_c;
  for (iVar2 = (param_2 & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  puVar3 = *(undefined4 **)(param_1 + 8);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar2 = FUN_00631d33(0xc);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00612bc0();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  iVar2 = FUN_00631d33(0xc);
  local_4 = 1;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00612bc0();
  }
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  ExceptionList = local_c;
  return;
}



void __thiscall FUN_004cfc50(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644dbb;
  local_c = ExceptionList;
  if (param_3 < 2) {
    iVar4 = *(int *)(param_1 + param_3 * 4);
    ExceptionList = &local_c;
    if (iVar4 != 0) {
      ExceptionList = &local_c;
      if (*(int *)(iVar4 + 0xc) != 0) {
        ExceptionList = &local_c;
        FUN_00631d5c(*(int *)(iVar4 + 0xc));
      }
      FUN_00631d5c(iVar4);
    }
    if (param_2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + param_3 * 4) = 0;
    }
    else {
      puVar1 = (undefined4 *)FUN_00631d33(0x10);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + param_3 * 4) = 0;
      }
      else {
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        iVar4 = param_2[2];
        puVar1[2] = iVar4;
        puVar2 = (undefined4 *)FUN_00631d33(iVar4 * 4);
        puVar1[3] = puVar2;
        puVar5 = (undefined4 *)param_2[3];
        for (uVar3 = puVar1[2] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar2 = puVar2 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
        *(undefined4 **)(param_1 + param_3 * 4) = puVar1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


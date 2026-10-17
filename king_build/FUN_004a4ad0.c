
undefined1 * FUN_004a4ad0(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00642da8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined1 *)FUN_004a5360(param_1 + 0x10);
  *puVar3 = *param_1;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)(puVar3 + 4) = param_2;
  iVar1 = *(int *)(param_1 + 0xc);
  local_8 = 0;
  puVar2 = puVar3;
  while( true ) {
    if (iVar1 != 0) {
      uVar4 = FUN_004a4ad0(iVar1,puVar2);
      *(undefined4 *)(puVar2 + 0xc) = uVar4;
    }
    param_1 = *(undefined1 **)(param_1 + 8);
    if (param_1 == (undefined1 *)0x0) break;
    puVar5 = (undefined1 *)FUN_004a5360(param_1 + 0x10);
    *puVar5 = *param_1;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    *(undefined1 **)(puVar2 + 8) = puVar5;
    *(undefined1 **)(puVar5 + 4) = puVar2;
    iVar1 = *(int *)(param_1 + 0xc);
    puVar2 = puVar5;
  }
  ExceptionList = local_10;
  return puVar3;
}


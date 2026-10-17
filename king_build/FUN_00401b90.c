
undefined1 * __fastcall FUN_00401b90(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ad68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 1;
  local_10 = param_1;
  FUN_00401aa0();
  local_4 = 0;
  if (DAT_0068c128 == (undefined4 *)0x0) {
    local_10 = (undefined1 *)0x14;
    puVar2 = (undefined4 *)FUN_0045a160(0x10,&local_10);
    if (local_10 != (undefined1 *)0x1) {
      puVar3 = puVar2 + 4;
      puVar4 = (undefined1 *)0x1;
      puVar1 = puVar3;
      DAT_0068c128 = puVar3;
      if (local_10 != (undefined1 *)0x2) {
        do {
          puVar3 = puVar1 + 4;
          *puVar1 = puVar3;
          puVar4 = puVar4 + 1;
          puVar1 = puVar3;
        } while (local_10 + -1 != puVar4);
      }
      *puVar3 = 0;
    }
  }
  else {
    puVar2 = DAT_0068c128;
    DAT_0068c128 = (undefined4 *)*DAT_0068c128;
  }
  DAT_0068c164 = 0;
  *(undefined4 **)(param_1 + 4) = puVar2;
  *puVar2 = puVar2;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  ExceptionList = local_c;
  return param_1;
}


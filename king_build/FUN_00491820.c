
void FUN_00491820(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401aa0();
  local_4 = 0;
  if (DAT_0068c128 == (undefined4 *)0x0) {
    local_14[0] = 0x14;
    puVar2 = (undefined4 *)FUN_0045a160(0x10,local_14);
    if (local_14[0] != 1) {
      puVar3 = puVar2 + 4;
      iVar4 = 1;
      puVar1 = puVar3;
      DAT_0068c128 = puVar3;
      if (local_14[0] != 2) {
        do {
          puVar3 = puVar1 + 4;
          *puVar1 = puVar3;
          iVar4 = iVar4 + 1;
          puVar1 = puVar3;
        } while (local_14[0] + -1 != iVar4);
      }
      *puVar3 = 0;
    }
  }
  else {
    puVar2 = DAT_0068c128;
    DAT_0068c128 = (undefined4 *)*DAT_0068c128;
  }
  DAT_0068c164 = 0;
  if (puVar2 + 2 != (undefined4 *)0x0) {
    puVar2[2] = *param_1;
  }
  ExceptionList = local_c;
  return;
}


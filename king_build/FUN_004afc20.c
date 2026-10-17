
int * __fastcall FUN_004afc20(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00401aa0();
  local_4 = 0;
  if (DAT_0068c12c == (undefined4 *)0x0) {
    local_10 = (int *)0x14;
    puVar2 = (undefined4 *)FUN_0045a160(0x18,&local_10);
    if (local_10 != (int *)0x1) {
      puVar3 = puVar2 + 6;
      iVar4 = 1;
      puVar1 = puVar3;
      DAT_0068c12c = puVar3;
      if (local_10 != (int *)0x2) {
        do {
          puVar3 = puVar1 + 6;
          *puVar1 = puVar3;
          iVar4 = iVar4 + 1;
          puVar1 = puVar3;
        } while ((int)local_10 + -1 != iVar4);
      }
      *puVar3 = 0;
    }
  }
  else {
    puVar2 = DAT_0068c12c;
    DAT_0068c12c = (undefined4 *)*DAT_0068c12c;
  }
  DAT_0068c164 = 0;
  *param_1 = (int)puVar2;
  *puVar2 = puVar2;
  *(int *)(*param_1 + 4) = *param_1;
  ExceptionList = local_c;
  return param_1;
}


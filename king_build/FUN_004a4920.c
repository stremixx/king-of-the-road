
int * __thiscall FUN_004a4920(int *param_1,undefined1 *param_2)

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
  puStack_8 = &LAB_00642d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  local_10 = param_1;
  FUN_00401aa0();
  local_4 = 0;
  if (DAT_0068c138 == (undefined4 *)0x0) {
    local_10 = (int *)0x14;
    puVar2 = (undefined4 *)FUN_0045a160(0x30,&local_10);
    if (local_10 != (int *)0x1) {
      puVar3 = puVar2 + 0xc;
      iVar4 = 1;
      puVar1 = puVar3;
      DAT_0068c138 = puVar3;
      if (local_10 != (int *)0x2) {
        do {
          puVar3 = puVar1 + 0xc;
          *puVar1 = puVar3;
          iVar4 = iVar4 + 1;
          puVar1 = puVar3;
        } while ((int)local_10 + -1 != iVar4);
      }
      *puVar3 = 0;
    }
  }
  else {
    puVar2 = DAT_0068c138;
    DAT_0068c138 = (undefined4 *)*DAT_0068c138;
  }
  DAT_0068c164 = 0;
  *param_1 = (int)puVar2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = *param_2;
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(int *)(*param_1 + 8) = *param_1;
  *(int *)(*param_1 + 0xc) = *param_1;
  ExceptionList = local_c;
  return param_1;
}


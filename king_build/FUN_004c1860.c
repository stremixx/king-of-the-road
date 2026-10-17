
void __fastcall FUN_004c1860(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0064b62c;
  param_1[1] = 0;
  local_4 = 0;
  local_20 = 0x32;
  puVar2 = param_1 + 7;
  puVar3 = param_1 + 2;
  do {
    *puVar3 = 0;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    FUN_004011e0(puVar2 + 4,0xc,4,FUN_004042a0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar2 + 4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar3 = 0;
    *puVar2 = 0;
    puVar3[1] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    local_20 = local_20 + -1;
    puVar3[2] = 0;
    puVar2 = puVar2 + 0x17;
    puVar3 = puVar3 + 0x17;
  } while (local_20 != 0);
  *param_1 = &PTR_LAB_0064b640;
  ExceptionList = local_c;
  return;
}


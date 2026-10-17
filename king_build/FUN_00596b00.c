
void __fastcall FUN_00596b00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006473b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00631d33(0x70);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005f1020(&DAT_0068c120,6,1);
    iVar4 = 4;
    puVar2 = puVar1 + 0x12;
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2 = &DAT_00701550;
    puVar5 = puVar1 + 0x10;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    *puVar1 = &PTR_FUN_0064c7c0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  local_4 = 0xffffffff;
  param_1[4] = puVar1;
  param_1[5] = puVar1;
  puVar1 = (undefined4 *)FUN_00631d33(0x68);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar3 = param_1[4];
    puVar1[1] = 0;
    puVar1[0x14] = uVar3;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_0064c7ac;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0x3f800000;
    puVar1[0x15] = 0x3f800000;
    puVar1[0x18] = 0;
    puVar1[0x17] = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[0x19] = 0;
  }
  param_1[0x1d] = puVar1;
  param_1[0x1e] = puVar1;
  *param_1 = 0x1ae;
  param_1[2] = 0x212;
  param_1[1] = 0x2b;
  param_1[3] = 0x76;
  iVar4 = FUN_00631d33(0x2a8);
  local_4 = 1;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005947b0(DAT_006957ac,param_1,param_1[0x1d]);
  }
  local_4 = 0xffffffff;
  param_1[0x1b] = uVar3;
  param_1[0x1c] = uVar3;
  FUN_005e3830(uVar3);
  ExceptionList = local_c;
  return;
}


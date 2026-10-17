
void __fastcall FUN_00545a90(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_f4;
  undefined1 local_f0 [28];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc [192];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064697b;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x4c4) != 0) && (*(int *)(param_1 + 0x184) == 0)) {
    local_d4 = *(undefined4 *)(param_1 + 0x4b4);
    local_d0 = 7;
    iVar3 = 8;
    local_f4 = 0xb;
    puVar1 = local_cc;
    puVar2 = (undefined4 *)(param_1 + 0x5518);
    puVar4 = (undefined4 *)(param_1 + 0x5494);
    do {
      *puVar1 = *(undefined1 *)(puVar2 + -0x2c);
      iVar3 = iVar3 + 0x11;
      *(undefined4 *)(puVar1 + 1) = *puVar4;
      *(undefined4 *)(puVar1 + 5) = puVar4[1];
      *(undefined4 *)(puVar1 + 9) = puVar4[2];
      *(undefined4 *)(puVar1 + 0xd) = *puVar2;
      local_f4 = local_f4 + -1;
      puVar1 = puVar1 + 0x11;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 3;
    } while (local_f4 != 0);
    ExceptionList = &local_c;
    FUN_006022c0();
    local_4 = 0;
    FUN_006027f0((int)DAT_0067c04a,&local_d4,iVar3);
    FUN_005c2d10(local_f0);
    local_4 = 0xffffffff;
    FUN_00602560();
  }
  ExceptionList = local_c;
  return;
}


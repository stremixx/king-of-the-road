
void __fastcall FUN_00545550(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_f0 [28];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064693b;
  local_c = ExceptionList;
  local_d4 = *(undefined4 *)(param_1 + 0x4b4);
  local_cc = *(undefined4 *)(param_1 + 0x19c);
  local_c8 = *(undefined4 *)(param_1 + 0x1a4);
  local_c4 = *(undefined4 *)(param_1 + 0x1a8);
  local_d0 = 5;
  local_c0 = *(undefined4 *)(param_1 + 0x1ac);
  puVar2 = (undefined4 *)(param_1 + 0x2c4);
  puVar3 = local_bc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = &local_c;
  FUN_006022c0();
  local_4 = 0;
  FUN_006027f0((int)DAT_0067c04a,&local_d4,0x48);
  FUN_005c2d10(local_f0);
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return;
}



void __fastcall FUN_005857c0(int param_1)

{
  undefined1 local_124 [28];
  undefined4 local_108;
  undefined4 local_104;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006471db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022c0();
  local_108 = *(undefined4 *)(param_1 + 0x4a4);
  local_4 = 0;
  local_104 = 3;
  FUN_006027f0((int)DAT_0067c04a,&local_108,8);
  FUN_005c2d10(local_124);
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return;
}


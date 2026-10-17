
void __thiscall FUN_00585e10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_124 [28];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064721b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022c0();
  local_100 = *(undefined4 *)(param_1 + 0x4a4);
  local_104 = param_2;
  local_4 = 0;
  local_108 = 2;
  local_fc = param_3;
  FUN_006027f0((int)DAT_0067c04a,&local_108,0x10);
  FUN_005c2d10(local_124);
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return;
}


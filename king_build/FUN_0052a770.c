
void __thiscall FUN_0052a770(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_f0 [28];
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064635b;
  local_c = ExceptionList;
  local_d4 = param_1[3];
  local_cc = param_2;
  local_d0 = 0xd;
  uVar1 = 0xc;
  if (param_2 == 1) {
    local_c8 = *param_1;
    uVar1 = 0x10;
  }
  ExceptionList = &local_c;
  FUN_006022c0();
  local_4 = 0;
  FUN_006027f0((int)DAT_0067c04a,&local_d4,uVar1);
  FUN_005c2d10(local_f0);
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return;
}


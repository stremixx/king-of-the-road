
int FUN_006021b0(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006494d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_00600980(param_1);
    }
    param_3 = param_3 + 0x20;
  }
  ExceptionList = local_10;
  return param_3;
}


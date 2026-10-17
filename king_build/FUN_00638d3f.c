
void __thiscall FUN_00638d3f(int *param_1,int param_2)

{
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1[0x2c] == 0) {
    param_1[0x2c] = 1;
    if ((param_1[0x2e] & 4U) != 0) {
      param_2 = 1;
    }
    param_1[0x2e] = param_1[0x2e] & 0xfffffff3;
    if ((param_2 != 0) && ((int *)param_1[0x1a] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[0x1a] + 0x50))();
    }
    uVar1 = FUN_00632d9a();
    if ((uVar1 & 0x2000) == 0) {
      FUN_00634b1b(0,0xffff,0xe900,2,param_1 + 0x16,0,1);
    }
    else {
      local_c = 0x7fff;
      local_8 = 0x7fff;
      local_14 = 0;
      local_10 = 0;
      FUN_00634b1b(0,0xffff,0xe900,1,&local_14,&local_14,0);
      FUN_00634b1b(0,0xffff,0xe900,2,param_1 + 0x16,&local_14,1);
      (**(code **)(*param_1 + 0x60))(&local_14,0);
      FUN_00632e26(0,0,0,local_c - local_14,local_8 - local_10,0x16);
    }
    param_1[0x2c] = 0;
  }
  return;
}


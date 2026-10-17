
int * FUN_00457230(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *local_18;
  undefined1 *apuStack_14 [2];
  undefined4 uStack_c;
  int local_8;
  
  local_8 = param_4;
  apuStack_14[0] = (undefined1 *)&param_2;
  local_18 = (undefined1 *)0x457245;
  FUN_00458a90();
  local_18 = (undefined1 *)apuStack_14;
  FUN_004896a0();
  FUN_004af790(&local_18);
  FUN_0045e880(&param_4);
  if (param_4 == DAT_0068a8f0) {
    *param_1 = DAT_0068a8f0;
    return param_1;
  }
  local_8 = param_4;
  uStack_c = 0x457290;
  FUN_004042b0();
  return param_1;
}


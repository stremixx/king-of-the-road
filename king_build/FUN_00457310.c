
int * FUN_00457310(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  int local_8;
  
  local_8 = param_3;
  puStack_10 = (undefined1 *)&param_2;
  local_14 = (undefined1 *)0x457323;
  FUN_0041d3f0();
  local_14 = (undefined1 *)&puStack_10;
  FUN_004896a0();
  FUN_004af790(&local_14);
  FUN_0045ed20(&param_3);
  if (param_3 == DAT_0068a8f0) {
    *param_1 = DAT_0068a8f0;
    return param_1;
  }
  local_8 = param_3;
  uStack_c = 0x45736e;
  FUN_004042b0();
  return param_1;
}


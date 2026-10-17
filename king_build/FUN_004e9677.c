
undefined4 FUN_004e9677(int param_1)

{
  undefined4 uVar1;
  undefined1 local_38 [52];
  
  if (((DAT_0069642c == 0) || (param_1 < 0)) || (10 < param_1)) {
    uVar1 = 0;
  }
  else if (*(int *)(&DAT_006964e0 + param_1 * 4) == 0) {
    FUN_0061c369(local_38,s_vehprn_02d_log_00673098,param_1);
    uVar1 = FUN_0061c356(local_38,&DAT_006730a8);
    *(undefined4 *)(&DAT_006964e0 + param_1 * 4) = uVar1;
    if (*(int *)(&DAT_006964e0 + param_1 * 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


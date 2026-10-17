
int FUN_005d7bf0(undefined4 param_1)

{
  BOOL BVar1;
  tagRECT local_10;
  
  local_10.right = 200;
  local_10.left = 100;
  local_10.top = 100;
  local_10.bottom = 200;
  BVar1 = AdjustWindowRect(&local_10,0xcf0000,0);
  if (BVar1 == 0) {
    FUN_005d2520(s_WindowAdjustRect_fail_00681970,0);
  }
  switch(param_1) {
  default:
    return 0;
  case 2:
    return (-100 - local_10.left) + local_10.right;
  case 4:
    return (-100 - local_10.top) + local_10.bottom;
  }
}



undefined8 __fastcall FUN_005fe42c(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 in_EAX;
  
  if (DAT_0070e338 < 2) {
    if (param_4 < 1) {
      if (param_3 < 6) {
        if (1 < param_3) {
          param_1 = &LAB_005fd913;
        }
      }
      else {
        param_1 = &LAB_005fd97e;
      }
    }
    else if (param_3 < 6) {
      if (param_3 < 2) {
        if (param_3 < 1) {
          param_1 = &LAB_005fd8b4;
        }
        else {
          param_1 = &LAB_005fd8dd;
        }
      }
      else {
        param_1 = &LAB_005fd93a;
      }
    }
    else {
      param_1 = &LAB_005fd9b3;
    }
  }
  else if (param_4 < 1) {
    if (param_3 < 6) {
      if (1 < param_3) {
        param_1 = &LAB_005fd34e;
      }
    }
    else {
      param_1 = &LAB_005fd3c5;
    }
  }
  else if (param_3 < 6) {
    if (param_3 < 2) {
      if (param_3 < 1) {
        param_1 = &LAB_005fd2e0;
      }
      else {
        param_1 = &LAB_005fd30c;
      }
    }
    else {
      param_1 = &LAB_005fd37b;
    }
  }
  else {
    param_1 = &LAB_005fd403;
  }
  DAT_00682ba6 = param_1;
  return CONCAT44(param_2,in_EAX);
}


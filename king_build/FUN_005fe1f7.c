
undefined8 __fastcall FUN_005fe1f7(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 in_EAX;
  
  if (1 < DAT_0070e338) {
    if (2 < DAT_0070e338) goto LAB_005fe423;
    if (0 < param_4) {
      if (param_3 < 7) {
        if (param_3 < 6) {
          if (4 < param_3) goto LAB_005fe3d1;
          if (param_3 < 4) {
            if (param_3 < 3) {
              if (param_3 < 2) {
                if (param_3 < 1) {
                  param_1 = &LAB_005fd4c0;
                }
                else {
                  param_1 = &LAB_005fd50b;
                }
              }
              else {
                param_1 = &LAB_005fd78d;
              }
            }
            else {
              param_1 = &LAB_005fd81c;
            }
            goto LAB_005fe423;
          }
        }
        param_1 = &LAB_005fd5ef;
      }
      else {
LAB_005fe3d1:
        param_1 = &LAB_005fd65b;
      }
      goto LAB_005fe423;
    }
    if (param_3 < 7) {
      if (param_3 < 6) {
        if (4 < param_3) goto LAB_005fe371;
        if (param_3 < 4) {
          if (param_3 < 3) {
            if (param_3 < 2) {
              if (param_3 < 1) {
                param_1 = &LAB_005fd45f;
              }
              else {
                param_1 = &LAB_005fd48d;
              }
            }
            else {
              param_1 = &LAB_005fd6da;
            }
          }
          else {
            param_1 = &LAB_005fd731;
          }
          goto LAB_005fe423;
        }
      }
      param_1 = &LAB_005fd569;
    }
    else {
LAB_005fe371:
      param_1 = &LAB_005fd5a9;
    }
    goto LAB_005fe423;
  }
  if (param_4 < 1) {
    if (param_3 < 7) {
      if (param_3 < 6) {
        if (param_3 < 5) {
          if (param_3 < 4) {
            if (param_3 < 3) {
              if (param_3 < 2) {
                if (param_3 < 1) {
                  if (DAT_00682b9c == 0) {
                    param_1 = &LAB_005fda0a;
                  }
                  else {
                    param_1 = &LAB_005fda0a;
                  }
                }
                else {
                  param_1 = &LAB_005fda32;
                }
              }
              else if (DAT_00682b9c == 0) {
                param_1 = &LAB_005fdc26;
              }
              else {
                param_1 = &LAB_005fdc26;
              }
            }
            else {
              param_1 = &LAB_005fdc73;
            }
          }
          else {
            param_1 = &LAB_005fdafa;
          }
        }
        else {
          param_1 = &LAB_005fdb2d;
        }
      }
      else {
        param_1 = &LAB_005fdcc4;
      }
    }
    else {
      param_1 = &LAB_005fdd19;
    }
    goto LAB_005fe423;
  }
  if (param_3 < 7) {
    if (param_3 < 6) {
      if (4 < param_3) goto LAB_005fe2f8;
      if (param_3 < 4) {
        if (param_3 < 3) {
          if (param_3 < 2) {
            if (param_3 < 1) {
              param_1 = &LAB_005fda5e;
            }
            else {
              param_1 = &LAB_005fdaa3;
            }
          }
          else {
            param_1 = &LAB_005fdd72;
          }
        }
        else {
          param_1 = &LAB_005fddf9;
        }
        goto LAB_005fe423;
      }
    }
    param_1 = &LAB_005fdb64;
  }
  else {
LAB_005fe2f8:
    param_1 = &LAB_005fdbbc;
  }
LAB_005fe423:
  DAT_00682ba6 = param_1;
  return CONCAT44(param_2,in_EAX);
}


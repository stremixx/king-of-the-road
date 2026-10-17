
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00693798;
  if (_DAT_0064b324 < _DAT_00694fcc) {
    if (_DAT_00694fcc <= _DAT_0064b248) {
      if (param_5 == 0) {
        uVar1 = DAT_00693794;
      }
      uVar2 = 2;
    }
    else if (_DAT_00694fcc <= _DAT_0064b320) {
      if (param_5 == 0) {
        uVar1 = DAT_00693794;
      }
      uVar2 = 1;
    }
    else {
      if (param_5 == 0) {
        uVar1 = DAT_00693794;
      }
      uVar2 = 0;
    }
  }
  else {
    if (param_5 == 0) {
      uVar1 = DAT_00693794;
    }
    uVar2 = 3;
  }
  FUN_0057bb60(param_1,param_2,param_3,uVar2,param_4,uVar1);
  if (DAT_00695194 != 0) {
    FUN_004c43b0(param_1,param_2);
  }
  return;
}


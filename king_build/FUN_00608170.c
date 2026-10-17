
undefined4 __thiscall FUN_00608170(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 / 0x101;
  uVar1 = param_3 / 0x101;
  if ((uVar2 != 3) && (uVar1 != 3)) {
    if (2 - uVar2 != uVar1) {
      return param_1[2];
    }
    if (uVar2 == 0) {
      if ((uVar1 == 2) && (0x303 - param_3 <= 0x101 - param_2)) goto LAB_006081f5;
    }
    else if ((uVar2 == 2) && (uVar1 == 0)) {
      if (0x101 - param_3 < 0x303 - param_2) {
        return *param_1;
      }
      goto LAB_006081f5;
    }
    return *param_1;
  }
LAB_006081f5:
  return param_1[1];
}


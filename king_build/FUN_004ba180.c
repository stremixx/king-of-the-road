
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba180(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (_DAT_0064b248 < _DAT_00694f90) {
    if ((param_3 != 0) &&
       ((*(int *)(DAT_006cdbcc + 0x514) == 1 || (*(int *)(DAT_006cdbcc + 0x524) != 0)))) {
      local_1c[0] = 1;
      local_18 = *param_1;
      local_14 = param_1[1];
      local_c = *param_2;
      local_10 = param_1[2];
      local_8 = param_2[1];
      local_4 = param_2[2];
      FUN_006027f0(0x3bd,local_1c,0x1c);
    }
    FUN_005aabc0(param_2);
    uVar1 = __ftol();
    FUN_00592e20(param_1,param_2,uVar1);
  }
  return;
}



void FUN_005f0c90(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  if (*(int *)(param_2 + 0x10) == 0) {
    FUN_005b06d0(param_3,*(int *)(param_2 + 0xc) != 0,-(DAT_007206d0 != 0) & 2,0);
    FUN_005af090(param_2,*param_2,param_3,*param_4,param_4[1],param_4[2]);
    FUN_005b1000(param_3,param_5,param_2,*param_2);
    return;
  }
  if (DAT_007229f0 != (undefined2 *)0x0) {
    FUN_005b06d0(param_3,*(uint *)(DAT_007229f0 + 4) >> 4 & 1,-(DAT_007206d0 != 0) & 3,0);
    FUN_005af090(DAT_007229f0,*DAT_007229f0,param_3,*param_4,param_4[1],param_4[2]);
    FUN_005b14a0(param_3,param_5,param_2,DAT_007229f0);
  }
  return;
}


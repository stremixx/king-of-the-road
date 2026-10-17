
void __fastcall FUN_006038f0(undefined4 *param_1)

{
  FUN_00604120();
  if (param_1 == DAT_00723088) {
    DAT_00723088 = (undefined4 *)param_1[5];
  }
  else {
    *(undefined4 *)(param_1[4] + 0x14) = param_1[5];
  }
  if (param_1 == DAT_00723084) {
    DAT_00723084 = (undefined4 *)param_1[4];
  }
  else {
    *(undefined4 *)(param_1[5] + 0x10) = param_1[4];
  }
  FUN_00604130();
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}


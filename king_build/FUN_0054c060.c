
void __thiscall FUN_0054c060(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 local_190 [400];
  
  if (param_3 == (undefined1 *)0x0) {
    puVar1 = &DAT_0066b4e4;
    param_3 = &DAT_0068c120;
  }
  else {
    puVar1 = &DAT_0068c120;
  }
  FUN_0061c369(local_190,s__s_s_Vehicle__set_V__006791d4,param_3,puVar1);
  FUN_00580980(param_2,local_190);
  if (*(int *)(param_1 + 0x5454) != 0) {
    FUN_00561480(param_1 + 0x1a0);
  }
  if (*(int *)(param_1 + 0x5450) != 0) {
    FUN_004f1650(param_2);
  }
  return;
}


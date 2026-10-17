
undefined1 * FUN_005ee8e0(int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  if (param_1 != (int *)0x0) {
    local_8 = param_2;
    puVar1 = &LAB_005ee940;
    local_4 = 0xffffffff;
    local_c = 0;
    (**(code **)(*param_1 + 0x20))(&LAB_005ee940,&local_c);
    return puVar1;
  }
  FUN_005d1dd0(param_2,&param_2);
  return param_2;
}


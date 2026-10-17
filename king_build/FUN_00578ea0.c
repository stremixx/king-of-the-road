
undefined4 * __fastcall FUN_00578ea0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064707b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00631d33(0x54924);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x32;
    FUN_0061d173(puVar2,0x1b10,0x32,FUN_00405e90,FUN_004030a0);
  }
  *param_1 = puVar2;
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}


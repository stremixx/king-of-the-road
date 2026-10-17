
void __thiscall FUN_004bc520(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064488b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = (void *)FUN_00631d33(0x3c,param_1);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_004d93c0(DAT_00695184,param_2);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x18))(1);
  ExceptionList = pvVar1;
  return;
}



undefined4 * __thiscall
FUN_005c2980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00631d33(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = param_2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_00650938;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    puVar2 = puVar1;
  }
  FUN_005d1840(param_1);
  return puVar2;
}


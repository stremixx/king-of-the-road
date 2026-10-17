
undefined4 *
FUN_005c27b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00631d33(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = param_2;
    puVar1[3] = param_1;
    *puVar1 = &PTR_FUN_00650938;
    puVar1[4] = 5;
    puVar1[7] = param_3;
    puVar1[6] = param_4;
    FUN_005c2810(puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


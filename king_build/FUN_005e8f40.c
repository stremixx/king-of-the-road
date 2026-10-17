
undefined4 * FUN_005e8f40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0061db0f(param_1);
  puVar2 = (undefined4 *)FUN_00631d33(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    puVar2[3] = 0xffffffff;
  }
  iVar3 = FUN_005e8fd0(puVar2,param_1,param_2);
  if (iVar3 != 0) {
    uVar4 = FUN_00631d33(puVar2[1]);
    puVar2[2] = uVar4;
    iVar3 = FUN_005e8ff0(puVar2,param_1,uVar1);
    if (iVar3 != 0) {
      return puVar2;
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_005fc8c0();
    FUN_00631d5c(puVar2);
  }
  return (undefined4 *)0x0;
}


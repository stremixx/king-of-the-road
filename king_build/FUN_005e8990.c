
undefined4 * FUN_005e8990(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00631d33(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 6) = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[9] = 0;
    uVar2 = FUN_0061db0f(param_1);
    FUN_005e8b00(puVar1,param_1,param_2,0);
    iVar3 = FUN_00631d33(puVar1[3]);
    puVar1[4] = iVar3;
    if (iVar3 == 0) {
      FUN_005bb480();
      FUN_00631d5c(puVar1);
      DAT_0072081c = 2;
      return (undefined4 *)0x0;
    }
    iVar3 = FUN_005e8cc0(puVar1,param_1,uVar2);
    if (iVar3 != 0) {
      return puVar1;
    }
    FUN_005bb480();
    FUN_00631d5c(puVar1);
  }
  return (undefined4 *)0x0;
}


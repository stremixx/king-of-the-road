
uint * FUN_005e8340(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar2 = (uint *)FUN_00631d33(0x28);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[7] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[8] = 0xffffffff;
    puVar2[4] = 0;
    puVar2[9] = 0;
  }
  FUN_0061dd53(param_1,0x10,0);
  uVar3 = FUN_0061f43c(param_1);
  iVar4 = FUN_0061f43c(param_1);
  puVar2[1] = iVar4 + 0x20;
  puVar2[2] = iVar4 + 0x1f + uVar3;
  FUN_0061f43c(param_1);
  uVar5 = FUN_0061f43c(param_1);
  puVar2[6] = uVar5;
  uVar5 = FUN_0061f43c(param_1);
  puVar2[5] = uVar5;
  puVar2[8] = 0xffffffff;
  FUN_0061dd53(param_1,0xfa,0);
  uVar5 = FUN_00631d33(uVar3);
  puVar2[3] = uVar5;
  puVar6 = (undefined4 *)FUN_00631d33(uVar3);
  puVar2[4] = (uint)puVar6;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_0061d8bf(puVar2[3],uVar3,1,param_1);
  if (*(char *)puVar2[3] != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  uVar5 = puVar2[6];
  uVar1 = puVar2[5];
  FUN_0061dd53(param_1,0x158,0);
  iVar4 = (((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 7U)) >> 3) + 1) * uVar1 * uVar3;
  uVar3 = FUN_00631d33(iVar4);
  puVar2[7] = uVar3;
  FUN_0061d8bf(uVar3,iVar4,1,param_1);
  return puVar2;
}


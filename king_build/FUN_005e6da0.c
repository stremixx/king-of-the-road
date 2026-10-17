
undefined4 * FUN_005e6da0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648c0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0x54);
  local_4 = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_005b9dc0(param_2);
  }
  local_4 = 0xffffffff;
  puVar2[0xd] = puVar2[0xd] | param_3;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_0061db0f(param_1);
    FUN_005e6f60(puVar2,param_1,0);
    if (((puVar2[0xd] & 0x400) != 0) && (DAT_0071f864 != 0)) {
      puVar2[8] = uVar3;
      puVar2[0xc] = param_1;
      puVar2[0xd] = puVar2[0xd] & 0xfffffffc | param_3;
      ExceptionList = local_c;
      return puVar2;
    }
    iVar1 = (uint)*(ushort *)(puVar2 + 6) * (uint)*(ushort *)(puVar2 + 5) *
            (uint)*(ushort *)((int)puVar2 + 0x16);
    uVar4 = FUN_00631d33(iVar1);
    puVar2[2] = uVar4;
    if ((*(byte *)(puVar2 + 0xd) & 0x10) != 0) {
      uVar4 = FUN_00631d33(iVar1 / 2);
      puVar2[3] = uVar4;
    }
    if ((puVar2[2] == 0) || (((*(byte *)(puVar2 + 0xd) & 0x10) != 0 && (puVar2[3] == 0)))) {
      (**(code **)*puVar2)(1);
      DAT_0072081c = 2;
    }
    else {
      uVar4 = FUN_0062a170(puVar2[2],
                           (uint)*(ushort *)(puVar2 + 6) * (uint)*(ushort *)(puVar2 + 5) *
                           (uint)*(ushort *)((int)puVar2 + 0x16));
      puVar2[7] = uVar4;
      iVar1 = FUN_005e7790(puVar2,param_1,uVar3);
      if (iVar1 != 0) {
        ExceptionList = local_c;
        return puVar2;
      }
      (**(code **)*puVar2)(1);
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


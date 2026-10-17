
undefined4 * FUN_005e92e0(HANDLE param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_8;
  
  iVar1 = GetObjectA(param_1,0x18,local_18);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = LocalAlloc(0x40,0x28);
  *puVar2 = 0x28;
  puVar2[1] = local_14;
  puVar2[2] = local_10;
  *(undefined2 *)(puVar2 + 3) = local_8;
  *(undefined2 *)((int)puVar2 + 0xe) = 0x18;
  puVar2[4] = 0;
  puVar2[9] = 0;
  iVar1 = puVar2[1] * 0x18 + 0x1f;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * puVar2[2] * 0x20;
  puVar2[5] = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
  return puVar2;
}


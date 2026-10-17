
void FUN_0061f516(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  FUN_0061d6ac(param_1);
  FUN_0061eb5d(param_1);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffcf;
  if (uVar1 == 0xffffffff) {
    puVar2 = &DAT_00687be0;
  }
  else {
    puVar2 = (undefined *)((&DAT_0077d6e0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
  }
  puVar2[4] = puVar2[4] & 0xfd;
  if ((*(uint *)(param_1 + 0xc) & 0x80) != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffc;
  }
  FUN_00624d30(uVar1,0,0);
  FUN_0061d6fe(param_1);
  return;
}



uint FUN_00436570(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(DAT_0068be60 + param_1 * 4);
  uVar2 = *puVar1;
  return -(uint)(uVar2 != puVar1[1]) & uVar2;
}


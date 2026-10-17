
undefined4 __fastcall FUN_00560680(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = *(int *)(param_1 + 3000);
  uVar2 = (undefined2)((uint)iVar1 >> 0x10);
  if (1 < iVar1) {
    return CONCAT22(uVar2,*(undefined2 *)(param_1 + -2 + iVar1 * 2));
  }
  return CONCAT22(uVar2,0xffff);
}


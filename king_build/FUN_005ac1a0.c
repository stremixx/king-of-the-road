
undefined4 FUN_005ac1a0(undefined2 *param_1)

{
  int iVar1;
  
  if (DAT_007018e4 == DAT_007018e8) {
    return 1;
  }
  iVar1 = DAT_007018e4 * 8;
  *param_1 = *(undefined2 *)(&DAT_007015c0 + DAT_007018e4 * 8);
  param_1[1] = *(undefined2 *)(&DAT_007015c2 + iVar1);
  param_1[2] = *(undefined2 *)(&DAT_007015c4 + iVar1);
  param_1[3] = *(undefined2 *)(&DAT_007015c6 + iVar1);
  DAT_007018e4 = (DAT_007018e4 + 1) % 100;
  return 0;
}



undefined4 FUN_0062844d(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_0077d7e0) &&
     ((*(byte *)((&DAT_0077d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_0077d6e0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_006204a3();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_006204ac();
  *puVar1 = 0;
  return 0xffffffff;
}


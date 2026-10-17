
undefined4 FUN_00624b40(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_0077d7e0) &&
     ((*(byte *)((&DAT_0077d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_0062848f(param_1);
    uVar1 = FUN_00624ba5(param_1,param_2,param_3);
    FUN_006284ee(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_006204a3();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_006204ac();
  *puVar2 = 0;
  return 0xffffffff;
}

